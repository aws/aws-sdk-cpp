/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The Amazon Cognito resources readers use to sign in to a
 * portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CognitoConfig">AWS
 * API Reference</a></p>
 */
class CognitoConfig {
 public:
  AWS_APIPORTAL_API CognitoConfig() = default;
  AWS_APIPORTAL_API CognitoConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API CognitoConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Cognito user pool.</p>
   */
  inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
  inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
  template <typename UserPoolArnT = Aws::String>
  void SetUserPoolArn(UserPoolArnT&& value) {
    m_userPoolArnHasBeenSet = true;
    m_userPoolArn = std::forward<UserPoolArnT>(value);
  }
  template <typename UserPoolArnT = Aws::String>
  CognitoConfig& WithUserPoolArn(UserPoolArnT&& value) {
    SetUserPoolArn(std::forward<UserPoolArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the user pool app client the portal uses.</p>
   */
  inline const Aws::String& GetAppClientId() const { return m_appClientId; }
  inline bool AppClientIdHasBeenSet() const { return m_appClientIdHasBeenSet; }
  template <typename AppClientIdT = Aws::String>
  void SetAppClientId(AppClientIdT&& value) {
    m_appClientIdHasBeenSet = true;
    m_appClientId = std::forward<AppClientIdT>(value);
  }
  template <typename AppClientIdT = Aws::String>
  CognitoConfig& WithAppClientId(AppClientIdT&& value) {
    SetAppClientId(std::forward<AppClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain of the user pool's hosted sign-in pages.</p>
   */
  inline const Aws::String& GetUserPoolDomain() const { return m_userPoolDomain; }
  inline bool UserPoolDomainHasBeenSet() const { return m_userPoolDomainHasBeenSet; }
  template <typename UserPoolDomainT = Aws::String>
  void SetUserPoolDomain(UserPoolDomainT&& value) {
    m_userPoolDomainHasBeenSet = true;
    m_userPoolDomain = std::forward<UserPoolDomainT>(value);
  }
  template <typename UserPoolDomainT = Aws::String>
  CognitoConfig& WithUserPoolDomain(UserPoolDomainT&& value) {
    SetUserPoolDomain(std::forward<UserPoolDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Cognito identity pool. Required only for fine-grained access
   * control.</p>
   */
  inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
  inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
  template <typename IdentityPoolIdT = Aws::String>
  void SetIdentityPoolId(IdentityPoolIdT&& value) {
    m_identityPoolIdHasBeenSet = true;
    m_identityPoolId = std::forward<IdentityPoolIdT>(value);
  }
  template <typename IdentityPoolIdT = Aws::String>
  CognitoConfig& WithIdentityPoolId(IdentityPoolIdT&& value) {
    SetIdentityPoolId(std::forward<IdentityPoolIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolArn;

  Aws::String m_appClientId;

  Aws::String m_userPoolDomain;

  Aws::String m_identityPoolId;
  bool m_userPoolArnHasBeenSet = false;
  bool m_appClientIdHasBeenSet = false;
  bool m_userPoolDomainHasBeenSet = false;
  bool m_identityPoolIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
