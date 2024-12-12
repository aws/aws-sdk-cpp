/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class CompleteWebAuthnRegistrationRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CompleteWebAuthnRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteWebAuthnRegistration"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose passkey
     * registration you want to complete.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline CompleteWebAuthnRegistrationRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline CompleteWebAuthnRegistrationRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline CompleteWebAuthnRegistrationRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://www.w3.org/TR/webauthn-3/#dictdef-registrationresponsejson">RegistrationResponseJSON</a>
     * public-key credential response from the user's passkey provider.</p>
     */
    inline Aws::Utils::DocumentView GetCredential() const{ return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    inline void SetCredential(const Aws::Utils::Document& value) { m_credentialHasBeenSet = true; m_credential = value; }
    inline void SetCredential(Aws::Utils::Document&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }
    inline CompleteWebAuthnRegistrationRequest& WithCredential(const Aws::Utils::Document& value) { SetCredential(value); return *this;}
    inline CompleteWebAuthnRegistrationRequest& WithCredential(Aws::Utils::Document&& value) { SetCredential(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::Utils::Document m_credential;
    bool m_credentialHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
