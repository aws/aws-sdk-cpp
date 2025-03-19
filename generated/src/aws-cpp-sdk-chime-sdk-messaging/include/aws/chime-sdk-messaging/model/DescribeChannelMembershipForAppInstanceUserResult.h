/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipForAppInstanceUserSummary.h>
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
  class DescribeChannelMembershipForAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult() = default;
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline const ChannelMembershipForAppInstanceUserSummary& GetChannelMembership() const { return m_channelMembership; }
    template<typename ChannelMembershipT = ChannelMembershipForAppInstanceUserSummary>
    void SetChannelMembership(ChannelMembershipT&& value) { m_channelMembershipHasBeenSet = true; m_channelMembership = std::forward<ChannelMembershipT>(value); }
    template<typename ChannelMembershipT = ChannelMembershipForAppInstanceUserSummary>
    DescribeChannelMembershipForAppInstanceUserResult& WithChannelMembership(ChannelMembershipT&& value) { SetChannelMembership(std::forward<ChannelMembershipT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChannelMembershipForAppInstanceUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChannelMembershipForAppInstanceUserSummary m_channelMembership;
    bool m_channelMembershipHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
