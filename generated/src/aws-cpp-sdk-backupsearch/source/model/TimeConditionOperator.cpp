/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/TimeConditionOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupSearch
  {
    namespace Model
    {
      namespace TimeConditionOperatorMapper
      {

        static const int EQUALS_TO_HASH = HashingUtils::HashString("EQUALS_TO");
        static const int NOT_EQUALS_TO_HASH = HashingUtils::HashString("NOT_EQUALS_TO");
        static const int LESS_THAN_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_EQUAL_TO");
        static const int GREATER_THAN_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_EQUAL_TO");


        TimeConditionOperator GetTimeConditionOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_TO_HASH)
          {
            return TimeConditionOperator::EQUALS_TO;
          }
          else if (hashCode == NOT_EQUALS_TO_HASH)
          {
            return TimeConditionOperator::NOT_EQUALS_TO;
          }
          else if (hashCode == LESS_THAN_EQUAL_TO_HASH)
          {
            return TimeConditionOperator::LESS_THAN_EQUAL_TO;
          }
          else if (hashCode == GREATER_THAN_EQUAL_TO_HASH)
          {
            return TimeConditionOperator::GREATER_THAN_EQUAL_TO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeConditionOperator>(hashCode);
          }

          return TimeConditionOperator::NOT_SET;
        }

        Aws::String GetNameForTimeConditionOperator(TimeConditionOperator enumValue)
        {
          switch(enumValue)
          {
          case TimeConditionOperator::NOT_SET:
            return {};
          case TimeConditionOperator::EQUALS_TO:
            return "EQUALS_TO";
          case TimeConditionOperator::NOT_EQUALS_TO:
            return "NOT_EQUALS_TO";
          case TimeConditionOperator::LESS_THAN_EQUAL_TO:
            return "LESS_THAN_EQUAL_TO";
          case TimeConditionOperator::GREATER_THAN_EQUAL_TO:
            return "GREATER_THAN_EQUAL_TO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeConditionOperatorMapper
    } // namespace Model
  } // namespace BackupSearch
} // namespace Aws
