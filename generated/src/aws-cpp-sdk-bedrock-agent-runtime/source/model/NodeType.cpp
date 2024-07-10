/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeType.h>
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
      namespace NodeTypeMapper
      {

        static const int FlowInputNode_HASH = HashingUtils::HashString("FlowInputNode");
        static const int FlowOutputNode_HASH = HashingUtils::HashString("FlowOutputNode");
        static const int LambdaFunctionNode_HASH = HashingUtils::HashString("LambdaFunctionNode");
        static const int KnowledgeBaseNode_HASH = HashingUtils::HashString("KnowledgeBaseNode");
        static const int PromptNode_HASH = HashingUtils::HashString("PromptNode");
        static const int ConditionNode_HASH = HashingUtils::HashString("ConditionNode");
        static const int LexNode_HASH = HashingUtils::HashString("LexNode");


        NodeType GetNodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FlowInputNode_HASH)
          {
            return NodeType::FlowInputNode;
          }
          else if (hashCode == FlowOutputNode_HASH)
          {
            return NodeType::FlowOutputNode;
          }
          else if (hashCode == LambdaFunctionNode_HASH)
          {
            return NodeType::LambdaFunctionNode;
          }
          else if (hashCode == KnowledgeBaseNode_HASH)
          {
            return NodeType::KnowledgeBaseNode;
          }
          else if (hashCode == PromptNode_HASH)
          {
            return NodeType::PromptNode;
          }
          else if (hashCode == ConditionNode_HASH)
          {
            return NodeType::ConditionNode;
          }
          else if (hashCode == LexNode_HASH)
          {
            return NodeType::LexNode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeType>(hashCode);
          }

          return NodeType::NOT_SET;
        }

        Aws::String GetNameForNodeType(NodeType enumValue)
        {
          switch(enumValue)
          {
          case NodeType::NOT_SET:
            return {};
          case NodeType::FlowInputNode:
            return "FlowInputNode";
          case NodeType::FlowOutputNode:
            return "FlowOutputNode";
          case NodeType::LambdaFunctionNode:
            return "LambdaFunctionNode";
          case NodeType::KnowledgeBaseNode:
            return "KnowledgeBaseNode";
          case NodeType::PromptNode:
            return "PromptNode";
          case NodeType::ConditionNode:
            return "ConditionNode";
          case NodeType::LexNode:
            return "LexNode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
