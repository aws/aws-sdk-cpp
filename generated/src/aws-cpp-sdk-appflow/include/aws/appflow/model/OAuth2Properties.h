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
    AWS_APPFLOW_API OAuth2Properties();
    AWS_APPFLOW_API OAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API OAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline const Aws::String& GetTokenUrl() const{ return m_tokenUrl; }

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline bool TokenUrlHasBeenSet() const { return m_tokenUrlHasBeenSet; }

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline void SetTokenUrl(const Aws::String& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = value; }

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline void SetTokenUrl(Aws::String&& value) { m_tokenUrlHasBeenSet = true; m_tokenUrl = std::move(value); }

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline void SetTokenUrl(const char* value) { m_tokenUrlHasBeenSet = true; m_tokenUrl.assign(value); }

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Properties& WithTokenUrl(const Aws::String& value) { SetTokenUrl(value); return *this;}

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Properties& WithTokenUrl(Aws::String&& value) { SetTokenUrl(std::move(value)); return *this;}

    /**
     * <p>The token URL required for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Properties& WithTokenUrl(const char* value) { SetTokenUrl(value); return *this;}


    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline const OAuth2GrantType& GetOAuth2GrantType() const{ return m_oAuth2GrantType; }

    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline bool OAuth2GrantTypeHasBeenSet() const { return m_oAuth2GrantTypeHasBeenSet; }

    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline void SetOAuth2GrantType(const OAuth2GrantType& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = value; }

    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline void SetOAuth2GrantType(OAuth2GrantType&& value) { m_oAuth2GrantTypeHasBeenSet = true; m_oAuth2GrantType = std::move(value); }

    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Properties& WithOAuth2GrantType(const OAuth2GrantType& value) { SetOAuth2GrantType(value); return *this;}

    /**
     * <p>The OAuth 2.0 grant type used by connector for OAuth 2.0 authentication.</p>
     */
    inline OAuth2Properties& WithOAuth2GrantType(OAuth2GrantType&& value) { SetOAuth2GrantType(std::move(value)); return *this;}


    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTokenUrlCustomProperties() const{ return m_tokenUrlCustomProperties; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline bool TokenUrlCustomPropertiesHasBeenSet() const { return m_tokenUrlCustomPropertiesHasBeenSet; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline void SetTokenUrlCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties = value; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline void SetTokenUrlCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties = std::move(value); }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& WithTokenUrlCustomProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetTokenUrlCustomProperties(value); return *this;}

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& WithTokenUrlCustomProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetTokenUrlCustomProperties(std::move(value)); return *this;}

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(const Aws::String& key, const Aws::String& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(key, value); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(Aws::String&& key, const Aws::String& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(const Aws::String& key, Aws::String&& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(Aws::String&& key, Aws::String&& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(const char* key, Aws::String&& value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(Aws::String&& key, const char* value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Associates your token URL with a map of properties that you define. Use this
     * parameter to provide any additional details that the connector requires to
     * authenticate your request.</p>
     */
    inline OAuth2Properties& AddTokenUrlCustomProperties(const char* key, const char* value) { m_tokenUrlCustomPropertiesHasBeenSet = true; m_tokenUrlCustomProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet = false;

    OAuth2GrantType m_oAuth2GrantType;
    bool m_oAuth2GrantTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tokenUrlCustomProperties;
    bool m_tokenUrlCustomPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
