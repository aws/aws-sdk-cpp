/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowNodeType.h>
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
      namespace FlowNodeTypeMapper
      {

        static const int Input_HASH = HashingUtils::HashString("Input");
        static const int Output_HASH = HashingUtils::HashString("Output");
        static const int KnowledgeBase_HASH = HashingUtils::HashString("KnowledgeBase");
        static const int Condition_HASH = HashingUtils::HashString("Condition");
        static const int Lex_HASH = HashingUtils::HashString("Lex");
        static const int Prompt_HASH = HashingUtils::HashString("Prompt");
        static const int LambdaFunction_HASH = HashingUtils::HashString("LambdaFunction");
        static const int Storage_HASH = HashingUtils::HashString("Storage");
        static const int Agent_HASH = HashingUtils::HashString("Agent");
        static const int Retrieval_HASH = HashingUtils::HashString("Retrieval");
        static const int Iterator_HASH = HashingUtils::HashString("Iterator");
        static const int Collector_HASH = HashingUtils::HashString("Collector");
        static const int InlineCode_HASH = HashingUtils::HashString("InlineCode");
        static const int Loop_HASH = HashingUtils::HashString("Loop");
        static const int LoopInput_HASH = HashingUtils::HashString("LoopInput");
        static const int LoopController_HASH = HashingUtils::HashString("LoopController");


        FlowNodeType GetFlowNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Input_HASH)
          {
            return FlowNodeType::Input;
          }
          else if (hashCode == Output_HASH)
          {
            return FlowNodeType::Output;
          }
          else if (hashCode == KnowledgeBase_HASH)
          {
            return FlowNodeType::KnowledgeBase;
          }
          else if (hashCode == Condition_HASH)
          {
            return FlowNodeType::Condition;
          }
          else if (hashCode == Lex_HASH)
          {
            return FlowNodeType::Lex;
          }
          else if (hashCode == Prompt_HASH)
          {
            return FlowNodeType::Prompt;
          }
          else if (hashCode == LambdaFunction_HASH)
          {
            return FlowNodeType::LambdaFunction;
          }
          else if (hashCode == Storage_HASH)
          {
            return FlowNodeType::Storage;
          }
          else if (hashCode == Agent_HASH)
          {
            return FlowNodeType::Agent;
          }
          else if (hashCode == Retrieval_HASH)
          {
            return FlowNodeType::Retrieval;
          }
          else if (hashCode == Iterator_HASH)
          {
            return FlowNodeType::Iterator;
          }
          else if (hashCode == Collector_HASH)
          {
            return FlowNodeType::Collector;
          }
          else if (hashCode == InlineCode_HASH)
          {
            return FlowNodeType::InlineCode;
          }
          else if (hashCode == Loop_HASH)
          {
            return FlowNodeType::Loop;
          }
          else if (hashCode == LoopInput_HASH)
          {
            return FlowNodeType::LoopInput;
          }
          else if (hashCode == LoopController_HASH)
          {
            return FlowNodeType::LoopController;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowNodeType>(hashCode);
          }

          return FlowNodeType::NOT_SET;
        }

        Aws::String GetNameForFlowNodeType(FlowNodeType enumValue)
        {
          switch(enumValue)
          {
          case FlowNodeType::NOT_SET:
            return {};
          case FlowNodeType::Input:
            return "Input";
          case FlowNodeType::Output:
            return "Output";
          case FlowNodeType::KnowledgeBase:
            return "KnowledgeBase";
          case FlowNodeType::Condition:
            return "Condition";
          case FlowNodeType::Lex:
            return "Lex";
          case FlowNodeType::Prompt:
            return "Prompt";
          case FlowNodeType::LambdaFunction:
            return "LambdaFunction";
          case FlowNodeType::Storage:
            return "Storage";
          case FlowNodeType::Agent:
            return "Agent";
          case FlowNodeType::Retrieval:
            return "Retrieval";
          case FlowNodeType::Iterator:
            return "Iterator";
          case FlowNodeType::Collector:
            return "Collector";
          case FlowNodeType::InlineCode:
            return "InlineCode";
          case FlowNodeType::Loop:
            return "Loop";
          case FlowNodeType::LoopInput:
            return "LoopInput";
          case FlowNodeType::LoopController:
            return "LoopController";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowNodeTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
