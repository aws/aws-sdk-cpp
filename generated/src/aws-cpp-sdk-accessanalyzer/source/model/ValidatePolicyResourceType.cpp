/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ValidatePolicyResourceType.h>
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
      namespace ValidatePolicyResourceTypeMapper
      {

        static constexpr uint32_t AWS_S3_Bucket_HASH = ConstExprHashingUtils::HashString("AWS::S3::Bucket");
        static constexpr uint32_t AWS_S3_AccessPoint_HASH = ConstExprHashingUtils::HashString("AWS::S3::AccessPoint");
        static constexpr uint32_t AWS_S3_MultiRegionAccessPoint_HASH = ConstExprHashingUtils::HashString("AWS::S3::MultiRegionAccessPoint");
        static constexpr uint32_t AWS_S3ObjectLambda_AccessPoint_HASH = ConstExprHashingUtils::HashString("AWS::S3ObjectLambda::AccessPoint");
        static constexpr uint32_t AWS_IAM_AssumeRolePolicyDocument_HASH = ConstExprHashingUtils::HashString("AWS::IAM::AssumeRolePolicyDocument");


        ValidatePolicyResourceType GetValidatePolicyResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_S3_Bucket_HASH)
          {
            return ValidatePolicyResourceType::AWS_S3_Bucket;
          }
          else if (hashCode == AWS_S3_AccessPoint_HASH)
          {
            return ValidatePolicyResourceType::AWS_S3_AccessPoint;
          }
          else if (hashCode == AWS_S3_MultiRegionAccessPoint_HASH)
          {
            return ValidatePolicyResourceType::AWS_S3_MultiRegionAccessPoint;
          }
          else if (hashCode == AWS_S3ObjectLambda_AccessPoint_HASH)
          {
            return ValidatePolicyResourceType::AWS_S3ObjectLambda_AccessPoint;
          }
          else if (hashCode == AWS_IAM_AssumeRolePolicyDocument_HASH)
          {
            return ValidatePolicyResourceType::AWS_IAM_AssumeRolePolicyDocument;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidatePolicyResourceType>(hashCode);
          }

          return ValidatePolicyResourceType::NOT_SET;
        }

        Aws::String GetNameForValidatePolicyResourceType(ValidatePolicyResourceType enumValue)
        {
          switch(enumValue)
          {
          case ValidatePolicyResourceType::NOT_SET:
            return {};
          case ValidatePolicyResourceType::AWS_S3_Bucket:
            return "AWS::S3::Bucket";
          case ValidatePolicyResourceType::AWS_S3_AccessPoint:
            return "AWS::S3::AccessPoint";
          case ValidatePolicyResourceType::AWS_S3_MultiRegionAccessPoint:
            return "AWS::S3::MultiRegionAccessPoint";
          case ValidatePolicyResourceType::AWS_S3ObjectLambda_AccessPoint:
            return "AWS::S3ObjectLambda::AccessPoint";
          case ValidatePolicyResourceType::AWS_IAM_AssumeRolePolicyDocument:
            return "AWS::IAM::AssumeRolePolicyDocument";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidatePolicyResourceTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
