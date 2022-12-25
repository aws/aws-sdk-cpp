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

        static const int AWS_S3_Bucket_HASH = HashingUtils::HashString("AWS::S3::Bucket");
        static const int AWS_S3_AccessPoint_HASH = HashingUtils::HashString("AWS::S3::AccessPoint");
        static const int AWS_S3_MultiRegionAccessPoint_HASH = HashingUtils::HashString("AWS::S3::MultiRegionAccessPoint");
        static const int AWS_S3ObjectLambda_AccessPoint_HASH = HashingUtils::HashString("AWS::S3ObjectLambda::AccessPoint");
        static const int AWS_IAM_AssumeRolePolicyDocument_HASH = HashingUtils::HashString("AWS::IAM::AssumeRolePolicyDocument");


        ValidatePolicyResourceType GetValidatePolicyResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
