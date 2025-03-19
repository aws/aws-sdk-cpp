/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuth2GrantType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The OAuth 2.0 properties required for OAuth 2.0 authentication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/OAuth2Properties">AWS
   * API Reference</a></p>
   */
  class OAuth2Properties
  {
  public:
    AWS_APPFLOW_API OAuth2Properties() = default;
    AWS_APPFLOW_API OAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
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
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline OAuth2GrantType GetOAuth2GrantType() const { return m_oAuth2GrantType; }
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }
    inline void SetOAuth2GrantType(OAuth2GrantType value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }
    inline OAuth2Properties& WithOAuth2GrantType(OAuth2GrantType value) { SetOAuth2GrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlCustomProperties() const { return m_tokenUrlCustomProperties; }
    inline bool TokenUrlCustomPropertiesHasBeenSet() const { return m_tokenUrlCustomPropertiesHasBeenSet; }
    template<typename TokenUrlCustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetTokenUrlCustomProperties(TokenUrlCustomPropertiesT&& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties = std::forward<TokenUrlCustomPropertiesT>(value); }
    template<typename TokenUrlCustomPropertiesT = Aws::Map<Aws::String, Aws::String>>
    OAuth2Properties& WithTokenUrlCustomProperties(TokenUrlCustomPropertiesT&& value) { SetTokenUrlCustomProperties(std::forward<TokenUrlCustomPropertiesT>(value)); return *this;}
    template<typename TokenUrlCustomPropertiesKeyT = Aws::String, typename TokenUrlCustomPropertiesValueT = Aws::String>
    OAuth2Properties& AddTokenUrlCustomProperties(TokenUrlCustomPropertiesKeyT&& key, TokenUrlCustomPropertiesValueT&& value) {
      m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(std::forward<TokenUrlCustomPropertiesKeyT>(key), std::forward<TokenUrlCustomPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    OAuth2GrantType m_oAuth2GrantType{OAuth2GrantType::NOT_SET};
    bool m_oAuth2GrantTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenUrlCustomProperties;
    bool m_tokenUrlCustomPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
