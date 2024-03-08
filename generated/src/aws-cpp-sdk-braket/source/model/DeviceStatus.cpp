/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace DeviceStatusMapper
      {

        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int RETIRED_HASH = HashingUtils::HashString("RETIRED");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_HASH)
          {
            return DeviceStatus::ONLINE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return DeviceStatus::OFFLINE;
          }
          else if (hashCode == RETIRED_HASH)
          {
            return DeviceStatus::RETIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatus>(hashCode);
          }

          return DeviceStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceStatus(DeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatus::NOT_SET:
            return {};
          case DeviceStatus::ONLINE:
            return "ONLINE";
          case DeviceStatus::OFFLINE:
            return "OFFLINE";
          case DeviceStatus::RETIRED:
            return "RETIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
