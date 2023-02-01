/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/MFAOptionType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>You can use this parameter to set an MFA configuration that uses the SMS
   * delivery medium.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminSetUserSettingsRequest">AWS
   * API Reference</a></p>
   */
  class AdminSetUserSettingsRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminSetUserSettings"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user pool that contains the user whose options you're
     * setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user whose options you're setting.</p>
     */
    inline AdminSetUserSettingsRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline bool MFAOptionsHasBeenSet() const { return m_mFAOptionsHasBeenSet; }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = value; }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = std::move(value); }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline AdminSetUserSettingsRequest& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline AdminSetUserSettingsRequest& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline AdminSetUserSettingsRequest& AddMFAOptions(const MFAOptionType& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(value); return *this; }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline AdminSetUserSettingsRequest& AddMFAOptions(MFAOptionType&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<MFAOptionType> m_mFAOptions;
    bool m_mFAOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
