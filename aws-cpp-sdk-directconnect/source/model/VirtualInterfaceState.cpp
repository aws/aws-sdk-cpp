/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int confirming_HASH = HashingUtils::HashString("confirming");
        static const int verifying_HASH = HashingUtils::HashString("verifying");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int down_HASH = HashingUtils::HashString("down");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int rejected_HASH = HashingUtils::HashString("rejected");


        VirtualInterfaceState GetVirtualInterfaceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace VirtualInterfaceStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
