/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ScheduleSpec.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Expression-based schedule condition. CreateTrigger callers using this
 * condition supply expression and omit spec. Trigger responses always use this
 * condition, include the persisted or derived expression, and also include spec
 * when the trigger was created from a structured schedule.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ScheduleCondition">AWS
 * API Reference</a></p>
 */
class ScheduleCondition {
 public:
  AWS_DEVOPSAGENT_API ScheduleCondition() = default;
  AWS_DEVOPSAGENT_API ScheduleCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ScheduleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>EventBridge cron or rate expression. Required for existing request and
   * response compatibility. For a structured schedule response, this is the
   * expression derived by Backlog.</p>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  ScheduleCondition& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Structured schedule source of truth (cron | timeRange). On CreateTrigger
   * supply exactly one of spec or expression. Present in responses together with the
   * derived expression for structured triggers.</p>
   */
  inline const ScheduleSpec& GetSpec() const { return m_spec; }
  inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
  template <typename SpecT = ScheduleSpec>
  void SetSpec(SpecT&& value) {
    m_specHasBeenSet = true;
    m_spec = std::forward<SpecT>(value);
  }
  template <typename SpecT = ScheduleSpec>
  ScheduleCondition& WithSpec(SpecT&& value) {
    SetSpec(std::forward<SpecT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_expression;

  ScheduleSpec m_spec;
  bool m_expressionHasBeenSet = false;
  bool m_specHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
