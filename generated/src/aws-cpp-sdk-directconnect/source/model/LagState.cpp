/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/LagState.h>
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
      namespace LagStateMapper
      {

        static const int requested_HASH = HashingUtils::HashString("requested");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int down_HASH = HashingUtils::HashString("down");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int unknown_HASH = HashingUtils::HashString("unknown");


        LagState GetLagStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == requested_HASH)
          {
            return LagState::requested;
          }
          else if (hashCode == pending_HASH)
          {
            return LagState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return LagState::available;
          }
          else if (hashCode == down_HASH)
          {
            return LagState::down;
          }
          else if (hashCode == deleting_HASH)
          {
            return LagState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return LagState::deleted;
          }
          else if (hashCode == unknown_HASH)
          {
            return LagState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LagState>(hashCode);
          }

          return LagState::NOT_SET;
        }

        Aws::String GetNameForLagState(LagState enumValue)
        {
          switch(enumValue)
          {
          case LagState::requested:
            return "requested";
          case LagState::pending:
            return "pending";
          case LagState::available:
            return "available";
          case LagState::down:
            return "down";
          case LagState::deleting:
            return "deleting";
          case LagState::deleted:
            return "deleted";
          case LagState::unknown:
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

      } // namespace LagStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
