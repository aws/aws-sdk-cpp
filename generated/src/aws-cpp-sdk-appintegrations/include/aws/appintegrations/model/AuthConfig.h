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
 * external application endpoint. The configuration includes the authentication
 * type and credential location.</p><p><h3>See Also:</h3>   <a
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
   * <p>The type of authentication used when calling the external application.</p>
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
   * must be accessible to Connect Customer.</p>
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
 private:
  AuthType m_authType{AuthType::NOT_SET};

  Aws::String m_credentialProviderIdentifier;
  bool m_authTypeHasBeenSet = false;
  bool m_credentialProviderIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
