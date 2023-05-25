/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ZendeskConnectorOperator.h>
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
      namespace ZendeskConnectorOperatorMapper
      {

        static const int PROJECTION_HASH = HashingUtils::HashString("PROJECTION");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
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


        ZendeskConnectorOperator GetZendeskConnectorOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROJECTION_HASH)
          {
            return ZendeskConnectorOperator::PROJECTION;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ZendeskConnectorOperator::GREATER_THAN;
          }
          else if (hashCode == ADDITION_HASH)
          {
            return ZendeskConnectorOperator::ADDITION;
          }
          else if (hashCode == MULTIPLICATION_HASH)
          {
            return ZendeskConnectorOperator::MULTIPLICATION;
          }
          else if (hashCode == DIVISION_HASH)
          {
            return ZendeskConnectorOperator::DIVISION;
          }
          else if (hashCode == SUBTRACTION_HASH)
          {
            return ZendeskConnectorOperator::SUBTRACTION;
          }
          else if (hashCode == MASK_ALL_HASH)
          {
            return ZendeskConnectorOperator::MASK_ALL;
          }
          else if (hashCode == MASK_FIRST_N_HASH)
          {
            return ZendeskConnectorOperator::MASK_FIRST_N;
          }
          else if (hashCode == MASK_LAST_N_HASH)
          {
            return ZendeskConnectorOperator::MASK_LAST_N;
          }
          else if (hashCode == VALIDATE_NON_NULL_HASH)
          {
            return ZendeskConnectorOperator::VALIDATE_NON_NULL;
          }
          else if (hashCode == VALIDATE_NON_ZERO_HASH)
          {
            return ZendeskConnectorOperator::VALIDATE_NON_ZERO;
          }
          else if (hashCode == VALIDATE_NON_NEGATIVE_HASH)
          {
            return ZendeskConnectorOperator::VALIDATE_NON_NEGATIVE;
          }
          else if (hashCode == VALIDATE_NUMERIC_HASH)
          {
            return ZendeskConnectorOperator::VALIDATE_NUMERIC;
          }
          else if (hashCode == NO_OP_HASH)
          {
            return ZendeskConnectorOperator::NO_OP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZendeskConnectorOperator>(hashCode);
          }

          return ZendeskConnectorOperator::NOT_SET;
        }

        Aws::String GetNameForZendeskConnectorOperator(ZendeskConnectorOperator enumValue)
        {
          switch(enumValue)
          {
          case ZendeskConnectorOperator::PROJECTION:
            return "PROJECTION";
          case ZendeskConnectorOperator::GREATER_THAN:
            return "GREATER_THAN";
          case ZendeskConnectorOperator::ADDITION:
            return "ADDITION";
          case ZendeskConnectorOperator::MULTIPLICATION:
            return "MULTIPLICATION";
          case ZendeskConnectorOperator::DIVISION:
            return "DIVISION";
          case ZendeskConnectorOperator::SUBTRACTION:
            return "SUBTRACTION";
          case ZendeskConnectorOperator::MASK_ALL:
            return "MASK_ALL";
          case ZendeskConnectorOperator::MASK_FIRST_N:
            return "MASK_FIRST_N";
          case ZendeskConnectorOperator::MASK_LAST_N:
            return "MASK_LAST_N";
          case ZendeskConnectorOperator::VALIDATE_NON_NULL:
            return "VALIDATE_NON_NULL";
          case ZendeskConnectorOperator::VALIDATE_NON_ZERO:
            return "VALIDATE_NON_ZERO";
          case ZendeskConnectorOperator::VALIDATE_NON_NEGATIVE:
            return "VALIDATE_NON_NEGATIVE";
          case ZendeskConnectorOperator::VALIDATE_NUMERIC:
            return "VALIDATE_NUMERIC";
          case ZendeskConnectorOperator::NO_OP:
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

      } // namespace ZendeskConnectorOperatorMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
