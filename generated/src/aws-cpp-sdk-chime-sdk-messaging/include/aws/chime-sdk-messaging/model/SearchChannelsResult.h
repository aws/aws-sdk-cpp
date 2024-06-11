﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelSummary.h>
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
  class SearchChannelsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API SearchChannelsResult();
    AWS_CHIMESDKMESSAGING_API SearchChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API SearchChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the channels in the request.</p>
     */
    inline const Aws::Vector<ChannelSummary>& GetChannels() const{ return m_channels; }
    inline void SetChannels(const Aws::Vector<ChannelSummary>& value) { m_channels = value; }
    inline void SetChannels(Aws::Vector<ChannelSummary>&& value) { m_channels = std::move(value); }
    inline SearchChannelsResult& WithChannels(const Aws::Vector<ChannelSummary>& value) { SetChannels(value); return *this;}
    inline SearchChannelsResult& WithChannels(Aws::Vector<ChannelSummary>&& value) { SetChannels(std::move(value)); return *this;}
    inline SearchChannelsResult& AddChannels(const ChannelSummary& value) { m_channels.push_back(value); return *this; }
    inline SearchChannelsResult& AddChannels(ChannelSummary&& value) { m_channels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from previous API responses until the number of channels
     * is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelSummary> m_channels;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
