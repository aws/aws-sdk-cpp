/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AccountStatus.h>
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
      namespace AccountStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int PENDING_ACTIVATION_HASH = HashingUtils::HashString("PENDING_ACTIVATION");


        AccountStatus GetAccountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AccountStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AccountStatus::INACTIVE;
          }
          else if (hashCode == PENDING_ACTIVATION_HASH)
          {
            return AccountStatus::PENDING_ACTIVATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountStatus>(hashCode);
          }

          return AccountStatus::NOT_SET;
        }

        Aws::String GetNameForAccountStatus(AccountStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountStatus::NOT_SET:
            return {};
          case AccountStatus::ACTIVE:
            return "ACTIVE";
          case AccountStatus::INACTIVE:
            return "INACTIVE";
          case AccountStatus::PENDING_ACTIVATION:
            return "PENDING_ACTIVATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
