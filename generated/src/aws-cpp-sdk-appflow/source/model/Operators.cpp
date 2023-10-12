/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/Operators.h>
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
      namespace OperatorsMapper
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


        Operators GetOperatorsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return Operators::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return Operators::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return Operators::GREATER_THAN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return Operators::CONTAINS;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return Operators::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return Operators::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return Operators::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return Operators::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return Operators::NOT_EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return Operators::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return Operators::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return Operators::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return Operators::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return Operators::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return Operators::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return Operators::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return Operators::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return Operators::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return Operators::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return Operators::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return Operators::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operators>(hashCode);
          }

          return Operators::NOT_SET;
        }

        Aws::String GetNameForOperators(Operators enumValue)
        {
          switch(enumValue)
          {
          case Operators::NOT_SET:
            return {};
          case Operators::PROJECTION:
            return "PROJECTION";
          case Operators::LESS_THAN:
            return "LESS_THAN";
          case Operators::GREATER_THAN:
            return "GREATER_THAN";
          case Operators::CONTAINS:
            return "CONTAINS";
          case Operators::BETWEEN:
            return "BETWEEN";
          case Operators::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case Operators::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case Operators::EQUAL_TO:
            return "EQUAL_TO";
          case Operators::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case Operators::ADDITION:
            return "ADDITION";
          case Operators::MULTIPLICATION:
            return "MULTIPLICATION";
          case Operators::DIVISION:
            return "DIVISION";
          case Operators::SUBTRACTION:
            return "SUBTRACTION";
          case Operators::MASK_ALL:
            return "MASK_ALL";
          case Operators::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case Operators::MASK_LAST_N:
            return "MASK_LAST_N";
          case Operators::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case Operators::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case Operators::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case Operators::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case Operators::NO_OP:
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

      } // namespace OperatorsMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
