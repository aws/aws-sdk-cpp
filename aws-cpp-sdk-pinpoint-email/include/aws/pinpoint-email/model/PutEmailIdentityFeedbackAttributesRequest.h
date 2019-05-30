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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to set the attributes that control how bounce and complaint events
   * are processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityFeedbackAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutEmailIdentityFeedbackAttributesRequest : public PinpointEmailRequest
  {
  public:
    PutEmailIdentityFeedbackAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityFeedbackAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, Amazon Pinpoint sends you email notifications when
     * bounce or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetEmailForwardingEnabled() const{ return m_emailForwardingEnabled; }

    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, Amazon Pinpoint sends you email notifications when
     * bounce or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool EmailForwardingEnabledHasBeenSet() const { return m_emailForwardingEnabledHasBeenSet; }

    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, Amazon Pinpoint sends you email notifications when
     * bounce or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline void SetEmailForwardingEnabled(bool value) { m_emailForwardingEnabledHasBeenSet = true; m_emailForwardingEnabled = value; }

    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, Amazon Pinpoint sends you email notifications when
     * bounce or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailForwardingEnabled(bool value) { SetEmailForwardingEnabled(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet;

    bool m_emailForwardingEnabled;
    bool m_emailForwardingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
