/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeIODataType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about mismatched output data types in a node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MismatchedNodeOutputTypeFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MismatchedNodeOutputTypeFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MismatchedNodeOutputTypeFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API MismatchedNodeOutputTypeFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MismatchedNodeOutputTypeFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node containing the output with the mismatched data type.</p>
     */
    inline const Aws::String& GetNode() const { return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    template<typename NodeT = Aws::String>
    void SetNode(NodeT&& value) { m_nodeHasBeenSet = true; m_node = std::forward<NodeT>(value); }
    template<typename NodeT = Aws::String>
    MismatchedNodeOutputTypeFlowValidationDetails& WithNode(NodeT&& value) { SetNode(std::forward<NodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the output with the mismatched data type.</p>
     */
    inline const Aws::String& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = Aws::String>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::String>
    MismatchedNodeOutputTypeFlowValidationDetails& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected data type for the node output.</p>
     */
    inline FlowNodeIODataType GetExpectedType() const { return m_expectedType; }
    inline bool ExpectedTypeHasBeenSet() const { return m_expectedTypeHasBeenSet; }
    inline void SetExpectedType(FlowNodeIODataType value) { m_expectedTypeHasBeenSet = true; m_expectedType = value; }
    inline MismatchedNodeOutputTypeFlowValidationDetails& WithExpectedType(FlowNodeIODataType value) { SetExpectedType(value); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    FlowNodeIODataType m_expectedType{FlowNodeIODataType::NOT_SET};
    bool m_expectedTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
