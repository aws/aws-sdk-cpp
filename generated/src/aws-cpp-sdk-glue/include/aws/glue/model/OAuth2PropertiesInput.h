/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/OAuth2GrantType.h>
#include <aws/glue/model/OAuth2ClientApplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/AuthorizationCodeProperties.h>
#include <aws/glue/model/OAuth2Credentials.h>
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
   * <p>A structure containing properties for OAuth2 in the CreateConnection
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OAuth2PropertiesInput">AWS
   * API Reference</a></p>
   */
  class OAuth2PropertiesInput
  {
  public:
    AWS_GLUE_API OAuth2PropertiesInput();
    AWS_GLUE_API OAuth2PropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OAuth2PropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2 grant type in the CreateConnection request. For example,
     * <code>AUTHORIZATION_CODE</code>, <code>JWT_BEARER</code>, or
     * <code>CLIENT_CREDENTIALS</code>.</p>
     */
    inline const OAuth2GrantType& GetOAuth2GrantType() const{ return m_oAuth2GrantType; }
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
    inline void SetOAuth2GrantType(const OAuth2GrantType& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }
    inline void SetOAuth2GrantType(OAuth2GrantType&& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = std::move(value); }
    inline OAuth2PropertiesInput& WithOAuth2GrantType(const OAuth2GrantType& value) { SetOAuth2GrantType(value); return *this;}
    inline OAuth2PropertiesInput& WithOAuth2GrantType(OAuth2GrantType&& value) { SetOAuth2GrantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client application type in the CreateConnection request. For example,
     * <code>AWS_MANAGED</code> or <code>USER_MANAGED</code>.</p>
     */
    inline const OAuth2ClientApplication& GetOAuth2ClientApplication() const{ return m_oAuth2ClientApplication; }
    inline bool OAuth2ClientApplicationHasBeenSet() const { return m_oAuth2ClientApplicationHasBeenSet; }
    inline void SetOAuth2ClientApplication(const OAuth2ClientApplication& value) { m_oAuth2ClientApplicationHasBeenSet = true; m_oAuth2ClientApplication = value; }
    inline void SetOAuth2ClientApplication(OAuth2ClientApplication&& value) { m_oAuth2ClientApplicationHasBeenSet = true; m_oAuth2ClientApplication = std::move(value); }
    inline OAuth2PropertiesInput& WithOAuth2ClientApplication(const OAuth2ClientApplication& value) { SetOAuth2ClientApplication(value); return *this;}
    inline OAuth2PropertiesInput& WithOAuth2ClientApplication(OAuth2ClientApplication&& value) { SetOAuth2ClientApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the provider's authentication server, to exchange an authorization
     * code for an access token.</p>
     */
    inline const Aws::String& GetTokenUrl() const{ return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    inline void SetTokenUrl(const Aws::String& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = value; }
    inline void SetTokenUrl(Aws::String&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::move(value); }
    inline void SetTokenUrl(const char* value) { m_tokenUrlHasBeenSet = true; m_tokenUrl.assign(value); }
    inline OAuth2PropertiesInput& WithTokenUrl(const Aws::String& value) { SetTokenUrl(value); return *this;}
    inline OAuth2PropertiesInput& WithTokenUrl(Aws::String&& value) { SetTokenUrl(std::move(value)); return *this;}
    inline OAuth2PropertiesInput& WithTokenUrl(const char* value) { SetTokenUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of parameters that are added to the token <code>GET</code> request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlParametersMap() const{ return m_tokenUrlParametersMap; }
    inline bool TokenUrlParametersMapHasBeenSet() const { return m_tokenUrlParametersMapHasBeenSet; }
    inline void SetTokenUrlParametersMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap = value; }
    inline void SetTokenUrlParametersMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap = std::move(value); }
    inline OAuth2PropertiesInput& WithTokenUrlParametersMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenUrlParametersMap(value); return *this;}
    inline OAuth2PropertiesInput& WithTokenUrlParametersMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenUrlParametersMap(std::move(value)); return *this;}
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(const Aws::String& key, const Aws::String& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, value); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(Aws::String&& key, const Aws::String& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), value); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(const Aws::String& key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, std::move(value)); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(Aws::String&& key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), std::move(value)); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(const char* key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, std::move(value)); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(Aws::String&& key, const char* value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), value); return *this; }
    inline OAuth2PropertiesInput& AddTokenUrlParametersMap(const char* key, const char* value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of properties required for the the OAuth2
     * <code>AUTHORIZATION_CODE</code> grant type.</p>
     */
    inline const AuthorizationCodeProperties& GetAuthorizationCodeProperties() const{ return m_authorizationCodeProperties; }
    inline bool AuthorizationCodePropertiesHasBeenSet() const { return m_authorizationCodePropertiesHasBeenSet; }
    inline void SetAuthorizationCodeProperties(const AuthorizationCodeProperties& value) { m_authorizationCodePropertiesHasBeenSet = true; m_authorizationCodeProperties = value; }
    inline void SetAuthorizationCodeProperties(AuthorizationCodeProperties&& value) { m_authorizationCodePropertiesHasBeenSet = true; m_authorizationCodeProperties = std::move(value); }
    inline OAuth2PropertiesInput& WithAuthorizationCodeProperties(const AuthorizationCodeProperties& value) { SetAuthorizationCodeProperties(value); return *this;}
    inline OAuth2PropertiesInput& WithAuthorizationCodeProperties(AuthorizationCodeProperties&& value) { SetAuthorizationCodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials used when the authentication type is OAuth2
     * authentication.</p>
     */
    inline const OAuth2Credentials& GetOAuth2Credentials() const{ return m_oAuth2Credentials; }
    inline bool OAuth2CredentialsHasBeenSet() const { return m_oAuth2CredentialsHasBeenSet; }
    inline void SetOAuth2Credentials(const OAuth2Credentials& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = value; }
    inline void SetOAuth2Credentials(OAuth2Credentials&& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = std::move(value); }
    inline OAuth2PropertiesInput& WithOAuth2Credentials(const OAuth2Credentials& value) { SetOAuth2Credentials(value); return *this;}
    inline OAuth2PropertiesInput& WithOAuth2Credentials(OAuth2Credentials&& value) { SetOAuth2Credentials(std::move(value)); return *this;}
    ///@}
  private:

    OAuth2GrantType m_oAuth2GrantType;
    bool m_oAuth2GrantTypeHasBeenSet = false;

    OAuth2ClientApplication m_oAuth2ClientApplication;
    bool m_oAuth2ClientApplicationHasBeenSet = false;

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenUrlParametersMap;
    bool m_tokenUrlParametersMapHasBeenSet = false;

    AuthorizationCodeProperties m_authorizationCodeProperties;
    bool m_authorizationCodePropertiesHasBeenSet = false;

    OAuth2Credentials m_oAuth2Credentials;
    bool m_oAuth2CredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
