/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowCompletionReason.h>
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
      namespace FlowCompletionReasonMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        FlowCompletionReason GetFlowCompletionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return FlowCompletionReason::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowCompletionReason>(hashCode);
          }

          return FlowCompletionReason::NOT_SET;
        }

        Aws::String GetNameForFlowCompletionReason(FlowCompletionReason enumValue)
        {
          switch(enumValue)
          {
          case FlowCompletionReason::NOT_SET:
            return {};
          case FlowCompletionReason::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowCompletionReasonMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
