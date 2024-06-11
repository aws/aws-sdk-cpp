﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/ChannelMessageSummary.h>
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
  class ListChannelMessagesResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMessagesResult();
    AWS_CHIMESDKMESSAGING_API ListChannelMessagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelMessagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel containing the requested messages.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline ListChannelMessagesResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ListChannelMessagesResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ListChannelMessagesResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelMessagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelMessagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelMessagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about, and content of, each requested message.</p>
     */
    inline const Aws::Vector<ChannelMessageSummary>& GetChannelMessages() const{ return m_channelMessages; }
    inline void SetChannelMessages(const Aws::Vector<ChannelMessageSummary>& value) { m_channelMessages = value; }
    inline void SetChannelMessages(Aws::Vector<ChannelMessageSummary>&& value) { m_channelMessages = std::move(value); }
    inline ListChannelMessagesResult& WithChannelMessages(const Aws::Vector<ChannelMessageSummary>& value) { SetChannelMessages(value); return *this;}
    inline ListChannelMessagesResult& WithChannelMessages(Aws::Vector<ChannelMessageSummary>&& value) { SetChannelMessages(std::move(value)); return *this;}
    inline ListChannelMessagesResult& AddChannelMessages(const ChannelMessageSummary& value) { m_channelMessages.push_back(value); return *this; }
    inline ListChannelMessagesResult& AddChannelMessages(ChannelMessageSummary&& value) { m_channelMessages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelId = value; }
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelId = std::move(value); }
    inline void SetSubChannelId(const char* value) { m_subChannelId.assign(value); }
    inline ListChannelMessagesResult& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}
    inline ListChannelMessagesResult& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}
    inline ListChannelMessagesResult& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelMessagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelMessagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelMessagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Aws::String m_nextToken;

    Aws::Vector<ChannelMessageSummary> m_channelMessages;

    Aws::String m_subChannelId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
