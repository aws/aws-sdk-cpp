/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ApprovalRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreatePullRequestApprovalRuleResult
  {
  public:
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult() = default;
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the created approval rule.</p>
     */
    inline const ApprovalRule& GetApprovalRule() const { return m_approvalRule; }
    template<typename ApprovalRuleT = ApprovalRule>
    void SetApprovalRule(ApprovalRuleT&& value) { m_approvalRuleHasBeenSet = true; m_approvalRule = std::forward<ApprovalRuleT>(value); }
    template<typename ApprovalRuleT = ApprovalRule>
    CreatePullRequestApprovalRuleResult& WithApprovalRule(ApprovalRuleT&& value) { SetApprovalRule(std::forward<ApprovalRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePullRequestApprovalRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApprovalRule m_approvalRule;
    bool m_approvalRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
