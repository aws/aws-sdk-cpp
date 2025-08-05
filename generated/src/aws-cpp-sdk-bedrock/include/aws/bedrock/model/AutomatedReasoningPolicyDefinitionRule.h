/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a formal logic rule in an Automated Reasoning policy. For example,
   * rules can be expressed as if-then statements that define logical
   * constraints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinitionRule">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyDefinitionRule
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionRule() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the rule within the policy.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AutomatedReasoningPolicyDefinitionRule& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The formal logic expression of the rule.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    AutomatedReasoningPolicyDefinitionRule& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The human-readable form of the rule expression, often in natural language or
     * simplified notation.</p>
     */
    inline const Aws::String& GetAlternateExpression() const { return m_alternateExpression; }
    inline bool AlternateExpressionHasBeenSet() const { return m_alternateExpressionHasBeenSet; }
    template<typename AlternateExpressionT = Aws::String>
    void SetAlternateExpression(AlternateExpressionT&& value) { m_alternateExpressionHasBeenSet = true; m_alternateExpression = std::forward<AlternateExpressionT>(value); }
    template<typename AlternateExpressionT = Aws::String>
    AutomatedReasoningPolicyDefinitionRule& WithAlternateExpression(AlternateExpressionT&& value) { SetAlternateExpression(std::forward<AlternateExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_alternateExpression;
    bool m_alternateExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
