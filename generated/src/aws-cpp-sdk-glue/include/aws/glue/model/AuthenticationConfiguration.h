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


    ///@{
    /**
     * <p>A structure containing the authentication configuration.</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline AuthenticationConfiguration& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline AuthenticationConfiguration& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret manager ARN to store credentials.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline AuthenticationConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline AuthenticationConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline AuthenticationConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for OAuth2 authentication.</p>
     */
    inline const OAuth2Properties& GetOAuth2Properties() const{ return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    inline void SetOAuth2Properties(const OAuth2Properties& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = value; }
    inline void SetOAuth2Properties(OAuth2Properties&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::move(value); }
    inline AuthenticationConfiguration& WithOAuth2Properties(const OAuth2Properties& value) { SetOAuth2Properties(value); return *this;}
    inline AuthenticationConfiguration& WithOAuth2Properties(OAuth2Properties&& value) { SetOAuth2Properties(std::move(value)); return *this;}
    ///@}
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
