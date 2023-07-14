﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to change the ability of your account to send email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutAccountSendingAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API PutAccountSendingAttributesRequest : public PinpointEmailRequest
  {
  public:
    PutAccountSendingAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSendingAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If AWS paused your account's ability to
     * send email, you can't use this operation to resume your account's ability to
     * send email.</p> 
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If AWS paused your account's ability to
     * send email, you can't use this operation to resume your account's ability to
     * send email.</p> 
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If AWS paused your account's ability to
     * send email, you can't use this operation to resume your account's ability to
     * send email.</p> 
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If AWS paused your account's ability to
     * send email, you can't use this operation to resume your account's ability to
     * send email.</p> 
     */
    inline PutAccountSendingAttributesRequest& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
