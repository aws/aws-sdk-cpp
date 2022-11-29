/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterMatchOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace CategoryFilterMatchOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int DOES_NOT_EQUAL_HASH = HashingUtils::HashString("DOES_NOT_EQUAL");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int DOES_NOT_CONTAIN_HASH = HashingUtils::HashString("DOES_NOT_CONTAIN");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");


        CategoryFilterMatchOperator GetCategoryFilterMatchOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CategoryFilterMatchOperator::EQUALS;
          }
          else if (hashCode == DOES_NOT_EQUAL_HASH)
          {
            return CategoryFilterMatchOperator::DOES_NOT_EQUAL;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return CategoryFilterMatchOperator::CONTAINS;
          }
          else if (hashCode == DOES_NOT_CONTAIN_HASH)
          {
            return CategoryFilterMatchOperator::DOES_NOT_CONTAIN;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return CategoryFilterMatchOperator::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return CategoryFilterMatchOperator::ENDS_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoryFilterMatchOperator>(hashCode);
          }

          return CategoryFilterMatchOperator::NOT_SET;
        }

        Aws::String GetNameForCategoryFilterMatchOperator(CategoryFilterMatchOperator enumValue)
        {
          switch(enumValue)
          {
          case CategoryFilterMatchOperator::EQUALS:
            return "EQUALS";
          case CategoryFilterMatchOperator::DOES_NOT_EQUAL:
            return "DOES_NOT_EQUAL";
          case CategoryFilterMatchOperator::CONTAINS:
            return "CONTAINS";
          case CategoryFilterMatchOperator::DOES_NOT_CONTAIN:
            return "DOES_NOT_CONTAIN";
          case CategoryFilterMatchOperator::STARTS_WITH:
            return "STARTS_WITH";
          case CategoryFilterMatchOperator::ENDS_WITH:
            return "ENDS_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryFilterMatchOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
