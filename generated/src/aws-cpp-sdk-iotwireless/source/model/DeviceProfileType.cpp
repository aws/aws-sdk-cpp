/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeviceProfileType.h>
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
      namespace DeviceProfileTypeMapper
      {

        static constexpr uint32_t Sidewalk_HASH = ConstExprHashingUtils::HashString("Sidewalk");
        static constexpr uint32_t LoRaWAN_HASH = ConstExprHashingUtils::HashString("LoRaWAN");


        DeviceProfileType GetDeviceProfileTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sidewalk_HASH)
          {
            return DeviceProfileType::Sidewalk;
          }
          else if (hashCode == LoRaWAN_HASH)
          {
            return DeviceProfileType::LoRaWAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceProfileType>(hashCode);
          }

          return DeviceProfileType::NOT_SET;
        }

        Aws::String GetNameForDeviceProfileType(DeviceProfileType enumValue)
        {
          switch(enumValue)
          {
          case DeviceProfileType::NOT_SET:
            return {};
          case DeviceProfileType::Sidewalk:
            return "Sidewalk";
          case DeviceProfileType::LoRaWAN:
            return "LoRaWAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceProfileTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
