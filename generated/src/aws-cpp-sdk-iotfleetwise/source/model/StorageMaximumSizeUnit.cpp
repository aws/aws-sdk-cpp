/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StorageMaximumSizeUnit.h>
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
      namespace StorageMaximumSizeUnitMapper
      {

        static const int MB_HASH = HashingUtils::HashString("MB");
        static const int GB_HASH = HashingUtils::HashString("GB");
        static const int TB_HASH = HashingUtils::HashString("TB");


        StorageMaximumSizeUnit GetStorageMaximumSizeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MB_HASH)
          {
            return StorageMaximumSizeUnit::MB;
          }
          else if (hashCode == GB_HASH)
          {
            return StorageMaximumSizeUnit::GB;
          }
          else if (hashCode == TB_HASH)
          {
            return StorageMaximumSizeUnit::TB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageMaximumSizeUnit>(hashCode);
          }

          return StorageMaximumSizeUnit::NOT_SET;
        }

        Aws::String GetNameForStorageMaximumSizeUnit(StorageMaximumSizeUnit enumValue)
        {
          switch(enumValue)
          {
          case StorageMaximumSizeUnit::NOT_SET:
            return {};
          case StorageMaximumSizeUnit::MB:
            return "MB";
          case StorageMaximumSizeUnit::GB:
            return "GB";
          case StorageMaximumSizeUnit::TB:
            return "TB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageMaximumSizeUnitMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
