/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Represents the source of input data for a flow trace node
   * field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceNodeInputSource">AWS
   * API Reference</a></p>
   */
  class FlowTraceNodeInputSource
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputSource() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowTraceNodeInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source node that provides the input data.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    FlowTraceNodeInputSource& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the output field from the source node.</p>
     */
    inline const Aws::String& GetOutputFieldName() const { return m_outputFieldName; }
    inline bool OutputFieldNameHasBeenSet() const { return m_outputFieldNameHasBeenSet; }
    template<typename OutputFieldNameT = Aws::String>
    void SetOutputFieldName(OutputFieldNameT&& value) { m_outputFieldNameHasBeenSet = true; m_outputFieldName = std::forward<OutputFieldNameT>(value); }
    template<typename OutputFieldNameT = Aws::String>
    FlowTraceNodeInputSource& WithOutputFieldName(OutputFieldNameT&& value) { SetOutputFieldName(std::forward<OutputFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression used to extract data from the source.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    FlowTraceNodeInputSource& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_outputFieldName;
    bool m_outputFieldNameHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
