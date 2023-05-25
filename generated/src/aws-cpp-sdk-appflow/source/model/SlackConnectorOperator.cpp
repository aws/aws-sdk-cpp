/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SlackConnectorOperator.h>
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
      namespace SlackConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
        static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
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


        SlackConnectorOperator GetSlackConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return SlackConnectorOperator::PROJECTION;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return SlackConnectorOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return SlackConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return SlackConnectorOperator::BETWEEN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return SlackConnectorOperator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return SlackConnectorOperator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return SlackConnectorOperator::EQUAL_TO;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return SlackConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return SlackConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return SlackConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return SlackConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return SlackConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return SlackConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return SlackConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return SlackConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return SlackConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return SlackConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return SlackConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return SlackConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlackConnectorOperator>(hashCode);
          }

          return SlackConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForSlackConnectorOperator(SlackConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case SlackConnectorOperator::PROJECTION:
            return "PROJECTION";
          case SlackConnectorOperator::LESS_THAN:
            return "LESS_THAN";
          case SlackConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case SlackConnectorOperator::BETWEEN:
            return "BETWEEN";
          case SlackConnectorOperator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case SlackConnectorOperator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case SlackConnectorOperator::EQUAL_TO:
            return "EQUAL_TO";
          case SlackConnectorOperator::ADDITION:
            return "ADDITION";
          case SlackConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case SlackConnectorOperator::DIVISION:
            return "DIVISION";
          case SlackConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case SlackConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case SlackConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case SlackConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case SlackConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case SlackConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case SlackConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case SlackConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case SlackConnectorOperator::NO_OP:
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

      } // namespace SlackConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
