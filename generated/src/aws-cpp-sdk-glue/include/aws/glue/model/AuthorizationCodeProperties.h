/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
   * <p>The set of properties required for the the OAuth2
   * <code>AUTHORIZATION_CODE</code> grant type workflow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AuthorizationCodeProperties">AWS
   * API Reference</a></p>
   */
  class AuthorizationCodeProperties
  {
  public:
    AWS_GLUE_API AuthorizationCodeProperties();
    AWS_GLUE_API AuthorizationCodeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AuthorizationCodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline const Aws::String& GetAuthorizationCode() const{ return m_authorizationCode; }

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline void SetAuthorizationCode(const Aws::String& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = value; }

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline void SetAuthorizationCode(Aws::String&& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = std::move(value); }

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline void SetAuthorizationCode(const char* value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode.assign(value); }

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline AuthorizationCodeProperties& WithAuthorizationCode(const Aws::String& value) { SetAuthorizationCode(value); return *this;}

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline AuthorizationCodeProperties& WithAuthorizationCode(Aws::String&& value) { SetAuthorizationCode(std::move(value)); return *this;}

    /**
     * <p>An authorization code to be used in the third leg of the
     * <code>AUTHORIZATION_CODE</code> grant workflow. This is a single-use code which
     * becomes invalid once exchanged for an access token, thus it is acceptable to
     * have this value as a request parameter.</p>
     */
    inline AuthorizationCodeProperties& WithAuthorizationCode(const char* value) { SetAuthorizationCode(value); return *this;}


    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline AuthorizationCodeProperties& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline AuthorizationCodeProperties& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}

    /**
     * <p>The redirect URI where the user gets redirected to by authorization server
     * when issuing an authorization code. The URI is subsequently used when the
     * authorization code is exchanged for an access token.</p>
     */
    inline AuthorizationCodeProperties& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}

  private:

    Aws::String m_authorizationCode;
    bool m_authorizationCodeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
