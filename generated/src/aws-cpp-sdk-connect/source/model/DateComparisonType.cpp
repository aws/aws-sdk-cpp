/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DateComparisonType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace DateComparisonTypeMapper
      {

        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
        static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
        static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");


        DateComparisonType GetDateComparisonTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_THAN_HASH)
          {
            return DateComparisonType::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return DateComparisonType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH)
          {
            return DateComparisonType::GREATER_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH)
          {
            return DateComparisonType::LESS_THAN_OR_EQUAL_TO;
          }
          else if (hashCode == EQUAL_TO_HASH)
          {
            return DateComparisonType::EQUAL_TO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DateComparisonType>(hashCode);
          }

          return DateComparisonType::NOT_SET;
        }

        Aws::String GetNameForDateComparisonType(DateComparisonType enumValue)
        {
          switch(enumValue)
          {
          case DateComparisonType::NOT_SET:
            return {};
          case DateComparisonType::GREATER_THAN:
            return "GREATER_THAN";
          case DateComparisonType::LESS_THAN:
            return "LESS_THAN";
          case DateComparisonType::GREATER_THAN_OR_EQUAL_TO:
            return "GREATER_THAN_OR_EQUAL_TO";
          case DateComparisonType::LESS_THAN_OR_EQUAL_TO:
            return "LESS_THAN_OR_EQUAL_TO";
          case DateComparisonType::EQUAL_TO:
            return "EQUAL_TO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DateComparisonTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
