/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DatadogConnectorOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace DatadogConnectorOperatorMapper
      {

        static constexpr uint32_t PROJECTION_HASH = ConstExprHashingUtils::HashString("PROJECTION");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");
        static constexpr uint32_t EQUAL_TO_HASH = ConstExprHashingUtils::HashString("EQUAL_TO");
        static constexpr uint32_t ADDITION_HASH = ConstExprHashingUtils::HashString("ADDITION");
        static constexpr uint32_t MULTIPLICATION_HASH = ConstExprHashingUtils::HashString("MULTIPLICATION");
        static constexpr uint32_t DIVISION_HASH = ConstExprHashingUtils::HashString("DIVISION");
        static constexpr uint32_t SUBTRACTION_HASH = ConstExprHashingUtils::HashString("SUBTRACTION");
        static constexpr uint32_t MASK_ALL_HASH = ConstExprHashingUtils::HashString("MASK_ALL");
        static constexpr uint32_t MASK_FIRST_N_HASH = ConstExprHashingUtils::HashString("MASK_FIRST_N");
        static constexpr uint32_t MASK_LAST_N_HASH = ConstExprHashingUtils::HashString("MASK_LAST_N");
        static constexpr uint32_t VALIDATE_NON_NULL_HASH = ConstExprHashingUtils::HashString("VALIDATE_NON_NULL");
        static constexpr uint32_t VALIDATE_NON_ZERO_HASH = ConstExprHashingUtils::HashString("VALIDATE_NON_ZERO");
        static constexpr uint32_t VALIDATE_NON_NEGATIVE_HASH = ConstExprHashingUtils::HashString("VALIDATE_NON_NEGATIVE");
        static constexpr uint32_t VALIDATE_NUMERIC_HASH = ConstExprHashingUtils::HashString("VALIDATE_NUMERIC");
        static constexpr uint32_t NO_OP_HASH = ConstExprHashingUtils::HashString("NO_OP");


        DatadogConnectorOperator GetDatadogConnectorOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return DatadogConnectorOperator::PROJECTION;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return DatadogConnectorOperator::BETWEEN;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return DatadogConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return DatadogConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return DatadogConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return DatadogConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return DatadogConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return DatadogConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return DatadogConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return DatadogConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return DatadogConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return DatadogConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return DatadogConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return DatadogConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return DatadogConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatadogConnectorOperator>(hashCode);
          }

          return DatadogConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForDatadogConnectorOperator(DatadogConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case DatadogConnectorOperator::NOT_SET:
            return {};
          case DatadogConnectorOperator::PROJECTION:
            return "PROJECTION";
          case DatadogConnectorOperator::BETWEEN:
            return "BETWEEN";
          case DatadogConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case DatadogConnectorOperator::ADDITION:
            return "ADDITION";
          case DatadogConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case DatadogConnectorOperator::DIVISION:
            return "DIVISION";
          case DatadogConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case DatadogConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case DatadogConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case DatadogConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case DatadogConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case DatadogConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case DatadogConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case DatadogConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case DatadogConnectorOperator::NO_OP:
            return "NO_OP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatadogConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
