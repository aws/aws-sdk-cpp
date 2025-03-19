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
    AWS_COGNITOIDENTITYPROVIDER_API CompleteWebAuthnRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteWebAuthnRegistration"; }

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
    CompleteWebAuthnRegistrationRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://www.w3.org/TR/WebAuthn-3/#dictdef-registrationresponsejson">RegistrationResponseJSON</a>
     * public-key credential response from the user's passkey provider.</p>
     */
    inline Aws::Utils::DocumentView GetCredential() const { return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    template<typename CredentialT = Aws::Utils::Document>
    void SetCredential(CredentialT&& value) { m_credentialHasBeenSet = true; m_credential = std::forward<CredentialT>(value); }
    template<typename CredentialT = Aws::Utils::Document>
    CompleteWebAuthnRegistrationRequest& WithCredential(CredentialT&& value) { SetCredential(std::forward<CredentialT>(value)); return *this;}
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
