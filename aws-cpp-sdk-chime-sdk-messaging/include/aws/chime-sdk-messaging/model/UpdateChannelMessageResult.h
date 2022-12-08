/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
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
  class UpdateChannelMessageResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API UpdateChannelMessageResult();
    AWS_CHIMESDKMESSAGING_API UpdateChannelMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API UpdateChannelMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelMessageResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelMessageResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelMessageResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline UpdateChannelMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline UpdateChannelMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID string of the message being updated.</p>
     */
    inline UpdateChannelMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The status of the message update.</p>
     */
    inline const ChannelMessageStatusStructure& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the message update.</p>
     */
    inline void SetStatus(const ChannelMessageStatusStructure& value) { m_status = value; }

    /**
     * <p>The status of the message update.</p>
     */
    inline void SetStatus(ChannelMessageStatusStructure&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the message update.</p>
     */
    inline UpdateChannelMessageResult& WithStatus(const ChannelMessageStatusStructure& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the message update.</p>
     */
    inline UpdateChannelMessageResult& WithStatus(ChannelMessageStatusStructure&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelMessageResult& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelMessageResult& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelMessageResult& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::String m_messageId;

    ChannelMessageStatusStructure m_status;

    Aws::String m_subChannelId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
