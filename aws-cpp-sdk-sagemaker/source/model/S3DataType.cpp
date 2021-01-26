/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3DataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace S3DataTypeMapper
      {

        static const int ManifestFile_HASH = HashingUtils::HashString("ManifestFile");
        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");
        static const int AugmentedManifestFile_HASH = HashingUtils::HashString("AugmentedManifestFile");


        S3DataType GetS3DataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ManifestFile_HASH)
          {
            return S3DataType::ManifestFile;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return S3DataType::S3Prefix;
          }
          else if (hashCode == AugmentedManifestFile_HASH)
          {
            return S3DataType::AugmentedManifestFile;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3DataType>(hashCode);
          }

          return S3DataType::NOT_SET;
        }

        Aws::String GetNameForS3DataType(S3DataType enumValue)
        {
          switch(enumValue)
          {
          case S3DataType::ManifestFile:
            return "ManifestFile";
          case S3DataType::S3Prefix:
            return "S3Prefix";
          case S3DataType::AugmentedManifestFile:
            return "AugmentedManifestFile";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3DataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
