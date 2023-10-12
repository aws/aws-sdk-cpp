/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/VeevaConnectorOperator.h>
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
      namespace VeevaConnectorOperatorMapper
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


        VeevaConnectorOperator GetVeevaConnectorOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return VeevaConnectorOperator::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return VeevaConnectorOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return VeevaConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return VeevaConnectorOperator::CONTAINS;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return VeevaConnectorOperator::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return VeevaConnectorOperator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return VeevaConnectorOperator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return VeevaConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return VeevaConnectorOperator::NOT_EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return VeevaConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return VeevaConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return VeevaConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return VeevaConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return VeevaConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return VeevaConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return VeevaConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return VeevaConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return VeevaConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return VeevaConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return VeevaConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return VeevaConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VeevaConnectorOperator>(hashCode);
          }

          return VeevaConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForVeevaConnectorOperator(VeevaConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case VeevaConnectorOperator::NOT_SET:
            return {};
          case VeevaConnectorOperator::PROJECTION:
            return "PROJECTION";
          case VeevaConnectorOperator::LESS_THAN:
            return "LESS_THAN";
          case VeevaConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case VeevaConnectorOperator::CONTAINS:
            return "CONTAINS";
          case VeevaConnectorOperator::BETWEEN:
            return "BETWEEN";
          case VeevaConnectorOperator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case VeevaConnectorOperator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case VeevaConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case VeevaConnectorOperator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case VeevaConnectorOperator::ADDITION:
            return "ADDITION";
          case VeevaConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case VeevaConnectorOperator::DIVISION:
            return "DIVISION";
          case VeevaConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case VeevaConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case VeevaConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case VeevaConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case VeevaConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case VeevaConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case VeevaConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case VeevaConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case VeevaConnectorOperator::NO_OP:
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

      } // namespace VeevaConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
