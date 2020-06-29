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

        static const int less_than_HASH = HashingUtils::HashString("less-than");
        static const int less_than_equals_HASH = HashingUtils::HashString("less-than-equals");
        static const int greater_than_HASH = HashingUtils::HashString("greater-than");
        static const int greater_than_equals_HASH = HashingUtils::HashString("greater-than-equals");
        static const int in_cidr_set_HASH = HashingUtils::HashString("in-cidr-set");
        static const int not_in_cidr_set_HASH = HashingUtils::HashString("not-in-cidr-set");
        static const int in_port_set_HASH = HashingUtils::HashString("in-port-set");
        static const int not_in_port_set_HASH = HashingUtils::HashString("not-in-port-set");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
