/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The authorization code properties of a connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AuthorizationCodeProperties">AWS
   * API Reference</a></p>
   */
  class AuthorizationCodeProperties
  {
  public:
    AWS_DATAZONE_API AuthorizationCodeProperties();
    AWS_DATAZONE_API AuthorizationCodeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AuthorizationCodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization code of a connection.</p>
     */
    inline const Aws::String& GetAuthorizationCode() const{ return m_authorizationCode; }
    inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }
    inline void SetAuthorizationCode(const Aws::String& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = value; }
    inline void SetAuthorizationCode(Aws::String&& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = std::move(value); }
    inline void SetAuthorizationCode(const char* value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode.assign(value); }
    inline AuthorizationCodeProperties& WithAuthorizationCode(const Aws::String& value) { SetAuthorizationCode(value); return *this;}
    inline AuthorizationCodeProperties& WithAuthorizationCode(Aws::String&& value) { SetAuthorizationCode(std::move(value)); return *this;}
    inline AuthorizationCodeProperties& WithAuthorizationCode(const char* value) { SetAuthorizationCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redirect URI of a connection.</p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }
    inline AuthorizationCodeProperties& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}
    inline AuthorizationCodeProperties& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}
    inline AuthorizationCodeProperties& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizationCode;
    bool m_authorizationCodeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
