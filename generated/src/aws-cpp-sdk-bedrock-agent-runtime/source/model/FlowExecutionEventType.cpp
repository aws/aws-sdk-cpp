/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowExecutionEventType.h>
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
      namespace FlowExecutionEventTypeMapper
      {

        static const int Node_HASH = HashingUtils::HashString("Node");
        static const int Flow_HASH = HashingUtils::HashString("Flow");


        FlowExecutionEventType GetFlowExecutionEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Node_HASH)
          {
            return FlowExecutionEventType::Node;
          }
          else if (hashCode == Flow_HASH)
          {
            return FlowExecutionEventType::Flow;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowExecutionEventType>(hashCode);
          }

          return FlowExecutionEventType::NOT_SET;
        }

        Aws::String GetNameForFlowExecutionEventType(FlowExecutionEventType enumValue)
        {
          switch(enumValue)
          {
          case FlowExecutionEventType::NOT_SET:
            return {};
          case FlowExecutionEventType::Node:
            return "Node";
          case FlowExecutionEventType::Flow:
            return "Flow";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowExecutionEventTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
