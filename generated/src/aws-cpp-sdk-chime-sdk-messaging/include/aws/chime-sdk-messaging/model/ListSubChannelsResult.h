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
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult() = default;
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListSubChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of elastic channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    ListSubChannelsResult& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about each sub-channel.</p>
     */
    inline const Aws::Vector<SubChannelSummary>& GetSubChannels() const { return m_subChannels; }
    template<typename SubChannelsT = Aws::Vector<SubChannelSummary>>
    void SetSubChannels(SubChannelsT&& value) { m_subChannelsHasBeenSet = true; m_subChannels = std::forward<SubChannelsT>(value); }
    template<typename SubChannelsT = Aws::Vector<SubChannelSummary>>
    ListSubChannelsResult& WithSubChannels(SubChannelsT&& value) { SetSubChannels(std::forward<SubChannelsT>(value)); return *this;}
    template<typename SubChannelsT = SubChannelSummary>
    ListSubChannelsResult& AddSubChannels(SubChannelsT&& value) { m_subChannelsHasBeenSet = true; m_subChannels.emplace_back(std::forward<SubChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested sub-channels are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubChannelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::Vector<SubChannelSummary> m_subChannels;
    bool m_subChannelsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
