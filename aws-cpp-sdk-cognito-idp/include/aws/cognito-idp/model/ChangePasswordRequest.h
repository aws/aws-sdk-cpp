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
   * <p>Represents the request to change a user password.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ChangePasswordRequest">AWS
   * API Reference</a></p>
   */
  class ChangePasswordRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ChangePasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangePassword"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The old password.</p>
     */
    inline const Aws::String& GetPreviousPassword() const{ return m_previousPassword; }

    /**
     * <p>The old password.</p>
     */
    inline bool PreviousPasswordHasBeenSet() const { return m_previousPasswordHasBeenSet; }

    /**
     * <p>The old password.</p>
     */
    inline void SetPreviousPassword(const Aws::String& value) { m_previousPasswordHasBeenSet = true; m_previousPassword = value; }

    /**
     * <p>The old password.</p>
     */
    inline void SetPreviousPassword(Aws::String&& value) { m_previousPasswordHasBeenSet = true; m_previousPassword = std::move(value); }

    /**
     * <p>The old password.</p>
     */
    inline void SetPreviousPassword(const char* value) { m_previousPasswordHasBeenSet = true; m_previousPassword.assign(value); }

    /**
     * <p>The old password.</p>
     */
    inline ChangePasswordRequest& WithPreviousPassword(const Aws::String& value) { SetPreviousPassword(value); return *this;}

    /**
     * <p>The old password.</p>
     */
    inline ChangePasswordRequest& WithPreviousPassword(Aws::String&& value) { SetPreviousPassword(std::move(value)); return *this;}

    /**
     * <p>The old password.</p>
     */
    inline ChangePasswordRequest& WithPreviousPassword(const char* value) { SetPreviousPassword(value); return *this;}


    /**
     * <p>The new password.</p>
     */
    inline const Aws::String& GetProposedPassword() const{ return m_proposedPassword; }

    /**
     * <p>The new password.</p>
     */
    inline bool ProposedPasswordHasBeenSet() const { return m_proposedPasswordHasBeenSet; }

    /**
     * <p>The new password.</p>
     */
    inline void SetProposedPassword(const Aws::String& value) { m_proposedPasswordHasBeenSet = true; m_proposedPassword = value; }

    /**
     * <p>The new password.</p>
     */
    inline void SetProposedPassword(Aws::String&& value) { m_proposedPasswordHasBeenSet = true; m_proposedPassword = std::move(value); }

    /**
     * <p>The new password.</p>
     */
    inline void SetProposedPassword(const char* value) { m_proposedPasswordHasBeenSet = true; m_proposedPassword.assign(value); }

    /**
     * <p>The new password.</p>
     */
    inline ChangePasswordRequest& WithProposedPassword(const Aws::String& value) { SetProposedPassword(value); return *this;}

    /**
     * <p>The new password.</p>
     */
    inline ChangePasswordRequest& WithProposedPassword(Aws::String&& value) { SetProposedPassword(std::move(value)); return *this;}

    /**
     * <p>The new password.</p>
     */
    inline ChangePasswordRequest& WithProposedPassword(const char* value) { SetProposedPassword(value); return *this;}


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline ChangePasswordRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline ChangePasswordRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline ChangePasswordRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::String m_previousPassword;
    bool m_previousPasswordHasBeenSet = false;

    Aws::String m_proposedPassword;
    bool m_proposedPasswordHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
