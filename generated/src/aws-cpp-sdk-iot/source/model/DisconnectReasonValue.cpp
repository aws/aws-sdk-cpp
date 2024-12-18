/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DisconnectReasonValue.h>
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
      namespace DisconnectReasonValueMapper
      {

        static const int AUTH_ERROR_HASH = HashingUtils::HashString("AUTH_ERROR");
        static const int CLIENT_INITIATED_DISCONNECT_HASH = HashingUtils::HashString("CLIENT_INITIATED_DISCONNECT");
        static const int CLIENT_ERROR_HASH = HashingUtils::HashString("CLIENT_ERROR");
        static const int CONNECTION_LOST_HASH = HashingUtils::HashString("CONNECTION_LOST");
        static const int DUPLICATE_CLIENTID_HASH = HashingUtils::HashString("DUPLICATE_CLIENTID");
        static const int FORBIDDEN_ACCESS_HASH = HashingUtils::HashString("FORBIDDEN_ACCESS");
        static const int MQTT_KEEP_ALIVE_TIMEOUT_HASH = HashingUtils::HashString("MQTT_KEEP_ALIVE_TIMEOUT");
        static const int SERVER_ERROR_HASH = HashingUtils::HashString("SERVER_ERROR");
        static const int SERVER_INITIATED_DISCONNECT_HASH = HashingUtils::HashString("SERVER_INITIATED_DISCONNECT");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
        static const int WEBSOCKET_TTL_EXPIRATION_HASH = HashingUtils::HashString("WEBSOCKET_TTL_EXPIRATION");
        static const int CUSTOMAUTH_TTL_EXPIRATION_HASH = HashingUtils::HashString("CUSTOMAUTH_TTL_EXPIRATION");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DisconnectReasonValue GetDisconnectReasonValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTH_ERROR_HASH)
          {
            return DisconnectReasonValue::AUTH_ERROR;
          }
          else if (hashCode == CLIENT_INITIATED_DISCONNECT_HASH)
          {
            return DisconnectReasonValue::CLIENT_INITIATED_DISCONNECT;
          }
          else if (hashCode == CLIENT_ERROR_HASH)
          {
            return DisconnectReasonValue::CLIENT_ERROR;
          }
          else if (hashCode == CONNECTION_LOST_HASH)
          {
            return DisconnectReasonValue::CONNECTION_LOST;
          }
          else if (hashCode == DUPLICATE_CLIENTID_HASH)
          {
            return DisconnectReasonValue::DUPLICATE_CLIENTID;
          }
          else if (hashCode == FORBIDDEN_ACCESS_HASH)
          {
            return DisconnectReasonValue::FORBIDDEN_ACCESS;
          }
          else if (hashCode == MQTT_KEEP_ALIVE_TIMEOUT_HASH)
          {
            return DisconnectReasonValue::MQTT_KEEP_ALIVE_TIMEOUT;
          }
          else if (hashCode == SERVER_ERROR_HASH)
          {
            return DisconnectReasonValue::SERVER_ERROR;
          }
          else if (hashCode == SERVER_INITIATED_DISCONNECT_HASH)
          {
            return DisconnectReasonValue::SERVER_INITIATED_DISCONNECT;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return DisconnectReasonValue::THROTTLED;
          }
          else if (hashCode == WEBSOCKET_TTL_EXPIRATION_HASH)
          {
            return DisconnectReasonValue::WEBSOCKET_TTL_EXPIRATION;
          }
          else if (hashCode == CUSTOMAUTH_TTL_EXPIRATION_HASH)
          {
            return DisconnectReasonValue::CUSTOMAUTH_TTL_EXPIRATION;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return DisconnectReasonValue::UNKNOWN;
          }
          else if (hashCode == NONE_HASH)
          {
            return DisconnectReasonValue::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisconnectReasonValue>(hashCode);
          }

          return DisconnectReasonValue::NOT_SET;
        }

        Aws::String GetNameForDisconnectReasonValue(DisconnectReasonValue enumValue)
        {
          switch(enumValue)
          {
          case DisconnectReasonValue::NOT_SET:
            return {};
          case DisconnectReasonValue::AUTH_ERROR:
            return "AUTH_ERROR";
          case DisconnectReasonValue::CLIENT_INITIATED_DISCONNECT:
            return "CLIENT_INITIATED_DISCONNECT";
          case DisconnectReasonValue::CLIENT_ERROR:
            return "CLIENT_ERROR";
          case DisconnectReasonValue::CONNECTION_LOST:
            return "CONNECTION_LOST";
          case DisconnectReasonValue::DUPLICATE_CLIENTID:
            return "DUPLICATE_CLIENTID";
          case DisconnectReasonValue::FORBIDDEN_ACCESS:
            return "FORBIDDEN_ACCESS";
          case DisconnectReasonValue::MQTT_KEEP_ALIVE_TIMEOUT:
            return "MQTT_KEEP_ALIVE_TIMEOUT";
          case DisconnectReasonValue::SERVER_ERROR:
            return "SERVER_ERROR";
          case DisconnectReasonValue::SERVER_INITIATED_DISCONNECT:
            return "SERVER_INITIATED_DISCONNECT";
          case DisconnectReasonValue::THROTTLED:
            return "THROTTLED";
          case DisconnectReasonValue::WEBSOCKET_TTL_EXPIRATION:
            return "WEBSOCKET_TTL_EXPIRATION";
          case DisconnectReasonValue::CUSTOMAUTH_TTL_EXPIRATION:
            return "CUSTOMAUTH_TTL_EXPIRATION";
          case DisconnectReasonValue::UNKNOWN:
            return "UNKNOWN";
          case DisconnectReasonValue::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DisconnectReasonValueMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
