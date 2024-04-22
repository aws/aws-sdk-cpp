/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ResponseState.h>
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
      namespace ResponseStateMapper
      {

        static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");
        static const int REPROMPT_HASH = HashingUtils::HashString("REPROMPT");


        ResponseState GetResponseStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILURE_HASH)
          {
            return ResponseState::FAILURE;
          }
          else if (hashCode == REPROMPT_HASH)
          {
            return ResponseState::REPROMPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponseState>(hashCode);
          }

          return ResponseState::NOT_SET;
        }

        Aws::String GetNameForResponseState(ResponseState enumValue)
        {
          switch(enumValue)
          {
          case ResponseState::NOT_SET:
            return {};
          case ResponseState::FAILURE:
            return "FAILURE";
          case ResponseState::REPROMPT:
            return "REPROMPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResponseStateMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
