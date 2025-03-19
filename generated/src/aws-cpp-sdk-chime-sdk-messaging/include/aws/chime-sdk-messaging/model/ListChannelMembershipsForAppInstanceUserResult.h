/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipForAppInstanceUserSummary.h>
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
  class ListChannelMembershipsForAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult() = default;
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information for the requested channel memberships.</p>
     */
    inline const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& GetChannelMemberships() const { return m_channelMemberships; }
    template<typename ChannelMembershipsT = Aws::Vector<ChannelMembershipForAppInstanceUserSummary>>
    void SetChannelMemberships(ChannelMembershipsT&& value) { m_channelMembershipsHasBeenSet = true; m_channelMemberships = std::forward<ChannelMembershipsT>(value); }
    template<typename ChannelMembershipsT = Aws::Vector<ChannelMembershipForAppInstanceUserSummary>>
    ListChannelMembershipsForAppInstanceUserResult& WithChannelMemberships(ChannelMembershipsT&& value) { SetChannelMemberships(std::forward<ChannelMembershipsT>(value)); return *this;}
    template<typename ChannelMembershipsT = ChannelMembershipForAppInstanceUserSummary>
    ListChannelMembershipsForAppInstanceUserResult& AddChannelMemberships(ChannelMembershipsT&& value) { m_channelMembershipsHasBeenSet = true; m_channelMemberships.emplace_back(std::forward<ChannelMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelMembershipsForAppInstanceUserResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelMembershipsForAppInstanceUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelMembershipForAppInstanceUserSummary> m_channelMemberships;
    bool m_channelMembershipsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
