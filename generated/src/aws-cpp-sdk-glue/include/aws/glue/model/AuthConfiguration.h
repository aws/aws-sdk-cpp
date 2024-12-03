/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Property.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The authentication configuration for a connection returned by the
   * <code>DescribeConnectionType</code> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuthConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthConfiguration
  {
  public:
    AWS_GLUE_API AuthConfiguration();
    AWS_GLUE_API AuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication for a connection.</p>
     */
    inline const Property& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const Property& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(Property&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline AuthConfiguration& WithAuthenticationType(const Property& value) { SetAuthenticationType(value); return *this;}
    inline AuthConfiguration& WithAuthenticationType(Property&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Secrets Manager.</p>
     */
    inline const Property& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Property& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Property&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline AuthConfiguration& WithSecretArn(const Property& value) { SetSecretArn(value); return *this;}
    inline AuthConfiguration& WithSecretArn(Property&& value) { SetSecretArn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the OAuth2 properties. Each value is a a
     * <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetOAuth2Properties() const{ return m_oAuth2Properties; }
    inline bool OAuth2PropertiesHasBeenSet() const { return m_oAuth2PropertiesHasBeenSet; }
    inline void SetOAuth2Properties(const Aws::Map<Aws::String, Property>& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = value; }
    inline void SetOAuth2Properties(Aws::Map<Aws::String, Property>&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties = std::move(value); }
    inline AuthConfiguration& WithOAuth2Properties(const Aws::Map<Aws::String, Property>& value) { SetOAuth2Properties(value); return *this;}
    inline AuthConfiguration& WithOAuth2Properties(Aws::Map<Aws::String, Property>&& value) { SetOAuth2Properties(std::move(value)); return *this;}
    inline AuthConfiguration& AddOAuth2Properties(const Aws::String& key, const Property& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(key, value); return *this; }
    inline AuthConfiguration& AddOAuth2Properties(Aws::String&& key, const Property& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(std::move(key), value); return *this; }
    inline AuthConfiguration& AddOAuth2Properties(const Aws::String& key, Property&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddOAuth2Properties(Aws::String&& key, Property&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthConfiguration& AddOAuth2Properties(const char* key, Property&& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddOAuth2Properties(const char* key, const Property& value) { m_oAuth2PropertiesHasBeenSet = true; m_oAuth2Properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the OAuth2 properties. Each value is a a
     * <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetBasicAuthenticationProperties() const{ return m_basicAuthenticationProperties; }
    inline bool BasicAuthenticationPropertiesHasBeenSet() const { return m_basicAuthenticationPropertiesHasBeenSet; }
    inline void SetBasicAuthenticationProperties(const Aws::Map<Aws::String, Property>& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties = value; }
    inline void SetBasicAuthenticationProperties(Aws::Map<Aws::String, Property>&& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties = std::move(value); }
    inline AuthConfiguration& WithBasicAuthenticationProperties(const Aws::Map<Aws::String, Property>& value) { SetBasicAuthenticationProperties(value); return *this;}
    inline AuthConfiguration& WithBasicAuthenticationProperties(Aws::Map<Aws::String, Property>&& value) { SetBasicAuthenticationProperties(std::move(value)); return *this;}
    inline AuthConfiguration& AddBasicAuthenticationProperties(const Aws::String& key, const Property& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(key, value); return *this; }
    inline AuthConfiguration& AddBasicAuthenticationProperties(Aws::String&& key, const Property& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(std::move(key), value); return *this; }
    inline AuthConfiguration& AddBasicAuthenticationProperties(const Aws::String& key, Property&& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddBasicAuthenticationProperties(Aws::String&& key, Property&& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthConfiguration& AddBasicAuthenticationProperties(const char* key, Property&& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddBasicAuthenticationProperties(const char* key, const Property& value) { m_basicAuthenticationPropertiesHasBeenSet = true; m_basicAuthenticationProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for the custom authentication properties. Each value
     * is a a <code>Property</code> object.</p>
     */
    inline const Aws::Map<Aws::String, Property>& GetCustomAuthenticationProperties() const{ return m_customAuthenticationProperties; }
    inline bool CustomAuthenticationPropertiesHasBeenSet() const { return m_customAuthenticationPropertiesHasBeenSet; }
    inline void SetCustomAuthenticationProperties(const Aws::Map<Aws::String, Property>& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties = value; }
    inline void SetCustomAuthenticationProperties(Aws::Map<Aws::String, Property>&& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties = std::move(value); }
    inline AuthConfiguration& WithCustomAuthenticationProperties(const Aws::Map<Aws::String, Property>& value) { SetCustomAuthenticationProperties(value); return *this;}
    inline AuthConfiguration& WithCustomAuthenticationProperties(Aws::Map<Aws::String, Property>&& value) { SetCustomAuthenticationProperties(std::move(value)); return *this;}
    inline AuthConfiguration& AddCustomAuthenticationProperties(const Aws::String& key, const Property& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(key, value); return *this; }
    inline AuthConfiguration& AddCustomAuthenticationProperties(Aws::String&& key, const Property& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(std::move(key), value); return *this; }
    inline AuthConfiguration& AddCustomAuthenticationProperties(const Aws::String& key, Property&& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddCustomAuthenticationProperties(Aws::String&& key, Property&& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline AuthConfiguration& AddCustomAuthenticationProperties(const char* key, Property&& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(key, std::move(value)); return *this; }
    inline AuthConfiguration& AddCustomAuthenticationProperties(const char* key, const Property& value) { m_customAuthenticationPropertiesHasBeenSet = true; m_customAuthenticationProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Property m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Property m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_oAuth2Properties;
    bool m_oAuth2PropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_basicAuthenticationProperties;
    bool m_basicAuthenticationPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Property> m_customAuthenticationProperties;
    bool m_customAuthenticationPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
