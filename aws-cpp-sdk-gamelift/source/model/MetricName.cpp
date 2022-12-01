/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/MetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace MetricNameMapper
      {

        static const int ActivatingGameSessions_HASH = HashingUtils::HashString("ActivatingGameSessions");
        static const int ActiveGameSessions_HASH = HashingUtils::HashString("ActiveGameSessions");
        static const int ActiveInstances_HASH = HashingUtils::HashString("ActiveInstances");
        static const int AvailableGameSessions_HASH = HashingUtils::HashString("AvailableGameSessions");
        static const int AvailablePlayerSessions_HASH = HashingUtils::HashString("AvailablePlayerSessions");
        static const int CurrentPlayerSessions_HASH = HashingUtils::HashString("CurrentPlayerSessions");
        static const int IdleInstances_HASH = HashingUtils::HashString("IdleInstances");
        static const int PercentAvailableGameSessions_HASH = HashingUtils::HashString("PercentAvailableGameSessions");
        static const int PercentIdleInstances_HASH = HashingUtils::HashString("PercentIdleInstances");
        static const int QueueDepth_HASH = HashingUtils::HashString("QueueDepth");
        static const int WaitTime_HASH = HashingUtils::HashString("WaitTime");
        static const int ConcurrentActivatableGameSessions_HASH = HashingUtils::HashString("ConcurrentActivatableGameSessions");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivatingGameSessions_HASH)
          {
            return MetricName::ActivatingGameSessions;
          }
          else if (hashCode == ActiveGameSessions_HASH)
          {
            return MetricName::ActiveGameSessions;
          }
          else if (hashCode == ActiveInstances_HASH)
          {
            return MetricName::ActiveInstances;
          }
          else if (hashCode == AvailableGameSessions_HASH)
          {
            return MetricName::AvailableGameSessions;
          }
          else if (hashCode == AvailablePlayerSessions_HASH)
          {
            return MetricName::AvailablePlayerSessions;
          }
          else if (hashCode == CurrentPlayerSessions_HASH)
          {
            return MetricName::CurrentPlayerSessions;
          }
          else if (hashCode == IdleInstances_HASH)
          {
            return MetricName::IdleInstances;
          }
          else if (hashCode == PercentAvailableGameSessions_HASH)
          {
            return MetricName::PercentAvailableGameSessions;
          }
          else if (hashCode == PercentIdleInstances_HASH)
          {
            return MetricName::PercentIdleInstances;
          }
          else if (hashCode == QueueDepth_HASH)
          {
            return MetricName::QueueDepth;
          }
          else if (hashCode == WaitTime_HASH)
          {
            return MetricName::WaitTime;
          }
          else if (hashCode == ConcurrentActivatableGameSessions_HASH)
          {
            return MetricName::ConcurrentActivatableGameSessions;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricName>(hashCode);
          }

          return MetricName::NOT_SET;
        }

        Aws::String GetNameForMetricName(MetricName enumValue)
        {
          switch(enumValue)
          {
          case MetricName::ActivatingGameSessions:
            return "ActivatingGameSessions";
          case MetricName::ActiveGameSessions:
            return "ActiveGameSessions";
          case MetricName::ActiveInstances:
            return "ActiveInstances";
          case MetricName::AvailableGameSessions:
            return "AvailableGameSessions";
          case MetricName::AvailablePlayerSessions:
            return "AvailablePlayerSessions";
          case MetricName::CurrentPlayerSessions:
            return "CurrentPlayerSessions";
          case MetricName::IdleInstances:
            return "IdleInstances";
          case MetricName::PercentAvailableGameSessions:
            return "PercentAvailableGameSessions";
          case MetricName::PercentIdleInstances:
            return "PercentIdleInstances";
          case MetricName::QueueDepth:
            return "QueueDepth";
          case MetricName::WaitTime:
            return "WaitTime";
          case MetricName::ConcurrentActivatableGameSessions:
            return "ConcurrentActivatableGameSessions";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
