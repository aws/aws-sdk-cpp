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

        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LTE_HASH = ConstExprHashingUtils::HashString("LTE");
        static constexpr uint32_t EQUAL_HASH = ConstExprHashingUtils::HashString("EQUAL");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GTE_HASH = ConstExprHashingUtils::HashString("GTE");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");


        SearchQuantumTasksFilterOperator GetSearchQuantumTasksFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SearchQuantumTasksFilterOperator::NOT_SET:
            return {};
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
