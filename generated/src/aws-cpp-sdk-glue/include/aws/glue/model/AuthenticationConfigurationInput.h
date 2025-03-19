/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AuthenticationType.h>
#include <aws/glue/model/OAuth2PropertiesInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BasicAuthenticationCredentials.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing the authentication configuration in the
   * CreateConnection request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuthenticationConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfigurationInput
  {
  public:
    AWS_GLUE_API AuthenticationConfigurationInput() = default;
    AWS_GLUE_API AuthenticationConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuthenticationConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure containing the authentication configuration in the
     * CreateConnection request.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline AuthenticationConfigurationInput& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for OAuth2 authentication in the CreateConnection request.</p>
     */
    inline const OAuth2PropertiesInput& GetOAuth2Properties() const { return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    template<typename OAuth2PropertiesT = OAuth2PropertiesInput>
    void SetOAuth2Properties(OAuth2PropertiesT&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::forward<OAuth2PropertiesT>(value); }
    template<typename OAuth2PropertiesT = OAuth2PropertiesInput>
    AuthenticationConfigurationInput& WithOAuth2Properties(OAuth2PropertiesT&& value) { SetOAuth2Properties(std::forward<OAuth2PropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret manager ARN to store credentials in the CreateConnection
     * request.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    AuthenticationConfigurationInput& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key used to encrypt the connection. Only taken an as input
     * in the request and stored in the Secret Manager.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    AuthenticationConfigurationInput& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials used when the authentication type is basic
     * authentication.</p>
     */
    inline const BasicAuthenticationCredentials& GetBasicAuthenticationCredentials() const { return m_basicAuthenticationCredentials; }
    inline bool BasicAuthenticationCredentialsHasBeenSet() const { return m_basicAuthenticationCredentialsHasBeenSet; }
    template<typename BasicAuthenticationCredentialsT = BasicAuthenticationCredentials>
    void SetBasicAuthenticationCredentials(BasicAuthenticationCredentialsT&& value) { m_basicAuthenticationCredentialsHasBeenSet = true; m_basicAuthenticationCredentials = std::forward<BasicAuthenticationCredentialsT>(value); }
    template<typename BasicAuthenticationCredentialsT = BasicAuthenticationCredentials>
    AuthenticationConfigurationInput& WithBasicAuthenticationCredentials(BasicAuthenticationCredentialsT&& value) { SetBasicAuthenticationCredentials(std::forward<BasicAuthenticationCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials used when the authentication type is custom
     * authentication.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomAuthenticationCredentials() const { return m_customAuthenticationCredentials; }
    inline bool CustomAuthenticationCredentialsHasBeenSet() const { return m_customAuthenticationCredentialsHasBeenSet; }
    template<typename CustomAuthenticationCredentialsT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomAuthenticationCredentials(CustomAuthenticationCredentialsT&& value) { m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials = std::forward<CustomAuthenticationCredentialsT>(value); }
    template<typename CustomAuthenticationCredentialsT = Aws::Map<Aws::String, Aws::String>>
    AuthenticationConfigurationInput& WithCustomAuthenticationCredentials(CustomAuthenticationCredentialsT&& value) { SetCustomAuthenticationCredentials(std::forward<CustomAuthenticationCredentialsT>(value)); return *this;}
    template<typename CustomAuthenticationCredentialsKeyT = Aws::String, typename CustomAuthenticationCredentialsValueT = Aws::String>
    AuthenticationConfigurationInput& AddCustomAuthenticationCredentials(CustomAuthenticationCredentialsKeyT&& key, CustomAuthenticationCredentialsValueT&& value) {
      m_customAuthenticationCredentialsHasBeenSet = true; m_customAuthenticationCredentials.emplace(std::forward<CustomAuthenticationCredentialsKeyT>(key), std::forward<CustomAuthenticationCredentialsValueT>(value)); return *this;
    }
    ///@}
  private:

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    OAuth2PropertiesInput m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    BasicAuthenticationCredentials m_basicAuthenticationCredentials;
    bool m_basicAuthenticationCredentialsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customAuthenticationCredentials;
    bool m_customAuthenticationCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
