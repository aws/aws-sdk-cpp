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
 * <p> A condition on the fields of an example. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ExampleFieldCondition">AWS
 * API Reference</a></p>
 */
class ExampleFieldCondition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ExampleFieldCondition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ExampleFieldCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ExampleFieldCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Matches examples that have at least one of these fields. Required. </p>
   */
  inline const Aws::Vector<ExampleField>& GetAnyOf() const { return m_anyOf; }
  inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
  template <typename AnyOfT = Aws::Vector<ExampleField>>
  void SetAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf = std::forward<AnyOfT>(value);
  }
  template <typename AnyOfT = Aws::Vector<ExampleField>>
  ExampleFieldCondition& WithAnyOf(AnyOfT&& value) {
    SetAnyOf(std::forward<AnyOfT>(value));
    return *this;
  }
  inline ExampleFieldCondition& AddAnyOf(ExampleField value) {
    m_anyOfHasBeenSet = true;
    m_anyOf.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExampleField> m_anyOf;
  bool m_anyOfHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
