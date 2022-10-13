/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace DeviceAggregatedStatusMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int AWAITING_PROVISIONING_HASH = HashingUtils::HashString("AWAITING_PROVISIONING");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int LEASE_EXPIRED_HASH = HashingUtils::HashString("LEASE_EXPIRED");
        static const int UPDATE_NEEDED_HASH = HashingUtils::HashString("UPDATE_NEEDED");
        static const int REBOOTING_HASH = HashingUtils::HashString("REBOOTING");


        DeviceAggregatedStatus GetDeviceAggregatedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return DeviceAggregatedStatus::ERROR_;
          }
          else if (hashCode == AWAITING_PROVISIONING_HASH)
          {
            return DeviceAggregatedStatus::AWAITING_PROVISIONING;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeviceAggregatedStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeviceAggregatedStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DeviceAggregatedStatus::DELETING;
          }
          else if (hashCode == ONLINE_HASH)
          {
            return DeviceAggregatedStatus::ONLINE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return DeviceAggregatedStatus::OFFLINE;
          }
          else if (hashCode == LEASE_EXPIRED_HASH)
          {
            return DeviceAggregatedStatus::LEASE_EXPIRED;
          }
          else if (hashCode == UPDATE_NEEDED_HASH)
          {
            return DeviceAggregatedStatus::UPDATE_NEEDED;
          }
          else if (hashCode == REBOOTING_HASH)
          {
            return DeviceAggregatedStatus::REBOOTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceAggregatedStatus>(hashCode);
          }

          return DeviceAggregatedStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceAggregatedStatus(DeviceAggregatedStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceAggregatedStatus::ERROR_:
            return "ERROR";
          case DeviceAggregatedStatus::AWAITING_PROVISIONING:
            return "AWAITING_PROVISIONING";
          case DeviceAggregatedStatus::PENDING:
            return "PENDING";
          case DeviceAggregatedStatus::FAILED:
            return "FAILED";
          case DeviceAggregatedStatus::DELETING:
            return "DELETING";
          case DeviceAggregatedStatus::ONLINE:
            return "ONLINE";
          case DeviceAggregatedStatus::OFFLINE:
            return "OFFLINE";
          case DeviceAggregatedStatus::LEASE_EXPIRED:
            return "LEASE_EXPIRED";
          case DeviceAggregatedStatus::UPDATE_NEEDED:
            return "UPDATE_NEEDED";
          case DeviceAggregatedStatus::REBOOTING:
            return "REBOOTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceAggregatedStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
