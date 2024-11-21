/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CommandExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CommandExecutionStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        CommandExecutionStatus GetCommandExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return CommandExecutionStatus::CREATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CommandExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return CommandExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CommandExecutionStatus::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return CommandExecutionStatus::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return CommandExecutionStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommandExecutionStatus>(hashCode);
          }

          return CommandExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForCommandExecutionStatus(CommandExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case CommandExecutionStatus::NOT_SET:
            return {};
          case CommandExecutionStatus::CREATED:
            return "CREATED";
          case CommandExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case CommandExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CommandExecutionStatus::FAILED:
            return "FAILED";
          case CommandExecutionStatus::REJECTED:
            return "REJECTED";
          case CommandExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommandExecutionStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
