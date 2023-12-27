/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Interval.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace IntervalMapper
      {

        static const int THIS_MONTH_HASH = HashingUtils::HashString("THIS_MONTH");
        static const int THIS_WEEK_HASH = HashingUtils::HashString("THIS_WEEK");
        static const int ONE_WEEK_AGO_HASH = HashingUtils::HashString("ONE_WEEK_AGO");
        static const int TWO_WEEKS_AGO_HASH = HashingUtils::HashString("TWO_WEEKS_AGO");
        static const int ONE_MONTH_AGO_HASH = HashingUtils::HashString("ONE_MONTH_AGO");
        static const int TWO_MONTHS_AGO_HASH = HashingUtils::HashString("TWO_MONTHS_AGO");


        Interval GetIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == THIS_MONTH_HASH)
          {
            return Interval::THIS_MONTH;
          }
          else if (hashCode == THIS_WEEK_HASH)
          {
            return Interval::THIS_WEEK;
          }
          else if (hashCode == ONE_WEEK_AGO_HASH)
          {
            return Interval::ONE_WEEK_AGO;
          }
          else if (hashCode == TWO_WEEKS_AGO_HASH)
          {
            return Interval::TWO_WEEKS_AGO;
          }
          else if (hashCode == ONE_MONTH_AGO_HASH)
          {
            return Interval::ONE_MONTH_AGO;
          }
          else if (hashCode == TWO_MONTHS_AGO_HASH)
          {
            return Interval::TWO_MONTHS_AGO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Interval>(hashCode);
          }

          return Interval::NOT_SET;
        }

        Aws::String GetNameForInterval(Interval enumValue)
        {
          switch(enumValue)
          {
          case Interval::NOT_SET:
            return {};
          case Interval::THIS_MONTH:
            return "THIS_MONTH";
          case Interval::THIS_WEEK:
            return "THIS_WEEK";
          case Interval::ONE_WEEK_AGO:
            return "ONE_WEEK_AGO";
          case Interval::TWO_WEEKS_AGO:
            return "TWO_WEEKS_AGO";
          case Interval::ONE_MONTH_AGO:
            return "ONE_MONTH_AGO";
          case Interval::TWO_MONTHS_AGO:
            return "TWO_MONTHS_AGO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntervalMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
