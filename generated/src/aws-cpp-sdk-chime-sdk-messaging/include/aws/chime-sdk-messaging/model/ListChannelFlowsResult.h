/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelFlowSummary.h>
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
  class ListChannelFlowsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult();
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information about each channel flow.</p>
     */
    inline const Aws::Vector<ChannelFlowSummary>& GetChannelFlows() const{ return m_channelFlows; }

    /**
     * <p>The information about each channel flow.</p>
     */
    inline void SetChannelFlows(const Aws::Vector<ChannelFlowSummary>& value) { m_channelFlows = value; }

    /**
     * <p>The information about each channel flow.</p>
     */
    inline void SetChannelFlows(Aws::Vector<ChannelFlowSummary>&& value) { m_channelFlows = std::move(value); }

    /**
     * <p>The information about each channel flow.</p>
     */
    inline ListChannelFlowsResult& WithChannelFlows(const Aws::Vector<ChannelFlowSummary>& value) { SetChannelFlows(value); return *this;}

    /**
     * <p>The information about each channel flow.</p>
     */
    inline ListChannelFlowsResult& WithChannelFlows(Aws::Vector<ChannelFlowSummary>&& value) { SetChannelFlows(std::move(value)); return *this;}

    /**
     * <p>The information about each channel flow.</p>
     */
    inline ListChannelFlowsResult& AddChannelFlows(const ChannelFlowSummary& value) { m_channelFlows.push_back(value); return *this; }

    /**
     * <p>The information about each channel flow.</p>
     */
    inline ListChannelFlowsResult& AddChannelFlows(ChannelFlowSummary&& value) { m_channelFlows.push_back(std::move(value)); return *this; }


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
    inline ListChannelFlowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelFlowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelFlowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelFlowSummary> m_channelFlows;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
