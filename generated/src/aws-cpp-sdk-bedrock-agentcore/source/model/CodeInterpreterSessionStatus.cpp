/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CodeInterpreterSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace CodeInterpreterSessionStatusMapper
      {

        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");


        CodeInterpreterSessionStatus GetCodeInterpreterSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return CodeInterpreterSessionStatus::READY;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return CodeInterpreterSessionStatus::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeInterpreterSessionStatus>(hashCode);
          }

          return CodeInterpreterSessionStatus::NOT_SET;
        }

        Aws::String GetNameForCodeInterpreterSessionStatus(CodeInterpreterSessionStatus enumValue)
        {
          switch(enumValue)
          {
          case CodeInterpreterSessionStatus::NOT_SET:
            return {};
          case CodeInterpreterSessionStatus::READY:
            return "READY";
          case CodeInterpreterSessionStatus::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeInterpreterSessionStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
