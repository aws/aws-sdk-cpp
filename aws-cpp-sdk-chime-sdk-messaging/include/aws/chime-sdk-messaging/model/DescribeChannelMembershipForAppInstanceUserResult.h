/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
  class DescribeChannelMembershipForAppInstanceUserResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult();
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelMembershipForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline const ChannelMembershipForAppInstanceUserSummary& GetChannelMembership() const{ return m_channelMembership; }

    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline void SetChannelMembership(const ChannelMembershipForAppInstanceUserSummary& value) { m_channelMembership = value; }

    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline void SetChannelMembership(ChannelMembershipForAppInstanceUserSummary&& value) { m_channelMembership = std::move(value); }

    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline DescribeChannelMembershipForAppInstanceUserResult& WithChannelMembership(const ChannelMembershipForAppInstanceUserSummary& value) { SetChannelMembership(value); return *this;}

    /**
     * <p>The channel to which a user belongs.</p>
     */
    inline DescribeChannelMembershipForAppInstanceUserResult& WithChannelMembership(ChannelMembershipForAppInstanceUserSummary&& value) { SetChannelMembership(std::move(value)); return *this;}

  private:

    ChannelMembershipForAppInstanceUserSummary m_channelMembership;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
