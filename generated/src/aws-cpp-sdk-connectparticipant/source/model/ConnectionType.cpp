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

        static constexpr uint32_t WEBSOCKET_HASH = ConstExprHashingUtils::HashString("WEBSOCKET");
        static constexpr uint32_t CONNECTION_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("CONNECTION_CREDENTIALS");


        ConnectionType GetConnectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEBSOCKET_HASH)
          {
            return ConnectionType::WEBSOCKET;
          }
          else if (hashCode == CONNECTION_CREDENTIALS_HASH)
          {
            return ConnectionType::CONNECTION_CREDENTIALS;
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
