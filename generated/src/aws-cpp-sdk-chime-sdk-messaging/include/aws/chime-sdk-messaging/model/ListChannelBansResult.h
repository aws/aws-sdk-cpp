﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/ChannelBanSummary.h>
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
  class ListChannelBansResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelBansResult();
    AWS_CHIMESDKMESSAGING_API ListChannelBansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelBansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline ListChannelBansResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ListChannelBansResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ListChannelBansResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested bans are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelBansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelBansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelBansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for each requested ban.</p>
     */
    inline const Aws::Vector<ChannelBanSummary>& GetChannelBans() const{ return m_channelBans; }
    inline void SetChannelBans(const Aws::Vector<ChannelBanSummary>& value) { m_channelBans = value; }
    inline void SetChannelBans(Aws::Vector<ChannelBanSummary>&& value) { m_channelBans = std::move(value); }
    inline ListChannelBansResult& WithChannelBans(const Aws::Vector<ChannelBanSummary>& value) { SetChannelBans(value); return *this;}
    inline ListChannelBansResult& WithChannelBans(Aws::Vector<ChannelBanSummary>&& value) { SetChannelBans(std::move(value)); return *this;}
    inline ListChannelBansResult& AddChannelBans(const ChannelBanSummary& value) { m_channelBans.push_back(value); return *this; }
    inline ListChannelBansResult& AddChannelBans(ChannelBanSummary&& value) { m_channelBans.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelBansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelBansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelBansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Aws::String m_nextToken;

    Aws::Vector<ChannelBanSummary> m_channelBans;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
