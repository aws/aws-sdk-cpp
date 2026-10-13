/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/AuthType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppIntegrationsService {
namespace Model {

/**
 * <p>Contains the authentication settings that Connect Customer uses to call an
 * external application endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/AuthConfig">AWS
 * API Reference</a></p>
 */
class AuthConfig {
 public:
  AWS_APPINTEGRATIONSSERVICE_API AuthConfig() = default;
  AWS_APPINTEGRATIONSSERVICE_API AuthConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPINTEGRATIONSSERVICE_API AuthConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of authentication that Connect Customer uses to call the external
   * application endpoint. You must specify an authentication type for
   * <code>A2A_SERVER</code> applications. Valid values:</p> <ul> <li> <p>
   * <code>API_KEY</code>: Connect Customer sends an API key that is stored in the
   * Secrets Manager secret that you specify in
   * <code>CredentialProviderIdentifier</code>.</p> </li> <li> <p>
   * <code>CONNECT_JWT</code>: Connect Customer issues a short-lived, signed JSON Web
   * Token (JWT). This authentication type doesn't require a stored credential.</p>
   * </li> </ul>
   */
  inline AuthType GetAuthType() const { return m_authType; }
  inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
  inline void SetAuthType(AuthType value) {
    m_authTypeHasBeenSet = true;
    m_authType = value;
  }
  inline AuthConfig& WithAuthType(AuthType value) {
    SetAuthType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret that stores the credentials. The secret
   * must be accessible to Connect Customer.</p> <p>You must specify this ARN when
   * <code>AuthType</code> is <code>API_KEY</code>. Don't specify it when
   * <code>AuthType</code> is <code>CONNECT_JWT</code>.</p>
   */
  inline const Aws::String& GetCredentialProviderIdentifier() const { return m_credentialProviderIdentifier; }
  inline bool CredentialProviderIdentifierHasBeenSet() const { return m_credentialProviderIdentifierHasBeenSet; }
  template <typename CredentialProviderIdentifierT = Aws::String>
  void SetCredentialProviderIdentifier(CredentialProviderIdentifierT&& value) {
    m_credentialProviderIdentifierHasBeenSet = true;
    m_credentialProviderIdentifier = std::forward<CredentialProviderIdentifierT>(value);
  }
  template <typename CredentialProviderIdentifierT = Aws::String>
  AuthConfig& WithCredentialProviderIdentifier(CredentialProviderIdentifierT&& value) {
    SetCredentialProviderIdentifier(std::forward<CredentialProviderIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that Connect Customer uses as the audience (<code>aud</code>) claim
   * of the JSON Web Token (JWT) that it issues. You can specify this parameter only
   * when <code>AuthType</code> is <code>CONNECT_JWT</code>. If you don't specify it,
   * the audience is the <code>AccessUrl</code> of the application. The value can't
   * contain <code>connect.amazonaws.com</code>.</p>
   */
  inline const Aws::String& GetAudienceOverride() const { return m_audienceOverride; }
  inline bool AudienceOverrideHasBeenSet() const { return m_audienceOverrideHasBeenSet; }
  template <typename AudienceOverrideT = Aws::String>
  void SetAudienceOverride(AudienceOverrideT&& value) {
    m_audienceOverrideHasBeenSet = true;
    m_audienceOverride = std::forward<AudienceOverrideT>(value);
  }
  template <typename AudienceOverrideT = Aws::String>
  AuthConfig& WithAudienceOverride(AudienceOverrideT&& value) {
    SetAudienceOverride(std::forward<AudienceOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  AuthType m_authType{AuthType::NOT_SET};

  Aws::String m_credentialProviderIdentifier;

  Aws::String m_audienceOverride;
  bool m_authTypeHasBeenSet = false;
  bool m_credentialProviderIdentifierHasBeenSet = false;
  bool m_audienceOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
