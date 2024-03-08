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

        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int GreaterThanOrEquals_HASH = HashingUtils::HashString("GreaterThanOrEquals");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int LessThanOrEquals_HASH = HashingUtils::HashString("LessThanOrEquals");
        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
        static const int Contains_HASH = HashingUtils::HashString("Contains");
        static const int NotContains_HASH = HashingUtils::HashString("NotContains");
        static const int Exists_HASH = HashingUtils::HashString("Exists");
        static const int NotExists_HASH = HashingUtils::HashString("NotExists");
        static const int BeginsWith_HASH = HashingUtils::HashString("BeginsWith");


        ConditionOperator GetConditionOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
