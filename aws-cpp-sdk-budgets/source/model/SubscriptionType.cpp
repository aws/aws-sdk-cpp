/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/SubscriptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace SubscriptionTypeMapper
      {

        static const int SNS_HASH = HashingUtils::HashString("SNS");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        SubscriptionType GetSubscriptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNS_HASH)
          {
            return SubscriptionType::SNS;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return SubscriptionType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionType>(hashCode);
          }

          return SubscriptionType::NOT_SET;
        }

        Aws::String GetNameForSubscriptionType(SubscriptionType enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionType::SNS:
            return "SNS";
          case SubscriptionType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
