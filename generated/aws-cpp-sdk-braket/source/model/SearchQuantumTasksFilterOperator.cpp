/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SearchQuantumTasksFilterOperator.h>
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
      namespace SearchQuantumTasksFilterOperatorMapper
      {

        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int LTE_HASH = HashingUtils::HashString("LTE");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int GTE_HASH = HashingUtils::HashString("GTE");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        SearchQuantumTasksFilterOperator GetSearchQuantumTasksFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LT_HASH)
          {
            return SearchQuantumTasksFilterOperator::LT;
          }
          else if (hashCode == LTE_HASH)
          {
            return SearchQuantumTasksFilterOperator::LTE;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return SearchQuantumTasksFilterOperator::EQUAL;
          }
          else if (hashCode == GT_HASH)
          {
            return SearchQuantumTasksFilterOperator::GT;
          }
          else if (hashCode == GTE_HASH)
          {
            return SearchQuantumTasksFilterOperator::GTE;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return SearchQuantumTasksFilterOperator::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchQuantumTasksFilterOperator>(hashCode);
          }

          return SearchQuantumTasksFilterOperator::NOT_SET;
        }

        Aws::String GetNameForSearchQuantumTasksFilterOperator(SearchQuantumTasksFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case SearchQuantumTasksFilterOperator::LT:
            return "LT";
          case SearchQuantumTasksFilterOperator::LTE:
            return "LTE";
          case SearchQuantumTasksFilterOperator::EQUAL:
            return "EQUAL";
          case SearchQuantumTasksFilterOperator::GT:
            return "GT";
          case SearchQuantumTasksFilterOperator::GTE:
            return "GTE";
          case SearchQuantumTasksFilterOperator::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchQuantumTasksFilterOperatorMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
