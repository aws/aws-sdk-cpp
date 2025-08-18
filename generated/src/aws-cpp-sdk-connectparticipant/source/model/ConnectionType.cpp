/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/ConnectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ConnectionTypeMapper
      {

        static const int WEBSOCKET_HASH = HashingUtils::HashString("WEBSOCKET");
        static const int CONNECTION_CREDENTIALS_HASH = HashingUtils::HashString("CONNECTION_CREDENTIALS");
        static const int WEBRTC_CONNECTION_HASH = HashingUtils::HashString("WEBRTC_CONNECTION");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEBSOCKET_HASH)
          {
            return ConnectionType::WEBSOCKET;
          }
          else if (hashCode == CONNECTION_CREDENTIALS_HASH)
          {
            return ConnectionType::CONNECTION_CREDENTIALS;
          }
          else if (hashCode == WEBRTC_CONNECTION_HASH)
          {
            return ConnectionType::WEBRTC_CONNECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionType>(hashCode);
          }

          return ConnectionType::NOT_SET;
        }

        Aws::String GetNameForConnectionType(ConnectionType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionType::NOT_SET:
            return {};
          case ConnectionType::WEBSOCKET:
            return "WEBSOCKET";
          case ConnectionType::CONNECTION_CREDENTIALS:
            return "CONNECTION_CREDENTIALS";
          case ConnectionType::WEBRTC_CONNECTION:
            return "WEBRTC_CONNECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionTypeMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
