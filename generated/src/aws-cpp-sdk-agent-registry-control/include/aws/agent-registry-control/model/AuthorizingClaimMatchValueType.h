/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ClaimMatchOperatorType.h>
#include <aws/agent-registry-control/model/ClaimMatchValueType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The value and match operator used to authorize a claim during JWT
 * validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AuthorizingClaimMatchValueType">AWS
 * API Reference</a></p>
 */
class AuthorizingClaimMatchValueType {
 public:
  AWS_AGENTREGISTRYCONTROL_API AuthorizingClaimMatchValueType() = default;
  AWS_AGENTREGISTRYCONTROL_API AuthorizingClaimMatchValueType(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AuthorizingClaimMatchValueType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expected value or values that the claim is compared against.</p>
   */
  inline const ClaimMatchValueType& GetClaimMatchValue() const { return m_claimMatchValue; }
  inline bool ClaimMatchValueHasBeenSet() const { return m_claimMatchValueHasBeenSet; }
  template <typename ClaimMatchValueT = ClaimMatchValueType>
  void SetClaimMatchValue(ClaimMatchValueT&& value) {
    m_claimMatchValueHasBeenSet = true;
    m_claimMatchValue = std::forward<ClaimMatchValueT>(value);
  }
  template <typename ClaimMatchValueT = ClaimMatchValueType>
  AuthorizingClaimMatchValueType& WithClaimMatchValue(ClaimMatchValueT&& value) {
    SetClaimMatchValue(std::forward<ClaimMatchValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operator used to compare the claim value against the expected value.</p>
   */
  inline ClaimMatchOperatorType GetClaimMatchOperator() const { return m_claimMatchOperator; }
  inline bool ClaimMatchOperatorHasBeenSet() const { return m_claimMatchOperatorHasBeenSet; }
  inline void SetClaimMatchOperator(ClaimMatchOperatorType value) {
    m_claimMatchOperatorHasBeenSet = true;
    m_claimMatchOperator = value;
  }
  inline AuthorizingClaimMatchValueType& WithClaimMatchOperator(ClaimMatchOperatorType value) {
    SetClaimMatchOperator(value);
    return *this;
  }
  ///@}
 private:
  ClaimMatchValueType m_claimMatchValue;

  ClaimMatchOperatorType m_claimMatchOperator{ClaimMatchOperatorType::NOT_SET};
  bool m_claimMatchValueHasBeenSet = false;
  bool m_claimMatchOperatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
