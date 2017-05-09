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

#include <aws/ssm/model/AutomationExecutionStatus.h>
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
      namespace AutomationExecutionStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        AutomationExecutionStatus GetAutomationExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return AutomationExecutionStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return AutomationExecutionStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return AutomationExecutionStatus::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return AutomationExecutionStatus::TimedOut;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return AutomationExecutionStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutomationExecutionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationExecutionStatus>(hashCode);
          }

          return AutomationExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForAutomationExecutionStatus(AutomationExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomationExecutionStatus::Pending:
            return "Pending";
          case AutomationExecutionStatus::InProgress:
            return "InProgress";
          case AutomationExecutionStatus::Success:
            return "Success";
          case AutomationExecutionStatus::TimedOut:
            return "TimedOut";
          case AutomationExecutionStatus::Cancelled:
            return "Cancelled";
          case AutomationExecutionStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AutomationExecutionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
