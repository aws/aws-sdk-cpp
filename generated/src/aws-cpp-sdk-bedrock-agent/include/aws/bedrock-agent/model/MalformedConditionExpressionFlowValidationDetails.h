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
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails();
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MalformedConditionExpressionFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error message describing why the condition expression is malformed.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline MalformedConditionExpressionFlowValidationDetails& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the malformed condition.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline MalformedConditionExpressionFlowValidationDetails& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithCondition(const char* value) { SetCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node containing the malformed condition expression.</p>
     */
    inline const Aws::String& GetNode() const{ return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    inline void SetNode(const Aws::String& value) { m_nodeHasBeenSet = true; m_node = value; }
    inline void SetNode(Aws::String&& value) { m_nodeHasBeenSet = true; m_node = std::move(value); }
    inline void SetNode(const char* value) { m_nodeHasBeenSet = true; m_node.assign(value); }
    inline MalformedConditionExpressionFlowValidationDetails& WithNode(const Aws::String& value) { SetNode(value); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithNode(Aws::String&& value) { SetNode(std::move(value)); return *this;}
    inline MalformedConditionExpressionFlowValidationDetails& WithNode(const char* value) { SetNode(value); return *this;}
    ///@}
  private:

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
