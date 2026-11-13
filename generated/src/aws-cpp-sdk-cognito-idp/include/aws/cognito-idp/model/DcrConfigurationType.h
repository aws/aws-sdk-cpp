/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/OAuthFlowType.h>
#include <aws/cognito-idp/model/StatusType.h>
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
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The dynamic client registration configuration for a user pool. Dynamic client
 * registration lets applications register their own app clients at runtime through
 * the registration endpoint of your user pool domain. To activate this setting,
 * your user pool must be in the <a
 * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
 * Essentials tier</a> or higher.</p> <p>Applications register app clients at the
 * <code>/oauth2/register</code> endpoint of your user pool domain. In
 * authenticated registration, the application sends an access token from your user
 * pool that has the <code>aws.cognito/dcr/register</code> scope. In open
 * registration, the application doesn't send a token.</p> <p>When you include this
 * configuration in an <code>UpdateUserPool</code> request, Amazon Cognito replaces
 * the existing configuration with the one that you provide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DcrConfigurationType">AWS
 * API Reference</a></p>
 */
class DcrConfigurationType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API DcrConfigurationType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API DcrConfigurationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API DcrConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether dynamic client registration is turned on for the user pool.
   * If you provide a dynamic client registration configuration without this value,
   * Amazon Cognito turns dynamic client registration on.</p>
   */
  inline StatusType GetEnableStatus() const { return m_enableStatus; }
  inline bool EnableStatusHasBeenSet() const { return m_enableStatusHasBeenSet; }
  inline void SetEnableStatus(StatusType value) {
    m_enableStatusHasBeenSet = true;
    m_enableStatus = value;
  }
  inline DcrConfigurationType& WithEnableStatus(StatusType value) {
    SetEnableStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether open registration is turned on. When open registration is
   * on, applications can register app clients without an initial access token. The
   * default value is <code>false</code>.</p>
   */
  inline bool GetOpenDcrEnabled() const { return m_openDcrEnabled; }
  inline bool OpenDcrEnabledHasBeenSet() const { return m_openDcrEnabledHasBeenSet; }
  inline void SetOpenDcrEnabled(bool value) {
    m_openDcrEnabledHasBeenSet = true;
    m_openDcrEnabled = value;
  }
  inline DcrConfigurationType& WithOpenDcrEnabled(bool value) {
    SetOpenDcrEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth grant types that an app client created through authenticated
   * registration can request. If you don't set this value, authenticated
   * registration permits the <code>code</code> and <code>client_credentials</code>
   * grant types. If you set an empty list, Amazon Cognito rejects authenticated
   * registration requests. Dynamic client registration supports the following
   * values. Amazon Cognito accepts <code>implicit</code> in this list but ignores
   * it.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant flow, which provides an
   * authorization code as the response. This code can be exchanged for access tokens
   * with the <code>/oauth2/token</code> endpoint.</p> </dd>
   * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
   * <code>/oauth2/token</code> endpoint directly to a non-person user using a
   * combination of the client ID and client secret.</p> </dd> </dl>
   */
  inline const Aws::Vector<OAuthFlowType>& GetAuthenticatedGrantTypes() const { return m_authenticatedGrantTypes; }
  inline bool AuthenticatedGrantTypesHasBeenSet() const { return m_authenticatedGrantTypesHasBeenSet; }
  template <typename AuthenticatedGrantTypesT = Aws::Vector<OAuthFlowType>>
  void SetAuthenticatedGrantTypes(AuthenticatedGrantTypesT&& value) {
    m_authenticatedGrantTypesHasBeenSet = true;
    m_authenticatedGrantTypes = std::forward<AuthenticatedGrantTypesT>(value);
  }
  template <typename AuthenticatedGrantTypesT = Aws::Vector<OAuthFlowType>>
  DcrConfigurationType& WithAuthenticatedGrantTypes(AuthenticatedGrantTypesT&& value) {
    SetAuthenticatedGrantTypes(std::forward<AuthenticatedGrantTypesT>(value));
    return *this;
  }
  inline DcrConfigurationType& AddAuthenticatedGrantTypes(OAuthFlowType value) {
    m_authenticatedGrantTypesHasBeenSet = true;
    m_authenticatedGrantTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth grant types that an app client created through open registration
   * can request. If you don't set this value, open registration permits only the
   * <code>code</code> grant type. If you set an empty list, Amazon Cognito rejects
   * open registration requests. If you add <code>client_credentials</code>, anyone
   * can register an app client that requests machine-to-machine (M2M) access tokens,
   * and you pay for the M2M token requests that those app clients make. Dynamic
   * client registration supports the following values. Amazon Cognito accepts
   * <code>implicit</code> in this list but ignores it.</p> <dl> <dt>code</dt> <dd>
   * <p>Use a code grant flow, which provides an authorization code as the response.
   * This code can be exchanged for access tokens with the <code>/oauth2/token</code>
   * endpoint.</p> </dd> <dt>client_credentials</dt> <dd> <p>Issue the access token
   * from the <code>/oauth2/token</code> endpoint directly to a non-person user using
   * a combination of the client ID and client secret.</p> </dd> </dl>
   */
  inline const Aws::Vector<OAuthFlowType>& GetOpenDcrGrantTypes() const { return m_openDcrGrantTypes; }
  inline bool OpenDcrGrantTypesHasBeenSet() const { return m_openDcrGrantTypesHasBeenSet; }
  template <typename OpenDcrGrantTypesT = Aws::Vector<OAuthFlowType>>
  void SetOpenDcrGrantTypes(OpenDcrGrantTypesT&& value) {
    m_openDcrGrantTypesHasBeenSet = true;
    m_openDcrGrantTypes = std::forward<OpenDcrGrantTypesT>(value);
  }
  template <typename OpenDcrGrantTypesT = Aws::Vector<OAuthFlowType>>
  DcrConfigurationType& WithOpenDcrGrantTypes(OpenDcrGrantTypesT&& value) {
    SetOpenDcrGrantTypes(std::forward<OpenDcrGrantTypesT>(value));
    return *this;
  }
  inline DcrConfigurationType& AddOpenDcrGrantTypes(OAuthFlowType value) {
    m_openDcrGrantTypesHasBeenSet = true;
    m_openDcrGrantTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scopes that an app client created through dynamic client registration can
   * request, in addition to the standard OpenID Connect (OIDC) scopes. You can
   * include custom scopes from your resource servers and
   * <code>aws.cognito.signin.user.admin</code>. Registered app clients can request
   * the OIDC scopes <code>openid</code>, <code>email</code>, <code>phone</code>, and
   * <code>profile</code> without listing them here. If you don't set this value,
   * registered app clients can request only the OIDC scopes. A registered app client
   * can't request the <code>aws.cognito/dcr/register</code> scope, even if you
   * include it in this list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedScopes() const { return m_allowedScopes; }
  inline bool AllowedScopesHasBeenSet() const { return m_allowedScopesHasBeenSet; }
  template <typename AllowedScopesT = Aws::Vector<Aws::String>>
  void SetAllowedScopes(AllowedScopesT&& value) {
    m_allowedScopesHasBeenSet = true;
    m_allowedScopes = std::forward<AllowedScopesT>(value);
  }
  template <typename AllowedScopesT = Aws::Vector<Aws::String>>
  DcrConfigurationType& WithAllowedScopes(AllowedScopesT&& value) {
    SetAllowedScopes(std::forward<AllowedScopesT>(value));
    return *this;
  }
  template <typename AllowedScopesT = Aws::String>
  DcrConfigurationType& AddAllowedScopes(AllowedScopesT&& value) {
    m_allowedScopesHasBeenSet = true;
    m_allowedScopes.emplace_back(std::forward<AllowedScopesT>(value));
    return *this;
  }
  ///@}
 private:
  StatusType m_enableStatus{StatusType::NOT_SET};

  bool m_openDcrEnabled{false};

  Aws::Vector<OAuthFlowType> m_authenticatedGrantTypes;

  Aws::Vector<OAuthFlowType> m_openDcrGrantTypes;

  Aws::Vector<Aws::String> m_allowedScopes;
  bool m_enableStatusHasBeenSet = false;
  bool m_openDcrEnabledHasBeenSet = false;
  bool m_authenticatedGrantTypesHasBeenSet = false;
  bool m_openDcrGrantTypesHasBeenSet = false;
  bool m_allowedScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
