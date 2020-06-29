/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace ConnectionStateMapper
      {

        static const int ordering_HASH = HashingUtils::HashString("ordering");
        static const int requested_HASH = HashingUtils::HashString("requested");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int down_HASH = HashingUtils::HashString("down");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int rejected_HASH = HashingUtils::HashString("rejected");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ordering_HASH)
          {
            return ConnectionState::ordering;
          }
          else if (hashCode == requested_HASH)
          {
            return ConnectionState::requested;
          }
          else if (hashCode == pending_HASH)
          {
            return ConnectionState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return ConnectionState::available;
          }
          else if (hashCode == down_HASH)
          {
            return ConnectionState::down;
          }
          else if (hashCode == deleting_HASH)
          {
            return ConnectionState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return ConnectionState::deleted;
          }
          else if (hashCode == rejected_HASH)
          {
            return ConnectionState::rejected;
          }
          else if (hashCode == unknown_HASH)
          {
            return ConnectionState::unknown;
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
          case ConnectionState::ordering:
            return "ordering";
          case ConnectionState::requested:
            return "requested";
          case ConnectionState::pending:
            return "pending";
          case ConnectionState::available:
            return "available";
          case ConnectionState::down:
            return "down";
          case ConnectionState::deleting:
            return "deleting";
          case ConnectionState::deleted:
            return "deleted";
          case ConnectionState::rejected:
            return "rejected";
          case ConnectionState::unknown:
            return "unknown";
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
  } // namespace DirectConnect
} // namespace Aws
