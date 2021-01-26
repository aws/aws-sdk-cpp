/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DeviceStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int WAS_OFFLINE_HASH = HashingUtils::HashString("WAS_OFFLINE");
        static const int DEREGISTERED_HASH = HashingUtils::HashString("DEREGISTERED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DeviceStatus GetDeviceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return DeviceStatus::READY;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DeviceStatus::PENDING;
          }
          else if (hashCode == WAS_OFFLINE_HASH)
          {
            return DeviceStatus::WAS_OFFLINE;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return DeviceStatus::DEREGISTERED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeviceStatus::FAILED;
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
          case DeviceStatus::READY:
            return "READY";
          case DeviceStatus::PENDING:
            return "PENDING";
          case DeviceStatus::WAS_OFFLINE:
            return "WAS_OFFLINE";
          case DeviceStatus::DEREGISTERED:
            return "DEREGISTERED";
          case DeviceStatus::FAILED:
            return "FAILED";
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
  } // namespace AlexaForBusiness
} // namespace Aws
