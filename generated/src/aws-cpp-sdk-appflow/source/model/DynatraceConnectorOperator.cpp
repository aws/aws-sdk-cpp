﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DynatraceConnectorOperator.h>
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
      namespace DynatraceConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
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


        DynatraceConnectorOperator GetDynatraceConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return DynatraceConnectorOperator::PROJECTION;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return DynatraceConnectorOperator::BETWEEN;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return DynatraceConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return DynatraceConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return DynatraceConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return DynatraceConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return DynatraceConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return DynatraceConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return DynatraceConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return DynatraceConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return DynatraceConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return DynatraceConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return DynatraceConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return DynatraceConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return DynatraceConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynatraceConnectorOperator>(hashCode);
          }

          return DynatraceConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForDynatraceConnectorOperator(DynatraceConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case DynatraceConnectorOperator::NOT_SET:
            return {};
          case DynatraceConnectorOperator::PROJECTION:
            return "PROJECTION";
          case DynatraceConnectorOperator::BETWEEN:
            return "BETWEEN";
          case DynatraceConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case DynatraceConnectorOperator::ADDITION:
            return "ADDITION";
          case DynatraceConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case DynatraceConnectorOperator::DIVISION:
            return "DIVISION";
          case DynatraceConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case DynatraceConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case DynatraceConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case DynatraceConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case DynatraceConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case DynatraceConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case DynatraceConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case DynatraceConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case DynatraceConnectorOperator::NO_OP:
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

      } // namespace DynatraceConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
