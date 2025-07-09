/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/AccountPlanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FreeTier
  {
    namespace Model
    {
      namespace AccountPlanStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        AccountPlanStatus GetAccountPlanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return AccountPlanStatus::NOT_STARTED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AccountPlanStatus::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return AccountPlanStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountPlanStatus>(hashCode);
          }

          return AccountPlanStatus::NOT_SET;
        }

        Aws::String GetNameForAccountPlanStatus(AccountPlanStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountPlanStatus::NOT_SET:
            return {};
          case AccountPlanStatus::NOT_STARTED:
            return "NOT_STARTED";
          case AccountPlanStatus::ACTIVE:
            return "ACTIVE";
          case AccountPlanStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountPlanStatusMapper
    } // namespace Model
  } // namespace FreeTier
} // namespace Aws
