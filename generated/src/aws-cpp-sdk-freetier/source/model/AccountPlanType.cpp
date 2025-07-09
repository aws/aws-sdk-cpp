/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/AccountPlanType.h>
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
      namespace AccountPlanTypeMapper
      {

        static const int FREE_HASH = HashingUtils::HashString("FREE");
        static const int PAID_HASH = HashingUtils::HashString("PAID");


        AccountPlanType GetAccountPlanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FREE_HASH)
          {
            return AccountPlanType::FREE;
          }
          else if (hashCode == PAID_HASH)
          {
            return AccountPlanType::PAID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountPlanType>(hashCode);
          }

          return AccountPlanType::NOT_SET;
        }

        Aws::String GetNameForAccountPlanType(AccountPlanType enumValue)
        {
          switch(enumValue)
          {
          case AccountPlanType::NOT_SET:
            return {};
          case AccountPlanType::FREE:
            return "FREE";
          case AccountPlanType::PAID:
            return "PAID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountPlanTypeMapper
    } // namespace Model
  } // namespace FreeTier
} // namespace Aws
