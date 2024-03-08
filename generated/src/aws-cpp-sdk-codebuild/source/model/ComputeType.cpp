/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static const int BUILD_GENERAL1_SMALL_HASH = HashingUtils::HashString("BUILD_GENERAL1_SMALL");
        static const int BUILD_GENERAL1_MEDIUM_HASH = HashingUtils::HashString("BUILD_GENERAL1_MEDIUM");
        static const int BUILD_GENERAL1_LARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_LARGE");
        static const int BUILD_GENERAL1_XLARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_XLARGE");
        static const int BUILD_GENERAL1_2XLARGE_HASH = HashingUtils::HashString("BUILD_GENERAL1_2XLARGE");
        static const int BUILD_LAMBDA_1GB_HASH = HashingUtils::HashString("BUILD_LAMBDA_1GB");
        static const int BUILD_LAMBDA_2GB_HASH = HashingUtils::HashString("BUILD_LAMBDA_2GB");
        static const int BUILD_LAMBDA_4GB_HASH = HashingUtils::HashString("BUILD_LAMBDA_4GB");
        static const int BUILD_LAMBDA_8GB_HASH = HashingUtils::HashString("BUILD_LAMBDA_8GB");
        static const int BUILD_LAMBDA_10GB_HASH = HashingUtils::HashString("BUILD_LAMBDA_10GB");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_GENERAL1_SMALL_HASH)
          {
            return ComputeType::BUILD_GENERAL1_SMALL;
          }
          else if (hashCode == BUILD_GENERAL1_MEDIUM_HASH)
          {
            return ComputeType::BUILD_GENERAL1_MEDIUM;
          }
          else if (hashCode == BUILD_GENERAL1_LARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_LARGE;
          }
          else if (hashCode == BUILD_GENERAL1_XLARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_XLARGE;
          }
          else if (hashCode == BUILD_GENERAL1_2XLARGE_HASH)
          {
            return ComputeType::BUILD_GENERAL1_2XLARGE;
          }
          else if (hashCode == BUILD_LAMBDA_1GB_HASH)
          {
            return ComputeType::BUILD_LAMBDA_1GB;
          }
          else if (hashCode == BUILD_LAMBDA_2GB_HASH)
          {
            return ComputeType::BUILD_LAMBDA_2GB;
          }
          else if (hashCode == BUILD_LAMBDA_4GB_HASH)
          {
            return ComputeType::BUILD_LAMBDA_4GB;
          }
          else if (hashCode == BUILD_LAMBDA_8GB_HASH)
          {
            return ComputeType::BUILD_LAMBDA_8GB;
          }
          else if (hashCode == BUILD_LAMBDA_10GB_HASH)
          {
            return ComputeType::BUILD_LAMBDA_10GB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::NOT_SET:
            return {};
          case ComputeType::BUILD_GENERAL1_SMALL:
            return "BUILD_GENERAL1_SMALL";
          case ComputeType::BUILD_GENERAL1_MEDIUM:
            return "BUILD_GENERAL1_MEDIUM";
          case ComputeType::BUILD_GENERAL1_LARGE:
            return "BUILD_GENERAL1_LARGE";
          case ComputeType::BUILD_GENERAL1_XLARGE:
            return "BUILD_GENERAL1_XLARGE";
          case ComputeType::BUILD_GENERAL1_2XLARGE:
            return "BUILD_GENERAL1_2XLARGE";
          case ComputeType::BUILD_LAMBDA_1GB:
            return "BUILD_LAMBDA_1GB";
          case ComputeType::BUILD_LAMBDA_2GB:
            return "BUILD_LAMBDA_2GB";
          case ComputeType::BUILD_LAMBDA_4GB:
            return "BUILD_LAMBDA_4GB";
          case ComputeType::BUILD_LAMBDA_8GB:
            return "BUILD_LAMBDA_8GB";
          case ComputeType::BUILD_LAMBDA_10GB:
            return "BUILD_LAMBDA_10GB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
