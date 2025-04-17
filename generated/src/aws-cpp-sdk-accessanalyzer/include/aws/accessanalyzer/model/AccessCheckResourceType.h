/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class AccessCheckResourceType
  {
    NOT_SET,
    AWS_DynamoDB_Table,
    AWS_DynamoDB_Stream,
    AWS_EFS_FileSystem,
    AWS_OpenSearchService_Domain,
    AWS_Kinesis_Stream,
    AWS_Kinesis_StreamConsumer,
    AWS_KMS_Key,
    AWS_Lambda_Function,
    AWS_S3_Bucket,
    AWS_S3_AccessPoint,
    AWS_S3Express_DirectoryBucket,
    AWS_S3_Glacier,
    AWS_S3Outposts_Bucket,
    AWS_S3Outposts_AccessPoint,
    AWS_SecretsManager_Secret,
    AWS_SNS_Topic,
    AWS_SQS_Queue,
    AWS_IAM_AssumeRolePolicyDocument,
    AWS_S3Tables_TableBucket,
    AWS_ApiGateway_RestApi,
    AWS_CodeArtifact_Domain,
    AWS_Backup_BackupVault,
    AWS_CloudTrail_Dashboard,
    AWS_CloudTrail_EventDataStore,
    AWS_S3Tables_Table,
    AWS_S3Express_AccessPoint
  };

namespace AccessCheckResourceTypeMapper
{
AWS_ACCESSANALYZER_API AccessCheckResourceType GetAccessCheckResourceTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAccessCheckResourceType(AccessCheckResourceType value);
} // namespace AccessCheckResourceTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
