﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RoutingProfile.h>
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
namespace Connect
{
namespace Model
{
  class SearchRoutingProfilesResult
  {
  public:
    AWS_CONNECT_API SearchRoutingProfilesResult();
    AWS_CONNECT_API SearchRoutingProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchRoutingProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the routing profiles.</p>
     */
    inline const Aws::Vector<RoutingProfile>& GetRoutingProfiles() const{ return m_routingProfiles; }
    inline void SetRoutingProfiles(const Aws::Vector<RoutingProfile>& value) { m_routingProfiles = value; }
    inline void SetRoutingProfiles(Aws::Vector<RoutingProfile>&& value) { m_routingProfiles = std::move(value); }
    inline SearchRoutingProfilesResult& WithRoutingProfiles(const Aws::Vector<RoutingProfile>& value) { SetRoutingProfiles(value); return *this;}
    inline SearchRoutingProfilesResult& WithRoutingProfiles(Aws::Vector<RoutingProfile>&& value) { SetRoutingProfiles(std::move(value)); return *this;}
    inline SearchRoutingProfilesResult& AddRoutingProfiles(const RoutingProfile& value) { m_routingProfiles.push_back(value); return *this; }
    inline SearchRoutingProfilesResult& AddRoutingProfiles(RoutingProfile&& value) { m_routingProfiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchRoutingProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchRoutingProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchRoutingProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of routing profiles which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchRoutingProfilesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchRoutingProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchRoutingProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchRoutingProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RoutingProfile> m_routingProfiles;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
