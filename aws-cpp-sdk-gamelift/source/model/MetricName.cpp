/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int AvailablePlayerSessions_HASH = HashingUtils::HashString("AvailablePlayerSessions");
        static const int CurrentPlayerSessions_HASH = HashingUtils::HashString("CurrentPlayerSessions");
        static const int IdleInstances_HASH = HashingUtils::HashString("IdleInstances");


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
          case MetricName::AvailablePlayerSessions:
            return "AvailablePlayerSessions";
          case MetricName::CurrentPlayerSessions:
            return "CurrentPlayerSessions";
          case MetricName::IdleInstances:
            return "IdleInstances";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
