/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DeviceState.h>
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
      namespace DeviceStateMapper
      {

        static constexpr uint32_t Provisioned_HASH = ConstExprHashingUtils::HashString("Provisioned");
        static constexpr uint32_t RegisteredNotSeen_HASH = ConstExprHashingUtils::HashString("RegisteredNotSeen");
        static constexpr uint32_t RegisteredReachable_HASH = ConstExprHashingUtils::HashString("RegisteredReachable");
        static constexpr uint32_t RegisteredUnreachable_HASH = ConstExprHashingUtils::HashString("RegisteredUnreachable");


        DeviceState GetDeviceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Provisioned_HASH)
          {
            return DeviceState::Provisioned;
          }
          else if (hashCode == RegisteredNotSeen_HASH)
          {
            return DeviceState::RegisteredNotSeen;
          }
          else if (hashCode == RegisteredReachable_HASH)
          {
            return DeviceState::RegisteredReachable;
          }
          else if (hashCode == RegisteredUnreachable_HASH)
          {
            return DeviceState::RegisteredUnreachable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceState>(hashCode);
          }

          return DeviceState::NOT_SET;
        }

        Aws::String GetNameForDeviceState(DeviceState enumValue)
        {
          switch(enumValue)
          {
          case DeviceState::NOT_SET:
            return {};
          case DeviceState::Provisioned:
            return "Provisioned";
          case DeviceState::RegisteredNotSeen:
            return "RegisteredNotSeen";
          case DeviceState::RegisteredReachable:
            return "RegisteredReachable";
          case DeviceState::RegisteredUnreachable:
            return "RegisteredUnreachable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStateMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
