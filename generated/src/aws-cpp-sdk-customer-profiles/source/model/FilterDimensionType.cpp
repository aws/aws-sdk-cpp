/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/FilterDimensionType.h>
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
      namespace FilterDimensionTypeMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int NOT_BETWEEN_HASH = HashingUtils::HashString("NOT_BETWEEN");
        static const int ON_HASH = HashingUtils::HashString("ON");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static const int LESS_THAN_OR_EQUAL_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");


        FilterDimensionType GetFilterDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return FilterDimensionType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return FilterDimensionType::EXCLUSIVE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return FilterDimensionType::CONTAINS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return FilterDimensionType::BEGINS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return FilterDimensionType::ENDS_WITH;
          }
          else if (hashCode == BEFORE_HASH)
          {
            return FilterDimensionType::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return FilterDimensionType::AFTER;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return FilterDimensionType::BETWEEN;
          }
          else if (hashCode == NOT_BETWEEN_HASH)
          {
            return FilterDimensionType::NOT_BETWEEN;
          }
          else if (hashCode == ON_HASH)
          {
            return FilterDimensionType::ON;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return FilterDimensionType::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return FilterDimensionType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return FilterDimensionType::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return FilterDimensionType::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return FilterDimensionType::EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterDimensionType>(hashCode);
          }

          return FilterDimensionType::NOT_SET;
        }

        Aws::String GetNameForFilterDimensionType(FilterDimensionType enumValue)
        {
          switch(enumValue)
          {
          case FilterDimensionType::NOT_SET:
            return {};
          case FilterDimensionType::INCLUSIVE:
            return "INCLUSIVE";
          case FilterDimensionType::EXCLUSIVE:
            return "EXCLUSIVE";
          case FilterDimensionType::CONTAINS:
            return "CONTAINS";
          case FilterDimensionType::BEGINS_WITH:
            return "BEGINS_WITH";
          case FilterDimensionType::ENDS_WITH:
            return "ENDS_WITH";
          case FilterDimensionType::BEFORE:
            return "BEFORE";
          case FilterDimensionType::AFTER:
            return "AFTER";
          case FilterDimensionType::BETWEEN:
            return "BETWEEN";
          case FilterDimensionType::NOT_BETWEEN:
            return "NOT_BETWEEN";
          case FilterDimensionType::ON:
            return "ON";
          case FilterDimensionType::GREATER_THAN:
            return "GREATER_THAN";
          case FilterDimensionType::LESS_THAN:
            return "LESS_THAN";
          case FilterDimensionType::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case FilterDimensionType::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case FilterDimensionType::EQUAL:
            return "EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterDimensionTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
