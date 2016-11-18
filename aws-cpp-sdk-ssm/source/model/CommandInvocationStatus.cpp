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
#include <aws/ssm/model/CommandInvocationStatus.h>
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
      namespace CommandInvocationStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        CommandInvocationStatus GetCommandInvocationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return CommandInvocationStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return CommandInvocationStatus::InProgress;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return CommandInvocationStatus::Cancelling;
          }
          else if (hashCode == Success_HASH)
          {
            return CommandInvocationStatus::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return CommandInvocationStatus::TimedOut;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return CommandInvocationStatus::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return CommandInvocationStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandInvocationStatus>(hashCode);
          }

          return CommandInvocationStatus::NOT_SET;
        }

        Aws::String GetNameForCommandInvocationStatus(CommandInvocationStatus enumValue)
        {
          switch(enumValue)
          {
          case CommandInvocationStatus::Pending:
            return "Pending";
          case CommandInvocationStatus::InProgress:
            return "InProgress";
          case CommandInvocationStatus::Cancelling:
            return "Cancelling";
          case CommandInvocationStatus::Success:
            return "Success";
          case CommandInvocationStatus::TimedOut:
            return "TimedOut";
          case CommandInvocationStatus::Cancelled:
            return "Cancelled";
          case CommandInvocationStatus::Failed:
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

      } // namespace CommandInvocationStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
