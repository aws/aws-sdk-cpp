/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ConfirmationState.h>
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
      namespace ConfirmationStateMapper
      {

        static const int CONFIRM_HASH = HashingUtils::HashString("CONFIRM");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        ConfirmationState GetConfirmationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIRM_HASH)
          {
            return ConfirmationState::CONFIRM;
          }
          else if (hashCode == DENY_HASH)
          {
            return ConfirmationState::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfirmationState>(hashCode);
          }

          return ConfirmationState::NOT_SET;
        }

        Aws::String GetNameForConfirmationState(ConfirmationState enumValue)
        {
          switch(enumValue)
          {
          case ConfirmationState::NOT_SET:
            return {};
          case ConfirmationState::CONFIRM:
            return "CONFIRM";
          case ConfirmationState::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfirmationStateMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
