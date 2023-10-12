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

        static constexpr uint32_t ARN_HASH = ConstExprHashingUtils::HashString("ARN");
        static constexpr uint32_t PLATFORM_HASH = ConstExprHashingUtils::HashString("PLATFORM");
        static constexpr uint32_t FORM_FACTOR_HASH = ConstExprHashingUtils::HashString("FORM_FACTOR");
        static constexpr uint32_t MANUFACTURER_HASH = ConstExprHashingUtils::HashString("MANUFACTURER");
        static constexpr uint32_t REMOTE_ACCESS_ENABLED_HASH = ConstExprHashingUtils::HashString("REMOTE_ACCESS_ENABLED");
        static constexpr uint32_t REMOTE_DEBUG_ENABLED_HASH = ConstExprHashingUtils::HashString("REMOTE_DEBUG_ENABLED");
        static constexpr uint32_t APPIUM_VERSION_HASH = ConstExprHashingUtils::HashString("APPIUM_VERSION");
        static constexpr uint32_t INSTANCE_ARN_HASH = ConstExprHashingUtils::HashString("INSTANCE_ARN");
        static constexpr uint32_t INSTANCE_LABELS_HASH = ConstExprHashingUtils::HashString("INSTANCE_LABELS");
        static constexpr uint32_t FLEET_TYPE_HASH = ConstExprHashingUtils::HashString("FLEET_TYPE");
        static constexpr uint32_t OS_VERSION_HASH = ConstExprHashingUtils::HashString("OS_VERSION");
        static constexpr uint32_t MODEL_HASH = ConstExprHashingUtils::HashString("MODEL");
        static constexpr uint32_t AVAILABILITY_HASH = ConstExprHashingUtils::HashString("AVAILABILITY");


        DeviceAttribute GetDeviceAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DeviceAttribute::NOT_SET:
            return {};
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
