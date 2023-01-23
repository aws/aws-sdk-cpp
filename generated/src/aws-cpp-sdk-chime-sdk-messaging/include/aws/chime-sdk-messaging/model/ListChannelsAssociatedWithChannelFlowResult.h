/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelAssociatedWithFlowSummary.h>
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
  class ListChannelsAssociatedWithChannelFlowResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelsAssociatedWithChannelFlowResult();
    AWS_CHIMESDKMESSAGING_API ListChannelsAssociatedWithChannelFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelsAssociatedWithChannelFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about each channel.</p>
     */
    inline const Aws::Vector<ChannelAssociatedWithFlowSummary>& GetChannels() const{ return m_channels; }

    /**
     * <p>The information about each channel.</p>
     */
    inline void SetChannels(const Aws::Vector<ChannelAssociatedWithFlowSummary>& value) { m_channels = value; }

    /**
     * <p>The information about each channel.</p>
     */
    inline void SetChannels(Aws::Vector<ChannelAssociatedWithFlowSummary>&& value) { m_channels = std::move(value); }

    /**
     * <p>The information about each channel.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& WithChannels(const Aws::Vector<ChannelAssociatedWithFlowSummary>& value) { SetChannels(value); return *this;}

    /**
     * <p>The information about each channel.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& WithChannels(Aws::Vector<ChannelAssociatedWithFlowSummary>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The information about each channel.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& AddChannels(const ChannelAssociatedWithFlowSummary& value) { m_channels.push_back(value); return *this; }

    /**
     * <p>The information about each channel.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& AddChannels(ChannelAssociatedWithFlowSummary&& value) { m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelAssociatedWithFlowSummary> m_channels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
