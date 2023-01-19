/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/UUID.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/elasticfilesystem/model/FileSystemAlreadyExists.h>

using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::EFS;
using namespace Aws::EFS::Model;

namespace
{
    static const char FILE_SYSTEM_CREATION_TOKEN[] = "basic-file-system-creation-token";
    static const size_t TIMEOUT_MAX                = 30;

    class ElasticFileSystemTest : public ::testing::Test
    {
    public:
        EFSClient m_client;

        ElasticFileSystemTest()
        {
            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_WEST_2;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            m_client = EFSClient(config);
        }

    protected:
        static Aws::String BuildUniqueCreationToken(const char* baseCreationToken)
        {
            // If we are using full string of UUID, it will exceed the limitation of EFS creation token length, which is 64.
            return Aws::Testing::GetAwsResourcePrefix() + baseCreationToken + Aws::Utils::StringUtils::Split(Aws::Utils::UUID::RandomUUID(), '-')[0];
        }

        bool WaitForFileSystemToBeActive(const Aws::String& fileSystemId)
        {
            unsigned timeoutCount = 0;
            while (timeoutCount++ < TIMEOUT_MAX)
            {
                DescribeFileSystemsRequest describeFileSystemsRequest;
                describeFileSystemsRequest.SetFileSystemId(fileSystemId);
                auto describeFileSystemsOutcome = m_client.DescribeFileSystems(describeFileSystemsRequest);
                if (describeFileSystemsOutcome.IsSuccess())
                {
                    return true;
                }

                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            return false;
        }
    };

    TEST_F(ElasticFileSystemTest, TestFileSystemAlreadyExistsException)
    {
        CreateFileSystemRequest createFileSystemRequest;
        createFileSystemRequest.SetCreationToken(BuildUniqueCreationToken(FILE_SYSTEM_CREATION_TOKEN));
        auto createFileSystemOutcome = m_client.CreateFileSystem(createFileSystemRequest);
        AWS_ASSERT_SUCCESS(createFileSystemOutcome);
        Aws::String fileSystemId = createFileSystemOutcome.GetResult().GetFileSystemId();
        ASSERT_TRUE(WaitForFileSystemToBeActive(fileSystemId));

        createFileSystemOutcome = m_client.CreateFileSystem(createFileSystemRequest);
#if ENABLE_CURL_CLIENT
        ASSERT_FALSE(createFileSystemOutcome.GetError().GetRemoteHostIpAddress().empty());
#endif
        ASSERT_FALSE(createFileSystemOutcome.GetError().GetRequestId().empty());
        ASSERT_EQ(EFSErrors::FILE_SYSTEM_ALREADY_EXISTS, createFileSystemOutcome.GetError().GetErrorType());
        FileSystemAlreadyExists fileSystemAlreadyExists = createFileSystemOutcome.GetError<FileSystemAlreadyExists>();
        ASSERT_STREQ("FileSystemAlreadyExists", fileSystemAlreadyExists.GetErrorCode().c_str());
        ASSERT_STREQ(fileSystemId.c_str(), fileSystemAlreadyExists.GetFileSystemId().c_str());

        DeleteFileSystemRequest deleteFileSystemRequest;
        deleteFileSystemRequest.SetFileSystemId(fileSystemId);
        auto deleteFileSystemOutcome = m_client.DeleteFileSystem(deleteFileSystemRequest);
        AWS_ASSERT_SUCCESS(deleteFileSystemOutcome);
    }
}
