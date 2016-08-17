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
#include <aws/ssm/model/CommandPluginStatus.h>
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
      namespace CommandPluginStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        CommandPluginStatus GetCommandPluginStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return CommandPluginStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return CommandPluginStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return CommandPluginStatus::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return CommandPluginStatus::TimedOut;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return CommandPluginStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return CommandPluginStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandPluginStatus>(hashCode);
          }

          return CommandPluginStatus::NOT_SET;
        }

        Aws::String GetNameForCommandPluginStatus(CommandPluginStatus enumValue)
        {
          switch(enumValue)
          {
          case CommandPluginStatus::Pending:
            return "Pending";
          case CommandPluginStatus::InProgress:
            return "InProgress";
          case CommandPluginStatus::Success:
            return "Success";
          case CommandPluginStatus::TimedOut:
            return "TimedOut";
          case CommandPluginStatus::Cancelled:
            return "Cancelled";
          case CommandPluginStatus::Failed:
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

      } // namespace CommandPluginStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
