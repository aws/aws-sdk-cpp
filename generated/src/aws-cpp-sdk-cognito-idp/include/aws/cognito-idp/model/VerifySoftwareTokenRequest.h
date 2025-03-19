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
    AWS_COGNITOIDENTITYPROVIDER_API VerifySoftwareTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifySoftwareToken"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the currently signed-in
     * user. Must include a scope claim for
     * <code>aws.cognito.signin.user.admin</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    VerifySoftwareTokenRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID from an <code>AssociateSoftwareToken</code> request.</p>
     */
    inline const Aws::String& GetSession() const { return m_session; }
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }
    template<typename SessionT = Aws::String>
    void SetSession(SessionT&& value) { m_sessionHasBeenSet = true; m_session = std::forward<SessionT>(value); }
    template<typename SessionT = Aws::String>
    VerifySoftwareTokenRequest& WithSession(SessionT&& value) { SetSession(std::forward<SessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A TOTP that the user generated in their configured authenticator app.</p>
     */
    inline const Aws::String& GetUserCode() const { return m_userCode; }
    inline bool UserCodeHasBeenSet() const { return m_userCodeHasBeenSet; }
    template<typename UserCodeT = Aws::String>
    void SetUserCode(UserCodeT&& value) { m_userCodeHasBeenSet = true; m_userCode = std::forward<UserCodeT>(value); }
    template<typename UserCodeT = Aws::String>
    VerifySoftwareTokenRequest& WithUserCode(UserCodeT&& value) { SetUserCode(std::forward<UserCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the device that's running the TOTP authenticator.</p>
     */
    inline const Aws::String& GetFriendlyDeviceName() const { return m_friendlyDeviceName; }
    inline bool FriendlyDeviceNameHasBeenSet() const { return m_friendlyDeviceNameHasBeenSet; }
    template<typename FriendlyDeviceNameT = Aws::String>
    void SetFriendlyDeviceName(FriendlyDeviceNameT&& value) { m_friendlyDeviceNameHasBeenSet = true; m_friendlyDeviceName = std::forward<FriendlyDeviceNameT>(value); }
    template<typename FriendlyDeviceNameT = Aws::String>
    VerifySoftwareTokenRequest& WithFriendlyDeviceName(FriendlyDeviceNameT&& value) { SetFriendlyDeviceName(std::forward<FriendlyDeviceNameT>(value)); return *this;}
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
