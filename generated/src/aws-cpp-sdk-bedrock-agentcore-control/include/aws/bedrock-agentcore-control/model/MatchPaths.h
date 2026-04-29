/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A condition that matches requests based on the request path.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MatchPaths">AWS
 * API Reference</a></p>
 */
class MatchPaths {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MatchPaths() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MatchPaths(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MatchPaths& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of path patterns. The condition is met if the request path matches any
   * of the patterns.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAnyOf() const { return m_anyOf; }
  inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
  template <typename AnyOfT = Aws::Vector<Aws::String>>
  void SetAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf = std::forward<AnyOfT>(value);
  }
  template <typename AnyOfT = Aws::Vector<Aws::String>>
  MatchPaths& WithAnyOf(AnyOfT&& value) {
    SetAnyOf(std::forward<AnyOfT>(value));
    return *this;
  }
  template <typename AnyOfT = Aws::String>
  MatchPaths& AddAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf.emplace_back(std::forward<AnyOfT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_anyOf;
  bool m_anyOfHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
