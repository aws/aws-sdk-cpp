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
   * <p>Details about a malformed condition expression in a node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MalformedConditionExpressionFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MalformedConditionExpressionFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node containing the malformed condition expression.</p>
     */
    inline const Aws::String& GetNode() const { return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    template<typename NodeT = Aws::String>
    void SetNode(NodeT&& value) { m_nodeHasBeenSet = true; m_node = std::forward<NodeT>(value); }
    template<typename NodeT = Aws::String>
    MalformedConditionExpressionFlowValidationDetails& WithNode(NodeT&& value) { SetNode(std::forward<NodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the malformed condition.</p>
     */
    inline const Aws::String& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::String>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::String>
    MalformedConditionExpressionFlowValidationDetails& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message describing why the condition expression is malformed.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    MalformedConditionExpressionFlowValidationDetails& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
