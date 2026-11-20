/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/CognitoConfig.h>
#include <aws/apiportal/model/None.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Exactly one of the members is set: <code>none</code> for no authorization, or
 * <code>cognitoConfig</code> for Cognito. Modeled as a union so the &quot;exactly
 * one&quot; choice is enforced by type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/AuthorizationConfig">AWS
 * API Reference</a></p>
 */
class AuthorizationConfig {
 public:
  AWS_APIPORTAL_API AuthorizationConfig() = default;
  AWS_APIPORTAL_API AuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API AuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The portal is public and readers do not sign in.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  AuthorizationConfig& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Readers sign in through an Amazon Cognito user pool.</p>
   */
  inline const CognitoConfig& GetCognitoConfig() const { return m_cognitoConfig; }
  inline bool CognitoConfigHasBeenSet() const { return m_cognitoConfigHasBeenSet; }
  template <typename CognitoConfigT = CognitoConfig>
  void SetCognitoConfig(CognitoConfigT&& value) {
    m_cognitoConfigHasBeenSet = true;
    m_cognitoConfig = std::forward<CognitoConfigT>(value);
  }
  template <typename CognitoConfigT = CognitoConfig>
  AuthorizationConfig& WithCognitoConfig(CognitoConfigT&& value) {
    SetCognitoConfig(std::forward<CognitoConfigT>(value));
    return *this;
  }
  ///@}
 private:
  None m_none;

  CognitoConfig m_cognitoConfig;
  bool m_noneHasBeenSet = false;
  bool m_cognitoConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
