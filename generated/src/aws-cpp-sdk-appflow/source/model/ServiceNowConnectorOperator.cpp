/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ServiceNowConnectorOperator.h>
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
      namespace ServiceNowConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
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


        ServiceNowConnectorOperator GetServiceNowConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return ServiceNowConnectorOperator::PROJECTION;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return ServiceNowConnectorOperator::CONTAINS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ServiceNowConnectorOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ServiceNowConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return ServiceNowConnectorOperator::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return ServiceNowConnectorOperator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return ServiceNowConnectorOperator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return ServiceNowConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return ServiceNowConnectorOperator::NOT_EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return ServiceNowConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return ServiceNowConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return ServiceNowConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return ServiceNowConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return ServiceNowConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return ServiceNowConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return ServiceNowConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return ServiceNowConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return ServiceNowConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return ServiceNowConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return ServiceNowConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return ServiceNowConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNowConnectorOperator>(hashCode);
          }

          return ServiceNowConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForServiceNowConnectorOperator(ServiceNowConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case ServiceNowConnectorOperator::PROJECTION:
            return "PROJECTION";
          case ServiceNowConnectorOperator::CONTAINS:
            return "CONTAINS";
          case ServiceNowConnectorOperator::LESS_THAN:
            return "LESS_THAN";
          case ServiceNowConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case ServiceNowConnectorOperator::BETWEEN:
            return "BETWEEN";
          case ServiceNowConnectorOperator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case ServiceNowConnectorOperator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case ServiceNowConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case ServiceNowConnectorOperator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case ServiceNowConnectorOperator::ADDITION:
            return "ADDITION";
          case ServiceNowConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case ServiceNowConnectorOperator::DIVISION:
            return "DIVISION";
          case ServiceNowConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case ServiceNowConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case ServiceNowConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case ServiceNowConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case ServiceNowConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case ServiceNowConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case ServiceNowConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case ServiceNowConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case ServiceNowConnectorOperator::NO_OP:
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

      } // namespace ServiceNowConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
