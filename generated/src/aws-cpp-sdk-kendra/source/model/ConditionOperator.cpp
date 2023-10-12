/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConditionOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ConditionOperatorMapper
      {

        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t GreaterThanOrEquals_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEquals");
        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t LessThanOrEquals_HASH = ConstExprHashingUtils::HashString("LessThanOrEquals");
        static constexpr uint32_t Equals_HASH = ConstExprHashingUtils::HashString("Equals");
        static constexpr uint32_t NotEquals_HASH = ConstExprHashingUtils::HashString("NotEquals");
        static constexpr uint32_t Contains_HASH = ConstExprHashingUtils::HashString("Contains");
        static constexpr uint32_t NotContains_HASH = ConstExprHashingUtils::HashString("NotContains");
        static constexpr uint32_t Exists_HASH = ConstExprHashingUtils::HashString("Exists");
        static constexpr uint32_t NotExists_HASH = ConstExprHashingUtils::HashString("NotExists");
        static constexpr uint32_t BeginsWith_HASH = ConstExprHashingUtils::HashString("BeginsWith");


        ConditionOperator GetConditionOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GreaterThan_HASH)
          {
            return ConditionOperator::GreaterThan;
          }
          else if (hashCode == GreaterThanOrEquals_HASH)
          {
            return ConditionOperator::GreaterThanOrEquals;
          }
          else if (hashCode == LessThan_HASH)
          {
            return ConditionOperator::LessThan;
          }
          else if (hashCode == LessThanOrEquals_HASH)
          {
            return ConditionOperator::LessThanOrEquals;
          }
          else if (hashCode == Equals_HASH)
          {
            return ConditionOperator::Equals;
          }
          else if (hashCode == NotEquals_HASH)
          {
            return ConditionOperator::NotEquals;
          }
          else if (hashCode == Contains_HASH)
          {
            return ConditionOperator::Contains;
          }
          else if (hashCode == NotContains_HASH)
          {
            return ConditionOperator::NotContains;
          }
          else if (hashCode == Exists_HASH)
          {
            return ConditionOperator::Exists;
          }
          else if (hashCode == NotExists_HASH)
          {
            return ConditionOperator::NotExists;
          }
          else if (hashCode == BeginsWith_HASH)
          {
            return ConditionOperator::BeginsWith;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionOperator>(hashCode);
          }

          return ConditionOperator::NOT_SET;
        }

        Aws::String GetNameForConditionOperator(ConditionOperator enumValue)
        {
          switch(enumValue)
          {
          case ConditionOperator::NOT_SET:
            return {};
          case ConditionOperator::GreaterThan:
            return "GreaterThan";
          case ConditionOperator::GreaterThanOrEquals:
            return "GreaterThanOrEquals";
          case ConditionOperator::LessThan:
            return "LessThan";
          case ConditionOperator::LessThanOrEquals:
            return "LessThanOrEquals";
          case ConditionOperator::Equals:
            return "Equals";
          case ConditionOperator::NotEquals:
            return "NotEquals";
          case ConditionOperator::Contains:
            return "Contains";
          case ConditionOperator::NotContains:
            return "NotContains";
          case ConditionOperator::Exists:
            return "Exists";
          case ConditionOperator::NotExists:
            return "NotExists";
          case ConditionOperator::BeginsWith:
            return "BeginsWith";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionOperatorMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
