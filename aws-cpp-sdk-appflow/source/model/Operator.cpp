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

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
        static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
        static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");
        static const int NOT_EQUAL_TO_HASH = HashingUtils::HashString("NOT_EQUAL_TO");
        static const int ADDITION_HASH = HashingUtils::HashString("ADDITION");
        static const int MULTIPLICATION_HASH = HashingUtils::HashString("MULTIPLICATION");
        static const int DIVISION_HASH = HashingUtils::HashString("DIVISION");
        static const int SUBTRACTION_HASH = HashingUtils::HashString("SUBTRACTION");
        static const int MASK_ALL_HASH = HashingUtils::HashString("MASK_ALL");
        static const int MASK_FIRST_N_HASH = HashingUtils::HashString("MASK_FIRST_N");
        static const int MASK_LAST_N_HASH = HashingUtils::HashString("MASK_LAST_N");
        static const int VALIDATE_NON_NULL_HASH = HashingUtils::HashString("VALIDATE_NON_NULL");
        static const int VALIDATE_NON_ZERO_HASH = HashingUtils::HashString("VALIDATE_NON_ZERO");
        static const int VALIDATE_NON_NEGATIVE_HASH = HashingUtils::HashString("VALIDATE_NON_NEGATIVE");
        static const int VALIDATE_NUMERIC_HASH = HashingUtils::HashString("VALIDATE_NUMERIC");
        static const int NO_OP_HASH = HashingUtils::HashString("NO_OP");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
