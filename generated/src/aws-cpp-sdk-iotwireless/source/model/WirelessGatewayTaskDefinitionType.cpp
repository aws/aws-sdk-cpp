/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/WirelessGatewayTaskDefinitionType.h>
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
      namespace WirelessGatewayTaskDefinitionTypeMapper
      {

        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");


        WirelessGatewayTaskDefinitionType GetWirelessGatewayTaskDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_HASH)
          {
            return WirelessGatewayTaskDefinitionType::UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WirelessGatewayTaskDefinitionType>(hashCode);
          }

          return WirelessGatewayTaskDefinitionType::NOT_SET;
        }

        Aws::String GetNameForWirelessGatewayTaskDefinitionType(WirelessGatewayTaskDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case WirelessGatewayTaskDefinitionType::NOT_SET:
            return {};
          case WirelessGatewayTaskDefinitionType::UPDATE:
            return "UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WirelessGatewayTaskDefinitionTypeMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
