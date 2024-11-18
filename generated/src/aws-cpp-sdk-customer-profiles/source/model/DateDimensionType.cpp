/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DateDimensionType.h>
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
      namespace DateDimensionTypeMapper
      {

        static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
        static const int AFTER_HASH = HashingUtils::HashString("AFTER");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");
        static const int NOT_BETWEEN_HASH = HashingUtils::HashString("NOT_BETWEEN");
        static const int ON_HASH = HashingUtils::HashString("ON");


        DateDimensionType GetDateDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_HASH)
          {
            return DateDimensionType::BEFORE;
          }
          else if (hashCode == AFTER_HASH)
          {
            return DateDimensionType::AFTER;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return DateDimensionType::BETWEEN;
          }
          else if (hashCode == NOT_BETWEEN_HASH)
          {
            return DateDimensionType::NOT_BETWEEN;
          }
          else if (hashCode == ON_HASH)
          {
            return DateDimensionType::ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DateDimensionType>(hashCode);
          }

          return DateDimensionType::NOT_SET;
        }

        Aws::String GetNameForDateDimensionType(DateDimensionType enumValue)
        {
          switch(enumValue)
          {
          case DateDimensionType::NOT_SET:
            return {};
          case DateDimensionType::BEFORE:
            return "BEFORE";
          case DateDimensionType::AFTER:
            return "AFTER";
          case DateDimensionType::BETWEEN:
            return "BETWEEN";
          case DateDimensionType::NOT_BETWEEN:
            return "NOT_BETWEEN";
          case DateDimensionType::ON:
            return "ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DateDimensionTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
