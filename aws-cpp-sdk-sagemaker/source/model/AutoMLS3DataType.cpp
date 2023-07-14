/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLS3DataType.h>
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
      namespace AutoMLS3DataTypeMapper
      {

        static const int ManifestFile_HASH = HashingUtils::HashString("ManifestFile");
        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");


        AutoMLS3DataType GetAutoMLS3DataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ManifestFile_HASH)
          {
            return AutoMLS3DataType::ManifestFile;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return AutoMLS3DataType::S3Prefix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLS3DataType>(hashCode);
          }

          return AutoMLS3DataType::NOT_SET;
        }

        Aws::String GetNameForAutoMLS3DataType(AutoMLS3DataType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLS3DataType::ManifestFile:
            return "ManifestFile";
          case AutoMLS3DataType::S3Prefix:
            return "S3Prefix";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLS3DataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
