/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ActionGroupSignature.h>
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
      namespace ActionGroupSignatureMapper
      {

        static const int AMAZON_UserInput_HASH = HashingUtils::HashString("AMAZON.UserInput");
        static const int AMAZON_CodeInterpreter_HASH = HashingUtils::HashString("AMAZON.CodeInterpreter");
        static const int ANTHROPIC_Computer_HASH = HashingUtils::HashString("ANTHROPIC.Computer");
        static const int ANTHROPIC_Bash_HASH = HashingUtils::HashString("ANTHROPIC.Bash");
        static const int ANTHROPIC_TextEditor_HASH = HashingUtils::HashString("ANTHROPIC.TextEditor");


        ActionGroupSignature GetActionGroupSignatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_UserInput_HASH)
          {
            return ActionGroupSignature::AMAZON_UserInput;
          }
          else if (hashCode == AMAZON_CodeInterpreter_HASH)
          {
            return ActionGroupSignature::AMAZON_CodeInterpreter;
          }
          else if (hashCode == ANTHROPIC_Computer_HASH)
          {
            return ActionGroupSignature::ANTHROPIC_Computer;
          }
          else if (hashCode == ANTHROPIC_Bash_HASH)
          {
            return ActionGroupSignature::ANTHROPIC_Bash;
          }
          else if (hashCode == ANTHROPIC_TextEditor_HASH)
          {
            return ActionGroupSignature::ANTHROPIC_TextEditor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionGroupSignature>(hashCode);
          }

          return ActionGroupSignature::NOT_SET;
        }

        Aws::String GetNameForActionGroupSignature(ActionGroupSignature enumValue)
        {
          switch(enumValue)
          {
          case ActionGroupSignature::NOT_SET:
            return {};
          case ActionGroupSignature::AMAZON_UserInput:
            return "AMAZON.UserInput";
          case ActionGroupSignature::AMAZON_CodeInterpreter:
            return "AMAZON.CodeInterpreter";
          case ActionGroupSignature::ANTHROPIC_Computer:
            return "ANTHROPIC.Computer";
          case ActionGroupSignature::ANTHROPIC_Bash:
            return "ANTHROPIC.Bash";
          case ActionGroupSignature::ANTHROPIC_TextEditor:
            return "ANTHROPIC.TextEditor";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionGroupSignatureMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
