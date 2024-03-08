/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionResourceType.h>
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
      namespace PositionResourceTypeMapper
      {

        static const int WirelessDevice_HASH = HashingUtils::HashString("WirelessDevice");
        static const int WirelessGateway_HASH = HashingUtils::HashString("WirelessGateway");


        PositionResourceType GetPositionResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WirelessDevice_HASH)
          {
            return PositionResourceType::WirelessDevice;
          }
          else if (hashCode == WirelessGateway_HASH)
          {
            return PositionResourceType::WirelessGateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionResourceType>(hashCode);
          }

          return PositionResourceType::NOT_SET;
        }

        Aws::String GetNameForPositionResourceType(PositionResourceType enumValue)
        {
          switch(enumValue)
          {
          case PositionResourceType::NOT_SET:
            return {};
          case PositionResourceType::WirelessDevice:
            return "WirelessDevice";
          case PositionResourceType::WirelessGateway:
            return "WirelessGateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionResourceTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
