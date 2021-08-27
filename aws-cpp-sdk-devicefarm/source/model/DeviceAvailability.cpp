/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace DeviceAvailabilityMapper
      {

        static const int TEMPORARY_NOT_AVAILABLE_HASH = HashingUtils::HashString("TEMPORARY_NOT_AVAILABLE");
        static const int BUSY_HASH = HashingUtils::HashString("BUSY");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int HIGHLY_AVAILABLE_HASH = HashingUtils::HashString("HIGHLY_AVAILABLE");


        DeviceAvailability GetDeviceAvailabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEMPORARY_NOT_AVAILABLE_HASH)
          {
            return DeviceAvailability::TEMPORARY_NOT_AVAILABLE;
          }
          else if (hashCode == BUSY_HASH)
          {
            return DeviceAvailability::BUSY;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DeviceAvailability::AVAILABLE;
          }
          else if (hashCode == HIGHLY_AVAILABLE_HASH)
          {
            return DeviceAvailability::HIGHLY_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceAvailability>(hashCode);
          }

          return DeviceAvailability::NOT_SET;
        }

        Aws::String GetNameForDeviceAvailability(DeviceAvailability enumValue)
        {
          switch(enumValue)
          {
          case DeviceAvailability::TEMPORARY_NOT_AVAILABLE:
            return "TEMPORARY_NOT_AVAILABLE";
          case DeviceAvailability::BUSY:
            return "BUSY";
          case DeviceAvailability::AVAILABLE:
            return "AVAILABLE";
          case DeviceAvailability::HIGHLY_AVAILABLE:
            return "HIGHLY_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceAvailabilityMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
