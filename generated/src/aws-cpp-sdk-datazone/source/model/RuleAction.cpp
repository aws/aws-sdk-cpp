/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace RuleActionMapper
      {

        static const int CREATE_LISTING_CHANGE_SET_HASH = HashingUtils::HashString("CREATE_LISTING_CHANGE_SET");
        static const int CREATE_SUBSCRIPTION_REQUEST_HASH = HashingUtils::HashString("CREATE_SUBSCRIPTION_REQUEST");


        RuleAction GetRuleActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_LISTING_CHANGE_SET_HASH)
          {
            return RuleAction::CREATE_LISTING_CHANGE_SET;
          }
          else if (hashCode == CREATE_SUBSCRIPTION_REQUEST_HASH)
          {
            return RuleAction::CREATE_SUBSCRIPTION_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleAction>(hashCode);
          }

          return RuleAction::NOT_SET;
        }

        Aws::String GetNameForRuleAction(RuleAction enumValue)
        {
          switch(enumValue)
          {
          case RuleAction::NOT_SET:
            return {};
          case RuleAction::CREATE_LISTING_CHANGE_SET:
            return "CREATE_LISTING_CHANGE_SET";
          case RuleAction::CREATE_SUBSCRIPTION_REQUEST:
            return "CREATE_SUBSCRIPTION_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleActionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
