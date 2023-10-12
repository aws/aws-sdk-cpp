/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/InviteStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace InviteStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Accepted_HASH = ConstExprHashingUtils::HashString("Accepted");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        InviteStatus GetInviteStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return InviteStatus::Pending;
          }
          else if (hashCode == Accepted_HASH)
          {
            return InviteStatus::Accepted;
          }
          else if (hashCode == Failed_HASH)
          {
            return InviteStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InviteStatus>(hashCode);
          }

          return InviteStatus::NOT_SET;
        }

        Aws::String GetNameForInviteStatus(InviteStatus enumValue)
        {
          switch(enumValue)
          {
          case InviteStatus::NOT_SET:
            return {};
          case InviteStatus::Pending:
            return "Pending";
          case InviteStatus::Accepted:
            return "Accepted";
          case InviteStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InviteStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
