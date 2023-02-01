/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class RedactChannelMessageResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API RedactChannelMessageResult();
    AWS_CHIMESDKMESSAGING_API RedactChannelMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API RedactChannelMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline RedactChannelMessageResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline RedactChannelMessageResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel containing the messages that you want to redact.</p>
     */
    inline RedactChannelMessageResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline RedactChannelMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline RedactChannelMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message being redacted.</p>
     */
    inline RedactChannelMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const char* value) { m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline RedactChannelMessageResult& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline RedactChannelMessageResult& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>  <p>Only required when
     * redacting messages in a SubChannel that the user belongs to.</p> 
     */
    inline RedactChannelMessageResult& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::String m_messageId;

    Aws::String m_subChannelId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
