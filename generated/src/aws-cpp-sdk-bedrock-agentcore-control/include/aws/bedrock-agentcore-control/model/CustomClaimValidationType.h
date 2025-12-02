/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizingClaimMatchValueType.h>
#include <aws/bedrock-agentcore-control/model/InboundTokenClaimValueType.h>
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
 * <p>Defines the name of a custom claim field and rules for finding matches to
 * authenticate its value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomClaimValidationType">AWS
 * API Reference</a></p>
 */
class CustomClaimValidationType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomClaimValidationType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomClaimValidationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomClaimValidationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the custom claim field to check.</p>
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
   * <p>The data type of the claim value to check for.</p> <ul> <li> <p>Use
   * <code>STRING</code> if you want to find an exact match to a string you
   * define.</p> </li> <li> <p>Use <code>STRING_ARRAY</code> if you want to fnd a
   * match to at least one value in an array you define.</p> </li> </ul>
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
   * <p>Defines the value or values to match for and the relationship of the
   * match.</p>
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
  bool m_inboundTokenClaimNameHasBeenSet = false;

  InboundTokenClaimValueType m_inboundTokenClaimValueType{InboundTokenClaimValueType::NOT_SET};
  bool m_inboundTokenClaimValueTypeHasBeenSet = false;

  AuthorizingClaimMatchValueType m_authorizingClaimMatchValue;
  bool m_authorizingClaimMatchValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
