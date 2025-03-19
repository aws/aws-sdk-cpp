/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/Approval.h>
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
namespace CodeCommit
{
namespace Model
{
  class GetPullRequestApprovalStatesResult
  {
  public:
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult() = default;
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline const Aws::Vector<Approval>& GetApprovals() const { return m_approvals; }
    template<typename ApprovalsT = Aws::Vector<Approval>>
    void SetApprovals(ApprovalsT&& value) { m_approvalsHasBeenSet = true; m_approvals = std::forward<ApprovalsT>(value); }
    template<typename ApprovalsT = Aws::Vector<Approval>>
    GetPullRequestApprovalStatesResult& WithApprovals(ApprovalsT&& value) { SetApprovals(std::forward<ApprovalsT>(value)); return *this;}
    template<typename ApprovalsT = Approval>
    GetPullRequestApprovalStatesResult& AddApprovals(ApprovalsT&& value) { m_approvalsHasBeenSet = true; m_approvals.emplace_back(std::forward<ApprovalsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPullRequestApprovalStatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Approval> m_approvals;
    bool m_approvalsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
