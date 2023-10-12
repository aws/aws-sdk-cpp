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

        static constexpr uint32_t ordering_HASH = ConstExprHashingUtils::HashString("ordering");
        static constexpr uint32_t requested_HASH = ConstExprHashingUtils::HashString("requested");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t down_HASH = ConstExprHashingUtils::HashString("down");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t rejected_HASH = ConstExprHashingUtils::HashString("rejected");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ConnectionState::NOT_SET:
            return {};
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
