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

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t LESS_THAN_OR_EQUALS_HASH = ConstExprHashingUtils::HashString("LESS_THAN_OR_EQUALS");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t GREATER_THAN_OR_EQUALS_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUALS");
        static constexpr uint32_t IN_HASH = ConstExprHashingUtils::HashString("IN");
        static constexpr uint32_t NOT_IN_HASH = ConstExprHashingUtils::HashString("NOT_IN");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");


        RuleOperator GetRuleOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RuleOperator::NOT_SET:
            return {};
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
