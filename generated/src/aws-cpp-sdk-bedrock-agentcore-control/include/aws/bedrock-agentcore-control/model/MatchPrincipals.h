/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MatchPrincipalEntry.h>
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
 * <p>A condition that matches requests based on the caller's
 * identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/MatchPrincipals">AWS
 * API Reference</a></p>
 */
class MatchPrincipals {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipals() = default;
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipals(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API MatchPrincipals& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of principal entries. The condition is met if any of the entries match
   * the caller's identity.</p>
   */
  inline const Aws::Vector<MatchPrincipalEntry>& GetAnyOf() const { return m_anyOf; }
  inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
  template <typename AnyOfT = Aws::Vector<MatchPrincipalEntry>>
  void SetAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf = std::forward<AnyOfT>(value);
  }
  template <typename AnyOfT = Aws::Vector<MatchPrincipalEntry>>
  MatchPrincipals& WithAnyOf(AnyOfT&& value) {
    SetAnyOf(std::forward<AnyOfT>(value));
    return *this;
  }
  template <typename AnyOfT = MatchPrincipalEntry>
  MatchPrincipals& AddAnyOf(AnyOfT&& value) {
    m_anyOfHasBeenSet = true;
    m_anyOf.emplace_back(std::forward<AnyOfT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MatchPrincipalEntry> m_anyOf;
  bool m_anyOfHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
