/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeviceDefenderIndexingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DeviceDefenderIndexingModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int VIOLATIONS_HASH = HashingUtils::HashString("VIOLATIONS");


        DeviceDefenderIndexingMode GetDeviceDefenderIndexingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return DeviceDefenderIndexingMode::OFF;
          }
          else if (hashCode == VIOLATIONS_HASH)
          {
            return DeviceDefenderIndexingMode::VIOLATIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceDefenderIndexingMode>(hashCode);
          }

          return DeviceDefenderIndexingMode::NOT_SET;
        }

        Aws::String GetNameForDeviceDefenderIndexingMode(DeviceDefenderIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case DeviceDefenderIndexingMode::NOT_SET:
            return {};
          case DeviceDefenderIndexingMode::OFF:
            return "OFF";
          case DeviceDefenderIndexingMode::VIOLATIONS:
            return "VIOLATIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceDefenderIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
