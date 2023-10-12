/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AccountRoleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace AccountRoleStatusMapper
      {

        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t PENDING_DELETION_HASH = ConstExprHashingUtils::HashString("PENDING_DELETION");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        AccountRoleStatus GetAccountRoleStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return AccountRoleStatus::READY;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AccountRoleStatus::CREATING;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return AccountRoleStatus::PENDING_DELETION;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AccountRoleStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AccountRoleStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountRoleStatus>(hashCode);
          }

          return AccountRoleStatus::NOT_SET;
        }

        Aws::String GetNameForAccountRoleStatus(AccountRoleStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountRoleStatus::NOT_SET:
            return {};
          case AccountRoleStatus::READY:
            return "READY";
          case AccountRoleStatus::CREATING:
            return "CREATING";
          case AccountRoleStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case AccountRoleStatus::DELETING:
            return "DELETING";
          case AccountRoleStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountRoleStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
