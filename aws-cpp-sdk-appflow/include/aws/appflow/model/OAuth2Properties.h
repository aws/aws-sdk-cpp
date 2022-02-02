/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/OAuth2GrantType.h>
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
  class AWS_APPFLOW_API OAuth2Properties
  {
  public:
    OAuth2Properties();
    OAuth2Properties(Aws::Utils::Json::JsonView jsonValue);
    OAuth2Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_tokenUrl;
    bool m_tokenUrlHasBeenSet;

    OAuth2GrantType m_oAuth2GrantType;
    bool m_oAuth2GrantTypeHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
