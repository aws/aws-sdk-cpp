﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoice
{
namespace Model
{
  /**
   * An object that that contains the Message ID of a Voice message that was sent
   * successfully.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SendVoiceMessageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API SendVoiceMessageResult
  {
  public:
    SendVoiceMessageResult();
    SendVoiceMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendVoiceMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A unique identifier for the voice message.
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * A unique identifier for the voice message.
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * A unique identifier for the voice message.
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * A unique identifier for the voice message.
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * A unique identifier for the voice message.
     */
    inline SendVoiceMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * A unique identifier for the voice message.
     */
    inline SendVoiceMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * A unique identifier for the voice message.
     */
    inline SendVoiceMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

  private:

    Aws::String m_messageId;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
