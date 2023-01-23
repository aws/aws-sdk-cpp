/**
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
    inline ListChannelMembershipsResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelMembershipsResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelMembershipsResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline const Aws::Vector<ChannelMembershipSummary>& GetChannelMemberships() const{ return m_channelMemberships; }

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline void SetChannelMemberships(const Aws::Vector<ChannelMembershipSummary>& value) { m_channelMemberships = value; }

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline void SetChannelMemberships(Aws::Vector<ChannelMembershipSummary>&& value) { m_channelMemberships = std::move(value); }

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline ListChannelMembershipsResult& WithChannelMemberships(const Aws::Vector<ChannelMembershipSummary>& value) { SetChannelMemberships(value); return *this;}

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline ListChannelMembershipsResult& WithChannelMemberships(Aws::Vector<ChannelMembershipSummary>&& value) { SetChannelMemberships(std::move(value)); return *this;}

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline ListChannelMembershipsResult& AddChannelMemberships(const ChannelMembershipSummary& value) { m_channelMemberships.push_back(value); return *this; }

    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline ListChannelMembershipsResult& AddChannelMemberships(ChannelMembershipSummary&& value) { m_channelMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::Vector<ChannelMembershipSummary> m_channelMemberships;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
