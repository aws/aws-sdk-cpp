/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AggregationType.h>
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
      namespace AggregationTypeMapper
      {

        static constexpr uint32_t FINDING_TYPE_HASH = ConstExprHashingUtils::HashString("FINDING_TYPE");
        static constexpr uint32_t PACKAGE_HASH = ConstExprHashingUtils::HashString("PACKAGE");
        static constexpr uint32_t TITLE_HASH = ConstExprHashingUtils::HashString("TITLE");
        static constexpr uint32_t REPOSITORY_HASH = ConstExprHashingUtils::HashString("REPOSITORY");
        static constexpr uint32_t AMI_HASH = ConstExprHashingUtils::HashString("AMI");
        static constexpr uint32_t AWS_EC2_INSTANCE_HASH = ConstExprHashingUtils::HashString("AWS_EC2_INSTANCE");
        static constexpr uint32_t AWS_ECR_CONTAINER_HASH = ConstExprHashingUtils::HashString("AWS_ECR_CONTAINER");
        static constexpr uint32_t IMAGE_LAYER_HASH = ConstExprHashingUtils::HashString("IMAGE_LAYER");
        static constexpr uint32_t ACCOUNT_HASH = ConstExprHashingUtils::HashString("ACCOUNT");
        static constexpr uint32_t AWS_LAMBDA_FUNCTION_HASH = ConstExprHashingUtils::HashString("AWS_LAMBDA_FUNCTION");
        static constexpr uint32_t LAMBDA_LAYER_HASH = ConstExprHashingUtils::HashString("LAMBDA_LAYER");


        AggregationType GetAggregationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_TYPE_HASH)
          {
            return AggregationType::FINDING_TYPE;
          }
          else if (hashCode == PACKAGE_HASH)
          {
            return AggregationType::PACKAGE;
          }
          else if (hashCode == TITLE_HASH)
          {
            return AggregationType::TITLE;
          }
          else if (hashCode == REPOSITORY_HASH)
          {
            return AggregationType::REPOSITORY;
          }
          else if (hashCode == AMI_HASH)
          {
            return AggregationType::AMI;
          }
          else if (hashCode == AWS_EC2_INSTANCE_HASH)
          {
            return AggregationType::AWS_EC2_INSTANCE;
          }
          else if (hashCode == AWS_ECR_CONTAINER_HASH)
          {
            return AggregationType::AWS_ECR_CONTAINER;
          }
          else if (hashCode == IMAGE_LAYER_HASH)
          {
            return AggregationType::IMAGE_LAYER;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return AggregationType::ACCOUNT;
          }
          else if (hashCode == AWS_LAMBDA_FUNCTION_HASH)
          {
            return AggregationType::AWS_LAMBDA_FUNCTION;
          }
          else if (hashCode == LAMBDA_LAYER_HASH)
          {
            return AggregationType::LAMBDA_LAYER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationType>(hashCode);
          }

          return AggregationType::NOT_SET;
        }

        Aws::String GetNameForAggregationType(AggregationType enumValue)
        {
          switch(enumValue)
          {
          case AggregationType::NOT_SET:
            return {};
          case AggregationType::FINDING_TYPE:
            return "FINDING_TYPE";
          case AggregationType::PACKAGE:
            return "PACKAGE";
          case AggregationType::TITLE:
            return "TITLE";
          case AggregationType::REPOSITORY:
            return "REPOSITORY";
          case AggregationType::AMI:
            return "AMI";
          case AggregationType::AWS_EC2_INSTANCE:
            return "AWS_EC2_INSTANCE";
          case AggregationType::AWS_ECR_CONTAINER:
            return "AWS_ECR_CONTAINER";
          case AggregationType::IMAGE_LAYER:
            return "IMAGE_LAYER";
          case AggregationType::ACCOUNT:
            return "ACCOUNT";
          case AggregationType::AWS_LAMBDA_FUNCTION:
            return "AWS_LAMBDA_FUNCTION";
          case AggregationType::LAMBDA_LAYER:
            return "LAMBDA_LAYER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
