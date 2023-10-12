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

        static constexpr uint32_t ActivatingGameSessions_HASH = ConstExprHashingUtils::HashString("ActivatingGameSessions");
        static constexpr uint32_t ActiveGameSessions_HASH = ConstExprHashingUtils::HashString("ActiveGameSessions");
        static constexpr uint32_t ActiveInstances_HASH = ConstExprHashingUtils::HashString("ActiveInstances");
        static constexpr uint32_t AvailableGameSessions_HASH = ConstExprHashingUtils::HashString("AvailableGameSessions");
        static constexpr uint32_t AvailablePlayerSessions_HASH = ConstExprHashingUtils::HashString("AvailablePlayerSessions");
        static constexpr uint32_t CurrentPlayerSessions_HASH = ConstExprHashingUtils::HashString("CurrentPlayerSessions");
        static constexpr uint32_t IdleInstances_HASH = ConstExprHashingUtils::HashString("IdleInstances");
        static constexpr uint32_t PercentAvailableGameSessions_HASH = ConstExprHashingUtils::HashString("PercentAvailableGameSessions");
        static constexpr uint32_t PercentIdleInstances_HASH = ConstExprHashingUtils::HashString("PercentIdleInstances");
        static constexpr uint32_t QueueDepth_HASH = ConstExprHashingUtils::HashString("QueueDepth");
        static constexpr uint32_t WaitTime_HASH = ConstExprHashingUtils::HashString("WaitTime");
        static constexpr uint32_t ConcurrentActivatableGameSessions_HASH = ConstExprHashingUtils::HashString("ConcurrentActivatableGameSessions");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MetricName::NOT_SET:
            return {};
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
