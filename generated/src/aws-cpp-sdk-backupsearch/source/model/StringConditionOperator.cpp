/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/StringConditionOperator.h>
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
      namespace StringConditionOperatorMapper
      {

        static const int EQUALS_TO_HASH = HashingUtils::HashString("EQUALS_TO");
        static const int NOT_EQUALS_TO_HASH = HashingUtils::HashString("NOT_EQUALS_TO");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int DOES_NOT_CONTAIN_HASH = HashingUtils::HashString("DOES_NOT_CONTAIN");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int DOES_NOT_BEGIN_WITH_HASH = HashingUtils::HashString("DOES_NOT_BEGIN_WITH");
        static const int DOES_NOT_END_WITH_HASH = HashingUtils::HashString("DOES_NOT_END_WITH");


        StringConditionOperator GetStringConditionOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_TO_HASH)
          {
            return StringConditionOperator::EQUALS_TO;
          }
          else if (hashCode == NOT_EQUALS_TO_HASH)
          {
            return StringConditionOperator::NOT_EQUALS_TO;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return StringConditionOperator::CONTAINS;
          }
          else if (hashCode == DOES_NOT_CONTAIN_HASH)
          {
            return StringConditionOperator::DOES_NOT_CONTAIN;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return StringConditionOperator::BEGINS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return StringConditionOperator::ENDS_WITH;
          }
          else if (hashCode == DOES_NOT_BEGIN_WITH_HASH)
          {
            return StringConditionOperator::DOES_NOT_BEGIN_WITH;
          }
          else if (hashCode == DOES_NOT_END_WITH_HASH)
          {
            return StringConditionOperator::DOES_NOT_END_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringConditionOperator>(hashCode);
          }

          return StringConditionOperator::NOT_SET;
        }

        Aws::String GetNameForStringConditionOperator(StringConditionOperator enumValue)
        {
          switch(enumValue)
          {
          case StringConditionOperator::NOT_SET:
            return {};
          case StringConditionOperator::EQUALS_TO:
            return "EQUALS_TO";
          case StringConditionOperator::NOT_EQUALS_TO:
            return "NOT_EQUALS_TO";
          case StringConditionOperator::CONTAINS:
            return "CONTAINS";
          case StringConditionOperator::DOES_NOT_CONTAIN:
            return "DOES_NOT_CONTAIN";
          case StringConditionOperator::BEGINS_WITH:
            return "BEGINS_WITH";
          case StringConditionOperator::ENDS_WITH:
            return "ENDS_WITH";
          case StringConditionOperator::DOES_NOT_BEGIN_WITH:
            return "DOES_NOT_BEGIN_WITH";
          case StringConditionOperator::DOES_NOT_END_WITH:
            return "DOES_NOT_END_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringConditionOperatorMapper
    } // namespace Model
  } // namespace BackupSearch
} // namespace Aws
