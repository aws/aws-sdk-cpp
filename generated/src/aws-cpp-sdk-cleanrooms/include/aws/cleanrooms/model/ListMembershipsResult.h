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
    AWS_CLEANROOMS_API ListMembershipsResult() = default;
    AWS_CLEANROOMS_API ListMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMembershipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of memberships returned from the ListMemberships operation.</p>
     */
    inline const Aws::Vector<MembershipSummary>& GetMembershipSummaries() const { return m_membershipSummaries; }
    template<typename MembershipSummariesT = Aws::Vector<MembershipSummary>>
    void SetMembershipSummaries(MembershipSummariesT&& value) { m_membershipSummariesHasBeenSet = true; m_membershipSummaries = std::forward<MembershipSummariesT>(value); }
    template<typename MembershipSummariesT = Aws::Vector<MembershipSummary>>
    ListMembershipsResult& WithMembershipSummaries(MembershipSummariesT&& value) { SetMembershipSummaries(std::forward<MembershipSummariesT>(value)); return *this;}
    template<typename MembershipSummariesT = MembershipSummary>
    ListMembershipsResult& AddMembershipSummaries(MembershipSummariesT&& value) { m_membershipSummariesHasBeenSet = true; m_membershipSummaries.emplace_back(std::forward<MembershipSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMembershipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MembershipSummary> m_membershipSummaries;
    bool m_membershipSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
