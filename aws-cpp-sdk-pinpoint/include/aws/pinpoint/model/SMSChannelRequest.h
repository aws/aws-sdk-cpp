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
   * SMS Channel Request<p><h3>See Also:</h3>   <a
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
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline SMSChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * Sender identifier of your messages.
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * Sender identifier of your messages.
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * Sender identifier of your messages.
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelRequest& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelRequest& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * Sender identifier of your messages.
     */
    inline SMSChannelRequest& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * ShortCode registered with phone provider.
     */
    inline const Aws::String& GetShortCode() const{ return m_shortCode; }

    /**
     * ShortCode registered with phone provider.
     */
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }

    /**
     * ShortCode registered with phone provider.
     */
    inline void SetShortCode(const Aws::String& value) { m_shortCodeHasBeenSet = true; m_shortCode = value; }

    /**
     * ShortCode registered with phone provider.
     */
    inline void SetShortCode(Aws::String&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::move(value); }

    /**
     * ShortCode registered with phone provider.
     */
    inline void SetShortCode(const char* value) { m_shortCodeHasBeenSet = true; m_shortCode.assign(value); }

    /**
     * ShortCode registered with phone provider.
     */
    inline SMSChannelRequest& WithShortCode(const Aws::String& value) { SetShortCode(value); return *this;}

    /**
     * ShortCode registered with phone provider.
     */
    inline SMSChannelRequest& WithShortCode(Aws::String&& value) { SetShortCode(std::move(value)); return *this;}

    /**
     * ShortCode registered with phone provider.
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
