/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Schedule-based condition that fires the Trigger</p><p><h3>See Also:</h3>   <a
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
   * <p>The schedule expression</p>
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
 private:
  Aws::String m_expression;
  bool m_expressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
