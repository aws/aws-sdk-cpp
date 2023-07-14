/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeviceEventType.h>
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
      namespace DeviceEventTypeMapper
      {

        static const int CONNECTION_STATUS_HASH = HashingUtils::HashString("CONNECTION_STATUS");
        static const int DEVICE_STATUS_HASH = HashingUtils::HashString("DEVICE_STATUS");


        DeviceEventType GetDeviceEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTION_STATUS_HASH)
          {
            return DeviceEventType::CONNECTION_STATUS;
          }
          else if (hashCode == DEVICE_STATUS_HASH)
          {
            return DeviceEventType::DEVICE_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceEventType>(hashCode);
          }

          return DeviceEventType::NOT_SET;
        }

        Aws::String GetNameForDeviceEventType(DeviceEventType enumValue)
        {
          switch(enumValue)
          {
          case DeviceEventType::CONNECTION_STATUS:
            return "CONNECTION_STATUS";
          case DeviceEventType::DEVICE_STATUS:
            return "DEVICE_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceEventTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
