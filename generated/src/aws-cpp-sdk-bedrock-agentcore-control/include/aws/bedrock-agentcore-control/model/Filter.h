/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FilterOperator.h>
#include <aws/bedrock-agentcore-control/model/FilterValue.h>
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
 * <p> The filter that applies conditions to agent traces during online evaluation
 * to determine which traces should be evaluated. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Filter">AWS
 * API Reference</a></p>
 */
class Filter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Filter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Filter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The key or field name to filter on within the agent trace data. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  Filter& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The comparison operator to use for filtering. </p>
   */
  inline FilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(FilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline Filter& WithOperator(FilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The value to compare against using the specified operator. </p>
   */
  inline const FilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = FilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = FilterValue>
  Filter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;
  bool m_keyHasBeenSet = false;

  FilterOperator m_operator{FilterOperator::NOT_SET};
  bool m_operatorHasBeenSet = false;

  FilterValue m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
