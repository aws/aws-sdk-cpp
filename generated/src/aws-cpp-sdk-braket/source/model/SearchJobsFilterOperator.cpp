/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SearchJobsFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace SearchJobsFilterOperatorMapper
      {

        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LTE_HASH = ConstExprHashingUtils::HashString("LTE");
        static constexpr uint32_t EQUAL_HASH = ConstExprHashingUtils::HashString("EQUAL");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GTE_HASH = ConstExprHashingUtils::HashString("GTE");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");


        SearchJobsFilterOperator GetSearchJobsFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LT_HASH)
          {
            return SearchJobsFilterOperator::LT;
          }
          else if (hashCode == LTE_HASH)
          {
            return SearchJobsFilterOperator::LTE;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return SearchJobsFilterOperator::EQUAL;
          }
          else if (hashCode == GT_HASH)
          {
            return SearchJobsFilterOperator::GT;
          }
          else if (hashCode == GTE_HASH)
          {
            return SearchJobsFilterOperator::GTE;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return SearchJobsFilterOperator::BETWEEN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return SearchJobsFilterOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchJobsFilterOperator>(hashCode);
          }

          return SearchJobsFilterOperator::NOT_SET;
        }

        Aws::String GetNameForSearchJobsFilterOperator(SearchJobsFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case SearchJobsFilterOperator::NOT_SET:
            return {};
          case SearchJobsFilterOperator::LT:
            return "LT";
          case SearchJobsFilterOperator::LTE:
            return "LTE";
          case SearchJobsFilterOperator::EQUAL:
            return "EQUAL";
          case SearchJobsFilterOperator::GT:
            return "GT";
          case SearchJobsFilterOperator::GTE:
            return "GTE";
          case SearchJobsFilterOperator::BETWEEN:
            return "BETWEEN";
          case SearchJobsFilterOperator::CONTAINS:
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

      } // namespace SearchJobsFilterOperatorMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
