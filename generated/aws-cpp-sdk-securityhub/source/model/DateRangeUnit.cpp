/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DateRangeUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace DateRangeUnitMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");


        DateRangeUnit GetDateRangeUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return DateRangeUnit::DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DateRangeUnit>(hashCode);
          }

          return DateRangeUnit::NOT_SET;
        }

        Aws::String GetNameForDateRangeUnit(DateRangeUnit enumValue)
        {
          switch(enumValue)
          {
          case DateRangeUnit::DAYS:
            return "DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DateRangeUnitMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
