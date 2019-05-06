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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateAuthEventFeedbackRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminUpdateAuthEventFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminUpdateAuthEventFeedback"; }

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
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(const FeedbackValueType& value) { SetFeedbackValue(value); return *this;}

    /**
     * <p>The authentication event feedback value.</p>
     */
    inline AdminUpdateAuthEventFeedbackRequest& WithFeedbackValue(FeedbackValueType&& value) { SetFeedbackValue(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet;

    FeedbackValueType m_feedbackValue;
    bool m_feedbackValueHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
