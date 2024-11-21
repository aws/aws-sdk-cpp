/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StorageMinimumTimeToLiveUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace StorageMinimumTimeToLiveUnitMapper
      {

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");


        StorageMinimumTimeToLiveUnit GetStorageMinimumTimeToLiveUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return StorageMinimumTimeToLiveUnit::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return StorageMinimumTimeToLiveUnit::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return StorageMinimumTimeToLiveUnit::WEEKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageMinimumTimeToLiveUnit>(hashCode);
          }

          return StorageMinimumTimeToLiveUnit::NOT_SET;
        }

        Aws::String GetNameForStorageMinimumTimeToLiveUnit(StorageMinimumTimeToLiveUnit enumValue)
        {
          switch(enumValue)
          {
          case StorageMinimumTimeToLiveUnit::NOT_SET:
            return {};
          case StorageMinimumTimeToLiveUnit::HOURS:
            return "HOURS";
          case StorageMinimumTimeToLiveUnit::DAYS:
            return "DAYS";
          case StorageMinimumTimeToLiveUnit::WEEKS:
            return "WEEKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageMinimumTimeToLiveUnitMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
