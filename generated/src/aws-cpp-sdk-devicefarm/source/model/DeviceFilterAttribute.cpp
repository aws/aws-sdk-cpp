/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceFilterAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace DeviceFilterAttributeMapper
      {

        static const int ARN_HASH = HashingUtils::HashString("ARN");
        static const int PLATFORM_HASH = HashingUtils::HashString("PLATFORM");
        static const int OS_VERSION_HASH = HashingUtils::HashString("OS_VERSION");
        static const int MODEL_HASH = HashingUtils::HashString("MODEL");
        static const int AVAILABILITY_HASH = HashingUtils::HashString("AVAILABILITY");
        static const int FORM_FACTOR_HASH = HashingUtils::HashString("FORM_FACTOR");
        static const int MANUFACTURER_HASH = HashingUtils::HashString("MANUFACTURER");
        static const int REMOTE_ACCESS_ENABLED_HASH = HashingUtils::HashString("REMOTE_ACCESS_ENABLED");
        static const int REMOTE_DEBUG_ENABLED_HASH = HashingUtils::HashString("REMOTE_DEBUG_ENABLED");
        static const int INSTANCE_ARN_HASH = HashingUtils::HashString("INSTANCE_ARN");
        static const int INSTANCE_LABELS_HASH = HashingUtils::HashString("INSTANCE_LABELS");
        static const int FLEET_TYPE_HASH = HashingUtils::HashString("FLEET_TYPE");


        DeviceFilterAttribute GetDeviceFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARN_HASH)
          {
            return DeviceFilterAttribute::ARN;
          }
          else if (hashCode == PLATFORM_HASH)
          {
            return DeviceFilterAttribute::PLATFORM;
          }
          else if (hashCode == OS_VERSION_HASH)
          {
            return DeviceFilterAttribute::OS_VERSION;
          }
          else if (hashCode == MODEL_HASH)
          {
            return DeviceFilterAttribute::MODEL;
          }
          else if (hashCode == AVAILABILITY_HASH)
          {
            return DeviceFilterAttribute::AVAILABILITY;
          }
          else if (hashCode == FORM_FACTOR_HASH)
          {
            return DeviceFilterAttribute::FORM_FACTOR;
          }
          else if (hashCode == MANUFACTURER_HASH)
          {
            return DeviceFilterAttribute::MANUFACTURER;
          }
          else if (hashCode == REMOTE_ACCESS_ENABLED_HASH)
          {
            return DeviceFilterAttribute::REMOTE_ACCESS_ENABLED;
          }
          else if (hashCode == REMOTE_DEBUG_ENABLED_HASH)
          {
            return DeviceFilterAttribute::REMOTE_DEBUG_ENABLED;
          }
          else if (hashCode == INSTANCE_ARN_HASH)
          {
            return DeviceFilterAttribute::INSTANCE_ARN;
          }
          else if (hashCode == INSTANCE_LABELS_HASH)
          {
            return DeviceFilterAttribute::INSTANCE_LABELS;
          }
          else if (hashCode == FLEET_TYPE_HASH)
          {
            return DeviceFilterAttribute::FLEET_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceFilterAttribute>(hashCode);
          }

          return DeviceFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForDeviceFilterAttribute(DeviceFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case DeviceFilterAttribute::ARN:
            return "ARN";
          case DeviceFilterAttribute::PLATFORM:
            return "PLATFORM";
          case DeviceFilterAttribute::OS_VERSION:
            return "OS_VERSION";
          case DeviceFilterAttribute::MODEL:
            return "MODEL";
          case DeviceFilterAttribute::AVAILABILITY:
            return "AVAILABILITY";
          case DeviceFilterAttribute::FORM_FACTOR:
            return "FORM_FACTOR";
          case DeviceFilterAttribute::MANUFACTURER:
            return "MANUFACTURER";
          case DeviceFilterAttribute::REMOTE_ACCESS_ENABLED:
            return "REMOTE_ACCESS_ENABLED";
          case DeviceFilterAttribute::REMOTE_DEBUG_ENABLED:
            return "REMOTE_DEBUG_ENABLED";
          case DeviceFilterAttribute::INSTANCE_ARN:
            return "INSTANCE_ARN";
          case DeviceFilterAttribute::INSTANCE_LABELS:
            return "INSTANCE_LABELS";
          case DeviceFilterAttribute::FLEET_TYPE:
            return "FLEET_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceFilterAttributeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
