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
    AWS_COGNITOIDENTITYPROVIDER_API ChangePasswordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangePassword"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user's previous password. Required if the user has a password. If the
     * user has no password and only signs in with passwordless authentication options,
     * you can omit this parameter.</p>
     */
    inline const Aws::String& GetPreviousPassword() const { return m_previousPassword; }
    inline bool PreviousPasswordHasBeenSet() const { return m_previousPasswordHasBeenSet; }
    template<typename PreviousPasswordT = Aws::String>
    void SetPreviousPassword(PreviousPasswordT&& value) { m_previousPasswordHasBeenSet = true; m_previousPassword = std::forward<PreviousPasswordT>(value); }
    template<typename PreviousPasswordT = Aws::String>
    ChangePasswordRequest& WithPreviousPassword(PreviousPasswordT&& value) { SetPreviousPassword(std::forward<PreviousPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new password that you prompted the user to enter in your application.</p>
     */
    inline const Aws::String& GetProposedPassword() const { return m_proposedPassword; }
    inline bool ProposedPasswordHasBeenSet() const { return m_proposedPasswordHasBeenSet; }
    template<typename ProposedPasswordT = Aws::String>
    void SetProposedPassword(ProposedPasswordT&& value) { m_proposedPasswordHasBeenSet = true; m_proposedPassword = std::forward<ProposedPasswordT>(value); }
    template<typename ProposedPasswordT = Aws::String>
    ChangePasswordRequest& WithProposedPassword(ProposedPasswordT&& value) { SetProposedPassword(std::forward<ProposedPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose password
     * you want to change.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    ChangePasswordRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}
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
