/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/TrendmicroConnectorOperator.h>
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
      namespace TrendmicroConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");
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


        TrendmicroConnectorOperator GetTrendmicroConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return TrendmicroConnectorOperator::PROJECTION;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return TrendmicroConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return TrendmicroConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return TrendmicroConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return TrendmicroConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return TrendmicroConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return TrendmicroConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return TrendmicroConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return TrendmicroConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return TrendmicroConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return TrendmicroConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return TrendmicroConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return TrendmicroConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return TrendmicroConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrendmicroConnectorOperator>(hashCode);
          }

          return TrendmicroConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForTrendmicroConnectorOperator(TrendmicroConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case TrendmicroConnectorOperator::PROJECTION:
            return "PROJECTION";
          case TrendmicroConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case TrendmicroConnectorOperator::ADDITION:
            return "ADDITION";
          case TrendmicroConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case TrendmicroConnectorOperator::DIVISION:
            return "DIVISION";
          case TrendmicroConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case TrendmicroConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case TrendmicroConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case TrendmicroConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case TrendmicroConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case TrendmicroConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case TrendmicroConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case TrendmicroConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case TrendmicroConnectorOperator::NO_OP:
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

      } // namespace TrendmicroConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
