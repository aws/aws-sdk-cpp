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

#include <aws/sagemaker/model/MonitoringScheduleSortKey.h>
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
      namespace MonitoringScheduleSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        MonitoringScheduleSortKey GetMonitoringScheduleSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return MonitoringScheduleSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return MonitoringScheduleSortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return MonitoringScheduleSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringScheduleSortKey>(hashCode);
          }

          return MonitoringScheduleSortKey::NOT_SET;
        }

        Aws::String GetNameForMonitoringScheduleSortKey(MonitoringScheduleSortKey enumValue)
        {
          switch(enumValue)
          {
          case MonitoringScheduleSortKey::Name:
            return "Name";
          case MonitoringScheduleSortKey::CreationTime:
            return "CreationTime";
          case MonitoringScheduleSortKey::Status:
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

      } // namespace MonitoringScheduleSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
