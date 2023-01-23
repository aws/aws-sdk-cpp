/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelMembershipForAppInstanceUserSummary.h>
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
namespace Chime
{
namespace Model
{
  class DescribeChannelMembershipForAppInstanceUserResult
  {
  public:
    AWS_CHIME_API DescribeChannelMembershipForAppInstanceUserResult();
    AWS_CHIME_API DescribeChannelMembershipForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API DescribeChannelMembershipForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace Chime
} // namespace Aws
