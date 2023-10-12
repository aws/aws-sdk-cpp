/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/NumericOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace NumericOperatorMapper
      {

        static constexpr uint32_t EQUAL_HASH = ConstExprHashingUtils::HashString("EQUAL");
        static constexpr uint32_t GREATER_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static constexpr uint32_t LESS_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");


        NumericOperator GetNumericOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_HASH)
          {
            return NumericOperator::EQUAL;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return NumericOperator::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return NumericOperator::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return NumericOperator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return NumericOperator::LESS_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return NumericOperator::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NumericOperator>(hashCode);
          }

          return NumericOperator::NOT_SET;
        }

        Aws::String GetNameForNumericOperator(NumericOperator enumValue)
        {
          switch(enumValue)
          {
          case NumericOperator::NOT_SET:
            return {};
          case NumericOperator::EQUAL:
            return "EQUAL";
          case NumericOperator::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case NumericOperator::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case NumericOperator::GREATER_THAN:
            return "GREATER_THAN";
          case NumericOperator::LESS_THAN:
            return "LESS_THAN";
          case NumericOperator::BETWEEN:
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

      } // namespace NumericOperatorMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
