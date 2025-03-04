/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DeviceDiscoveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace DeviceDiscoveryStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        DeviceDiscoveryStatus GetDeviceDiscoveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DeviceDiscoveryStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DeviceDiscoveryStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DeviceDiscoveryStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return DeviceDiscoveryStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceDiscoveryStatus>(hashCode);
          }

          return DeviceDiscoveryStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceDiscoveryStatus(DeviceDiscoveryStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceDiscoveryStatus::NOT_SET:
            return {};
          case DeviceDiscoveryStatus::RUNNING:
            return "RUNNING";
          case DeviceDiscoveryStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DeviceDiscoveryStatus::FAILED:
            return "FAILED";
          case DeviceDiscoveryStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceDiscoveryStatusMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
