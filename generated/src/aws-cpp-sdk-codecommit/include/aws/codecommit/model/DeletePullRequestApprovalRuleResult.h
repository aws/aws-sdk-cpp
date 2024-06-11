﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
  class DeletePullRequestApprovalRuleResult
  {
  public:
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult();
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline const Aws::String& GetApprovalRuleId() const{ return m_approvalRuleId; }
    inline void SetApprovalRuleId(const Aws::String& value) { m_approvalRuleId = value; }
    inline void SetApprovalRuleId(Aws::String&& value) { m_approvalRuleId = std::move(value); }
    inline void SetApprovalRuleId(const char* value) { m_approvalRuleId.assign(value); }
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const Aws::String& value) { SetApprovalRuleId(value); return *this;}
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(Aws::String&& value) { SetApprovalRuleId(std::move(value)); return *this;}
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const char* value) { SetApprovalRuleId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeletePullRequestApprovalRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeletePullRequestApprovalRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeletePullRequestApprovalRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
