/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/BatteryLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace BatteryLevelMapper
      {

        static const int normal_HASH = HashingUtils::HashString("normal");
        static const int low_HASH = HashingUtils::HashString("low");
        static const int critical_HASH = HashingUtils::HashString("critical");


        BatteryLevel GetBatteryLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == normal_HASH)
          {
            return BatteryLevel::normal;
          }
          else if (hashCode == low_HASH)
          {
            return BatteryLevel::low;
          }
          else if (hashCode == critical_HASH)
          {
            return BatteryLevel::critical;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatteryLevel>(hashCode);
          }

          return BatteryLevel::NOT_SET;
        }

        Aws::String GetNameForBatteryLevel(BatteryLevel enumValue)
        {
          switch(enumValue)
          {
          case BatteryLevel::NOT_SET:
            return {};
          case BatteryLevel::normal:
            return "normal";
          case BatteryLevel::low:
            return "low";
          case BatteryLevel::critical:
            return "critical";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatteryLevelMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
