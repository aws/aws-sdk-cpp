/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/RetentionIntervalUnitValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace RetentionIntervalUnitValuesMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");
        static const int WEEKS_HASH = HashingUtils::HashString("WEEKS");
        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
        static const int YEARS_HASH = HashingUtils::HashString("YEARS");


        RetentionIntervalUnitValues GetRetentionIntervalUnitValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return RetentionIntervalUnitValues::DAYS;
          }
          else if (hashCode == WEEKS_HASH)
          {
            return RetentionIntervalUnitValues::WEEKS;
          }
          else if (hashCode == MONTHS_HASH)
          {
            return RetentionIntervalUnitValues::MONTHS;
          }
          else if (hashCode == YEARS_HASH)
          {
            return RetentionIntervalUnitValues::YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionIntervalUnitValues>(hashCode);
          }

          return RetentionIntervalUnitValues::NOT_SET;
        }

        Aws::String GetNameForRetentionIntervalUnitValues(RetentionIntervalUnitValues enumValue)
        {
          switch(enumValue)
          {
          case RetentionIntervalUnitValues::DAYS:
            return "DAYS";
          case RetentionIntervalUnitValues::WEEKS:
            return "WEEKS";
          case RetentionIntervalUnitValues::MONTHS:
            return "MONTHS";
          case RetentionIntervalUnitValues::YEARS:
            return "YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionIntervalUnitValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
