/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/RefreshScheduleFrequencyUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace RefreshScheduleFrequencyUnitMapper
      {

        static const int HOURS_HASH = HashingUtils::HashString("HOURS");
        static const int DAYS_HASH = HashingUtils::HashString("DAYS");


        RefreshScheduleFrequencyUnit GetRefreshScheduleFrequencyUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOURS_HASH)
          {
            return RefreshScheduleFrequencyUnit::HOURS;
          }
          else if (hashCode == DAYS_HASH)
          {
            return RefreshScheduleFrequencyUnit::DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RefreshScheduleFrequencyUnit>(hashCode);
          }

          return RefreshScheduleFrequencyUnit::NOT_SET;
        }

        Aws::String GetNameForRefreshScheduleFrequencyUnit(RefreshScheduleFrequencyUnit enumValue)
        {
          switch(enumValue)
          {
          case RefreshScheduleFrequencyUnit::NOT_SET:
            return {};
          case RefreshScheduleFrequencyUnit::HOURS:
            return "HOURS";
          case RefreshScheduleFrequencyUnit::DAYS:
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

      } // namespace RefreshScheduleFrequencyUnitMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
