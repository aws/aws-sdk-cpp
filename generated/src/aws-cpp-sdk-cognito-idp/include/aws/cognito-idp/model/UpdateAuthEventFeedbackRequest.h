﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateAuthEventFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAuthEventFeedback"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to update auth event feedback.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    UpdateAuthEventFeedbackRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    UpdateAuthEventFeedbackRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the authentication event that you want to submit feedback for.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    UpdateAuthEventFeedbackRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feedback token, an encrypted object generated by Amazon Cognito and
     * passed to your user in the notification email message from the event.</p>
     */
    inline const Aws::String& GetFeedbackToken() const { return m_feedbackToken; }
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }
    template<typename FeedbackTokenT = Aws::String>
    void SetFeedbackToken(FeedbackTokenT&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::forward<FeedbackTokenT>(value); }
    template<typename FeedbackTokenT = Aws::String>
    UpdateAuthEventFeedbackRequest& WithFeedbackToken(FeedbackTokenT&& value) { SetFeedbackToken(std::forward<FeedbackTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your feedback to the authentication event. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline FeedbackValueType GetFeedbackValue() const { return m_feedbackValue; }
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }
    inline void SetFeedbackValue(FeedbackValueType value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }
    inline UpdateAuthEventFeedbackRequest& WithFeedbackValue(FeedbackValueType value) { SetFeedbackValue(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_feedbackToken;
    bool m_feedbackTokenHasBeenSet = false;

    FeedbackValueType m_feedbackValue{FeedbackValueType::NOT_SET};
    bool m_feedbackValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
