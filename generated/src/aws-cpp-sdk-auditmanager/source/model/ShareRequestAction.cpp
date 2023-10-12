/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ShareRequestAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ShareRequestActionMapper
      {

        static constexpr uint32_t ACCEPT_HASH = ConstExprHashingUtils::HashString("ACCEPT");
        static constexpr uint32_t DECLINE_HASH = ConstExprHashingUtils::HashString("DECLINE");
        static constexpr uint32_t REVOKE_HASH = ConstExprHashingUtils::HashString("REVOKE");


        ShareRequestAction GetShareRequestActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_HASH)
          {
            return ShareRequestAction::ACCEPT;
          }
          else if (hashCode == DECLINE_HASH)
          {
            return ShareRequestAction::DECLINE;
          }
          else if (hashCode == REVOKE_HASH)
          {
            return ShareRequestAction::REVOKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareRequestAction>(hashCode);
          }

          return ShareRequestAction::NOT_SET;
        }

        Aws::String GetNameForShareRequestAction(ShareRequestAction enumValue)
        {
          switch(enumValue)
          {
          case ShareRequestAction::NOT_SET:
            return {};
          case ShareRequestAction::ACCEPT:
            return "ACCEPT";
          case ShareRequestAction::DECLINE:
            return "DECLINE";
          case ShareRequestAction::REVOKE:
            return "REVOKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareRequestActionMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
