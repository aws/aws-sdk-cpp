/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t GREATER_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t LESS_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("LESS_THAN_OR_EQUAL");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return ComparisonOperator::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ComparisonOperator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ComparisonOperator::LESS_THAN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return ComparisonOperator::LESS_THAN_OR_EQUAL;
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
          case ComparisonOperator::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case ComparisonOperator::GREATER_THAN:
            return "GREATER_THAN";
          case ComparisonOperator::LESS_THAN:
            return "LESS_THAN";
          case ComparisonOperator::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
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
  } // namespace EMR
} // namespace Aws
