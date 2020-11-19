/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DeviceUpdateStatus.h>
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
      namespace DeviceUpdateStatusMapper
      {

        static const int UP_TO_DATE_HASH = HashingUtils::HashString("UP_TO_DATE");
        static const int NOT_UP_TO_DATE_HASH = HashingUtils::HashString("NOT_UP_TO_DATE");


        DeviceUpdateStatus GetDeviceUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UP_TO_DATE_HASH)
          {
            return DeviceUpdateStatus::UP_TO_DATE;
          }
          else if (hashCode == NOT_UP_TO_DATE_HASH)
          {
            return DeviceUpdateStatus::NOT_UP_TO_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceUpdateStatus>(hashCode);
          }

          return DeviceUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForDeviceUpdateStatus(DeviceUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case DeviceUpdateStatus::UP_TO_DATE:
            return "UP_TO_DATE";
          case DeviceUpdateStatus::NOT_UP_TO_DATE:
            return "NOT_UP_TO_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceUpdateStatusMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
