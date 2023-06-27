/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains authorization request information, which is required for Amazon Web
   * Services AppFabric to get the OAuth2 access token for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AuthRequest">AWS
   * API Reference</a></p>
   */
  class AuthRequest
  {
  public:
    AWS_APPFABRIC_API AuthRequest();
    AWS_APPFABRIC_API AuthRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AuthRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline AuthRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline AuthRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}

    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline AuthRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}


    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline AuthRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline AuthRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline AuthRequest& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
