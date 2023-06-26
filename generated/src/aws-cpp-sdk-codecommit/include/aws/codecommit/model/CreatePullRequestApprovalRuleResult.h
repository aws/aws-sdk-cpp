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
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult();
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API CreatePullRequestApprovalRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the created approval rule.</p>
     */
    inline const ApprovalRule& GetApprovalRule() const{ return m_approvalRule; }

    /**
     * <p>Information about the created approval rule.</p>
     */
    inline void SetApprovalRule(const ApprovalRule& value) { m_approvalRule = value; }

    /**
     * <p>Information about the created approval rule.</p>
     */
    inline void SetApprovalRule(ApprovalRule&& value) { m_approvalRule = std::move(value); }

    /**
     * <p>Information about the created approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleResult& WithApprovalRule(const ApprovalRule& value) { SetApprovalRule(value); return *this;}

    /**
     * <p>Information about the created approval rule.</p>
     */
    inline CreatePullRequestApprovalRuleResult& WithApprovalRule(ApprovalRule&& value) { SetApprovalRule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePullRequestApprovalRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePullRequestApprovalRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePullRequestApprovalRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApprovalRule m_approvalRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
