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
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult() = default;
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelModeratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    ListChannelModeratorsResult& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested moderators are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelModeratorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about and names of each moderator.</p>
     */
    inline const Aws::Vector<ChannelModeratorSummary>& GetChannelModerators() const { return m_channelModerators; }
    template<typename ChannelModeratorsT = Aws::Vector<ChannelModeratorSummary>>
    void SetChannelModerators(ChannelModeratorsT&& value) { m_channelModeratorsHasBeenSet = true; m_channelModerators = std::forward<ChannelModeratorsT>(value); }
    template<typename ChannelModeratorsT = Aws::Vector<ChannelModeratorSummary>>
    ListChannelModeratorsResult& WithChannelModerators(ChannelModeratorsT&& value) { SetChannelModerators(std::forward<ChannelModeratorsT>(value)); return *this;}
    template<typename ChannelModeratorsT = ChannelModeratorSummary>
    ListChannelModeratorsResult& AddChannelModerators(ChannelModeratorsT&& value) { m_channelModeratorsHasBeenSet = true; m_channelModerators.emplace_back(std::forward<ChannelModeratorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelModeratorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ChannelModeratorSummary> m_channelModerators;
    bool m_channelModeratorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
