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

        static constexpr uint32_t normal_HASH = ConstExprHashingUtils::HashString("normal");
        static constexpr uint32_t low_HASH = ConstExprHashingUtils::HashString("low");
        static constexpr uint32_t critical_HASH = ConstExprHashingUtils::HashString("critical");


        BatteryLevel GetBatteryLevelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
