/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/RuleOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace RuleOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
        static const int IN_HASH = HashingUtils::HashString("IN");
        static const int NOT_IN_HASH = HashingUtils::HashString("NOT_IN");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        RuleOperator GetRuleOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return RuleOperator::EQUALS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return RuleOperator::LESS_THAN;
          }
          else if (hashCode == LESS_THAN_OR_EQUALS_HASH)
          {
            return RuleOperator::LESS_THAN_OR_EQUALS;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return RuleOperator::GREATER_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUALS_HASH)
          {
            return RuleOperator::GREATER_THAN_OR_EQUALS;
          }
          else if (hashCode == IN_HASH)
          {
            return RuleOperator::IN;
          }
          else if (hashCode == NOT_IN_HASH)
          {
            return RuleOperator::NOT_IN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return RuleOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleOperator>(hashCode);
          }

          return RuleOperator::NOT_SET;
        }

        Aws::String GetNameForRuleOperator(RuleOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleOperator::EQUALS:
            return "EQUALS";
          case RuleOperator::LESS_THAN:
            return "LESS_THAN";
          case RuleOperator::LESS_THAN_OR_EQUALS:
            return "LESS_THAN_OR_EQUALS";
          case RuleOperator::GREATER_THAN:
            return "GREATER_THAN";
          case RuleOperator::GREATER_THAN_OR_EQUALS:
            return "GREATER_THAN_OR_EQUALS";
          case RuleOperator::IN:
            return "IN";
          case RuleOperator::NOT_IN:
            return "NOT_IN";
          case RuleOperator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleOperatorMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
