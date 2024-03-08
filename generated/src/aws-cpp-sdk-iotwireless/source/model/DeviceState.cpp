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

        static const int Provisioned_HASH = HashingUtils::HashString("Provisioned");
        static const int RegisteredNotSeen_HASH = HashingUtils::HashString("RegisteredNotSeen");
        static const int RegisteredReachable_HASH = HashingUtils::HashString("RegisteredReachable");
        static const int RegisteredUnreachable_HASH = HashingUtils::HashString("RegisteredUnreachable");


        DeviceState GetDeviceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
