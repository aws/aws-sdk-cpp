/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelModeratedByAppInstanceUserSummary.h>
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
  class DescribeChannelModeratedByAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratedByAppInstanceUserResult() = default;
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratedByAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratedByAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The moderated channel.</p>
     */
    inline const ChannelModeratedByAppInstanceUserSummary& GetChannel() const { return m_channel; }
    template<typename ChannelT = ChannelModeratedByAppInstanceUserSummary>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = ChannelModeratedByAppInstanceUserSummary>
    DescribeChannelModeratedByAppInstanceUserResult& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChannelModeratedByAppInstanceUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChannelModeratedByAppInstanceUserSummary m_channel;
    bool m_channelHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
