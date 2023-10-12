/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DatasetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace DatasetTypeMapper
      {

        static constexpr uint32_t TARGET_TIME_SERIES_HASH = ConstExprHashingUtils::HashString("TARGET_TIME_SERIES");
        static constexpr uint32_t RELATED_TIME_SERIES_HASH = ConstExprHashingUtils::HashString("RELATED_TIME_SERIES");
        static constexpr uint32_t ITEM_METADATA_HASH = ConstExprHashingUtils::HashString("ITEM_METADATA");


        DatasetType GetDatasetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TARGET_TIME_SERIES_HASH)
          {
            return DatasetType::TARGET_TIME_SERIES;
          }
          else if (hashCode == RELATED_TIME_SERIES_HASH)
          {
            return DatasetType::RELATED_TIME_SERIES;
          }
          else if (hashCode == ITEM_METADATA_HASH)
          {
            return DatasetType::ITEM_METADATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatasetType>(hashCode);
          }

          return DatasetType::NOT_SET;
        }

        Aws::String GetNameForDatasetType(DatasetType enumValue)
        {
          switch(enumValue)
          {
          case DatasetType::NOT_SET:
            return {};
          case DatasetType::TARGET_TIME_SERIES:
            return "TARGET_TIME_SERIES";
          case DatasetType::RELATED_TIME_SERIES:
            return "RELATED_TIME_SERIES";
          case DatasetType::ITEM_METADATA:
            return "ITEM_METADATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatasetTypeMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
