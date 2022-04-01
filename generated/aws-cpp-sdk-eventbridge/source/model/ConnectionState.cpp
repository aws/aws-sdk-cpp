/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ConnectionStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int AUTHORIZED_HASH = HashingUtils::HashString("AUTHORIZED");
        static const int DEAUTHORIZED_HASH = HashingUtils::HashString("DEAUTHORIZED");
        static const int AUTHORIZING_HASH = HashingUtils::HashString("AUTHORIZING");
        static const int DEAUTHORIZING_HASH = HashingUtils::HashString("DEAUTHORIZING");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ConnectionState::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ConnectionState::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ConnectionState::DELETING;
          }
          else if (hashCode == AUTHORIZED_HASH)
          {
            return ConnectionState::AUTHORIZED;
          }
          else if (hashCode == DEAUTHORIZED_HASH)
          {
            return ConnectionState::DEAUTHORIZED;
          }
          else if (hashCode == AUTHORIZING_HASH)
          {
            return ConnectionState::AUTHORIZING;
          }
          else if (hashCode == DEAUTHORIZING_HASH)
          {
            return ConnectionState::DEAUTHORIZING;
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
          case ConnectionState::CREATING:
            return "CREATING";
          case ConnectionState::UPDATING:
            return "UPDATING";
          case ConnectionState::DELETING:
            return "DELETING";
          case ConnectionState::AUTHORIZED:
            return "AUTHORIZED";
          case ConnectionState::DEAUTHORIZED:
            return "DEAUTHORIZED";
          case ConnectionState::AUTHORIZING:
            return "AUTHORIZING";
          case ConnectionState::DEAUTHORIZING:
            return "DEAUTHORIZING";
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
  } // namespace EventBridge
} // namespace Aws
