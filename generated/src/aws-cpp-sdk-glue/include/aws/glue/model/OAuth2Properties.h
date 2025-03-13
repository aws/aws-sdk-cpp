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
   * <p>A structure containing properties for OAuth2 authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OAuth2Properties">AWS
   * API Reference</a></p>
   */
  class OAuth2Properties
  {
  public:
    AWS_GLUE_API OAuth2Properties() = default;
    AWS_GLUE_API OAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2 grant type. For example, <code>AUTHORIZATION_CODE</code>,
     * <code>JWT_BEARER</code>, or <code>CLIENT_CREDENTIALS</code>.</p>
     */
    inline OAuth2GrantType GetOAuth2GrantType() const { return m_oAuth2GrantType; }
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
    inline void SetOAuth2GrantType(OAuth2GrantType value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }
    inline OAuth2Properties& WithOAuth2GrantType(OAuth2GrantType value) { SetOAuth2GrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client application type. For example, AWS_MANAGED or USER_MANAGED.</p>
     */
    inline const OAuth2ClientApplication& GetOAuth2ClientApplication() const { return m_oAuth2ClientApplication; }
    inline bool OAuth2ClientApplicationHasBeenSet() const { return m_oAuth2ClientApplicationHasBeenSet; }
    template<typename OAuth2ClientApplicationT = OAuth2ClientApplication>
    void SetOAuth2ClientApplication(OAuth2ClientApplicationT&& value) { m_oAuth2ClientApplicationHasBeenSet = true; m_oAuth2ClientApplication = std::forward<OAuth2ClientApplicationT>(value); }
    template<typename OAuth2ClientApplicationT = OAuth2ClientApplication>
    OAuth2Properties& WithOAuth2ClientApplication(OAuth2ClientApplicationT&& value) { SetOAuth2ClientApplication(std::forward<OAuth2ClientApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the provider's authentication server, to exchange an authorization
     * code for an access token.</p>
     */
    inline const Aws::String& GetTokenUrl() const { return m_tokenUrl; }
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }
    template<typename TokenUrlT = Aws::String>
    void SetTokenUrl(TokenUrlT&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::forward<TokenUrlT>(value); }
    template<typename TokenUrlT = Aws::String>
    OAuth2Properties& WithTokenUrl(TokenUrlT&& value) { SetTokenUrl(std::forward<TokenUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of parameters that are added to the token <code>GET</code> request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlParametersMap() const { return m_tokenUrlParametersMap; }
    inline bool TokenUrlParametersMapHasBeenSet() const { return m_tokenUrlParametersMapHasBeenSet; }
    template<typename TokenUrlParametersMapT = Aws::Map<Aws::String, Aws::String>>
    void SetTokenUrlParametersMap(TokenUrlParametersMapT&& value) { m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap = std::forward<TokenUrlParametersMapT>(value); }
    template<typename TokenUrlParametersMapT = Aws::Map<Aws::String, Aws::String>>
    OAuth2Properties& WithTokenUrlParametersMap(TokenUrlParametersMapT&& value) { SetTokenUrlParametersMap(std::forward<TokenUrlParametersMapT>(value)); return *this;}
    template<typename TokenUrlParametersMapKeyT = Aws::String, typename TokenUrlParametersMapValueT = Aws::String>
    OAuth2Properties& AddTokenUrlParametersMap(TokenUrlParametersMapKeyT&& key, TokenUrlParametersMapValueT&& value) {
      m_tokenUrlParametersMapHasBeenSet = true; m_tokenUrlParametersMap.emplace(std::forward<TokenUrlParametersMapKeyT>(key), std::forward<TokenUrlParametersMapValueT>(value)); return *this;
    }
    ///@}
  private:

    OAuth2GrantType m_oAuth2GrantType{OAuth2GrantType::NOT_SET};
    bool m_oAuth2GrantTypeHasBeenSet = false;

    OAuth2ClientApplication m_oAuth2ClientApplication;
    bool m_oAuth2ClientApplicationHasBeenSet = false;

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenUrlParametersMap;
    bool m_tokenUrlParametersMapHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
