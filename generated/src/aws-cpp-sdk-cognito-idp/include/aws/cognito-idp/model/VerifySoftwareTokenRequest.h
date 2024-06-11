/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class VerifySoftwareTokenRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifySoftwareToken"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose software
     * token you want to verify.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline VerifySoftwareTokenRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline VerifySoftwareTokenRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline VerifySoftwareTokenRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session that should be passed both ways in challenge-response calls to
     * the service.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    inline void SetSession(const Aws::String& value) { m_sessionHasBeenSet = true; m_session = value; }
    inline void SetSession(Aws::String&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }
    inline void SetSession(const char* value) { m_sessionHasBeenSet = true; m_session.assign(value); }
    inline VerifySoftwareTokenRequest& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline VerifySoftwareTokenRequest& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline VerifySoftwareTokenRequest& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The one- time password computed using the secret code returned by <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AssociateSoftwareToken.html">AssociateSoftwareToken</a>.</p>
     */
    inline const Aws::String& GetUserCode() const{ return m_userCode; }
    inline bool UserCodeHasBeenSet() const { return m_userCodeHasBeenSet; }
    inline void SetUserCode(const Aws::String& value) { m_userCodeHasBeenSet = true; m_userCode = value; }
    inline void SetUserCode(Aws::String&& value) { m_userCodeHasBeenSet = true; m_userCode = std::move(value); }
    inline void SetUserCode(const char* value) { m_userCodeHasBeenSet = true; m_userCode.assign(value); }
    inline VerifySoftwareTokenRequest& WithUserCode(const Aws::String& value) { SetUserCode(value); return *this;}
    inline VerifySoftwareTokenRequest& WithUserCode(Aws::String&& value) { SetUserCode(std::move(value)); return *this;}
    inline VerifySoftwareTokenRequest& WithUserCode(const char* value) { SetUserCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly device name.</p>
     */
    inline const Aws::String& GetFriendlyDeviceName() const{ return m_friendlyDeviceName; }
    inline bool FriendlyDeviceNameHasBeenSet() const { return m_friendlyDeviceNameHasBeenSet; }
    inline void SetFriendlyDeviceName(const Aws::String& value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName = value; }
    inline void SetFriendlyDeviceName(Aws::String&& value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName = std::move(value); }
    inline void SetFriendlyDeviceName(const char* value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName.assign(value); }
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(const Aws::String& value) { SetFriendlyDeviceName(value); return *this;}
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(Aws::String&& value) { SetFriendlyDeviceName(std::move(value)); return *this;}
    inline VerifySoftwareTokenRequest& WithFriendlyDeviceName(const char* value) { SetFriendlyDeviceName(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_session;
    bool m_sessionHasBeenSet = false;

    Aws::String m_userCode;
    bool m_userCodeHasBeenSet = false;

    Aws::String m_friendlyDeviceName;
    bool m_friendlyDeviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
