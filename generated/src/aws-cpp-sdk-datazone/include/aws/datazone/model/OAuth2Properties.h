/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AuthorizationCodeProperties.h>
#include <aws/datazone/model/OAuth2ClientApplication.h>
#include <aws/datazone/model/GlueOAuth2Credentials.h>
#include <aws/datazone/model/OAuth2GrantType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The OAuth2 properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/OAuth2Properties">AWS
   * API Reference</a></p>
   */
  class OAuth2Properties
  {
  public:
    AWS_DATAZONE_API OAuth2Properties();
    AWS_DATAZONE_API OAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API OAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization code properties of the OAuth2 properties.</p>
     */
    inline const AuthorizationCodeProperties& GetAuthorizationCodeProperties() const{ return m_authorizationCodeProperties; }
    inline bool AuthorizationCodePropertiesHasBeenSet() const { return m_authorizationCodePropertiesHasBeenSet; }
    inline void SetAuthorizationCodeProperties(const AuthorizationCodeProperties& value) { m_authorizationCodePropertiesHasBeenSet = true; m_authorizationCodeProperties = value; }
    inline void SetAuthorizationCodeProperties(AuthorizationCodeProperties&& value) { m_authorizationCodePropertiesHasBeenSet = true; m_authorizationCodeProperties = std::move(value); }
    inline OAuth2Properties& WithAuthorizationCodeProperties(const AuthorizationCodeProperties& value) { SetAuthorizationCodeProperties(value); return *this;}
    inline OAuth2Properties& WithAuthorizationCodeProperties(AuthorizationCodeProperties&& value) { SetAuthorizationCodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth2 client application of the OAuth2 properties.</p>
     */
    inline const OAuth2ClientApplication& GetOAuth2ClientApplication() const{ return m_oAuth2ClientApplication; }
    inline bool OAuth2ClientApplicationHasBeenSet() const { return m_oAuth2ClientApplicationHasBeenSet; }
    inline void SetOAuth2ClientApplication(const OAuth2ClientApplication& value) { m_oAuth2ClientApplicationHasBeenSet = true; m_oAuth2ClientApplication = value; }
    inline void SetOAuth2ClientApplication(OAuth2ClientApplication&& value) { m_oAuth2ClientApplicationHasBeenSet = true; m_oAuth2ClientApplication = std::move(value); }
    inline OAuth2Properties& WithOAuth2ClientApplication(const OAuth2ClientApplication& value) { SetOAuth2ClientApplication(value); return *this;}
    inline OAuth2Properties& WithOAuth2ClientApplication(OAuth2ClientApplication&& value) { SetOAuth2ClientApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth2 credentials of the OAuth2 properties.</p>
     */
    inline const GlueOAuth2Credentials& GetOAuth2Credentials() const{ return m_oAuth2Credentials; }
    inline bool OAuth2CredentialsHasBeenSet() const { return m_oAuth2CredentialsHasBeenSet; }
    inline void SetOAuth2Credentials(const GlueOAuth2Credentials& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = value; }
    inline void SetOAuth2Credentials(GlueOAuth2Credentials&& value) { m_oAuth2CredentialsHasBeenSet = true; m_oAuth2Credentials = std::move(value); }
    inline OAuth2Properties& WithOAuth2Credentials(const GlueOAuth2Credentials& value) { SetOAuth2Credentials(value); return *this;}
    inline OAuth2Properties& WithOAuth2Credentials(GlueOAuth2Credentials&& value) { SetOAuth2Credentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth2 grant type of the OAuth2 properties.</p>
     */
    inline const OAuth2GrantType& GetOAuth2GrantType() const{ return m_oAuth2GrantType; }
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
    inline void SetOAuth2GrantType(const OAuth2GrantType& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }
    inline void SetOAuth2GrantType(OAuth2GrantType&& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = std::move(value); }
    inline OAuth2Properties& WithOAuth2GrantType(const OAuth2GrantType& value) { SetOAuth2GrantType(value); return *this;}
    inline OAuth2Properties& WithOAuth2GrantType(OAuth2GrantType&& value) { SetOAuth2GrantType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth2 token URL of the OAuth2 properties.</p>
     */
    inline const Aws::String& GetTokenUrl() const{ return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    inline void SetTokenUrl(const Aws::String& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = value; }
    inline void SetTokenUrl(Aws::String&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::move(value); }
    inline void SetTokenUrl(const char* value) { m_tokenUrlHasBeenSet = true; m_tokenUrl.assign(value); }
    inline OAuth2Properties& WithTokenUrl(const Aws::String& value) { SetTokenUrl(value); return *this;}
    inline OAuth2Properties& WithTokenUrl(Aws::String&& value) { SetTokenUrl(std::move(value)); return *this;}
    inline OAuth2Properties& WithTokenUrl(const char* value) { SetTokenUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth2 token URL parameter map of the OAuth2 properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlParametersMap() const{ return m_tokenUrlParametersMap; }
    inline bool TokenUrlParametersMapHasBeenSet() const { return m_tokenUrlParametersMapHasBeenSet; }
    inline void SetTokenUrlParametersMap(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap = value; }
    inline void SetTokenUrlParametersMap(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap = std::move(value); }
    inline OAuth2Properties& WithTokenUrlParametersMap(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenUrlParametersMap(value); return *this;}
    inline OAuth2Properties& WithTokenUrlParametersMap(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenUrlParametersMap(std::move(value)); return *this;}
    inline OAuth2Properties& AddTokenUrlParametersMap(const Aws::String& key, const Aws::String& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, value); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(Aws::String&& key, const Aws::String& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), value); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(const Aws::String& key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, std::move(value)); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(Aws::String&& key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), std::move(value)); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(const char* key, Aws::String&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, std::move(value)); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(Aws::String&& key, const char* value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::move(key), value); return *this; }
    inline OAuth2Properties& AddTokenUrlParametersMap(const char* key, const char* value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(key, value); return *this; }
    ///@}
  private:

    AuthorizationCodeProperties m_authorizationCodeProperties;
    bool m_authorizationCodePropertiesHasBeenSet = false;

    OAuth2ClientApplication m_oAuth2ClientApplication;
    bool m_oAuth2ClientApplicationHasBeenSet = false;

    GlueOAuth2Credentials m_oAuth2Credentials;
    bool m_oAuth2CredentialsHasBeenSet = false;

    OAuth2GrantType m_oAuth2GrantType;
    bool m_oAuth2GrantTypeHasBeenSet = false;

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenUrlParametersMap;
    bool m_tokenUrlParametersMapHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
