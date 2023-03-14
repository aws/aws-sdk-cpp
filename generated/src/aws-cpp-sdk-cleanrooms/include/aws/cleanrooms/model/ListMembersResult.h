/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MemberSummary.h>
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
  class ListMembersResult
  {
  public:
    AWS_CLEANROOMS_API ListMembersResult();
    AWS_CLEANROOMS_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline const Aws::Vector<MemberSummary>& GetMemberSummaries() const{ return m_memberSummaries; }

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline void SetMemberSummaries(const Aws::Vector<MemberSummary>& value) { m_memberSummaries = value; }

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline void SetMemberSummaries(Aws::Vector<MemberSummary>&& value) { m_memberSummaries = std::move(value); }

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline ListMembersResult& WithMemberSummaries(const Aws::Vector<MemberSummary>& value) { SetMemberSummaries(value); return *this;}

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline ListMembersResult& WithMemberSummaries(Aws::Vector<MemberSummary>&& value) { SetMemberSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline ListMembersResult& AddMemberSummaries(const MemberSummary& value) { m_memberSummaries.push_back(value); return *this; }

    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline ListMembersResult& AddMemberSummaries(MemberSummary&& value) { m_memberSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MemberSummary> m_memberSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
