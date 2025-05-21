/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowExecutionErrorType.h>
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
      namespace FlowExecutionErrorTypeMapper
      {

        static const int ExecutionTimedOut_HASH = HashingUtils::HashString("ExecutionTimedOut");


        FlowExecutionErrorType GetFlowExecutionErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ExecutionTimedOut_HASH)
          {
            return FlowExecutionErrorType::ExecutionTimedOut;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowExecutionErrorType>(hashCode);
          }

          return FlowExecutionErrorType::NOT_SET;
        }

        Aws::String GetNameForFlowExecutionErrorType(FlowExecutionErrorType enumValue)
        {
          switch(enumValue)
          {
          case FlowExecutionErrorType::NOT_SET:
            return {};
          case FlowExecutionErrorType::ExecutionTimedOut:
            return "ExecutionTimedOut";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowExecutionErrorTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
