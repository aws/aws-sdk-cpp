/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MembershipSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListMembershipsResult
  {
  public:
    AWS_CLEANROOMS_API ListMembershipsResult();
    AWS_CLEANROOMS_API ListMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline const Aws::Vector<MembershipSummary>& GetMembershipSummaries() const{ return m_membershipSummaries; }

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline void SetMembershipSummaries(const Aws::Vector<MembershipSummary>& value) { m_membershipSummaries = value; }

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline void SetMembershipSummaries(Aws::Vector<MembershipSummary>&& value) { m_membershipSummaries = std::move(value); }

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline ListMembershipsResult& WithMembershipSummaries(const Aws::Vector<MembershipSummary>& value) { SetMembershipSummaries(value); return *this;}

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline ListMembershipsResult& WithMembershipSummaries(Aws::Vector<MembershipSummary>&& value) { SetMembershipSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline ListMembershipsResult& AddMembershipSummaries(const MembershipSummary& value) { m_membershipSummaries.push_back(value); return *this; }

    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline ListMembershipsResult& AddMembershipSummaries(MembershipSummary&& value) { m_membershipSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MembershipSummary> m_membershipSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
