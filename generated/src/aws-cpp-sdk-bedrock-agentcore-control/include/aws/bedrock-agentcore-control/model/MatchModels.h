/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MatchModelEntry.h>
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
 * <p>A condition that matches inference requests based on the requested
 * model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MatchModels">AWS
 * API Reference</a></p>
 */
class MatchModels {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MatchModels() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MatchModels(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MatchModels& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of model entries. The condition is met if the requested model matches
   * any of the entries.</p>
   */
  inline const Aws::Vector<MatchModelEntry>& GetAnyOf() const { return m_anyOf; }
  inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
  template <typename AnyOfT = Aws::Vector<MatchModelEntry>>
  void SetAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf = std::forward<AnyOfT>(value);
  }
  template <typename AnyOfT = Aws::Vector<MatchModelEntry>>
  MatchModels& WithAnyOf(AnyOfT&& value) {
    SetAnyOf(std::forward<AnyOfT>(value));
    return *this;
  }
  template <typename AnyOfT = MatchModelEntry>
  MatchModels& AddAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf.emplace_back(std::forward<AnyOfT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MatchModelEntry> m_anyOf;
  bool m_anyOfHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
