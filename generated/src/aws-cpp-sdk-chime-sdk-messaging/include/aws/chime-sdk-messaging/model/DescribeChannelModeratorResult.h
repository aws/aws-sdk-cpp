/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelModerator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeChannelModeratorResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult() = default;
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the channel moderator.</p>
     */
    inline const ChannelModerator& GetChannelModerator() const { return m_channelModerator; }
    template<typename ChannelModeratorT = ChannelModerator>
    void SetChannelModerator(ChannelModeratorT&& value) { m_channelModeratorHasBeenSet = true; m_channelModerator = std::forward<ChannelModeratorT>(value); }
    template<typename ChannelModeratorT = ChannelModerator>
    DescribeChannelModeratorResult& WithChannelModerator(ChannelModeratorT&& value) { SetChannelModerator(std::forward<ChannelModeratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChannelModeratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChannelModerator m_channelModerator;
    bool m_channelModeratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
