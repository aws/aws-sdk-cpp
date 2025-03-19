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
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult() = default;
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information about each channel flow.</p>
     */
    inline const Aws::Vector<ChannelFlowSummary>& GetChannelFlows() const { return m_channelFlows; }
    template<typename ChannelFlowsT = Aws::Vector<ChannelFlowSummary>>
    void SetChannelFlows(ChannelFlowsT&& value) { m_channelFlowsHasBeenSet = true; m_channelFlows = std::forward<ChannelFlowsT>(value); }
    template<typename ChannelFlowsT = Aws::Vector<ChannelFlowSummary>>
    ListChannelFlowsResult& WithChannelFlows(ChannelFlowsT&& value) { SetChannelFlows(std::forward<ChannelFlowsT>(value)); return *this;}
    template<typename ChannelFlowsT = ChannelFlowSummary>
    ListChannelFlowsResult& AddChannelFlows(ChannelFlowsT&& value) { m_channelFlowsHasBeenSet = true; m_channelFlows.emplace_back(std::forward<ChannelFlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelFlowSummary> m_channelFlows;
    bool m_channelFlowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
