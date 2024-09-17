/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/DimensionName.h>
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
      namespace DimensionNameMapper
      {

        static const int DeviceId_HASH = HashingUtils::HashString("DeviceId");
        static const int GatewayId_HASH = HashingUtils::HashString("GatewayId");


        DimensionName GetDimensionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeviceId_HASH)
          {
            return DimensionName::DeviceId;
          }
          else if (hashCode == GatewayId_HASH)
          {
            return DimensionName::GatewayId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionName>(hashCode);
          }

          return DimensionName::NOT_SET;
        }

        Aws::String GetNameForDimensionName(DimensionName enumValue)
        {
          switch(enumValue)
          {
          case DimensionName::NOT_SET:
            return {};
          case DimensionName::DeviceId:
            return "DeviceId";
          case DimensionName::GatewayId:
            return "GatewayId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionNameMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
