/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace DatasetDataFormatMapper
      {

        static constexpr uint32_t COMPREHEND_CSV_HASH = ConstExprHashingUtils::HashString("COMPREHEND_CSV");
        static constexpr uint32_t AUGMENTED_MANIFEST_HASH = ConstExprHashingUtils::HashString("AUGMENTED_MANIFEST");


        DatasetDataFormat GetDatasetDataFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPREHEND_CSV_HASH)
          {
            return DatasetDataFormat::COMPREHEND_CSV;
          }
          else if (hashCode == AUGMENTED_MANIFEST_HASH)
          {
            return DatasetDataFormat::AUGMENTED_MANIFEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetDataFormat>(hashCode);
          }

          return DatasetDataFormat::NOT_SET;
        }

        Aws::String GetNameForDatasetDataFormat(DatasetDataFormat enumValue)
        {
          switch(enumValue)
          {
          case DatasetDataFormat::NOT_SET:
            return {};
          case DatasetDataFormat::COMPREHEND_CSV:
            return "COMPREHEND_CSV";
          case DatasetDataFormat::AUGMENTED_MANIFEST:
            return "AUGMENTED_MANIFEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetDataFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
