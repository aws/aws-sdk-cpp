/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AuthenticationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/OAuth2Properties.h>
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
   * <p>A structure containing the authentication configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfiguration
  {
  public:
    AWS_GLUE_API AuthenticationConfiguration();
    AWS_GLUE_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline AuthenticationConfiguration& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline AuthenticationConfiguration& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline AuthenticationConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline AuthenticationConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline AuthenticationConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline const OAuth2Properties& GetOAuth2Properties() const{ return m_oAuth2Properties; }

    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }

    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline void SetOAuth2Properties(const OAuth2Properties& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = value; }

    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline void SetOAuth2Properties(OAuth2Properties&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::move(value); }

    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline AuthenticationConfiguration& WithOAuth2Properties(const OAuth2Properties& value) { SetOAuth2Properties(value); return *this;}

    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline AuthenticationConfiguration& WithOAuth2Properties(OAuth2Properties&& value) { SetOAuth2Properties(std::move(value)); return *this;}

  private:

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    OAuth2Properties m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
