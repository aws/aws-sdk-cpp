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
#include <aws/cognito-idp/model/FeedbackValueType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateAuthEventFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthEventFeedback"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The user pool username.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user pool username.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user pool username.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user pool username.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user pool username.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user pool username.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user pool username.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user pool username.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The event ID.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The event ID.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The event ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The event ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The event ID.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The feedback token.</p>
     */
    inline const Aws::String& GetFeedbackToken() const{ return m_feedbackToken; }

    /**
     * <p>The feedback token.</p>
     */
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }

    /**
     * <p>The feedback token.</p>
     */
    inline void SetFeedbackToken(const Aws::String& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = value; }

    /**
     * <p>The feedback token.</p>
     */
    inline void SetFeedbackToken(Aws::String&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::move(value); }

    /**
     * <p>The feedback token.</p>
     */
    inline void SetFeedbackToken(const char* value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken.assign(value); }

    /**
     * <p>The feedback token.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithFeedbackToken(const Aws::String& value) { SetFeedbackToken(value); return *this;}

    /**
     * <p>The feedback token.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithFeedbackToken(Aws::String&& value) { SetFeedbackToken(std::move(value)); return *this;}

    /**
     * <p>The feedback token.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithFeedbackToken(const char* value) { SetFeedbackToken(value); return *this;}


    /**
     * <p>The authentication event feedback value.</p>
     */
    inline const FeedbackValueType& GetFeedbackValue() const{ return m_feedbackValue; }

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline void SetFeedbackValue(const FeedbackValueType& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline void SetFeedbackValue(FeedbackValueType&& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = std::move(value); }

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline UpdateAuthEventFeedbackRequest& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    Aws::String m_feedbackToken;
    bool m_feedbackTokenHasBeenSet;

    FeedbackValueType m_feedbackValue;
    bool m_feedbackValueHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
