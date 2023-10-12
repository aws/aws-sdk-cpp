/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEventsData
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static constexpr uint32_t GREATER_HASH = ConstExprHashingUtils::HashString("GREATER");
        static constexpr uint32_t GREATER_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("GREATER_OR_EQUAL");
        static constexpr uint32_t LESS_HASH = ConstExprHashingUtils::HashString("LESS");
        static constexpr uint32_t LESS_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("LESS_OR_EQUAL");
        static constexpr uint32_t EQUAL_HASH = ConstExprHashingUtils::HashString("EQUAL");
        static constexpr uint32_t NOT_EQUAL_HASH = ConstExprHashingUtils::HashString("NOT_EQUAL");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_HASH)
          {
            return ComparisonOperator::GREATER;
          }
          else if (hashCode == GREATER_OR_EQUAL_HASH)
          {
            return ComparisonOperator::GREATER_OR_EQUAL;
          }
          else if (hashCode == LESS_HASH)
          {
            return ComparisonOperator::LESS;
          }
          else if (hashCode == LESS_OR_EQUAL_HASH)
          {
            return ComparisonOperator::LESS_OR_EQUAL;
          }
          else if (hashCode == EQUAL_HASH)
          {
            return ComparisonOperator::EQUAL;
          }
          else if (hashCode == NOT_EQUAL_HASH)
          {
            return ComparisonOperator::NOT_EQUAL;
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
          case ComparisonOperator::GREATER:
            return "GREATER";
          case ComparisonOperator::GREATER_OR_EQUAL:
            return "GREATER_OR_EQUAL";
          case ComparisonOperator::LESS:
            return "LESS";
          case ComparisonOperator::LESS_OR_EQUAL:
            return "LESS_OR_EQUAL";
          case ComparisonOperator::EQUAL:
            return "EQUAL";
          case ComparisonOperator::NOT_EQUAL:
            return "NOT_EQUAL";
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
  } // namespace IoTEventsData
} // namespace Aws
