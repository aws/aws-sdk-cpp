/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PardotConnectorOperator.h>
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
      namespace PardotConnectorOperatorMapper
      {

        static constexpr uint32_t PROJECTION_HASH = ConstExprHashingUtils::HashString("PROJECTION");
        static constexpr uint32_t EQUAL_TO_HASH = ConstExprHashingUtils::HashString("EQUAL_TO");
        static constexpr uint32_t NO_OP_HASH = ConstExprHashingUtils::HashString("NO_OP");
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


        PardotConnectorOperator GetPardotConnectorOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return PardotConnectorOperator::PROJECTION;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return PardotConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return PardotConnectorOperator::NO_OP;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return PardotConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return PardotConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return PardotConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return PardotConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return PardotConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return PardotConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return PardotConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return PardotConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return PardotConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return PardotConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return PardotConnectorOperator::VALIDATE_NUMERIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PardotConnectorOperator>(hashCode);
          }

          return PardotConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForPardotConnectorOperator(PardotConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case PardotConnectorOperator::NOT_SET:
            return {};
          case PardotConnectorOperator::PROJECTION:
            return "PROJECTION";
          case PardotConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case PardotConnectorOperator::NO_OP:
            return "NO_OP";
          case PardotConnectorOperator::ADDITION:
            return "ADDITION";
          case PardotConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case PardotConnectorOperator::DIVISION:
            return "DIVISION";
          case PardotConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case PardotConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case PardotConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case PardotConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case PardotConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case PardotConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case PardotConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case PardotConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PardotConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
