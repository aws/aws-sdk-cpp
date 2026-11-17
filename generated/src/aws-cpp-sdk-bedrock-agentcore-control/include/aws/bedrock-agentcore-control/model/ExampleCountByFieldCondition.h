/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ExampleField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p> A condition on the number of examples that have the given fields. The count
 * includes each example that has at least one of the fields in <code>anyOf</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ExampleCountByFieldCondition">AWS
 * API Reference</a></p>
 */
class ExampleCountByFieldCondition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByFieldCondition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByFieldCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ExampleCountByFieldCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The fields to count. An example counts if it has at least one of these
   * fields. Required. </p>
   */
  inline const Aws::Vector<ExampleField>& GetAnyOf() const { return m_anyOf; }
  inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
  template <typename AnyOfT = Aws::Vector<ExampleField>>
  void SetAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf = std::forward<AnyOfT>(value);
  }
  template <typename AnyOfT = Aws::Vector<ExampleField>>
  ExampleCountByFieldCondition& WithAnyOf(AnyOfT&& value) {
    SetAnyOf(std::forward<AnyOfT>(value));
    return *this;
  }
  inline ExampleCountByFieldCondition& AddAnyOf(ExampleField value) {
    m_anyOfHasBeenSet = true;
    m_anyOf.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The minimum count, inclusive. </p>
   */
  inline long long GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  inline void SetMin(long long value) {
    m_minHasBeenSet = true;
    m_min = value;
  }
  inline ExampleCountByFieldCondition& WithMin(long long value) {
    SetMin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The maximum count, inclusive. </p>
   */
  inline long long GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(long long value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline ExampleCountByFieldCondition& WithMax(long long value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExampleField> m_anyOf;

  long long m_min{0};

  long long m_max{0};
  bool m_anyOfHasBeenSet = false;
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
