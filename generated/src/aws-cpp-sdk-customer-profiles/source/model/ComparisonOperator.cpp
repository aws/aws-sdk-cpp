/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static const int LESS_THAN_OR_EQUAL_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");
        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int NOT_BETWEEN_HASH = HashingUtils::HashString("NOT_BETWEEN");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return ComparisonOperator::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return ComparisonOperator::EXCLUSIVE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return ComparisonOperator::CONTAINS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return ComparisonOperator::BEGINS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return ComparisonOperator::ENDS_WITH;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ComparisonOperator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ComparisonOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return ComparisonOperator::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return ComparisonOperator::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return ComparisonOperator::EQUAL;
          }
          else if (hashCode == BEFORE_HASH)
          {
            return ComparisonOperator::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return ComparisonOperator::AFTER;
          }
          else if (hashCode == ON_HASH)
          {
            return ComparisonOperator::ON;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return ComparisonOperator::BETWEEN;
          }
          else if (hashCode == NOT_BETWEEN_HASH)
          {
            return ComparisonOperator::NOT_BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperator>(hashCode);
          }

          return ComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperator::NOT_SET:
            return {};
          case ComparisonOperator::INCLUSIVE:
            return "INCLUSIVE";
          case ComparisonOperator::EXCLUSIVE:
            return "EXCLUSIVE";
          case ComparisonOperator::CONTAINS:
            return "CONTAINS";
          case ComparisonOperator::BEGINS_WITH:
            return "BEGINS_WITH";
          case ComparisonOperator::ENDS_WITH:
            return "ENDS_WITH";
          case ComparisonOperator::GREATER_THAN:
            return "GREATER_THAN";
          case ComparisonOperator::LESS_THAN:
            return "LESS_THAN";
          case ComparisonOperator::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case ComparisonOperator::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case ComparisonOperator::EQUAL:
            return "EQUAL";
          case ComparisonOperator::BEFORE:
            return "BEFORE";
          case ComparisonOperator::AFTER:
            return "AFTER";
          case ComparisonOperator::ON:
            return "ON";
          case ComparisonOperator::BETWEEN:
            return "BETWEEN";
          case ComparisonOperator::NOT_BETWEEN:
            return "NOT_BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
