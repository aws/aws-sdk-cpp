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
