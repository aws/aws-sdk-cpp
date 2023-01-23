/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/AnomalyFeedbackType.h>
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
      namespace AnomalyFeedbackTypeMapper
      {

        static const int YES_HASH = HashingUtils::HashString("YES");
        static const int NO_HASH = HashingUtils::HashString("NO");
        static const int PLANNED_ACTIVITY_HASH = HashingUtils::HashString("PLANNED_ACTIVITY");


        AnomalyFeedbackType GetAnomalyFeedbackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YES_HASH)
          {
            return AnomalyFeedbackType::YES;
          }
          else if (hashCode == NO_HASH)
          {
            return AnomalyFeedbackType::NO;
          }
          else if (hashCode == PLANNED_ACTIVITY_HASH)
          {
            return AnomalyFeedbackType::PLANNED_ACTIVITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyFeedbackType>(hashCode);
          }

          return AnomalyFeedbackType::NOT_SET;
        }

        Aws::String GetNameForAnomalyFeedbackType(AnomalyFeedbackType enumValue)
        {
          switch(enumValue)
          {
          case AnomalyFeedbackType::YES:
            return "YES";
          case AnomalyFeedbackType::NO:
            return "NO";
          case AnomalyFeedbackType::PLANNED_ACTIVITY:
            return "PLANNED_ACTIVITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyFeedbackTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
