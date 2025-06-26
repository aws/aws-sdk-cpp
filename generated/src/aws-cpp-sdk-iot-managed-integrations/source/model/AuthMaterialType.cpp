/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AuthMaterialType.h>
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
      namespace AuthMaterialTypeMapper
      {

        static const int CUSTOM_PROTOCOL_QR_BAR_CODE_HASH = HashingUtils::HashString("CUSTOM_PROTOCOL_QR_BAR_CODE");
        static const int WIFI_SETUP_QR_BAR_CODE_HASH = HashingUtils::HashString("WIFI_SETUP_QR_BAR_CODE");
        static const int ZWAVE_QR_BAR_CODE_HASH = HashingUtils::HashString("ZWAVE_QR_BAR_CODE");
        static const int ZIGBEE_QR_BAR_CODE_HASH = HashingUtils::HashString("ZIGBEE_QR_BAR_CODE");
        static const int DISCOVERED_DEVICE_HASH = HashingUtils::HashString("DISCOVERED_DEVICE");


        AuthMaterialType GetAuthMaterialTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_PROTOCOL_QR_BAR_CODE_HASH)
          {
            return AuthMaterialType::CUSTOM_PROTOCOL_QR_BAR_CODE;
          }
          else if (hashCode == WIFI_SETUP_QR_BAR_CODE_HASH)
          {
            return AuthMaterialType::WIFI_SETUP_QR_BAR_CODE;
          }
          else if (hashCode == ZWAVE_QR_BAR_CODE_HASH)
          {
            return AuthMaterialType::ZWAVE_QR_BAR_CODE;
          }
          else if (hashCode == ZIGBEE_QR_BAR_CODE_HASH)
          {
            return AuthMaterialType::ZIGBEE_QR_BAR_CODE;
          }
          else if (hashCode == DISCOVERED_DEVICE_HASH)
          {
            return AuthMaterialType::DISCOVERED_DEVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthMaterialType>(hashCode);
          }

          return AuthMaterialType::NOT_SET;
        }

        Aws::String GetNameForAuthMaterialType(AuthMaterialType enumValue)
        {
          switch(enumValue)
          {
          case AuthMaterialType::NOT_SET:
            return {};
          case AuthMaterialType::CUSTOM_PROTOCOL_QR_BAR_CODE:
            return "CUSTOM_PROTOCOL_QR_BAR_CODE";
          case AuthMaterialType::WIFI_SETUP_QR_BAR_CODE:
            return "WIFI_SETUP_QR_BAR_CODE";
          case AuthMaterialType::ZWAVE_QR_BAR_CODE:
            return "ZWAVE_QR_BAR_CODE";
          case AuthMaterialType::ZIGBEE_QR_BAR_CODE:
            return "ZIGBEE_QR_BAR_CODE";
          case AuthMaterialType::DISCOVERED_DEVICE:
            return "DISCOVERED_DEVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthMaterialTypeMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
