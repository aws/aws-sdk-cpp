/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DownlinkMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace DownlinkModeMapper
      {

        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");
        static const int CONCURRENT_HASH = HashingUtils::HashString("CONCURRENT");
        static const int USING_UPLINK_GATEWAY_HASH = HashingUtils::HashString("USING_UPLINK_GATEWAY");


        DownlinkMode GetDownlinkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEQUENTIAL_HASH)
          {
            return DownlinkMode::SEQUENTIAL;
          }
          else if (hashCode == CONCURRENT_HASH)
          {
            return DownlinkMode::CONCURRENT;
          }
          else if (hashCode == USING_UPLINK_GATEWAY_HASH)
          {
            return DownlinkMode::USING_UPLINK_GATEWAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DownlinkMode>(hashCode);
          }

          return DownlinkMode::NOT_SET;
        }

        Aws::String GetNameForDownlinkMode(DownlinkMode enumValue)
        {
          switch(enumValue)
          {
          case DownlinkMode::SEQUENTIAL:
            return "SEQUENTIAL";
          case DownlinkMode::CONCURRENT:
            return "CONCURRENT";
          case DownlinkMode::USING_UPLINK_GATEWAY:
            return "USING_UPLINK_GATEWAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DownlinkModeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
