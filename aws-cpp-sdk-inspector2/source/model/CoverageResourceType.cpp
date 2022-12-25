/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageResourceType.h>
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
      namespace CoverageResourceTypeMapper
      {

        static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
        static const int AWS_ECR_CONTAINER_IMAGE_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER_IMAGE");
        static const int AWS_ECR_REPOSITORY_HASH = HashingUtils::HashString("AWS_ECR_REPOSITORY");
        static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");


        CoverageResourceType GetCoverageResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_INSTANCE_HASH)
          {
            return CoverageResourceType::AWS_EC2_INSTANCE;
          }
          else if (hashCode == AWS_ECR_CONTAINER_IMAGE_HASH)
          {
            return CoverageResourceType::AWS_ECR_CONTAINER_IMAGE;
          }
          else if (hashCode == AWS_ECR_REPOSITORY_HASH)
          {
            return CoverageResourceType::AWS_ECR_REPOSITORY;
          }
          else if (hashCode == AWS_LAMBDA_FUNCTION_HASH)
          {
            return CoverageResourceType::AWS_LAMBDA_FUNCTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoverageResourceType>(hashCode);
          }

          return CoverageResourceType::NOT_SET;
        }

        Aws::String GetNameForCoverageResourceType(CoverageResourceType enumValue)
        {
          switch(enumValue)
          {
          case CoverageResourceType::AWS_EC2_INSTANCE:
            return "AWS_EC2_INSTANCE";
          case CoverageResourceType::AWS_ECR_CONTAINER_IMAGE:
            return "AWS_ECR_CONTAINER_IMAGE";
          case CoverageResourceType::AWS_ECR_REPOSITORY:
            return "AWS_ECR_REPOSITORY";
          case CoverageResourceType::AWS_LAMBDA_FUNCTION:
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

      } // namespace CoverageResourceTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
