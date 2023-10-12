/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/VirtualInterfaceState.h>
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
      namespace VirtualInterfaceStateMapper
      {

        static constexpr uint32_t confirming_HASH = ConstExprHashingUtils::HashString("confirming");
        static constexpr uint32_t verifying_HASH = ConstExprHashingUtils::HashString("verifying");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t down_HASH = ConstExprHashingUtils::HashString("down");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");
        static constexpr uint32_t rejected_HASH = ConstExprHashingUtils::HashString("rejected");
        static constexpr uint32_t unknown_HASH = ConstExprHashingUtils::HashString("unknown");


        VirtualInterfaceState GetVirtualInterfaceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == confirming_HASH)
          {
            return VirtualInterfaceState::confirming;
          }
          else if (hashCode == verifying_HASH)
          {
            return VirtualInterfaceState::verifying;
          }
          else if (hashCode == pending_HASH)
          {
            return VirtualInterfaceState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return VirtualInterfaceState::available;
          }
          else if (hashCode == down_HASH)
          {
            return VirtualInterfaceState::down;
          }
          else if (hashCode == deleting_HASH)
          {
            return VirtualInterfaceState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return VirtualInterfaceState::deleted;
          }
          else if (hashCode == rejected_HASH)
          {
            return VirtualInterfaceState::rejected;
          }
          else if (hashCode == unknown_HASH)
          {
            return VirtualInterfaceState::unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualInterfaceState>(hashCode);
          }

          return VirtualInterfaceState::NOT_SET;
        }

        Aws::String GetNameForVirtualInterfaceState(VirtualInterfaceState enumValue)
        {
          switch(enumValue)
          {
          case VirtualInterfaceState::NOT_SET:
            return {};
          case VirtualInterfaceState::confirming:
            return "confirming";
          case VirtualInterfaceState::verifying:
            return "verifying";
          case VirtualInterfaceState::pending:
            return "pending";
          case VirtualInterfaceState::available:
            return "available";
          case VirtualInterfaceState::down:
            return "down";
          case VirtualInterfaceState::deleting:
            return "deleting";
          case VirtualInterfaceState::deleted:
            return "deleted";
          case VirtualInterfaceState::rejected:
            return "rejected";
          case VirtualInterfaceState::unknown:
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

      } // namespace VirtualInterfaceStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
