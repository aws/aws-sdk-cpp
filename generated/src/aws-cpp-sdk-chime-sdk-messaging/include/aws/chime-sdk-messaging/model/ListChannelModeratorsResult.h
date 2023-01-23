/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/ChannelModeratorSummary.h>
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
  class ListChannelModeratorsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult();
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListChannelModeratorsResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelModeratorsResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelModeratorsResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline ListChannelModeratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline ListChannelModeratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline ListChannelModeratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline const Aws::Vector<ChannelModeratorSummary>& GetChannelModerators() const{ return m_channelModerators; }

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline void SetChannelModerators(const Aws::Vector<ChannelModeratorSummary>& value) { m_channelModerators = value; }

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline void SetChannelModerators(Aws::Vector<ChannelModeratorSummary>&& value) { m_channelModerators = std::move(value); }

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline ListChannelModeratorsResult& WithChannelModerators(const Aws::Vector<ChannelModeratorSummary>& value) { SetChannelModerators(value); return *this;}

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline ListChannelModeratorsResult& WithChannelModerators(Aws::Vector<ChannelModeratorSummary>&& value) { SetChannelModerators(std::move(value)); return *this;}

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline ListChannelModeratorsResult& AddChannelModerators(const ChannelModeratorSummary& value) { m_channelModerators.push_back(value); return *this; }

    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline ListChannelModeratorsResult& AddChannelModerators(ChannelModeratorSummary&& value) { m_channelModerators.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelArn;

    Aws::String m_nextToken;

    Aws::Vector<ChannelModeratorSummary> m_channelModerators;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
