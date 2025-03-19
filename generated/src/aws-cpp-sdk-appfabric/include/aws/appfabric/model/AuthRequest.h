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
    AWS_APPFABRIC_API AuthRequest() = default;
    AWS_APPFABRIC_API AuthRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AuthRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The redirect URL that is specified in the AuthURL and the application
     * client.</p>
     */
    inline const Aws::String& GetRedirectUri() const { return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    template<typename RedirectUriT = Aws::String>
    void SetRedirectUri(RedirectUriT&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::forward<RedirectUriT>(value); }
    template<typename RedirectUriT = Aws::String>
    AuthRequest& WithRedirectUri(RedirectUriT&& value) { SetRedirectUri(std::forward<RedirectUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization code returned by the application after permission is
     * granted in the application OAuth page (after clicking on the AuthURL).</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    AuthRequest& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
