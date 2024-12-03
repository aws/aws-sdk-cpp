/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FieldFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace FieldFilterOperatorMapper
      {

        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");
        static const int NOT_EQUAL_TO_HASH = HashingUtils::HashString("NOT_EQUAL_TO");
        static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
        static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int ORDER_BY_HASH = HashingUtils::HashString("ORDER_BY");


        FieldFilterOperator GetFieldFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LESS_THAN_HASH)
          {
            return FieldFilterOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return FieldFilterOperator::GREATER_THAN;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return FieldFilterOperator::BETWEEN;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return FieldFilterOperator::EQUAL_TO;
          }
          else if (hashCode == NOT_EQUAL_TO_HASH)
          {
            return FieldFilterOperator::NOT_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return FieldFilterOperator::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return FieldFilterOperator::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return FieldFilterOperator::CONTAINS;
          }
          else if (hashCode == ORDER_BY_HASH)
          {
            return FieldFilterOperator::ORDER_BY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldFilterOperator>(hashCode);
          }

          return FieldFilterOperator::NOT_SET;
        }

        Aws::String GetNameForFieldFilterOperator(FieldFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case FieldFilterOperator::NOT_SET:
            return {};
          case FieldFilterOperator::LESS_THAN:
            return "LESS_THAN";
          case FieldFilterOperator::GREATER_THAN:
            return "GREATER_THAN";
          case FieldFilterOperator::BETWEEN:
            return "BETWEEN";
          case FieldFilterOperator::EQUAL_TO:
            return "EQUAL_TO";
          case FieldFilterOperator::NOT_EQUAL_TO:
            return "NOT_EQUAL_TO";
          case FieldFilterOperator::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case FieldFilterOperator::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case FieldFilterOperator::CONTAINS:
            return "CONTAINS";
          case FieldFilterOperator::ORDER_BY:
            return "ORDER_BY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldFilterOperatorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
