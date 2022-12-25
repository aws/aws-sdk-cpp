/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/SubChannelSummary.h>
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
  class ListSubChannelsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult();
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline ListSubChannelsResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline ListSubChannelsResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline ListSubChannelsResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The information about each sub-channel.</p>
     */
    inline const Aws::Vector<SubChannelSummary>& GetSubChannels() const{ return m_subChannels; }

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline void SetSubChannels(const Aws::Vector<SubChannelSummary>& value) { m_subChannels = value; }

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline void SetSubChannels(Aws::Vector<SubChannelSummary>&& value) { m_subChannels = std::move(value); }

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline ListSubChannelsResult& WithSubChannels(const Aws::Vector<SubChannelSummary>& value) { SetSubChannels(value); return *this;}

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline ListSubChannelsResult& WithSubChannels(Aws::Vector<SubChannelSummary>&& value) { SetSubChannels(std::move(value)); return *this;}

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline ListSubChannelsResult& AddSubChannels(const SubChannelSummary& value) { m_subChannels.push_back(value); return *this; }

    /**
     * <p>The information about each sub-channel.</p>
     */
    inline ListSubChannelsResult& AddSubChannels(SubChannelSummary&& value) { m_subChannels.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline ListSubChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline ListSubChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline ListSubChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::Vector<SubChannelSummary> m_subChannels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
