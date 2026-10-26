/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MatchOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A model ID or pattern to match against the requested model, and the operator
 * to use for the comparison.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MatchModelEntry">AWS
 * API Reference</a></p>
 */
class MatchModelEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MatchModelEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MatchModelEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MatchModelEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The model ID or pattern to match. With the <code>StringLike</code> operator,
   * you can use <code>*</code> and <code>?</code> as wildcards, for example
   * <code>anthropic.claude-*</code>.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  MatchModelEntry& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operator to use when comparing the requested model to the value:</p> <ul>
   * <li> <p> <code>StringEquals</code> – Requires an exact match.</p> </li> <li> <p>
   * <code>StringLike</code> – Supports wildcard patterns using <code>*</code> and
   * <code>?</code>. This is the default.</p> </li> </ul>
   */
  inline MatchOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(MatchOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline MatchModelEntry& WithOperator(MatchOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  MatchOperator m_operator{MatchOperator::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
