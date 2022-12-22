/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AggregationResourceType.h>
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
      namespace AggregationResourceTypeMapper
      {

        static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
        static const int AWS_ECR_CONTAINER_IMAGE_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER_IMAGE");
        static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");


        AggregationResourceType GetAggregationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_EC2_INSTANCE_HASH)
          {
            return AggregationResourceType::AWS_EC2_INSTANCE;
          }
          else if (hashCode == AWS_ECR_CONTAINER_IMAGE_HASH)
          {
            return AggregationResourceType::AWS_ECR_CONTAINER_IMAGE;
          }
          else if (hashCode == AWS_LAMBDA_FUNCTION_HASH)
          {
            return AggregationResourceType::AWS_LAMBDA_FUNCTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationResourceType>(hashCode);
          }

          return AggregationResourceType::NOT_SET;
        }

        Aws::String GetNameForAggregationResourceType(AggregationResourceType enumValue)
        {
          switch(enumValue)
          {
          case AggregationResourceType::AWS_EC2_INSTANCE:
            return "AWS_EC2_INSTANCE";
          case AggregationResourceType::AWS_ECR_CONTAINER_IMAGE:
            return "AWS_ECR_CONTAINER_IMAGE";
          case AggregationResourceType::AWS_LAMBDA_FUNCTION:
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

      } // namespace AggregationResourceTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
