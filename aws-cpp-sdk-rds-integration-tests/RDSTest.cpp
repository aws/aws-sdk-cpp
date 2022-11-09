/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/rds/RDSClient.h>
#include <aws/rds/model/CopyDBSnapshotRequest.h>
#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/rds/model/CopyDBClusterSnapshotRequest.h>
#include <aws/rds/model/CreateDBClusterRequest.h>
#include <aws/testing/mocks/monitoring/TestingMonitoring.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RDS;
using namespace Aws::RDS::Model;

namespace
{

    static const char ALLOCATION_TAG[] = "RDSTest";
    static const char TESTING_KMS_KEY_ID[] = "238f8ec9-420a-0690-8ec9-009f34fc3ef5";
    static const char TESTING_PRESIGNED_URL[] = "https://aws.com";
    static const char TESTING_SOURCE_DB_SNAPSHOT_IDENTIFIER[] = "arn:aws:rds:us-east-1:123456789012:snapshot:source-db-snapshot";
    static const char TESTING_TARGET_DB_SNAPSHOT_IDENTIFIER[] = "target-db-snapshot";
    static const char TESTING_SOURCE_DB_INSTANCE_IDENTIFIER[] = "arn:aws:rds:us-east-1:123456789012:db:source-db-instance";
    static const char TESTING_DB_INSTANCE_IDENTIFIER[] = "target-db-instance";
    static const char TESTING_SOURCE_DB_CLUSTER_SNAPSHOT_IDENTIFIER[] = "arn:aws:rds:us-east-1:123456789012:cluster-snapshot:source-db-cluster-snapshot";
    static const char TESTING_TARGET_DB_CLUSTER_SNAPSHOT_IDENTIFIER[] = "target-db-cluster-snapshot";
    static const char TESTING_DB_CLUSTER_IDENTIFIER[] = "db-cluster";
    static const char TESTING_REPLICATION_SOURCE_IDENTIFIER[] = "arn:aws:rds:us-east-1:123456789012:cluster:source-db-cluster";

    class TestableAuthv4Signer : public AWSAuthV4Signer
    {
    public:
        TestableAuthv4Signer(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
            const char* serviceName, const Aws::String& region)
            : AWSAuthV4Signer(credentialsProvider, serviceName, region) {}

        void SetSigningTimestamp(const DateTime& dateTime) { m_signingTimeStamp = dateTime; }

    protected:
        virtual Aws::Utils::DateTime GetSigningTimestamp() const { return m_signingTimeStamp; }

    private:
        DateTime m_signingTimeStamp;
    };

    class MockAWSClient : public AWSClient
    {
    public:
        MockAWSClient() : AWSClient(ClientConfiguration(), Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
            "rds", Aws::Region::US_EAST_1), Aws::MakeShared<XmlErrorMarshaller>(ALLOCATION_TAG)) {}
        MockAWSClient(const Aws::Client::ClientConfiguration& configuration, const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer) :
            AWSClient(configuration, signer, Aws::MakeShared<XmlErrorMarshaller>(ALLOCATION_TAG)) {}

        Aws::Client::AWSError<Aws::Client::CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>&) const override
        {
            Aws::Client::AWSError<Aws::Client::CoreErrors> error;
            return error;
        }
    };

    class RDSTest : public ::testing::Test
    {

    public:
        RDSClient m_rdsClient;
        MockAWSClient m_staticAwsClient;

        RDSTest()
        {
            ClientConfiguration config;
            config.region = Aws::Region::US_WEST_2;
            config.scheme = Scheme::HTTPS;
            m_rdsClient = RDSClient(config);

            auto credProvider = Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, "akid", "secret");
            auto signer = Aws::MakeShared<TestableAuthv4Signer>(ALLOCATION_TAG, credProvider, "rds", config.region);
            signer->SetSigningTimestamp(DateTime("20200827T000000Z", DateFormat::AutoDetect));
            m_staticAwsClient = MockAWSClient(config, signer);
        }

    protected:

        static void SetUpTestCase()
        {
            TestingMonitoringManager::InitTestingMonitoring();
        }

        static void TearDownTestCase()
        {
            TestingMonitoringManager::CleanupTestingMonitoring();
        }

        static Aws::String ExtractPreSignedUrlFromPayload(const Aws::String& payload)
        {
            Aws::Vector<Aws::String> parameters = Aws::Utils::StringUtils::Split(payload, '&');
            for (const Aws::String& parameter : parameters)
            {
                if (parameter.find("PreSignedUrl=") != Aws::String::npos)
                {
                    return Aws::Utils::StringUtils::URLDecode(parameter.substr(Aws::String("PreSignedUrl=").size()).c_str());
                }
            }
            return {};
        }

        void VerifySignature(const Aws::AmazonWebServiceRequest& request, URI& sourceUri, const char* region, const char* expectedSignature)
        {
            Aws::String preSignedUrl = m_staticAwsClient.GeneratePresignedUrl(request, sourceUri, HttpMethod::HTTP_GET, region, {{ "DestinationRegion", Aws::Region::US_WEST_2 }}, 3600);
            QueryStringParameterCollection parameters = URI(preSignedUrl).GetQueryStringParameters();
            ASSERT_NE(parameters.end(), parameters.find("X-Amz-SignedHeaders"));
            ASSERT_STREQ("host", parameters.find("X-Amz-SignedHeaders")->second.c_str());
            ASSERT_NE(parameters.end(), parameters.find("X-Amz-Signature"));
            ASSERT_STREQ(expectedSignature, parameters.find("X-Amz-Signature")->second.c_str());
        }
    };

    TEST_F(RDSTest, TestPreSignedUrl_CopyDBSnapshot)
    {
        // Client side monitoring will collect request body for testing purpose
        TestingMonitoringMetrics::Config::s_enablePayload = true;

        CopyDBSnapshotRequest copyDBSnapshotRequest;
        copyDBSnapshotRequest.SetSourceDBSnapshotIdentifier(TESTING_SOURCE_DB_SNAPSHOT_IDENTIFIER);
        copyDBSnapshotRequest.SetTargetDBSnapshotIdentifier(TESTING_TARGET_DB_SNAPSHOT_IDENTIFIER);
        copyDBSnapshotRequest.SetKmsKeyId(TESTING_KMS_KEY_ID);
        copyDBSnapshotRequest.SetSourceRegion(Aws::Region::US_EAST_1);

        auto copyDBSnapshotOutcome = m_rdsClient.CopyDBSnapshot(copyDBSnapshotRequest);
        ASSERT_FALSE(copyDBSnapshotOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT, copyDBSnapshotOutcome.GetError().GetErrorType());
        Aws::String preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        QueryStringParameterCollection parameters(URI(preSignedUrl).GetQueryStringParameters());
        ASSERT_NE(parameters.end(), parameters.find("Action"));
        ASSERT_STREQ("CopyDBSnapshot", parameters.find("Action")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DestinationRegion"));
        ASSERT_STREQ(Aws::Region::US_WEST_2, parameters.find("DestinationRegion")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("Version"));
        ASSERT_STREQ("2014-10-31", parameters.find("Version")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("SourceDBSnapshotIdentifier"));
        ASSERT_STREQ(TESTING_SOURCE_DB_SNAPSHOT_IDENTIFIER, parameters.find("SourceDBSnapshotIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("TargetDBSnapshotIdentifier"));
        ASSERT_STREQ(TESTING_TARGET_DB_SNAPSHOT_IDENTIFIER, parameters.find("TargetDBSnapshotIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("KmsKeyId"));
        ASSERT_STREQ(TESTING_KMS_KEY_ID, parameters.find("KmsKeyId")->second.c_str());
        ASSERT_EQ(parameters.end(), parameters.find("SourceRegion"));

        // Verify signature with fixed credentials and fixed timestamp.
        URI sourceUri("https://" + URI(preSignedUrl).GetAuthority());
        VerifySignature(copyDBSnapshotRequest, sourceUri, copyDBSnapshotRequest.GetSourceRegion().c_str(), "afee7e7f55fcbce926a89482f01acb51e9dc1df0adb09ee172622a079b47ea71");

        // Ignore SourceRegion if preSignedUrl is specified.
        copyDBSnapshotRequest.SetPreSignedUrl(TESTING_PRESIGNED_URL);
        copyDBSnapshotOutcome = m_rdsClient.CopyDBSnapshot(copyDBSnapshotRequest);
        ASSERT_FALSE(copyDBSnapshotOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::D_B_SNAPSHOT_NOT_FOUND_FAULT, copyDBSnapshotOutcome.GetError().GetErrorType());
        preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        ASSERT_STREQ(TESTING_PRESIGNED_URL, preSignedUrl.c_str());
    }

    TEST_F(RDSTest, TestPreSignedUrl_CreateDBInstanceReadReplica)
    {
        // Client side monitoring will collect request body for testing purpose
        TestingMonitoringMetrics::Config::s_enablePayload = true;

        CreateDBInstanceReadReplicaRequest createDBInstanceReadReplicaRequest;
        createDBInstanceReadReplicaRequest.SetSourceDBInstanceIdentifier(TESTING_SOURCE_DB_INSTANCE_IDENTIFIER);
        createDBInstanceReadReplicaRequest.SetDBInstanceIdentifier(TESTING_DB_INSTANCE_IDENTIFIER);
        createDBInstanceReadReplicaRequest.SetKmsKeyId(TESTING_KMS_KEY_ID);
        createDBInstanceReadReplicaRequest.SetSourceRegion(Aws::Region::US_EAST_1);

        auto createDBInstanceReadReplicaOutcome = m_rdsClient.CreateDBInstanceReadReplica(createDBInstanceReadReplicaRequest);
        ASSERT_FALSE(createDBInstanceReadReplicaOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::D_B_INSTANCE_NOT_FOUND_FAULT, createDBInstanceReadReplicaOutcome.GetError().GetErrorType());
        Aws::String preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        QueryStringParameterCollection parameters(URI(preSignedUrl).GetQueryStringParameters());
        ASSERT_NE(parameters.end(), parameters.find("Action"));
        ASSERT_STREQ("CreateDBInstanceReadReplica", parameters.find("Action")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DestinationRegion"));
        ASSERT_STREQ(Aws::Region::US_WEST_2, parameters.find("DestinationRegion")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("Version"));
        ASSERT_STREQ("2014-10-31", parameters.find("Version")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("SourceDBInstanceIdentifier"));
        ASSERT_STREQ(TESTING_SOURCE_DB_INSTANCE_IDENTIFIER, parameters.find("SourceDBInstanceIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DBInstanceIdentifier"));
        ASSERT_STREQ(TESTING_DB_INSTANCE_IDENTIFIER, parameters.find("DBInstanceIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("KmsKeyId"));
        ASSERT_STREQ(TESTING_KMS_KEY_ID, parameters.find("KmsKeyId")->second.c_str());
        ASSERT_EQ(parameters.end(), parameters.find("SourceRegion"));

        // Verify signature with fixed credentials and fixed timestamp.
        URI sourceUri("https://" + URI(preSignedUrl).GetAuthority());
        VerifySignature(createDBInstanceReadReplicaRequest, sourceUri, createDBInstanceReadReplicaRequest.GetSourceRegion().c_str(), "ddab9b46aa026dd36339e3f80c16c361f0e9e4f86368ee7e391dcdd45cb385e6");

        // Ignore SourceRegion if preSignedUrl is specified.
        createDBInstanceReadReplicaRequest.SetPreSignedUrl(TESTING_PRESIGNED_URL);
        createDBInstanceReadReplicaOutcome = m_rdsClient.CreateDBInstanceReadReplica(createDBInstanceReadReplicaRequest);
        ASSERT_FALSE(createDBInstanceReadReplicaOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::D_B_INSTANCE_NOT_FOUND_FAULT, createDBInstanceReadReplicaOutcome.GetError().GetErrorType());
        preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        ASSERT_STREQ(TESTING_PRESIGNED_URL, preSignedUrl.c_str());
    }

    TEST_F(RDSTest, TestPreSignedUrl_CopyDBClusterSnapshot)
    {
        // Client side monitoring will collect request body for testing purpose
        TestingMonitoringMetrics::Config::s_enablePayload = true;

        CopyDBClusterSnapshotRequest copyDBClusterSnapshotRequest;
        copyDBClusterSnapshotRequest.SetSourceDBClusterSnapshotIdentifier(TESTING_SOURCE_DB_CLUSTER_SNAPSHOT_IDENTIFIER);
        copyDBClusterSnapshotRequest.SetTargetDBClusterSnapshotIdentifier(TESTING_TARGET_DB_CLUSTER_SNAPSHOT_IDENTIFIER);
        copyDBClusterSnapshotRequest.SetKmsKeyId(TESTING_KMS_KEY_ID);
        copyDBClusterSnapshotRequest.SetSourceRegion(Aws::Region::US_EAST_1);

        auto copyDBClusterSnapshotOutcome = m_rdsClient.CopyDBClusterSnapshot(copyDBClusterSnapshotRequest);
        ASSERT_FALSE(copyDBClusterSnapshotOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::INVALID_PARAMETER_COMBINATION, copyDBClusterSnapshotOutcome.GetError().GetErrorType());
        Aws::String preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        QueryStringParameterCollection parameters(URI(preSignedUrl).GetQueryStringParameters());
        ASSERT_NE(parameters.end(), parameters.find("Action"));
        ASSERT_STREQ("CopyDBClusterSnapshot", parameters.find("Action")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DestinationRegion"));
        ASSERT_STREQ(Aws::Region::US_WEST_2, parameters.find("DestinationRegion")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("Version"));
        ASSERT_STREQ("2014-10-31", parameters.find("Version")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("SourceDBClusterSnapshotIdentifier"));
        ASSERT_STREQ(TESTING_SOURCE_DB_CLUSTER_SNAPSHOT_IDENTIFIER, parameters.find("SourceDBClusterSnapshotIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("TargetDBClusterSnapshotIdentifier"));
        ASSERT_STREQ(TESTING_TARGET_DB_CLUSTER_SNAPSHOT_IDENTIFIER, parameters.find("TargetDBClusterSnapshotIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("KmsKeyId"));
        ASSERT_STREQ(TESTING_KMS_KEY_ID, parameters.find("KmsKeyId")->second.c_str());
        ASSERT_EQ(parameters.end(), parameters.find("SourceRegion"));

        // Verify signature with fixed credentials and fixed timestamp.
        URI sourceUri("https://" + URI(preSignedUrl).GetAuthority());
        VerifySignature(copyDBClusterSnapshotRequest, sourceUri, copyDBClusterSnapshotRequest.GetSourceRegion().c_str(), "01eda84cb84ff1558373f4759aaf76aa4b7be8664241a58f6906ae842a0a9d74");

        // Ignore SourceRegion if preSignedUrl is specified.
        copyDBClusterSnapshotRequest.SetPreSignedUrl(TESTING_PRESIGNED_URL);
        copyDBClusterSnapshotOutcome = m_rdsClient.CopyDBClusterSnapshot(copyDBClusterSnapshotRequest);
        ASSERT_FALSE(copyDBClusterSnapshotOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::INVALID_PARAMETER_COMBINATION, copyDBClusterSnapshotOutcome.GetError().GetErrorType());
        preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        ASSERT_STREQ(TESTING_PRESIGNED_URL, preSignedUrl.c_str());
    }

    TEST_F(RDSTest, TestPreSignedUrl_CreateDBCluster)
    {
        // Client side monitoring will collect request body for testing purpose
        TestingMonitoringMetrics::Config::s_enablePayload = true;

        CreateDBClusterRequest createDBClusterRequest;
        createDBClusterRequest.SetDBClusterIdentifier(TESTING_DB_CLUSTER_IDENTIFIER);
        createDBClusterRequest.SetEngine("aurora-mysql");
        createDBClusterRequest.SetStorageEncrypted(true);
        createDBClusterRequest.SetReplicationSourceIdentifier(TESTING_REPLICATION_SOURCE_IDENTIFIER);
        createDBClusterRequest.SetKmsKeyId(TESTING_KMS_KEY_ID);
        createDBClusterRequest.SetSourceRegion(Aws::Region::US_EAST_1);

        auto createDBClusterOutcome = m_rdsClient.CreateDBCluster(createDBClusterRequest);
        ASSERT_FALSE(createDBClusterOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::INVALID_PARAMETER_VALUE, createDBClusterOutcome.GetError().GetErrorType());
        Aws::String preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        QueryStringParameterCollection parameters(URI(preSignedUrl).GetQueryStringParameters());
        ASSERT_NE(parameters.end(), parameters.find("Action"));
        ASSERT_STREQ("CreateDBCluster", parameters.find("Action")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DestinationRegion"));
        ASSERT_STREQ(Aws::Region::US_WEST_2, parameters.find("DestinationRegion")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("Version"));
        ASSERT_STREQ("2014-10-31", parameters.find("Version")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("DBClusterIdentifier"));
        ASSERT_STREQ(TESTING_DB_CLUSTER_IDENTIFIER, parameters.find("DBClusterIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("Engine"));
        ASSERT_STREQ("aurora-mysql", parameters.find("Engine")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("StorageEncrypted"));
        ASSERT_STREQ("true", parameters.find("StorageEncrypted")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("ReplicationSourceIdentifier"));
        ASSERT_STREQ(TESTING_REPLICATION_SOURCE_IDENTIFIER, parameters.find("ReplicationSourceIdentifier")->second.c_str());
        ASSERT_NE(parameters.end(), parameters.find("KmsKeyId"));
        ASSERT_STREQ(TESTING_KMS_KEY_ID, parameters.find("KmsKeyId")->second.c_str());
        ASSERT_EQ(parameters.end(), parameters.find("SourceRegion"));

        // Verify signature with fixed credentials and fixed timestamp.
        URI sourceUri("https://" + URI(preSignedUrl).GetAuthority());
        VerifySignature(createDBClusterRequest, sourceUri, createDBClusterRequest.GetSourceRegion().c_str(), "8c2fe7e0c15a0ca30b9ebbee3ca59760241130160ec14e3b76bddb3ceb0d1a56");

        // Ignore SourceRegion if preSignedUrl is specified.
        createDBClusterRequest.SetPreSignedUrl(TESTING_PRESIGNED_URL);
        createDBClusterOutcome = m_rdsClient.CreateDBCluster(createDBClusterRequest);
        ASSERT_FALSE(createDBClusterOutcome.IsSuccess());
        ASSERT_EQ(RDSErrors::INVALID_PARAMETER_VALUE, createDBClusterOutcome.GetError().GetErrorType());
        preSignedUrl = ExtractPreSignedUrlFromPayload(TestingMonitoringMetrics::s_lastPayload.c_str());
        ASSERT_STREQ(TESTING_PRESIGNED_URL, preSignedUrl.c_str());
    }
}
