/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenRequest : public CognitoIdentityProviderRequest
  {
  public:
    VerifySoftwareTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifySoftwareToken"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The access token.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The access token.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token.</p>
     */
    inline VerifySoftwareTokenRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline VerifySoftwareTokenRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token.</p>
     */
    inline VerifySoftwareTokenRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}

    /**
     * <p>The session which should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline VerifySoftwareTokenRequest& WithSession(const char* value) { SetSession(value); return *this;}


    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline const Aws::String& GetUserCode() const{ return m_userCode; }

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline bool UserCodeHasBeenSet() const { return m_userCodeHasBeenSet; }

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline void SetUserCode(const Aws::String& value) { m_userCodeHasBeenSet = true; m_userCode = value; }

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline void SetUserCode(Aws::String&& value) { m_userCodeHasBeenSet = true; m_userCode = std::move(value); }

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline void SetUserCode(const char* value) { m_userCodeHasBeenSet = true; m_userCode.assign(value); }

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline VerifySoftwareTokenRequest& WithUserCode(const Aws::String& value) { SetUserCode(value); return *this;}

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline VerifySoftwareTokenRequest& WithUserCode(Aws::String&& value) { SetUserCode(std::move(value)); return *this;}

    /**
     * <p>The one time password computed using the secret code returned by </p>
     */
    inline VerifySoftwareTokenRequest& WithUserCode(const char* value) { SetUserCode(value); return *this;}


    /**
     * <p>The friendly device name.</p>
     */
    inline const Aws::String& GetFriendlyDeviceName() const{ return m_friendlyDeviceName; }

    /**
     * <p>The friendly device name.</p>
     */
    inline bool FriendlyDeviceNameHasBeenSet() const { return m_friendlyDeviceNameHasBeenSet; }

    /**
     * <p>The friendly device name.</p>
     */
    inline void SetFriendlyDeviceName(const Aws::String& value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName = value; }

    /**
     * <p>The friendly device name.</p>
     */
    inline void SetFriendlyDeviceName(Aws::String&& value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName = std::move(value); }

    /**
     * <p>The friendly device name.</p>
     */
    inline void SetFriendlyDeviceName(const char* value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName.assign(value); }

    /**
     * <p>The friendly device name.</p>
     */
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(const Aws::String& value) { SetFriendlyDeviceName(value); return *this;}

    /**
     * <p>The friendly device name.</p>
     */
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(Aws::String&& value) { SetFriendlyDeviceName(std::move(value)); return *this;}

    /**
     * <p>The friendly device name.</p>
     */
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(const char* value) { SetFriendlyDeviceName(value); return *this;}

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::String m_session;
    bool m_sessionHasBeenSet;

    Aws::String m_userCode;
    bool m_userCodeHasBeenSet;

    Aws::String m_friendlyDeviceName;
    bool m_friendlyDeviceNameHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
