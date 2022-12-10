/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ApprovalRule.h>
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
  class UpdatePullRequestApprovalRuleContentResult
  {
  public:
    AWS_CODECOMMIT_API UpdatePullRequestApprovalRuleContentResult();
    AWS_CODECOMMIT_API UpdatePullRequestApprovalRuleContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdatePullRequestApprovalRuleContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated approval rule.</p>
     */
    inline const ApprovalRule& GetApprovalRule() const{ return m_approvalRule; }

    /**
     * <p>Information about the updated approval rule.</p>
     */
    inline void SetApprovalRule(const ApprovalRule& value) { m_approvalRule = value; }

    /**
     * <p>Information about the updated approval rule.</p>
     */
    inline void SetApprovalRule(ApprovalRule&& value) { m_approvalRule = std::move(value); }

    /**
     * <p>Information about the updated approval rule.</p>
     */
    inline UpdatePullRequestApprovalRuleContentResult& WithApprovalRule(const ApprovalRule& value) { SetApprovalRule(value); return *this;}

    /**
     * <p>Information about the updated approval rule.</p>
     */
    inline UpdatePullRequestApprovalRuleContentResult& WithApprovalRule(ApprovalRule&& value) { SetApprovalRule(std::move(value)); return *this;}

  private:

    ApprovalRule m_approvalRule;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
