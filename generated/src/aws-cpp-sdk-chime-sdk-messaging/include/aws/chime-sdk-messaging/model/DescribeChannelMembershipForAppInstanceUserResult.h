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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChannelMembershipForAppInstanceUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChannelMembershipForAppInstanceUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChannelMembershipForAppInstanceUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelMembershipForAppInstanceUserSummary m_channelMembership;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
