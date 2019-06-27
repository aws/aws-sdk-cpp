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
  class AWS_PINPOINT_API SMSChannelRequest
  {
  public:
    SMSChannelRequest();
    SMSChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    SMSChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_enabledHasBeenSet;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet;

    Aws::String m_shortCode;
    bool m_shortCodeHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
