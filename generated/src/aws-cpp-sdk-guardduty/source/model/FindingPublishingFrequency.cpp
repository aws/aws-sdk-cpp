/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FindingPublishingFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FindingPublishingFrequencyMapper
      {

        static const int FIFTEEN_MINUTES_HASH = HashingUtils::HashString("FIFTEEN_MINUTES");
        static const int ONE_HOUR_HASH = HashingUtils::HashString("ONE_HOUR");
        static const int SIX_HOURS_HASH = HashingUtils::HashString("SIX_HOURS");


        FindingPublishingFrequency GetFindingPublishingFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIFTEEN_MINUTES_HASH)
          {
            return FindingPublishingFrequency::FIFTEEN_MINUTES;
          }
          else if (hashCode == ONE_HOUR_HASH)
          {
            return FindingPublishingFrequency::ONE_HOUR;
          }
          else if (hashCode == SIX_HOURS_HASH)
          {
            return FindingPublishingFrequency::SIX_HOURS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingPublishingFrequency>(hashCode);
          }

          return FindingPublishingFrequency::NOT_SET;
        }

        Aws::String GetNameForFindingPublishingFrequency(FindingPublishingFrequency enumValue)
        {
          switch(enumValue)
          {
          case FindingPublishingFrequency::FIFTEEN_MINUTES:
            return "FIFTEEN_MINUTES";
          case FindingPublishingFrequency::ONE_HOUR:
            return "ONE_HOUR";
          case FindingPublishingFrequency::SIX_HOURS:
            return "SIX_HOURS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingPublishingFrequencyMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
