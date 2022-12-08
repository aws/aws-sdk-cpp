/**
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


    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline const Aws::String& GetApprovalRuleId() const{ return m_approvalRuleId; }

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline void SetApprovalRuleId(const Aws::String& value) { m_approvalRuleId = value; }

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline void SetApprovalRuleId(Aws::String&& value) { m_approvalRuleId = std::move(value); }

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline void SetApprovalRuleId(const char* value) { m_approvalRuleId.assign(value); }

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const Aws::String& value) { SetApprovalRuleId(value); return *this;}

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(Aws::String&& value) { SetApprovalRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted approval rule. </p>  <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * 
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const char* value) { SetApprovalRuleId(value); return *this;}

  private:

    Aws::String m_approvalRuleId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
