/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/MemberDetail.h>
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
namespace Detective
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_DETECTIVE_API ListMembersResult() = default;
    AWS_DETECTIVE_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of member accounts in the behavior graph.</p> <p>For invited
     * accounts, the results include member accounts that did not pass verification and
     * member accounts that have not yet accepted the invitation to the behavior graph.
     * The results do not include member accounts that were removed from the behavior
     * graph.</p> <p>For the organization behavior graph, the results do not include
     * organization accounts that the Detective administrator account has not enabled
     * as member accounts.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetMemberDetails() const { return m_memberDetails; }
    template<typename MemberDetailsT = Aws::Vector<MemberDetail>>
    void SetMemberDetails(MemberDetailsT&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails = std::forward<MemberDetailsT>(value); }
    template<typename MemberDetailsT = Aws::Vector<MemberDetail>>
    ListMembersResult& WithMemberDetails(MemberDetailsT&& value) { SetMemberDetails(std::forward<MemberDetailsT>(value)); return *this;}
    template<typename MemberDetailsT = MemberDetail>
    ListMembersResult& AddMemberDetails(MemberDetailsT&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails.emplace_back(std::forward<MemberDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more member accounts remaining in the results, then use this
     * pagination token to request the next page of member accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMembersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMembersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDetail> m_memberDetails;
    bool m_memberDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
