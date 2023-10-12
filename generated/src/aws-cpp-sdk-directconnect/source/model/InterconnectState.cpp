/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/InterconnectState.h>
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
      namespace InterconnectStateMapper
      {

        static constexpr uint32_t requested_HASH = ConstExprHashingUtils::HashString("requested");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t down_HASH = ConstExprHashingUtils::HashString("down");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        InterconnectState GetInterconnectStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == requested_HASH)
          {
            return InterconnectState::requested;
          }
          else if (hashCode == pending_HASH)
          {
            return InterconnectState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return InterconnectState::available;
          }
          else if (hashCode == down_HASH)
          {
            return InterconnectState::down;
          }
          else if (hashCode == deleting_HASH)
          {
            return InterconnectState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return InterconnectState::deleted;
          }
          else if (hashCode == unknown_HASH)
          {
            return InterconnectState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterconnectState>(hashCode);
          }

          return InterconnectState::NOT_SET;
        }

        Aws::String GetNameForInterconnectState(InterconnectState enumValue)
        {
          switch(enumValue)
          {
          case InterconnectState::NOT_SET:
            return {};
          case InterconnectState::requested:
            return "requested";
          case InterconnectState::pending:
            return "pending";
          case InterconnectState::available:
            return "available";
          case InterconnectState::down:
            return "down";
          case InterconnectState::deleting:
            return "deleting";
          case InterconnectState::deleted:
            return "deleted";
          case InterconnectState::unknown:
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

      } // namespace InterconnectStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
