/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ApplicationProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ApplicationProtocolMapper
      {

        static const int SECURE_MQTT_HASH = HashingUtils::HashString("SECURE_MQTT");
        static const int MQTT_WSS_HASH = HashingUtils::HashString("MQTT_WSS");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        ApplicationProtocol GetApplicationProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECURE_MQTT_HASH)
          {
            return ApplicationProtocol::SECURE_MQTT;
          }
          else if (hashCode == MQTT_WSS_HASH)
          {
            return ApplicationProtocol::MQTT_WSS;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return ApplicationProtocol::HTTPS;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return ApplicationProtocol::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationProtocol>(hashCode);
          }

          return ApplicationProtocol::NOT_SET;
        }

        Aws::String GetNameForApplicationProtocol(ApplicationProtocol enumValue)
        {
          switch(enumValue)
          {
          case ApplicationProtocol::NOT_SET:
            return {};
          case ApplicationProtocol::SECURE_MQTT:
            return "SECURE_MQTT";
          case ApplicationProtocol::MQTT_WSS:
            return "MQTT_WSS";
          case ApplicationProtocol::HTTPS:
            return "HTTPS";
          case ApplicationProtocol::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationProtocolMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
