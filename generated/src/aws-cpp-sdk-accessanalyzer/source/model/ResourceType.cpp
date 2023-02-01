/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ResourceType.h>
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
      namespace ResourceTypeMapper
      {

        static const int AWS_S3_Bucket_HASH = HashingUtils::HashString("AWS::S3::Bucket");
        static const int AWS_IAM_Role_HASH = HashingUtils::HashString("AWS::IAM::Role");
        static const int AWS_SQS_Queue_HASH = HashingUtils::HashString("AWS::SQS::Queue");
        static const int AWS_Lambda_Function_HASH = HashingUtils::HashString("AWS::Lambda::Function");
        static const int AWS_Lambda_LayerVersion_HASH = HashingUtils::HashString("AWS::Lambda::LayerVersion");
        static const int AWS_KMS_Key_HASH = HashingUtils::HashString("AWS::KMS::Key");
        static const int AWS_SecretsManager_Secret_HASH = HashingUtils::HashString("AWS::SecretsManager::Secret");
        static const int AWS_EFS_FileSystem_HASH = HashingUtils::HashString("AWS::EFS::FileSystem");
        static const int AWS_EC2_Snapshot_HASH = HashingUtils::HashString("AWS::EC2::Snapshot");
        static const int AWS_ECR_Repository_HASH = HashingUtils::HashString("AWS::ECR::Repository");
        static const int AWS_RDS_DBSnapshot_HASH = HashingUtils::HashString("AWS::RDS::DBSnapshot");
        static const int AWS_RDS_DBClusterSnapshot_HASH = HashingUtils::HashString("AWS::RDS::DBClusterSnapshot");
        static const int AWS_SNS_Topic_HASH = HashingUtils::HashString("AWS::SNS::Topic");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_S3_Bucket_HASH)
          {
            return ResourceType::AWS_S3_Bucket;
          }
          else if (hashCode == AWS_IAM_Role_HASH)
          {
            return ResourceType::AWS_IAM_Role;
          }
          else if (hashCode == AWS_SQS_Queue_HASH)
          {
            return ResourceType::AWS_SQS_Queue;
          }
          else if (hashCode == AWS_Lambda_Function_HASH)
          {
            return ResourceType::AWS_Lambda_Function;
          }
          else if (hashCode == AWS_Lambda_LayerVersion_HASH)
          {
            return ResourceType::AWS_Lambda_LayerVersion;
          }
          else if (hashCode == AWS_KMS_Key_HASH)
          {
            return ResourceType::AWS_KMS_Key;
          }
          else if (hashCode == AWS_SecretsManager_Secret_HASH)
          {
            return ResourceType::AWS_SecretsManager_Secret;
          }
          else if (hashCode == AWS_EFS_FileSystem_HASH)
          {
            return ResourceType::AWS_EFS_FileSystem;
          }
          else if (hashCode == AWS_EC2_Snapshot_HASH)
          {
            return ResourceType::AWS_EC2_Snapshot;
          }
          else if (hashCode == AWS_ECR_Repository_HASH)
          {
            return ResourceType::AWS_ECR_Repository;
          }
          else if (hashCode == AWS_RDS_DBSnapshot_HASH)
          {
            return ResourceType::AWS_RDS_DBSnapshot;
          }
          else if (hashCode == AWS_RDS_DBClusterSnapshot_HASH)
          {
            return ResourceType::AWS_RDS_DBClusterSnapshot;
          }
          else if (hashCode == AWS_SNS_Topic_HASH)
          {
            return ResourceType::AWS_SNS_Topic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::AWS_S3_Bucket:
            return "AWS::S3::Bucket";
          case ResourceType::AWS_IAM_Role:
            return "AWS::IAM::Role";
          case ResourceType::AWS_SQS_Queue:
            return "AWS::SQS::Queue";
          case ResourceType::AWS_Lambda_Function:
            return "AWS::Lambda::Function";
          case ResourceType::AWS_Lambda_LayerVersion:
            return "AWS::Lambda::LayerVersion";
          case ResourceType::AWS_KMS_Key:
            return "AWS::KMS::Key";
          case ResourceType::AWS_SecretsManager_Secret:
            return "AWS::SecretsManager::Secret";
          case ResourceType::AWS_EFS_FileSystem:
            return "AWS::EFS::FileSystem";
          case ResourceType::AWS_EC2_Snapshot:
            return "AWS::EC2::Snapshot";
          case ResourceType::AWS_ECR_Repository:
            return "AWS::ECR::Repository";
          case ResourceType::AWS_RDS_DBSnapshot:
            return "AWS::RDS::DBSnapshot";
          case ResourceType::AWS_RDS_DBClusterSnapshot:
            return "AWS::RDS::DBClusterSnapshot";
          case ResourceType::AWS_SNS_Topic:
            return "AWS::SNS::Topic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
