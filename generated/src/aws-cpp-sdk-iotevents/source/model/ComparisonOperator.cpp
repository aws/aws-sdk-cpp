/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace ComparisonOperatorMapper
      {

        static const int GREATER_HASH = HashingUtils::HashString("GREATER");
        static const int GREATER_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_OR_EQUAL");
        static const int LESS_HASH = HashingUtils::HashString("LESS");
        static const int LESS_OR_EQUAL_HASH = HashingUtils::HashString("LESS_OR_EQUAL");
        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace IoTEvents
} // namespace Aws
