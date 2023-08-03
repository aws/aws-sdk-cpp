/**
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
  class AdminUpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateAuthEventFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminUpdateAuthEventFeedback"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user pool username.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user pool username.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The authentication event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The authentication event ID.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The authentication event ID.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The authentication event ID.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The authentication event ID.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The authentication event ID.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The authentication event ID.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The authentication event ID.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline const FeedbackValueType& GetFeedbackValue() const{ return m_feedbackValue; }

    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }

    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline void SetFeedbackValue(const FeedbackValueType& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }

    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline void SetFeedbackValue(FeedbackValueType&& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = std::move(value); }

    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}

    /**
     * <p>The authentication event feedback value. When you provide a
     * <code>FeedbackValue</code> value of <code>valid</code>, you tell Amazon Cognito
     * that you trust a user session where Amazon Cognito has evaluated some level of
     * risk. When you provide a <code>FeedbackValue</code> value of
     * <code>invalid</code>, you tell Amazon Cognito that you don't trust a user
     * session, or you don't believe that Amazon Cognito evaluated a high-enough risk
     * level.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    FeedbackValueType m_feedbackValue;
    bool m_feedbackValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
