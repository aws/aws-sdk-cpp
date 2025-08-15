/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about duplicate condition expressions found in a condition
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DuplicateConditionExpressionFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class DuplicateConditionExpressionFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API DuplicateConditionExpressionFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API DuplicateConditionExpressionFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DuplicateConditionExpressionFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node containing the duplicate condition expressions.</p>
     */
    inline const Aws::String& GetNode() const { return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    template<typename NodeT = Aws::String>
    void SetNode(NodeT&& value) { m_nodeHasBeenSet = true; m_node = std::forward<NodeT>(value); }
    template<typename NodeT = Aws::String>
    DuplicateConditionExpressionFlowValidationDetails& WithNode(NodeT&& value) { SetNode(std::forward<NodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duplicated condition expression.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    DuplicateConditionExpressionFlowValidationDetails& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
