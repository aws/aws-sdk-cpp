/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessCheckResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AccessCheckResourceTypeMapper
      {

        static const int AWS_DynamoDB_Table_HASH = HashingUtils::HashString("AWS::DynamoDB::Table");
        static const int AWS_DynamoDB_Stream_HASH = HashingUtils::HashString("AWS::DynamoDB::Stream");
        static const int AWS_EFS_FileSystem_HASH = HashingUtils::HashString("AWS::EFS::FileSystem");
        static const int AWS_OpenSearchService_Domain_HASH = HashingUtils::HashString("AWS::OpenSearchService::Domain");
        static const int AWS_Kinesis_Stream_HASH = HashingUtils::HashString("AWS::Kinesis::Stream");
        static const int AWS_Kinesis_StreamConsumer_HASH = HashingUtils::HashString("AWS::Kinesis::StreamConsumer");
        static const int AWS_KMS_Key_HASH = HashingUtils::HashString("AWS::KMS::Key");
        static const int AWS_Lambda_Function_HASH = HashingUtils::HashString("AWS::Lambda::Function");
        static const int AWS_S3_Bucket_HASH = HashingUtils::HashString("AWS::S3::Bucket");
        static const int AWS_S3_AccessPoint_HASH = HashingUtils::HashString("AWS::S3::AccessPoint");
        static const int AWS_S3Express_DirectoryBucket_HASH = HashingUtils::HashString("AWS::S3Express::DirectoryBucket");
        static const int AWS_S3_Glacier_HASH = HashingUtils::HashString("AWS::S3::Glacier");
        static const int AWS_S3Outposts_Bucket_HASH = HashingUtils::HashString("AWS::S3Outposts::Bucket");
        static const int AWS_S3Outposts_AccessPoint_HASH = HashingUtils::HashString("AWS::S3Outposts::AccessPoint");
        static const int AWS_SecretsManager_Secret_HASH = HashingUtils::HashString("AWS::SecretsManager::Secret");
        static const int AWS_SNS_Topic_HASH = HashingUtils::HashString("AWS::SNS::Topic");
        static const int AWS_SQS_Queue_HASH = HashingUtils::HashString("AWS::SQS::Queue");
        static const int AWS_IAM_AssumeRolePolicyDocument_HASH = HashingUtils::HashString("AWS::IAM::AssumeRolePolicyDocument");
        static const int AWS_S3Tables_TableBucket_HASH = HashingUtils::HashString("AWS::S3Tables::TableBucket");
        static const int AWS_ApiGateway_RestApi_HASH = HashingUtils::HashString("AWS::ApiGateway::RestApi");
        static const int AWS_CodeArtifact_Domain_HASH = HashingUtils::HashString("AWS::CodeArtifact::Domain");
        static const int AWS_Backup_BackupVault_HASH = HashingUtils::HashString("AWS::Backup::BackupVault");
        static const int AWS_CloudTrail_Dashboard_HASH = HashingUtils::HashString("AWS::CloudTrail::Dashboard");
        static const int AWS_CloudTrail_EventDataStore_HASH = HashingUtils::HashString("AWS::CloudTrail::EventDataStore");
        static const int AWS_S3Tables_Table_HASH = HashingUtils::HashString("AWS::S3Tables::Table");
        static const int AWS_S3Express_AccessPoint_HASH = HashingUtils::HashString("AWS::S3Express::AccessPoint");


        AccessCheckResourceType GetAccessCheckResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_DynamoDB_Table_HASH)
          {
            return AccessCheckResourceType::AWS_DynamoDB_Table;
          }
          else if (hashCode == AWS_DynamoDB_Stream_HASH)
          {
            return AccessCheckResourceType::AWS_DynamoDB_Stream;
          }
          else if (hashCode == AWS_EFS_FileSystem_HASH)
          {
            return AccessCheckResourceType::AWS_EFS_FileSystem;
          }
          else if (hashCode == AWS_OpenSearchService_Domain_HASH)
          {
            return AccessCheckResourceType::AWS_OpenSearchService_Domain;
          }
          else if (hashCode == AWS_Kinesis_Stream_HASH)
          {
            return AccessCheckResourceType::AWS_Kinesis_Stream;
          }
          else if (hashCode == AWS_Kinesis_StreamConsumer_HASH)
          {
            return AccessCheckResourceType::AWS_Kinesis_StreamConsumer;
          }
          else if (hashCode == AWS_KMS_Key_HASH)
          {
            return AccessCheckResourceType::AWS_KMS_Key;
          }
          else if (hashCode == AWS_Lambda_Function_HASH)
          {
            return AccessCheckResourceType::AWS_Lambda_Function;
          }
          else if (hashCode == AWS_S3_Bucket_HASH)
          {
            return AccessCheckResourceType::AWS_S3_Bucket;
          }
          else if (hashCode == AWS_S3_AccessPoint_HASH)
          {
            return AccessCheckResourceType::AWS_S3_AccessPoint;
          }
          else if (hashCode == AWS_S3Express_DirectoryBucket_HASH)
          {
            return AccessCheckResourceType::AWS_S3Express_DirectoryBucket;
          }
          else if (hashCode == AWS_S3_Glacier_HASH)
          {
            return AccessCheckResourceType::AWS_S3_Glacier;
          }
          else if (hashCode == AWS_S3Outposts_Bucket_HASH)
          {
            return AccessCheckResourceType::AWS_S3Outposts_Bucket;
          }
          else if (hashCode == AWS_S3Outposts_AccessPoint_HASH)
          {
            return AccessCheckResourceType::AWS_S3Outposts_AccessPoint;
          }
          else if (hashCode == AWS_SecretsManager_Secret_HASH)
          {
            return AccessCheckResourceType::AWS_SecretsManager_Secret;
          }
          else if (hashCode == AWS_SNS_Topic_HASH)
          {
            return AccessCheckResourceType::AWS_SNS_Topic;
          }
          else if (hashCode == AWS_SQS_Queue_HASH)
          {
            return AccessCheckResourceType::AWS_SQS_Queue;
          }
          else if (hashCode == AWS_IAM_AssumeRolePolicyDocument_HASH)
          {
            return AccessCheckResourceType::AWS_IAM_AssumeRolePolicyDocument;
          }
          else if (hashCode == AWS_S3Tables_TableBucket_HASH)
          {
            return AccessCheckResourceType::AWS_S3Tables_TableBucket;
          }
          else if (hashCode == AWS_ApiGateway_RestApi_HASH)
          {
            return AccessCheckResourceType::AWS_ApiGateway_RestApi;
          }
          else if (hashCode == AWS_CodeArtifact_Domain_HASH)
          {
            return AccessCheckResourceType::AWS_CodeArtifact_Domain;
          }
          else if (hashCode == AWS_Backup_BackupVault_HASH)
          {
            return AccessCheckResourceType::AWS_Backup_BackupVault;
          }
          else if (hashCode == AWS_CloudTrail_Dashboard_HASH)
          {
            return AccessCheckResourceType::AWS_CloudTrail_Dashboard;
          }
          else if (hashCode == AWS_CloudTrail_EventDataStore_HASH)
          {
            return AccessCheckResourceType::AWS_CloudTrail_EventDataStore;
          }
          else if (hashCode == AWS_S3Tables_Table_HASH)
          {
            return AccessCheckResourceType::AWS_S3Tables_Table;
          }
          else if (hashCode == AWS_S3Express_AccessPoint_HASH)
          {
            return AccessCheckResourceType::AWS_S3Express_AccessPoint;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessCheckResourceType>(hashCode);
          }

          return AccessCheckResourceType::NOT_SET;
        }

        Aws::String GetNameForAccessCheckResourceType(AccessCheckResourceType enumValue)
        {
          switch(enumValue)
          {
          case AccessCheckResourceType::NOT_SET:
            return {};
          case AccessCheckResourceType::AWS_DynamoDB_Table:
            return "AWS::DynamoDB::Table";
          case AccessCheckResourceType::AWS_DynamoDB_Stream:
            return "AWS::DynamoDB::Stream";
          case AccessCheckResourceType::AWS_EFS_FileSystem:
            return "AWS::EFS::FileSystem";
          case AccessCheckResourceType::AWS_OpenSearchService_Domain:
            return "AWS::OpenSearchService::Domain";
          case AccessCheckResourceType::AWS_Kinesis_Stream:
            return "AWS::Kinesis::Stream";
          case AccessCheckResourceType::AWS_Kinesis_StreamConsumer:
            return "AWS::Kinesis::StreamConsumer";
          case AccessCheckResourceType::AWS_KMS_Key:
            return "AWS::KMS::Key";
          case AccessCheckResourceType::AWS_Lambda_Function:
            return "AWS::Lambda::Function";
          case AccessCheckResourceType::AWS_S3_Bucket:
            return "AWS::S3::Bucket";
          case AccessCheckResourceType::AWS_S3_AccessPoint:
            return "AWS::S3::AccessPoint";
          case AccessCheckResourceType::AWS_S3Express_DirectoryBucket:
            return "AWS::S3Express::DirectoryBucket";
          case AccessCheckResourceType::AWS_S3_Glacier:
            return "AWS::S3::Glacier";
          case AccessCheckResourceType::AWS_S3Outposts_Bucket:
            return "AWS::S3Outposts::Bucket";
          case AccessCheckResourceType::AWS_S3Outposts_AccessPoint:
            return "AWS::S3Outposts::AccessPoint";
          case AccessCheckResourceType::AWS_SecretsManager_Secret:
            return "AWS::SecretsManager::Secret";
          case AccessCheckResourceType::AWS_SNS_Topic:
            return "AWS::SNS::Topic";
          case AccessCheckResourceType::AWS_SQS_Queue:
            return "AWS::SQS::Queue";
          case AccessCheckResourceType::AWS_IAM_AssumeRolePolicyDocument:
            return "AWS::IAM::AssumeRolePolicyDocument";
          case AccessCheckResourceType::AWS_S3Tables_TableBucket:
            return "AWS::S3Tables::TableBucket";
          case AccessCheckResourceType::AWS_ApiGateway_RestApi:
            return "AWS::ApiGateway::RestApi";
          case AccessCheckResourceType::AWS_CodeArtifact_Domain:
            return "AWS::CodeArtifact::Domain";
          case AccessCheckResourceType::AWS_Backup_BackupVault:
            return "AWS::Backup::BackupVault";
          case AccessCheckResourceType::AWS_CloudTrail_Dashboard:
            return "AWS::CloudTrail::Dashboard";
          case AccessCheckResourceType::AWS_CloudTrail_EventDataStore:
            return "AWS::CloudTrail::EventDataStore";
          case AccessCheckResourceType::AWS_S3Tables_Table:
            return "AWS::S3Tables::Table";
          case AccessCheckResourceType::AWS_S3Express_AccessPoint:
            return "AWS::S3Express::AccessPoint";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessCheckResourceTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
