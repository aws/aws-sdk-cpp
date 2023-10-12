/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ServiceNowConnectorOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace ServiceNowConnectorOperatorMapper
      {

        static constexpr uint32_t PROJECTION_HASH = ConstExprHashingUtils::HashString("PROJECTION");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
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


        ServiceNowConnectorOperator GetServiceNowConnectorOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ServiceNowConnectorOperator::NOT_SET:
            return {};
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
  } // namespace CustomerProfiles
} // namespace Aws
