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
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult();
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API GetPullRequestApprovalStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline const Aws::Vector<Approval>& GetApprovals() const{ return m_approvals; }

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline void SetApprovals(const Aws::Vector<Approval>& value) { m_approvals = value; }

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline void SetApprovals(Aws::Vector<Approval>&& value) { m_approvals = std::move(value); }

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline GetPullRequestApprovalStatesResult& WithApprovals(const Aws::Vector<Approval>& value) { SetApprovals(value); return *this;}

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline GetPullRequestApprovalStatesResult& WithApprovals(Aws::Vector<Approval>&& value) { SetApprovals(std::move(value)); return *this;}

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline GetPullRequestApprovalStatesResult& AddApprovals(const Approval& value) { m_approvals.push_back(value); return *this; }

    /**
     * <p>Information about users who have approved the pull request.</p>
     */
    inline GetPullRequestApprovalStatesResult& AddApprovals(Approval&& value) { m_approvals.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPullRequestApprovalStatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPullRequestApprovalStatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPullRequestApprovalStatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Approval> m_approvals;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
