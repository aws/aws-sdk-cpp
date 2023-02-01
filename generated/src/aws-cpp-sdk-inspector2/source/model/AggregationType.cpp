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

        static const int FINDING_TYPE_HASH = HashingUtils::HashString("FINDING_TYPE");
        static const int PACKAGE_HASH = HashingUtils::HashString("PACKAGE");
        static const int TITLE_HASH = HashingUtils::HashString("TITLE");
        static const int REPOSITORY_HASH = HashingUtils::HashString("REPOSITORY");
        static const int AMI_HASH = HashingUtils::HashString("AMI");
        static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
        static const int AWS_ECR_CONTAINER_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER");
        static const int IMAGE_LAYER_HASH = HashingUtils::HashString("IMAGE_LAYER");
        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");
        static const int LAMBDA_LAYER_HASH = HashingUtils::HashString("LAMBDA_LAYER");


        AggregationType GetAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
