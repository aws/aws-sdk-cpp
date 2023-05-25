/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceConnectorOperator.h>
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
      namespace SalesforceConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
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


        SalesforceConnectorOperator GetSalesforceConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return SalesforceConnectorOperator::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return SalesforceConnectorOperator::LESS_THAN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return SalesforceConnectorOperator::CONTAINS;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return SalesforceConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return SalesforceConnectorOperator::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return SalesforceConnectorOperator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return SalesforceConnectorOperator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return SalesforceConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return SalesforceConnectorOperator::NOT_EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return SalesforceConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return SalesforceConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return SalesforceConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return SalesforceConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return SalesforceConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return SalesforceConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return SalesforceConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return SalesforceConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return SalesforceConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return SalesforceConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return SalesforceConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return SalesforceConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceConnectorOperator>(hashCode);
          }

          return SalesforceConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForSalesforceConnectorOperator(SalesforceConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case SalesforceConnectorOperator::PROJECTION:
            return "PROJECTION";
          case SalesforceConnectorOperator::LESS_THAN:
            return "LESS_THAN";
          case SalesforceConnectorOperator::CONTAINS:
            return "CONTAINS";
          case SalesforceConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case SalesforceConnectorOperator::BETWEEN:
            return "BETWEEN";
          case SalesforceConnectorOperator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case SalesforceConnectorOperator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case SalesforceConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case SalesforceConnectorOperator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case SalesforceConnectorOperator::ADDITION:
            return "ADDITION";
          case SalesforceConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case SalesforceConnectorOperator::DIVISION:
            return "DIVISION";
          case SalesforceConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case SalesforceConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case SalesforceConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case SalesforceConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case SalesforceConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case SalesforceConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case SalesforceConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case SalesforceConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case SalesforceConnectorOperator::NO_OP:
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

      } // namespace SalesforceConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
