/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace FlowExecutionStatusMapper
      {

        static const int Running_HASH = HashingUtils::HashString("Running");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Aborted_HASH = HashingUtils::HashString("Aborted");


        FlowExecutionStatus GetFlowExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Running_HASH)
          {
            return FlowExecutionStatus::Running;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return FlowExecutionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return FlowExecutionStatus::Failed;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return FlowExecutionStatus::TimedOut;
          }
          else if (hashCode == Aborted_HASH)
          {
            return FlowExecutionStatus::Aborted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowExecutionStatus>(hashCode);
          }

          return FlowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForFlowExecutionStatus(FlowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowExecutionStatus::NOT_SET:
            return {};
          case FlowExecutionStatus::Running:
            return "Running";
          case FlowExecutionStatus::Succeeded:
            return "Succeeded";
          case FlowExecutionStatus::Failed:
            return "Failed";
          case FlowExecutionStatus::TimedOut:
            return "TimedOut";
          case FlowExecutionStatus::Aborted:
            return "Aborted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowExecutionStatusMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
