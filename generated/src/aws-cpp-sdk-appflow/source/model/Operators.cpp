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


        Operators GetOperatorsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
