/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowNodeInputCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace FlowNodeInputCategoryMapper
      {

        static const int LoopCondition_HASH = HashingUtils::HashString("LoopCondition");
        static const int ReturnValueToLoopStart_HASH = HashingUtils::HashString("ReturnValueToLoopStart");
        static const int ExitLoop_HASH = HashingUtils::HashString("ExitLoop");


        FlowNodeInputCategory GetFlowNodeInputCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LoopCondition_HASH)
          {
            return FlowNodeInputCategory::LoopCondition;
          }
          else if (hashCode == ReturnValueToLoopStart_HASH)
          {
            return FlowNodeInputCategory::ReturnValueToLoopStart;
          }
          else if (hashCode == ExitLoop_HASH)
          {
            return FlowNodeInputCategory::ExitLoop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowNodeInputCategory>(hashCode);
          }

          return FlowNodeInputCategory::NOT_SET;
        }

        Aws::String GetNameForFlowNodeInputCategory(FlowNodeInputCategory enumValue)
        {
          switch(enumValue)
          {
          case FlowNodeInputCategory::NOT_SET:
            return {};
          case FlowNodeInputCategory::LoopCondition:
            return "LoopCondition";
          case FlowNodeInputCategory::ReturnValueToLoopStart:
            return "ReturnValueToLoopStart";
          case FlowNodeInputCategory::ExitLoop:
            return "ExitLoop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowNodeInputCategoryMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
