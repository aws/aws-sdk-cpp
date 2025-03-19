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
  class ListInvitationsResult
  {
  public:
    AWS_DETECTIVE_API ListInvitationsResult() = default;
    AWS_DETECTIVE_API ListInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API ListInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of behavior graphs for which the member account has open or accepted
     * invitations.</p>
     */
    inline const Aws::Vector<MemberDetail>& GetInvitations() const { return m_invitations; }
    template<typename InvitationsT = Aws::Vector<MemberDetail>>
    void SetInvitations(InvitationsT&& value) { m_invitationsHasBeenSet = true; m_invitations = std::forward<InvitationsT>(value); }
    template<typename InvitationsT = Aws::Vector<MemberDetail>>
    ListInvitationsResult& WithInvitations(InvitationsT&& value) { SetInvitations(std::forward<InvitationsT>(value)); return *this;}
    template<typename InvitationsT = MemberDetail>
    ListInvitationsResult& AddInvitations(InvitationsT&& value) { m_invitationsHasBeenSet = true; m_invitations.emplace_back(std::forward<InvitationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more behavior graphs remaining in the results, then this is the
     * pagination token to use to request the next page of behavior graphs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvitationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberDetail> m_invitations;
    bool m_invitationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
