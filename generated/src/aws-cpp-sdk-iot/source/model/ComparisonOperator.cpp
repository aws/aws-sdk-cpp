/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t less_than_HASH = ConstExprHashingUtils::HashString("less-than");
        static constexpr uint32_t less_than_equals_HASH = ConstExprHashingUtils::HashString("less-than-equals");
        static constexpr uint32_t greater_than_HASH = ConstExprHashingUtils::HashString("greater-than");
        static constexpr uint32_t greater_than_equals_HASH = ConstExprHashingUtils::HashString("greater-than-equals");
        static constexpr uint32_t in_cidr_set_HASH = ConstExprHashingUtils::HashString("in-cidr-set");
        static constexpr uint32_t not_in_cidr_set_HASH = ConstExprHashingUtils::HashString("not-in-cidr-set");
        static constexpr uint32_t in_port_set_HASH = ConstExprHashingUtils::HashString("in-port-set");
        static constexpr uint32_t not_in_port_set_HASH = ConstExprHashingUtils::HashString("not-in-port-set");
        static constexpr uint32_t in_set_HASH = ConstExprHashingUtils::HashString("in-set");
        static constexpr uint32_t not_in_set_HASH = ConstExprHashingUtils::HashString("not-in-set");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == less_than_HASH)
          {
            return ComparisonOperator::less_than;
          }
          else if (hashCode == less_than_equals_HASH)
          {
            return ComparisonOperator::less_than_equals;
          }
          else if (hashCode == greater_than_HASH)
          {
            return ComparisonOperator::greater_than;
          }
          else if (hashCode == greater_than_equals_HASH)
          {
            return ComparisonOperator::greater_than_equals;
          }
          else if (hashCode == in_cidr_set_HASH)
          {
            return ComparisonOperator::in_cidr_set;
          }
          else if (hashCode == not_in_cidr_set_HASH)
          {
            return ComparisonOperator::not_in_cidr_set;
          }
          else if (hashCode == in_port_set_HASH)
          {
            return ComparisonOperator::in_port_set;
          }
          else if (hashCode == not_in_port_set_HASH)
          {
            return ComparisonOperator::not_in_port_set;
          }
          else if (hashCode == in_set_HASH)
          {
            return ComparisonOperator::in_set;
          }
          else if (hashCode == not_in_set_HASH)
          {
            return ComparisonOperator::not_in_set;
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
          case ComparisonOperator::less_than:
            return "less-than";
          case ComparisonOperator::less_than_equals:
            return "less-than-equals";
          case ComparisonOperator::greater_than:
            return "greater-than";
          case ComparisonOperator::greater_than_equals:
            return "greater-than-equals";
          case ComparisonOperator::in_cidr_set:
            return "in-cidr-set";
          case ComparisonOperator::not_in_cidr_set:
            return "not-in-cidr-set";
          case ComparisonOperator::in_port_set:
            return "in-port-set";
          case ComparisonOperator::not_in_port_set:
            return "not-in-port-set";
          case ComparisonOperator::in_set:
            return "in-set";
          case ComparisonOperator::not_in_set:
            return "not-in-set";
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
  } // namespace IoT
} // namespace Aws
