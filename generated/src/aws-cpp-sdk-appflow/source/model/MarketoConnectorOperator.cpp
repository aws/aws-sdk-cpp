﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/MarketoConnectorOperator.h>
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
      namespace MarketoConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
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


        MarketoConnectorOperator GetMarketoConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return MarketoConnectorOperator::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return MarketoConnectorOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return MarketoConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return MarketoConnectorOperator::BETWEEN;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return MarketoConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return MarketoConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return MarketoConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return MarketoConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return MarketoConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return MarketoConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return MarketoConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return MarketoConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return MarketoConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return MarketoConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return MarketoConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return MarketoConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketoConnectorOperator>(hashCode);
          }

          return MarketoConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForMarketoConnectorOperator(MarketoConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case MarketoConnectorOperator::NOT_SET:
            return {};
          case MarketoConnectorOperator::PROJECTION:
            return "PROJECTION";
          case MarketoConnectorOperator::LESS_THAN:
            return "LESS_THAN";
          case MarketoConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case MarketoConnectorOperator::BETWEEN:
            return "BETWEEN";
          case MarketoConnectorOperator::ADDITION:
            return "ADDITION";
          case MarketoConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case MarketoConnectorOperator::DIVISION:
            return "DIVISION";
          case MarketoConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case MarketoConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case MarketoConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case MarketoConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case MarketoConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case MarketoConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case MarketoConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case MarketoConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case MarketoConnectorOperator::NO_OP:
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

      } // namespace MarketoConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
