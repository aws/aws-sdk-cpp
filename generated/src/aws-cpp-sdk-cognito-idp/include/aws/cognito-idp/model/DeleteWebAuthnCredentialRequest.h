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
  class DeleteWebAuthnCredentialRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeleteWebAuthnCredentialRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWebAuthnCredential"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose passkey
     * credential you want to delete.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline DeleteWebAuthnCredentialRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline DeleteWebAuthnCredentialRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline DeleteWebAuthnCredentialRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the passkey that you want to delete. Look up
     * registered devices with <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ListWebAuthnCredentials.html">ListWebAuthnCredentials</a>.</p>
     */
    inline const Aws::String& GetCredentialId() const{ return m_credentialId; }
    inline bool CredentialIdHasBeenSet() const { return m_credentialIdHasBeenSet; }
    inline void SetCredentialId(const Aws::String& value) { m_credentialIdHasBeenSet = true; m_credentialId = value; }
    inline void SetCredentialId(Aws::String&& value) { m_credentialIdHasBeenSet = true; m_credentialId = std::move(value); }
    inline void SetCredentialId(const char* value) { m_credentialIdHasBeenSet = true; m_credentialId.assign(value); }
    inline DeleteWebAuthnCredentialRequest& WithCredentialId(const Aws::String& value) { SetCredentialId(value); return *this;}
    inline DeleteWebAuthnCredentialRequest& WithCredentialId(Aws::String&& value) { SetCredentialId(std::move(value)); return *this;}
    inline DeleteWebAuthnCredentialRequest& WithCredentialId(const char* value) { SetCredentialId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_credentialId;
    bool m_credentialIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
