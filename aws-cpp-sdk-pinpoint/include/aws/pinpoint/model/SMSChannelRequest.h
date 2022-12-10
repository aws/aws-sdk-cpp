/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the status and settings of the SMS channel for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSChannelRequest">AWS
   * API Reference</a></p>
   */
  class SMSChannelRequest
  {
  public:
    AWS_PINPOINT_API SMSChannelRequest();
    AWS_PINPOINT_API SMSChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SMSChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to enable the SMS channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the SMS channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the SMS channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the SMS channel for the application.</p>
     */
    inline SMSChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline SMSChannelRequest& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline SMSChannelRequest& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The identity that you want to display on recipients' devices when they
     * receive messages from the SMS channel.</p>
     */
    inline SMSChannelRequest& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline const Aws::String& GetShortCode() const{ return m_shortCode; }

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline void SetShortCode(const Aws::String& value) { m_shortCodeHasBeenSet = true; m_shortCode = value; }

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline void SetShortCode(Aws::String&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::move(value); }

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline void SetShortCode(const char* value) { m_shortCodeHasBeenSet = true; m_shortCode.assign(value); }

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline SMSChannelRequest& WithShortCode(const Aws::String& value) { SetShortCode(value); return *this;}

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline SMSChannelRequest& WithShortCode(Aws::String&& value) { SetShortCode(std::move(value)); return *this;}

    /**
     * <p>The registered short code that you want to use when you send messages through
     * the SMS channel.</p>
     */
    inline SMSChannelRequest& WithShortCode(const char* value) { SetShortCode(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_shortCode;
    bool m_shortCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
