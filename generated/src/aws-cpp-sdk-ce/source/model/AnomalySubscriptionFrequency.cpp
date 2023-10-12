/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalySubscriptionFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace AnomalySubscriptionFrequencyMapper
      {

        static constexpr uint32_t DAILY_HASH = ConstExprHashingUtils::HashString("DAILY");
        static constexpr uint32_t IMMEDIATE_HASH = ConstExprHashingUtils::HashString("IMMEDIATE");
        static constexpr uint32_t WEEKLY_HASH = ConstExprHashingUtils::HashString("WEEKLY");


        AnomalySubscriptionFrequency GetAnomalySubscriptionFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAILY_HASH)
          {
            return AnomalySubscriptionFrequency::DAILY;
          }
          else if (hashCode == IMMEDIATE_HASH)
          {
            return AnomalySubscriptionFrequency::IMMEDIATE;
          }
          else if (hashCode == WEEKLY_HASH)
          {
            return AnomalySubscriptionFrequency::WEEKLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalySubscriptionFrequency>(hashCode);
          }

          return AnomalySubscriptionFrequency::NOT_SET;
        }

        Aws::String GetNameForAnomalySubscriptionFrequency(AnomalySubscriptionFrequency enumValue)
        {
          switch(enumValue)
          {
          case AnomalySubscriptionFrequency::NOT_SET:
            return {};
          case AnomalySubscriptionFrequency::DAILY:
            return "DAILY";
          case AnomalySubscriptionFrequency::IMMEDIATE:
            return "IMMEDIATE";
          case AnomalySubscriptionFrequency::WEEKLY:
            return "WEEKLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalySubscriptionFrequencyMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
