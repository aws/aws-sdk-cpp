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


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
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
    inline bool FeedbackValueHasBeenSet() const { return m_feedbackValueHasBeenSet; }
    inline void SetFeedbackValue(const FeedbackValueType& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = value; }
    inline void SetFeedbackValue(FeedbackValueType&& value) { m_feedbackValueHasBeenSet = true; m_feedbackValue = std::move(value); }
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}
    ///@}
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
