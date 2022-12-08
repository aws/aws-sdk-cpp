/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListChannelMembershipsForAppInstanceUserResult
  {
  public:
    AWS_CHIME_API ListChannelMembershipsForAppInstanceUserResult();
    AWS_CHIME_API ListChannelMembershipsForAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListChannelMembershipsForAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& GetChannelMemberships() const{ return m_channelMemberships; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetChannelMemberships(const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& value) { m_channelMemberships = value; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetChannelMemberships(Aws::Vector<ChannelMembershipForAppInstanceUserSummary>&& value) { m_channelMemberships = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& WithChannelMemberships(const Aws::Vector<ChannelMembershipForAppInstanceUserSummary>& value) { SetChannelMemberships(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& WithChannelMemberships(Aws::Vector<ChannelMembershipForAppInstanceUserSummary>&& value) { SetChannelMemberships(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& AddChannelMemberships(const ChannelMembershipForAppInstanceUserSummary& value) { m_channelMemberships.push_back(value); return *this; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& AddChannelMemberships(ChannelMembershipForAppInstanceUserSummary&& value) { m_channelMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested users are
     * returned.</p>
     */
    inline ListChannelMembershipsForAppInstanceUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelMembershipForAppInstanceUserSummary> m_channelMemberships;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
