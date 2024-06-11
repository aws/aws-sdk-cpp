﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipSummary.h>
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
  class ListChannelMembershipsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsResult();
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline ListChannelMembershipsResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ListChannelMembershipsResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ListChannelMembershipsResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline const Aws::Vector<ChannelMembershipSummary>& GetChannelMemberships() const{ return m_channelMemberships; }
    inline void SetChannelMemberships(const Aws::Vector<ChannelMembershipSummary>& value) { m_channelMemberships = value; }
    inline void SetChannelMemberships(Aws::Vector<ChannelMembershipSummary>&& value) { m_channelMemberships = std::move(value); }
    inline ListChannelMembershipsResult& WithChannelMemberships(const Aws::Vector<ChannelMembershipSummary>& value) { SetChannelMemberships(value); return *this;}
    inline ListChannelMembershipsResult& WithChannelMemberships(Aws::Vector<ChannelMembershipSummary>&& value) { SetChannelMemberships(std::move(value)); return *this;}
    inline ListChannelMembershipsResult& AddChannelMemberships(const ChannelMembershipSummary& value) { m_channelMemberships.push_back(value); return *this; }
    inline ListChannelMembershipsResult& AddChannelMemberships(ChannelMembershipSummary&& value) { m_channelMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Aws::Vector<ChannelMembershipSummary> m_channelMemberships;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
