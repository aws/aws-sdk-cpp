/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AccountStatus.h>
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
      namespace AccountStatusMapper
      {

        static const int Suspended_HASH = HashingUtils::HashString("Suspended");
        static const int Active_HASH = HashingUtils::HashString("Active");


        AccountStatus GetAccountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Suspended_HASH)
          {
            return AccountStatus::Suspended;
          }
          else if (hashCode == Active_HASH)
          {
            return AccountStatus::Active;
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
          case AccountStatus::Suspended:
            return "Suspended";
          case AccountStatus::Active:
            return "Active";
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
  } // namespace Chime
} // namespace Aws
