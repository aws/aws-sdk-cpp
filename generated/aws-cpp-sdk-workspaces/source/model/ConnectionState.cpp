/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ConnectionStateMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ConnectionState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ConnectionState::DISCONNECTED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ConnectionState::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionState>(hashCode);
          }

          return ConnectionState::NOT_SET;
        }

        Aws::String GetNameForConnectionState(ConnectionState enumValue)
        {
          switch(enumValue)
          {
          case ConnectionState::CONNECTED:
            return "CONNECTED";
          case ConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          case ConnectionState::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
