/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/FlowErrorCode.h>
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
      namespace FlowErrorCodeMapper
      {

        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
        static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("INTERNAL_SERVER");
        static const int NODE_EXECUTION_FAILED_HASH = HashingUtils::HashString("NODE_EXECUTION_FAILED");


        FlowErrorCode GetFlowErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_HASH)
          {
            return FlowErrorCode::VALIDATION;
          }
          else if (hashCode == INTERNAL_SERVER_HASH)
          {
            return FlowErrorCode::INTERNAL_SERVER;
          }
          else if (hashCode == NODE_EXECUTION_FAILED_HASH)
          {
            return FlowErrorCode::NODE_EXECUTION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowErrorCode>(hashCode);
          }

          return FlowErrorCode::NOT_SET;
        }

        Aws::String GetNameForFlowErrorCode(FlowErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FlowErrorCode::NOT_SET:
            return {};
          case FlowErrorCode::VALIDATION:
            return "VALIDATION";
          case FlowErrorCode::INTERNAL_SERVER:
            return "INTERNAL_SERVER";
          case FlowErrorCode::NODE_EXECUTION_FAILED:
            return "NODE_EXECUTION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowErrorCodeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
