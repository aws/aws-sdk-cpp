/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/Operator.h>
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
      namespace OperatorMapper
      {

        static constexpr uint32_t PROJECTION_HASH = ConstExprHashingUtils::HashString("PROJECTION");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t BETWEEN_HASH = ConstExprHashingUtils::HashString("BETWEEN");
        static constexpr uint32_t LESS_THAN_OR_EQUAL_TO_HASH = ConstExprHashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
        static constexpr uint32_t GREATER_THAN_OR_EQUAL_TO_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
        static constexpr uint32_t EQUAL_TO_HASH = ConstExprHashingUtils::HashString("EQUAL_TO");
        static constexpr uint32_t NOT_EQUAL_TO_HASH = ConstExprHashingUtils::HashString("NOT_EQUAL_TO");
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


        Operator GetOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return Operator::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return Operator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return Operator::GREATER_THAN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return Operator::CONTAINS;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return Operator::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return Operator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return Operator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return Operator::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return Operator::NOT_EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return Operator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return Operator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return Operator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return Operator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return Operator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return Operator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return Operator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return Operator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return Operator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return Operator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return Operator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return Operator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operator>(hashCode);
          }

          return Operator::NOT_SET;
        }

        Aws::String GetNameForOperator(Operator enumValue)
        {
          switch(enumValue)
          {
          case Operator::NOT_SET:
            return {};
          case Operator::PROJECTION:
            return "PROJECTION";
          case Operator::LESS_THAN:
            return "LESS_THAN";
          case Operator::GREATER_THAN:
            return "GREATER_THAN";
          case Operator::CONTAINS:
            return "CONTAINS";
          case Operator::BETWEEN:
            return "BETWEEN";
          case Operator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case Operator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case Operator::EQUAL_TO:
            return "EQUAL_TO";
          case Operator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case Operator::ADDITION:
            return "ADDITION";
          case Operator::MULTIPLICATION:
            return "MULTIPLICATION";
          case Operator::DIVISION:
            return "DIVISION";
          case Operator::SUBTRACTION:
            return "SUBTRACTION";
          case Operator::MASK_ALL:
            return "MASK_ALL";
          case Operator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case Operator::MASK_LAST_N:
            return "MASK_LAST_N";
          case Operator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case Operator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case Operator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case Operator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case Operator::NO_OP:
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

      } // namespace OperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
