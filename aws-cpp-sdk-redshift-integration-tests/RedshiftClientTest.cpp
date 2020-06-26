/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <fstream>

#include <aws/external/gtest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsRequest.h>
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/DescribeClusterParametersRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/ResetClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <future>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsRequest.h>
#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/redshift/model/DisableSnapshotCopyRequest.h>


using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::Redshift;
using namespace Aws::Redshift::Model;


namespace
{

  static const char* ALLOCATION_TAG = "RedshiftClientTest";
  static const char* CLUSTER_NAME = "redshift-client-test-cluster";
  static const char* CLUSTER_MASTER_USERNAME = "redshiftclienttestsusername";
  static const char* CLUSTER_MASTER_PASSWORD = "RedshiftClientTestsPassword3";
  static const char* CLUSTER_NODE_TYPE = "ds1.8xlarge";

  class RedshiftClientTest : public ::testing::Test
  {

  public:
    static std::shared_ptr<RedshiftClient> Client;
    static Aws::String TimeStamp;

  protected:

    static void SetUpTestCase()
    {
      Client = Aws::MakeShared<RedshiftClient>(ALLOCATION_TAG);
      CreateClusters(CalculateClusterName(CLUSTER_NAME));
    }

    static void TearDownTestCase()
    {
      DeleteClusters(CalculateClusterName(CLUSTER_NAME));

      Client = nullptr;
    }

    static void DeleteClusters(const Aws::String& clusterName)
    {
      DescribeClustersRequest clusterExistsRequest;
      clusterExistsRequest.SetClusterIdentifier(clusterName);
      DescribeClustersOutcome clusterExistsOutcome = Client->DescribeClusters(clusterExistsRequest);


      DeleteClusterRequest deleteRequest;
      deleteRequest.SetClusterIdentifier(clusterName);
      deleteRequest.SetSkipFinalClusterSnapshot(true);
      DeleteClusterOutcome deleteOutcome = Client->DeleteCluster(deleteRequest);


      while (!deleteOutcome.IsSuccess() && clusterExistsOutcome.IsSuccess())
      {
        std::this_thread::sleep_for(std::chrono::seconds(20));
        deleteOutcome = Client->DeleteCluster(deleteRequest);
        clusterExistsOutcome = Client->DescribeClusters(clusterExistsRequest);
      }
    }

    static void CreateClusters(const Aws::String& clusterName)
    {
      CreateClusterRequest clusterRequest;
      clusterRequest.SetClusterIdentifier(clusterName);
      clusterRequest.SetMasterUsername(CLUSTER_MASTER_USERNAME);
      clusterRequest.SetMasterUserPassword(CLUSTER_MASTER_PASSWORD);
      clusterRequest.WithNumberOfNodes(2).SetNodeType(CLUSTER_NODE_TYPE);

      CreateClusterOutcome createOutcome = Client->CreateCluster(clusterRequest);
      ASSERT_TRUE(createOutcome.IsSuccess());
      WaitForClusterAvailability(clusterName);
    }

    static Aws::String CalculateClusterName(const char* clusterPrefix)
    {
      return clusterPrefix + TimeStamp;
    }

    static void WaitForClusterAvailability(const Aws::String& clusterName)
    {
      DescribeClustersRequest describeClustersRequest;
      describeClustersRequest.SetClusterIdentifier(clusterName);

      DescribeClustersOutcome describeClustersOutcome = Client->DescribeClusters(describeClustersRequest);
      while (describeClustersOutcome.GetResult().GetClusters().front().GetClusterStatus().compare("creating") == 0)
      {
        std::this_thread::sleep_for(std::chrono::seconds(20));
        describeClustersOutcome = Client->DescribeClusters(describeClustersRequest);
      }
    }

    static void WaitForClusterSnapshotAvailability(const Aws::String& snapshotIdentifier)
    {
      DescribeClusterSnapshotsRequest describeSnapshotsRequest;
      describeSnapshotsRequest.SetSnapshotIdentifier(snapshotIdentifier);

      DescribeClusterSnapshotsOutcome describeSnapshotOutcome = Client->DescribeClusterSnapshots(describeSnapshotsRequest);
      while (describeSnapshotOutcome.GetResult().GetSnapshots().front().GetStatus().compare("creating") == 0)
      {
        std::this_thread::sleep_for(std::chrono::seconds(10));
        describeSnapshotOutcome = Client->DescribeClusterSnapshots(describeSnapshotsRequest);
      }
    }
  };

  Aws::String RedshiftClientTest::TimeStamp(DateTime::CalculateGmtTimestampAsString("%Y%m%d%H%M%S"));
  std::shared_ptr<RedshiftClient> RedshiftClientTest::Client(nullptr);

  TEST_F(RedshiftClientTest, TestClusterSubnetGroup)
  {
    Aws::String subnetGroupName = "create-cluster-subnet-group-test";
    Aws::String subnetGroupDescription = "create cluster subnet group test";
    Aws::Vector<Aws::String> subnetId;

    DescribeClusterSubnetGroupsRequest getVpcIdRequest;
    DescribeClusterSubnetGroupsOutcome getVpcIdOutcome = Client->DescribeClusterSubnetGroups(getVpcIdRequest);
    ASSERT_TRUE(getVpcIdOutcome.IsSuccess());
    subnetId.push_back(getVpcIdOutcome.GetResult().GetClusterSubnetGroups().front().GetSubnets().front().GetSubnetIdentifier());


    CreateClusterSubnetGroupRequest createSubnetGroupRequest;
    createSubnetGroupRequest.SetClusterSubnetGroupName(subnetGroupName);
    createSubnetGroupRequest.SetDescription(subnetGroupDescription);
    createSubnetGroupRequest.SetSubnetIds(subnetId);

    CreateClusterSubnetGroupOutcome createSubnetGroupOutcome = Client->CreateClusterSubnetGroup(createSubnetGroupRequest);
    ASSERT_TRUE(createSubnetGroupOutcome.IsSuccess());


    DeleteClusterSubnetGroupRequest deleteClusterSubnetGroupRequest;
    deleteClusterSubnetGroupRequest.SetClusterSubnetGroupName(subnetGroupName);

    DeleteClusterSubnetGroupOutcome deleteClusterSubnetGroupOutcome = Client->DeleteClusterSubnetGroup(deleteClusterSubnetGroupRequest);
    ASSERT_TRUE(deleteClusterSubnetGroupOutcome.IsSuccess());
  }

  TEST_F(RedshiftClientTest, TestClusterSnapshot)
  {
    Aws::String snapshotIdentifier = "snapshot-test-identifier" + TimeStamp;
    Aws::String accountWithRestoreAccess = "297817752989";
    Aws::String clusterIdentifier = CalculateClusterName(CLUSTER_NAME);

    CreateClusterSnapshotRequest createSnapshotRequest;
    createSnapshotRequest.SetClusterIdentifier(clusterIdentifier);
    createSnapshotRequest.SetSnapshotIdentifier(snapshotIdentifier);

    CreateClusterSnapshotOutcome createSnapshotOutcome = Client->CreateClusterSnapshot(createSnapshotRequest);
    ASSERT_TRUE(createSnapshotOutcome.IsSuccess());
    WaitForClusterSnapshotAvailability(snapshotIdentifier);


    AuthorizeSnapshotAccessRequest authorizeSnapshotRequest;
    authorizeSnapshotRequest.SetAccountWithRestoreAccess(accountWithRestoreAccess);
    authorizeSnapshotRequest.SetSnapshotIdentifier(snapshotIdentifier);

    AuthorizeSnapshotAccessOutcome authorizeSnapshotOutcome = Client->AuthorizeSnapshotAccess(authorizeSnapshotRequest);
    EXPECT_TRUE(authorizeSnapshotOutcome.IsSuccess());
    EXPECT_EQ(CLUSTER_MASTER_USERNAME, authorizeSnapshotOutcome.GetResult().GetSnapshot().GetMasterUsername());


    DescribeClusterSnapshotsRequest describeSnapshotsRequest;
    describeSnapshotsRequest.SetSnapshotIdentifier(snapshotIdentifier);

    DescribeClusterSnapshotsOutcome describeSnapshotOutcome = Client->DescribeClusterSnapshots(describeSnapshotsRequest);
    EXPECT_TRUE(describeSnapshotOutcome.IsSuccess());
    EXPECT_EQ(CLUSTER_MASTER_USERNAME, describeSnapshotOutcome.GetResult().GetSnapshots().front().GetMasterUsername());


    RevokeSnapshotAccessRequest revokeSnapshotRequest;
    revokeSnapshotRequest.SetAccountWithRestoreAccess(accountWithRestoreAccess);
    revokeSnapshotRequest.SetSnapshotIdentifier(snapshotIdentifier);

    RevokeSnapshotAccessOutcome revokeSnapshotOutcome = Client->RevokeSnapshotAccess(revokeSnapshotRequest);
    EXPECT_TRUE(revokeSnapshotOutcome.IsSuccess());
    EXPECT_EQ(CLUSTER_MASTER_USERNAME, revokeSnapshotOutcome.GetResult().GetSnapshot().GetMasterUsername());


    EnableSnapshotCopyRequest enableSnapshotCopyRequest;
    enableSnapshotCopyRequest.SetClusterIdentifier(clusterIdentifier);
    enableSnapshotCopyRequest.SetDestinationRegion("us-west-2");

    EnableSnapshotCopyOutcome enableSnapshotCopyOutcome = Client->EnableSnapshotCopy(enableSnapshotCopyRequest);
    EXPECT_TRUE(enableSnapshotCopyOutcome.IsSuccess());


    ModifySnapshotCopyRetentionPeriodRequest modifySnapshotRetentionRequest;
    modifySnapshotRetentionRequest.SetClusterIdentifier(clusterIdentifier);
    modifySnapshotRetentionRequest.SetRetentionPeriod(1);

    ModifySnapshotCopyRetentionPeriodOutcome modifySnapshotRetentionOutcome = Client->ModifySnapshotCopyRetentionPeriod(modifySnapshotRetentionRequest);
    EXPECT_TRUE(modifySnapshotRetentionOutcome.IsSuccess());
    EXPECT_EQ(1, modifySnapshotRetentionOutcome.GetResult().GetCluster().GetAutomatedSnapshotRetentionPeriod());


    Aws::String copyGrantName = "copy-grant-name-snapshot-test";
    CreateSnapshotCopyGrantRequest createCopyGrantReqeust;
    createCopyGrantReqeust.SetSnapshotCopyGrantName(copyGrantName);

    CreateSnapshotCopyGrantOutcome createCopyGrantOutcome = Client->CreateSnapshotCopyGrant(createCopyGrantReqeust);
    EXPECT_TRUE(createCopyGrantOutcome.IsSuccess());
    EXPECT_EQ(copyGrantName, createCopyGrantOutcome.GetResult().GetSnapshotCopyGrant().GetSnapshotCopyGrantName());


    DescribeSnapshotCopyGrantsRequest describeCopyGrantRequest;
    describeCopyGrantRequest.SetSnapshotCopyGrantName(copyGrantName);

    DescribeSnapshotCopyGrantsOutcome describeCopyGrantOutcome = Client->DescribeSnapshotCopyGrants(describeCopyGrantRequest);
    EXPECT_TRUE(describeCopyGrantOutcome.IsSuccess());
    EXPECT_EQ(copyGrantName, describeCopyGrantOutcome.GetResult().GetSnapshotCopyGrants().front().GetSnapshotCopyGrantName());


    DeleteSnapshotCopyGrantRequest deleteCopyGrantRequest;
    deleteCopyGrantRequest.SetSnapshotCopyGrantName(copyGrantName);

    DeleteSnapshotCopyGrantOutcome deleteCopyGrantOutcome = Client->DeleteSnapshotCopyGrant(deleteCopyGrantRequest);
    EXPECT_TRUE(deleteCopyGrantOutcome.IsSuccess());


    DisableSnapshotCopyRequest disableSnapshotCopyRequest;
    disableSnapshotCopyRequest.SetClusterIdentifier(clusterIdentifier);

    DisableSnapshotCopyOutcome disableSnapshotCopyOutcome = Client->DisableSnapshotCopy(disableSnapshotCopyRequest);
    EXPECT_TRUE(disableSnapshotCopyOutcome.IsSuccess());


    DeleteClusterSnapshotRequest deleteSnapshotRequest;
    deleteSnapshotRequest.SetSnapshotIdentifier(snapshotIdentifier);

    DeleteClusterSnapshotOutcome deleteSnapshotOutcome = Client->DeleteClusterSnapshot(deleteSnapshotRequest);
    ASSERT_TRUE(deleteSnapshotOutcome.IsSuccess());
    ASSERT_EQ(CLUSTER_MASTER_USERNAME, deleteSnapshotOutcome.GetResult().GetSnapshot().GetMasterUsername());
  }

  TEST_F(RedshiftClientTest, TestHsmClientCertificate)
  {
    Aws::String hsmIdentifier = "hsmidentifier";

    CreateHsmClientCertificateRequest createHsmRequest;
    createHsmRequest.SetHsmClientCertificateIdentifier(hsmIdentifier);

    CreateHsmClientCertificateOutcome createHsmOutcome = Client->CreateHsmClientCertificate(createHsmRequest);
    EXPECT_TRUE(createHsmOutcome.IsSuccess());
    EXPECT_EQ(hsmIdentifier, createHsmOutcome.GetResult().GetHsmClientCertificate().GetHsmClientCertificateIdentifier());


    DescribeHsmClientCertificatesRequest describeHsmRequest;
    describeHsmRequest.SetHsmClientCertificateIdentifier(hsmIdentifier);

    DescribeHsmClientCertificatesOutcome describeHsmOutcome = Client->DescribeHsmClientCertificates(describeHsmRequest);
    EXPECT_TRUE(describeHsmOutcome.IsSuccess());
    EXPECT_EQ(hsmIdentifier, describeHsmOutcome.GetResult().GetHsmClientCertificates().front().GetHsmClientCertificateIdentifier());


    DeleteHsmClientCertificateRequest deleteHsmRequest;
    deleteHsmRequest.SetHsmClientCertificateIdentifier(hsmIdentifier);

    DeleteHsmClientCertificateOutcome deleteHsmOutcome = Client->DeleteHsmClientCertificate(deleteHsmRequest);
    ASSERT_TRUE(deleteHsmOutcome.IsSuccess());
  }

  TEST_F(RedshiftClientTest, TestClusterParameterGroup)
  {
    Aws::String groupName = "parameter-group-test";
    Aws::String groupDescription = "cluster parameter group tests";
    Aws::String parameterGroupFamily;

    DescribeClusterParameterGroupsRequest describeParameterGroupsRequest;
    DescribeClusterParameterGroupsOutcome describeParameterGroupOutcome = Client->DescribeClusterParameterGroups(describeParameterGroupsRequest);
    ASSERT_TRUE(describeParameterGroupOutcome.IsSuccess());
    parameterGroupFamily = describeParameterGroupOutcome.GetResult().GetParameterGroups().front().GetParameterGroupFamily();


    CreateClusterParameterGroupRequest createParameterGroupRequest;
    createParameterGroupRequest.SetParameterGroupName(groupName);
    createParameterGroupRequest.SetDescription(groupDescription);
    createParameterGroupRequest.SetParameterGroupFamily(parameterGroupFamily);

    CreateClusterParameterGroupOutcome createParameterGroupOutcome = Client->CreateClusterParameterGroup(createParameterGroupRequest);
    ASSERT_TRUE(createParameterGroupOutcome.IsSuccess());
    EXPECT_EQ(groupDescription, createParameterGroupOutcome.GetResult().GetClusterParameterGroup().GetDescription());


    DescribeClusterParametersRequest describeParametersRequest;
    describeParametersRequest.SetParameterGroupName(groupName);

    DescribeClusterParametersOutcome describeParametersOutcome = Client->DescribeClusterParameters(describeParametersRequest);
    EXPECT_TRUE(describeParametersOutcome.IsSuccess());
    EXPECT_TRUE(describeParametersOutcome.GetResult().GetParameters().size() > 1);


    DescribeDefaultClusterParametersRequest describeDefaultParametersRequest;
    describeDefaultParametersRequest.SetParameterGroupFamily(parameterGroupFamily);

    DescribeDefaultClusterParametersOutcome describeDefaultParametersOutcome = Client->DescribeDefaultClusterParameters(describeDefaultParametersRequest);
    EXPECT_TRUE(describeDefaultParametersOutcome.IsSuccess());
    EXPECT_EQ(parameterGroupFamily, describeDefaultParametersOutcome.GetResult().GetDefaultClusterParameters().GetParameterGroupFamily());


    ResetClusterParameterGroupRequest resetParameterGroupRequest;
    resetParameterGroupRequest.SetParameterGroupName(groupName);
    resetParameterGroupRequest.SetResetAllParameters(true);

    ResetClusterParameterGroupOutcome resetParameterGroupOutcome = Client->ResetClusterParameterGroup(resetParameterGroupRequest);
    EXPECT_TRUE(resetParameterGroupOutcome.IsSuccess());
    EXPECT_EQ(groupName, resetParameterGroupOutcome.GetResult().GetParameterGroupName());


    DeleteClusterParameterGroupRequest deleteParameterGroupRequest;
    deleteParameterGroupRequest.SetParameterGroupName(groupName);

    DeleteClusterParameterGroupOutcome deleteParameterGroupOutcome = Client->DeleteClusterParameterGroup(deleteParameterGroupRequest);
    EXPECT_TRUE(deleteParameterGroupOutcome.IsSuccess());
  }
}
