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

#include <aws/ssm/model/AutomationExecutionFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AutomationExecutionFilterKeyMapper
      {

        static const int DocumentNamePrefix_HASH = HashingUtils::HashString("DocumentNamePrefix");
        static const int ExecutionStatus_HASH = HashingUtils::HashString("ExecutionStatus");


        AutomationExecutionFilterKey GetAutomationExecutionFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DocumentNamePrefix_HASH)
          {
            return AutomationExecutionFilterKey::DocumentNamePrefix;
          }
          else if (hashCode == ExecutionStatus_HASH)
          {
            return AutomationExecutionFilterKey::ExecutionStatus;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationExecutionFilterKey>(hashCode);
          }

          return AutomationExecutionFilterKey::NOT_SET;
        }

        Aws::String GetNameForAutomationExecutionFilterKey(AutomationExecutionFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AutomationExecutionFilterKey::DocumentNamePrefix:
            return "DocumentNamePrefix";
          case AutomationExecutionFilterKey::ExecutionStatus:
            return "ExecutionStatus";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AutomationExecutionFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
