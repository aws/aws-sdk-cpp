/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AuthorizingClaimMatchValueType.h>
#include <aws/agent-registry-control/model/InboundTokenClaimValueType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A validation rule applied to a single claim of an inbound JWT.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CustomClaimValidationType">AWS
 * API Reference</a></p>
 */
class CustomClaimValidationType {
 public:
  AWS_AGENTREGISTRYCONTROL_API CustomClaimValidationType() = default;
  AWS_AGENTREGISTRYCONTROL_API CustomClaimValidationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API CustomClaimValidationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the claim in the inbound token to validate.</p>
   */
  inline const Aws::String& GetInboundTokenClaimName() const { return m_inboundTokenClaimName; }
  inline bool InboundTokenClaimNameHasBeenSet() const { return m_inboundTokenClaimNameHasBeenSet; }
  template <typename InboundTokenClaimNameT = Aws::String>
  void SetInboundTokenClaimName(InboundTokenClaimNameT&& value) {
    m_inboundTokenClaimNameHasBeenSet = true;
    m_inboundTokenClaimName = std::forward<InboundTokenClaimNameT>(value);
  }
  template <typename InboundTokenClaimNameT = Aws::String>
  CustomClaimValidationType& WithInboundTokenClaimName(InboundTokenClaimNameT&& value) {
    SetInboundTokenClaimName(std::forward<InboundTokenClaimNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value type of the claim in the inbound token, either a string or an array
   * of strings.</p>
   */
  inline InboundTokenClaimValueType GetInboundTokenClaimValueType() const { return m_inboundTokenClaimValueType; }
  inline bool InboundTokenClaimValueTypeHasBeenSet() const { return m_inboundTokenClaimValueTypeHasBeenSet; }
  inline void SetInboundTokenClaimValueType(InboundTokenClaimValueType value) {
    m_inboundTokenClaimValueTypeHasBeenSet = true;
    m_inboundTokenClaimValueType = value;
  }
  inline CustomClaimValidationType& WithInboundTokenClaimValueType(InboundTokenClaimValueType value) {
    SetInboundTokenClaimValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value and match operator used to authorize the claim.</p>
   */
  inline const AuthorizingClaimMatchValueType& GetAuthorizingClaimMatchValue() const { return m_authorizingClaimMatchValue; }
  inline bool AuthorizingClaimMatchValueHasBeenSet() const { return m_authorizingClaimMatchValueHasBeenSet; }
  template <typename AuthorizingClaimMatchValueT = AuthorizingClaimMatchValueType>
  void SetAuthorizingClaimMatchValue(AuthorizingClaimMatchValueT&& value) {
    m_authorizingClaimMatchValueHasBeenSet = true;
    m_authorizingClaimMatchValue = std::forward<AuthorizingClaimMatchValueT>(value);
  }
  template <typename AuthorizingClaimMatchValueT = AuthorizingClaimMatchValueType>
  CustomClaimValidationType& WithAuthorizingClaimMatchValue(AuthorizingClaimMatchValueT&& value) {
    SetAuthorizingClaimMatchValue(std::forward<AuthorizingClaimMatchValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inboundTokenClaimName;

  InboundTokenClaimValueType m_inboundTokenClaimValueType{InboundTokenClaimValueType::NOT_SET};

  AuthorizingClaimMatchValueType m_authorizingClaimMatchValue;
  bool m_inboundTokenClaimNameHasBeenSet = false;
  bool m_inboundTokenClaimValueTypeHasBeenSet = false;
  bool m_authorizingClaimMatchValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
