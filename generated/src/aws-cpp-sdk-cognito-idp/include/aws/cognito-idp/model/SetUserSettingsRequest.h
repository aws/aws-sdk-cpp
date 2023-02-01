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
   * <p>Represents the request to set user settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SetUserSettingsRequest">AWS
   * API Reference</a></p>
   */
  class SetUserSettingsRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUserSettings"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline SetUserSettingsRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline SetUserSettingsRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose user
     * settings you want to configure.</p>
     */
    inline SetUserSettingsRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


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
    inline SetUserSettingsRequest& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline SetUserSettingsRequest& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline SetUserSettingsRequest& AddMFAOptions(const MFAOptionType& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(value); return *this; }

    /**
     * <p>You can use this parameter only to set an SMS configuration that uses SMS for
     * delivery.</p>
     */
    inline SetUserSettingsRequest& AddMFAOptions(MFAOptionType&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::Vector<MFAOptionType> m_mFAOptions;
    bool m_mFAOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
