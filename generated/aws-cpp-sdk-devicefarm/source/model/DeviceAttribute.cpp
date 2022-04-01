/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceAttribute.h>
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
      namespace DeviceAttributeMapper
      {

        static const int ARN_HASH = HashingUtils::HashString("ARN");
        static const int PLATFORM_HASH = HashingUtils::HashString("PLATFORM");
        static const int FORM_FACTOR_HASH = HashingUtils::HashString("FORM_FACTOR");
        static const int MANUFACTURER_HASH = HashingUtils::HashString("MANUFACTURER");
        static const int REMOTE_ACCESS_ENABLED_HASH = HashingUtils::HashString("REMOTE_ACCESS_ENABLED");
        static const int REMOTE_DEBUG_ENABLED_HASH = HashingUtils::HashString("REMOTE_DEBUG_ENABLED");
        static const int APPIUM_VERSION_HASH = HashingUtils::HashString("APPIUM_VERSION");
        static const int INSTANCE_ARN_HASH = HashingUtils::HashString("INSTANCE_ARN");
        static const int INSTANCE_LABELS_HASH = HashingUtils::HashString("INSTANCE_LABELS");
        static const int FLEET_TYPE_HASH = HashingUtils::HashString("FLEET_TYPE");
        static const int OS_VERSION_HASH = HashingUtils::HashString("OS_VERSION");
        static const int MODEL_HASH = HashingUtils::HashString("MODEL");
        static const int AVAILABILITY_HASH = HashingUtils::HashString("AVAILABILITY");


        DeviceAttribute GetDeviceAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARN_HASH)
          {
            return DeviceAttribute::ARN;
          }
          else if (hashCode == PLATFORM_HASH)
          {
            return DeviceAttribute::PLATFORM;
          }
          else if (hashCode == FORM_FACTOR_HASH)
          {
            return DeviceAttribute::FORM_FACTOR;
          }
          else if (hashCode == MANUFACTURER_HASH)
          {
            return DeviceAttribute::MANUFACTURER;
          }
          else if (hashCode == REMOTE_ACCESS_ENABLED_HASH)
          {
            return DeviceAttribute::REMOTE_ACCESS_ENABLED;
          }
          else if (hashCode == REMOTE_DEBUG_ENABLED_HASH)
          {
            return DeviceAttribute::REMOTE_DEBUG_ENABLED;
          }
          else if (hashCode == APPIUM_VERSION_HASH)
          {
            return DeviceAttribute::APPIUM_VERSION;
          }
          else if (hashCode == INSTANCE_ARN_HASH)
          {
            return DeviceAttribute::INSTANCE_ARN;
          }
          else if (hashCode == INSTANCE_LABELS_HASH)
          {
            return DeviceAttribute::INSTANCE_LABELS;
          }
          else if (hashCode == FLEET_TYPE_HASH)
          {
            return DeviceAttribute::FLEET_TYPE;
          }
          else if (hashCode == OS_VERSION_HASH)
          {
            return DeviceAttribute::OS_VERSION;
          }
          else if (hashCode == MODEL_HASH)
          {
            return DeviceAttribute::MODEL;
          }
          else if (hashCode == AVAILABILITY_HASH)
          {
            return DeviceAttribute::AVAILABILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceAttribute>(hashCode);
          }

          return DeviceAttribute::NOT_SET;
        }

        Aws::String GetNameForDeviceAttribute(DeviceAttribute enumValue)
        {
          switch(enumValue)
          {
          case DeviceAttribute::ARN:
            return "ARN";
          case DeviceAttribute::PLATFORM:
            return "PLATFORM";
          case DeviceAttribute::FORM_FACTOR:
            return "FORM_FACTOR";
          case DeviceAttribute::MANUFACTURER:
            return "MANUFACTURER";
          case DeviceAttribute::REMOTE_ACCESS_ENABLED:
            return "REMOTE_ACCESS_ENABLED";
          case DeviceAttribute::REMOTE_DEBUG_ENABLED:
            return "REMOTE_DEBUG_ENABLED";
          case DeviceAttribute::APPIUM_VERSION:
            return "APPIUM_VERSION";
          case DeviceAttribute::INSTANCE_ARN:
            return "INSTANCE_ARN";
          case DeviceAttribute::INSTANCE_LABELS:
            return "INSTANCE_LABELS";
          case DeviceAttribute::FLEET_TYPE:
            return "FLEET_TYPE";
          case DeviceAttribute::OS_VERSION:
            return "OS_VERSION";
          case DeviceAttribute::MODEL:
            return "MODEL";
          case DeviceAttribute::AVAILABILITY:
            return "AVAILABILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceAttributeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
