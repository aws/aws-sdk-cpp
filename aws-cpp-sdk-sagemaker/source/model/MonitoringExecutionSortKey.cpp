/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/sagemaker/model/MonitoringExecutionSortKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace MonitoringExecutionSortKeyMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int ScheduledTime_HASH = HashingUtils::HashString("ScheduledTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        MonitoringExecutionSortKey GetMonitoringExecutionSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return MonitoringExecutionSortKey::CreationTime;
          }
          else if (hashCode == ScheduledTime_HASH)
          {
            return MonitoringExecutionSortKey::ScheduledTime;
          }
          else if (hashCode == Status_HASH)
          {
            return MonitoringExecutionSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringExecutionSortKey>(hashCode);
          }

          return MonitoringExecutionSortKey::NOT_SET;
        }

        Aws::String GetNameForMonitoringExecutionSortKey(MonitoringExecutionSortKey enumValue)
        {
          switch(enumValue)
          {
          case MonitoringExecutionSortKey::CreationTime:
            return "CreationTime";
          case MonitoringExecutionSortKey::ScheduledTime:
            return "ScheduledTime";
          case MonitoringExecutionSortKey::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringExecutionSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
