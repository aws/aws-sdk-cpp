/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeInterpreterNetworkMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace CodeInterpreterNetworkModeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int SANDBOX_HASH = HashingUtils::HashString("SANDBOX");


        CodeInterpreterNetworkMode GetCodeInterpreterNetworkModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return CodeInterpreterNetworkMode::PUBLIC_;
          }
          else if (hashCode == SANDBOX_HASH)
          {
            return CodeInterpreterNetworkMode::SANDBOX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeInterpreterNetworkMode>(hashCode);
          }

          return CodeInterpreterNetworkMode::NOT_SET;
        }

        Aws::String GetNameForCodeInterpreterNetworkMode(CodeInterpreterNetworkMode enumValue)
        {
          switch(enumValue)
          {
          case CodeInterpreterNetworkMode::NOT_SET:
            return {};
          case CodeInterpreterNetworkMode::PUBLIC_:
            return "PUBLIC";
          case CodeInterpreterNetworkMode::SANDBOX:
            return "SANDBOX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeInterpreterNetworkModeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
