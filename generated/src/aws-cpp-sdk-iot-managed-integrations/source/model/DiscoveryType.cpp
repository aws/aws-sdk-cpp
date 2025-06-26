/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DiscoveryType.h>
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
      namespace DiscoveryTypeMapper
      {

        static const int ZWAVE_HASH = HashingUtils::HashString("ZWAVE");
        static const int ZIGBEE_HASH = HashingUtils::HashString("ZIGBEE");
        static const int CLOUD_HASH = HashingUtils::HashString("CLOUD");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        DiscoveryType GetDiscoveryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZWAVE_HASH)
          {
            return DiscoveryType::ZWAVE;
          }
          else if (hashCode == ZIGBEE_HASH)
          {
            return DiscoveryType::ZIGBEE;
          }
          else if (hashCode == CLOUD_HASH)
          {
            return DiscoveryType::CLOUD;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return DiscoveryType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiscoveryType>(hashCode);
          }

          return DiscoveryType::NOT_SET;
        }

        Aws::String GetNameForDiscoveryType(DiscoveryType enumValue)
        {
          switch(enumValue)
          {
          case DiscoveryType::NOT_SET:
            return {};
          case DiscoveryType::ZWAVE:
            return "ZWAVE";
          case DiscoveryType::ZIGBEE:
            return "ZIGBEE";
          case DiscoveryType::CLOUD:
            return "CLOUD";
          case DiscoveryType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiscoveryTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
