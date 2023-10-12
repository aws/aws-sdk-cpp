/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/IpRouteStatusMsg.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace IpRouteStatusMsgMapper
      {

        static constexpr uint32_t Adding_HASH = ConstExprHashingUtils::HashString("Adding");
        static constexpr uint32_t Added_HASH = ConstExprHashingUtils::HashString("Added");
        static constexpr uint32_t Removing_HASH = ConstExprHashingUtils::HashString("Removing");
        static constexpr uint32_t Removed_HASH = ConstExprHashingUtils::HashString("Removed");
        static constexpr uint32_t AddFailed_HASH = ConstExprHashingUtils::HashString("AddFailed");
        static constexpr uint32_t RemoveFailed_HASH = ConstExprHashingUtils::HashString("RemoveFailed");


        IpRouteStatusMsg GetIpRouteStatusMsgForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Adding_HASH)
          {
            return IpRouteStatusMsg::Adding;
          }
          else if (hashCode == Added_HASH)
          {
            return IpRouteStatusMsg::Added;
          }
          else if (hashCode == Removing_HASH)
          {
            return IpRouteStatusMsg::Removing;
          }
          else if (hashCode == Removed_HASH)
          {
            return IpRouteStatusMsg::Removed;
          }
          else if (hashCode == AddFailed_HASH)
          {
            return IpRouteStatusMsg::AddFailed;
          }
          else if (hashCode == RemoveFailed_HASH)
          {
            return IpRouteStatusMsg::RemoveFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpRouteStatusMsg>(hashCode);
          }

          return IpRouteStatusMsg::NOT_SET;
        }

        Aws::String GetNameForIpRouteStatusMsg(IpRouteStatusMsg enumValue)
        {
          switch(enumValue)
          {
          case IpRouteStatusMsg::NOT_SET:
            return {};
          case IpRouteStatusMsg::Adding:
            return "Adding";
          case IpRouteStatusMsg::Added:
            return "Added";
          case IpRouteStatusMsg::Removing:
            return "Removing";
          case IpRouteStatusMsg::Removed:
            return "Removed";
          case IpRouteStatusMsg::AddFailed:
            return "AddFailed";
          case IpRouteStatusMsg::RemoveFailed:
            return "RemoveFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpRouteStatusMsgMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
