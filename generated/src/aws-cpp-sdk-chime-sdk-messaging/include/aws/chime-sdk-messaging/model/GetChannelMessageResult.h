/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelMessage.h>
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
  class GetChannelMessageResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetChannelMessageResult();
    AWS_CHIMESDKMESSAGING_API GetChannelMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetChannelMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of and content in the message.</p>
     */
    inline const ChannelMessage& GetChannelMessage() const{ return m_channelMessage; }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline void SetChannelMessage(const ChannelMessage& value) { m_channelMessage = value; }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline void SetChannelMessage(ChannelMessage&& value) { m_channelMessage = std::move(value); }

    /**
     * <p>The details of and content in the message.</p>
     */
    inline GetChannelMessageResult& WithChannelMessage(const ChannelMessage& value) { SetChannelMessage(value); return *this;}

    /**
     * <p>The details of and content in the message.</p>
     */
    inline GetChannelMessageResult& WithChannelMessage(ChannelMessage&& value) { SetChannelMessage(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetChannelMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetChannelMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetChannelMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelMessage m_channelMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
