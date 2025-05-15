/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowValidationType.h>
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
      namespace FlowValidationTypeMapper
      {

        static const int CyclicConnection_HASH = HashingUtils::HashString("CyclicConnection");
        static const int DuplicateConnections_HASH = HashingUtils::HashString("DuplicateConnections");
        static const int DuplicateConditionExpression_HASH = HashingUtils::HashString("DuplicateConditionExpression");
        static const int UnreachableNode_HASH = HashingUtils::HashString("UnreachableNode");
        static const int UnknownConnectionSource_HASH = HashingUtils::HashString("UnknownConnectionSource");
        static const int UnknownConnectionSourceOutput_HASH = HashingUtils::HashString("UnknownConnectionSourceOutput");
        static const int UnknownConnectionTarget_HASH = HashingUtils::HashString("UnknownConnectionTarget");
        static const int UnknownConnectionTargetInput_HASH = HashingUtils::HashString("UnknownConnectionTargetInput");
        static const int UnknownConnectionCondition_HASH = HashingUtils::HashString("UnknownConnectionCondition");
        static const int MalformedConditionExpression_HASH = HashingUtils::HashString("MalformedConditionExpression");
        static const int MalformedNodeInputExpression_HASH = HashingUtils::HashString("MalformedNodeInputExpression");
        static const int MismatchedNodeInputType_HASH = HashingUtils::HashString("MismatchedNodeInputType");
        static const int MismatchedNodeOutputType_HASH = HashingUtils::HashString("MismatchedNodeOutputType");
        static const int IncompatibleConnectionDataType_HASH = HashingUtils::HashString("IncompatibleConnectionDataType");
        static const int MissingConnectionConfiguration_HASH = HashingUtils::HashString("MissingConnectionConfiguration");
        static const int MissingDefaultCondition_HASH = HashingUtils::HashString("MissingDefaultCondition");
        static const int MissingEndingNodes_HASH = HashingUtils::HashString("MissingEndingNodes");
        static const int MissingNodeConfiguration_HASH = HashingUtils::HashString("MissingNodeConfiguration");
        static const int MissingNodeInput_HASH = HashingUtils::HashString("MissingNodeInput");
        static const int MissingNodeOutput_HASH = HashingUtils::HashString("MissingNodeOutput");
        static const int MissingStartingNodes_HASH = HashingUtils::HashString("MissingStartingNodes");
        static const int MultipleNodeInputConnections_HASH = HashingUtils::HashString("MultipleNodeInputConnections");
        static const int UnfulfilledNodeInput_HASH = HashingUtils::HashString("UnfulfilledNodeInput");
        static const int UnsatisfiedConnectionConditions_HASH = HashingUtils::HashString("UnsatisfiedConnectionConditions");
        static const int Unspecified_HASH = HashingUtils::HashString("Unspecified");
        static const int UnknownNodeInput_HASH = HashingUtils::HashString("UnknownNodeInput");
        static const int UnknownNodeOutput_HASH = HashingUtils::HashString("UnknownNodeOutput");
        static const int MissingLoopInputNode_HASH = HashingUtils::HashString("MissingLoopInputNode");
        static const int MissingLoopControllerNode_HASH = HashingUtils::HashString("MissingLoopControllerNode");
        static const int MultipleLoopInputNodes_HASH = HashingUtils::HashString("MultipleLoopInputNodes");
        static const int MultipleLoopControllerNodes_HASH = HashingUtils::HashString("MultipleLoopControllerNodes");
        static const int LoopIncompatibleNodeType_HASH = HashingUtils::HashString("LoopIncompatibleNodeType");
        static const int InvalidLoopBoundary_HASH = HashingUtils::HashString("InvalidLoopBoundary");


        FlowValidationType GetFlowValidationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CyclicConnection_HASH)
          {
            return FlowValidationType::CyclicConnection;
          }
          else if (hashCode == DuplicateConnections_HASH)
          {
            return FlowValidationType::DuplicateConnections;
          }
          else if (hashCode == DuplicateConditionExpression_HASH)
          {
            return FlowValidationType::DuplicateConditionExpression;
          }
          else if (hashCode == UnreachableNode_HASH)
          {
            return FlowValidationType::UnreachableNode;
          }
          else if (hashCode == UnknownConnectionSource_HASH)
          {
            return FlowValidationType::UnknownConnectionSource;
          }
          else if (hashCode == UnknownConnectionSourceOutput_HASH)
          {
            return FlowValidationType::UnknownConnectionSourceOutput;
          }
          else if (hashCode == UnknownConnectionTarget_HASH)
          {
            return FlowValidationType::UnknownConnectionTarget;
          }
          else if (hashCode == UnknownConnectionTargetInput_HASH)
          {
            return FlowValidationType::UnknownConnectionTargetInput;
          }
          else if (hashCode == UnknownConnectionCondition_HASH)
          {
            return FlowValidationType::UnknownConnectionCondition;
          }
          else if (hashCode == MalformedConditionExpression_HASH)
          {
            return FlowValidationType::MalformedConditionExpression;
          }
          else if (hashCode == MalformedNodeInputExpression_HASH)
          {
            return FlowValidationType::MalformedNodeInputExpression;
          }
          else if (hashCode == MismatchedNodeInputType_HASH)
          {
            return FlowValidationType::MismatchedNodeInputType;
          }
          else if (hashCode == MismatchedNodeOutputType_HASH)
          {
            return FlowValidationType::MismatchedNodeOutputType;
          }
          else if (hashCode == IncompatibleConnectionDataType_HASH)
          {
            return FlowValidationType::IncompatibleConnectionDataType;
          }
          else if (hashCode == MissingConnectionConfiguration_HASH)
          {
            return FlowValidationType::MissingConnectionConfiguration;
          }
          else if (hashCode == MissingDefaultCondition_HASH)
          {
            return FlowValidationType::MissingDefaultCondition;
          }
          else if (hashCode == MissingEndingNodes_HASH)
          {
            return FlowValidationType::MissingEndingNodes;
          }
          else if (hashCode == MissingNodeConfiguration_HASH)
          {
            return FlowValidationType::MissingNodeConfiguration;
          }
          else if (hashCode == MissingNodeInput_HASH)
          {
            return FlowValidationType::MissingNodeInput;
          }
          else if (hashCode == MissingNodeOutput_HASH)
          {
            return FlowValidationType::MissingNodeOutput;
          }
          else if (hashCode == MissingStartingNodes_HASH)
          {
            return FlowValidationType::MissingStartingNodes;
          }
          else if (hashCode == MultipleNodeInputConnections_HASH)
          {
            return FlowValidationType::MultipleNodeInputConnections;
          }
          else if (hashCode == UnfulfilledNodeInput_HASH)
          {
            return FlowValidationType::UnfulfilledNodeInput;
          }
          else if (hashCode == UnsatisfiedConnectionConditions_HASH)
          {
            return FlowValidationType::UnsatisfiedConnectionConditions;
          }
          else if (hashCode == Unspecified_HASH)
          {
            return FlowValidationType::Unspecified;
          }
          else if (hashCode == UnknownNodeInput_HASH)
          {
            return FlowValidationType::UnknownNodeInput;
          }
          else if (hashCode == UnknownNodeOutput_HASH)
          {
            return FlowValidationType::UnknownNodeOutput;
          }
          else if (hashCode == MissingLoopInputNode_HASH)
          {
            return FlowValidationType::MissingLoopInputNode;
          }
          else if (hashCode == MissingLoopControllerNode_HASH)
          {
            return FlowValidationType::MissingLoopControllerNode;
          }
          else if (hashCode == MultipleLoopInputNodes_HASH)
          {
            return FlowValidationType::MultipleLoopInputNodes;
          }
          else if (hashCode == MultipleLoopControllerNodes_HASH)
          {
            return FlowValidationType::MultipleLoopControllerNodes;
          }
          else if (hashCode == LoopIncompatibleNodeType_HASH)
          {
            return FlowValidationType::LoopIncompatibleNodeType;
          }
          else if (hashCode == InvalidLoopBoundary_HASH)
          {
            return FlowValidationType::InvalidLoopBoundary;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowValidationType>(hashCode);
          }

          return FlowValidationType::NOT_SET;
        }

        Aws::String GetNameForFlowValidationType(FlowValidationType enumValue)
        {
          switch(enumValue)
          {
          case FlowValidationType::NOT_SET:
            return {};
          case FlowValidationType::CyclicConnection:
            return "CyclicConnection";
          case FlowValidationType::DuplicateConnections:
            return "DuplicateConnections";
          case FlowValidationType::DuplicateConditionExpression:
            return "DuplicateConditionExpression";
          case FlowValidationType::UnreachableNode:
            return "UnreachableNode";
          case FlowValidationType::UnknownConnectionSource:
            return "UnknownConnectionSource";
          case FlowValidationType::UnknownConnectionSourceOutput:
            return "UnknownConnectionSourceOutput";
          case FlowValidationType::UnknownConnectionTarget:
            return "UnknownConnectionTarget";
          case FlowValidationType::UnknownConnectionTargetInput:
            return "UnknownConnectionTargetInput";
          case FlowValidationType::UnknownConnectionCondition:
            return "UnknownConnectionCondition";
          case FlowValidationType::MalformedConditionExpression:
            return "MalformedConditionExpression";
          case FlowValidationType::MalformedNodeInputExpression:
            return "MalformedNodeInputExpression";
          case FlowValidationType::MismatchedNodeInputType:
            return "MismatchedNodeInputType";
          case FlowValidationType::MismatchedNodeOutputType:
            return "MismatchedNodeOutputType";
          case FlowValidationType::IncompatibleConnectionDataType:
            return "IncompatibleConnectionDataType";
          case FlowValidationType::MissingConnectionConfiguration:
            return "MissingConnectionConfiguration";
          case FlowValidationType::MissingDefaultCondition:
            return "MissingDefaultCondition";
          case FlowValidationType::MissingEndingNodes:
            return "MissingEndingNodes";
          case FlowValidationType::MissingNodeConfiguration:
            return "MissingNodeConfiguration";
          case FlowValidationType::MissingNodeInput:
            return "MissingNodeInput";
          case FlowValidationType::MissingNodeOutput:
            return "MissingNodeOutput";
          case FlowValidationType::MissingStartingNodes:
            return "MissingStartingNodes";
          case FlowValidationType::MultipleNodeInputConnections:
            return "MultipleNodeInputConnections";
          case FlowValidationType::UnfulfilledNodeInput:
            return "UnfulfilledNodeInput";
          case FlowValidationType::UnsatisfiedConnectionConditions:
            return "UnsatisfiedConnectionConditions";
          case FlowValidationType::Unspecified:
            return "Unspecified";
          case FlowValidationType::UnknownNodeInput:
            return "UnknownNodeInput";
          case FlowValidationType::UnknownNodeOutput:
            return "UnknownNodeOutput";
          case FlowValidationType::MissingLoopInputNode:
            return "MissingLoopInputNode";
          case FlowValidationType::MissingLoopControllerNode:
            return "MissingLoopControllerNode";
          case FlowValidationType::MultipleLoopInputNodes:
            return "MultipleLoopInputNodes";
          case FlowValidationType::MultipleLoopControllerNodes:
            return "MultipleLoopControllerNodes";
          case FlowValidationType::LoopIncompatibleNodeType:
            return "LoopIncompatibleNodeType";
          case FlowValidationType::InvalidLoopBoundary:
            return "InvalidLoopBoundary";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowValidationTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
