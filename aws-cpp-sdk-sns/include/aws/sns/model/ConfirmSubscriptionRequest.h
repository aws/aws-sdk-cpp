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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for ConfirmSubscription action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscriptionInput">AWS
   * API Reference</a></p>
   */
  class AWS_SNS_API ConfirmSubscriptionRequest : public SNSRequest
  {
  public:
    ConfirmSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmSubscription"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline ConfirmSubscriptionRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline ConfirmSubscriptionRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline ConfirmSubscriptionRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline ConfirmSubscriptionRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline ConfirmSubscriptionRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline ConfirmSubscriptionRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline const Aws::String& GetAuthenticateOnUnsubscribe() const{ return m_authenticateOnUnsubscribe; }

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline bool AuthenticateOnUnsubscribeHasBeenSet() const { return m_authenticateOnUnsubscribeHasBeenSet; }

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline void SetAuthenticateOnUnsubscribe(const Aws::String& value) { m_authenticateOnUnsubscribeHasBeenSet = true; m_authenticateOnUnsubscribe = value; }

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline void SetAuthenticateOnUnsubscribe(Aws::String&& value) { m_authenticateOnUnsubscribeHasBeenSet = true; m_authenticateOnUnsubscribe = std::move(value); }

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline void SetAuthenticateOnUnsubscribe(const char* value) { m_authenticateOnUnsubscribeHasBeenSet = true; m_authenticateOnUnsubscribe.assign(value); }

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline ConfirmSubscriptionRequest& WithAuthenticateOnUnsubscribe(const Aws::String& value) { SetAuthenticateOnUnsubscribe(value); return *this;}

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline ConfirmSubscriptionRequest& WithAuthenticateOnUnsubscribe(Aws::String&& value) { SetAuthenticateOnUnsubscribe(std::move(value)); return *this;}

    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an AWS signature, then
     * only the topic owner and the subscription owner can unsubscribe the endpoint.
     * The unsubscribe action requires AWS authentication. </p>
     */
    inline ConfirmSubscriptionRequest& WithAuthenticateOnUnsubscribe(const char* value) { SetAuthenticateOnUnsubscribe(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;

    Aws::String m_authenticateOnUnsubscribe;
    bool m_authenticateOnUnsubscribeHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
