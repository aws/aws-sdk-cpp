/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TimeSeriesEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace TimeSeriesEntityTypeMapper
      {

        static const int ASSET_HASH = HashingUtils::HashString("ASSET");
        static const int LISTING_HASH = HashingUtils::HashString("LISTING");


        TimeSeriesEntityType GetTimeSeriesEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSET_HASH)
          {
            return TimeSeriesEntityType::ASSET;
          }
          else if (hashCode == LISTING_HASH)
          {
            return TimeSeriesEntityType::LISTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeSeriesEntityType>(hashCode);
          }

          return TimeSeriesEntityType::NOT_SET;
        }

        Aws::String GetNameForTimeSeriesEntityType(TimeSeriesEntityType enumValue)
        {
          switch(enumValue)
          {
          case TimeSeriesEntityType::NOT_SET:
            return {};
          case TimeSeriesEntityType::ASSET:
            return "ASSET";
          case TimeSeriesEntityType::LISTING:
            return "LISTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeSeriesEntityTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
