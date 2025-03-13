/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
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
  class CreateChannelModeratorResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult() = default;
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    CreateChannelModeratorResult& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline const Identity& GetChannelModerator() const { return m_channelModerator; }
    template<typename ChannelModeratorT = Identity>
    void SetChannelModerator(ChannelModeratorT&& value) { m_channelModeratorHasBeenSet = true; m_channelModerator = std::forward<ChannelModeratorT>(value); }
    template<typename ChannelModeratorT = Identity>
    CreateChannelModeratorResult& WithChannelModerator(ChannelModeratorT&& value) { SetChannelModerator(std::forward<ChannelModeratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateChannelModeratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Identity m_channelModerator;
    bool m_channelModeratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
