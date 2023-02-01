/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
        static const int AWS_ECR_CONTAINER_IMAGE_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER_IMAGE");
        static const int AWS_ECR_REPOSITORY_HASH = HashingUtils::HashString("AWS_ECR_REPOSITORY");
        static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_INSTANCE_HASH)
          {
            return ResourceType::AWS_EC2_INSTANCE;
          }
          else if (hashCode == AWS_ECR_CONTAINER_IMAGE_HASH)
          {
            return ResourceType::AWS_ECR_CONTAINER_IMAGE;
          }
          else if (hashCode == AWS_ECR_REPOSITORY_HASH)
          {
            return ResourceType::AWS_ECR_REPOSITORY;
          }
          else if (hashCode == AWS_LAMBDA_FUNCTION_HASH)
          {
            return ResourceType::AWS_LAMBDA_FUNCTION;
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
          case ResourceType::AWS_EC2_INSTANCE:
            return "AWS_EC2_INSTANCE";
          case ResourceType::AWS_ECR_CONTAINER_IMAGE:
            return "AWS_ECR_CONTAINER_IMAGE";
          case ResourceType::AWS_ECR_REPOSITORY:
            return "AWS_ECR_REPOSITORY";
          case ResourceType::AWS_LAMBDA_FUNCTION:
            return "AWS_LAMBDA_FUNCTION";
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
  } // namespace Inspector2
} // namespace Aws
