/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeviceSettingsSyncState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace DeviceSettingsSyncStateMapper
      {

        static const int SYNCED_HASH = HashingUtils::HashString("SYNCED");
        static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");


        DeviceSettingsSyncState GetDeviceSettingsSyncStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNCED_HASH)
          {
            return DeviceSettingsSyncState::SYNCED;
          }
          else if (hashCode == SYNCING_HASH)
          {
            return DeviceSettingsSyncState::SYNCING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceSettingsSyncState>(hashCode);
          }

          return DeviceSettingsSyncState::NOT_SET;
        }

        Aws::String GetNameForDeviceSettingsSyncState(DeviceSettingsSyncState enumValue)
        {
          switch(enumValue)
          {
          case DeviceSettingsSyncState::SYNCED:
            return "SYNCED";
          case DeviceSettingsSyncState::SYNCING:
            return "SYNCING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceSettingsSyncStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
