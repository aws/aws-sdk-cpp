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
    AWS_CLEANROOMS_API ListMembersResult() = default;
    AWS_CLEANROOMS_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMembersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of members returned by the ListMembers operation.</p>
     */
    inline const Aws::Vector<MemberSummary>& GetMemberSummaries() const { return m_memberSummaries; }
    template<typename MemberSummariesT = Aws::Vector<MemberSummary>>
    void SetMemberSummaries(MemberSummariesT&& value) { m_memberSummariesHasBeenSet = true; m_memberSummaries = std::forward<MemberSummariesT>(value); }
    template<typename MemberSummariesT = Aws::Vector<MemberSummary>>
    ListMembersResult& WithMemberSummaries(MemberSummariesT&& value) { SetMemberSummaries(std::forward<MemberSummariesT>(value)); return *this;}
    template<typename MemberSummariesT = MemberSummary>
    ListMembersResult& AddMemberSummaries(MemberSummariesT&& value) { m_memberSummariesHasBeenSet = true; m_memberSummaries.emplace_back(std::forward<MemberSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMembersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MemberSummary> m_memberSummaries;
    bool m_memberSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
