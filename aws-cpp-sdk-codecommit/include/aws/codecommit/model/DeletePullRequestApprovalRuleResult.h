/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API DeletePullRequestApprovalRuleResult
  {
  public:
    DeletePullRequestApprovalRuleResult();
    DeletePullRequestApprovalRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeletePullRequestApprovalRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline const Aws::String& GetApprovalRuleId() const{ return m_approvalRuleId; }

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline void SetApprovalRuleId(const Aws::String& value) { m_approvalRuleId = value; }

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline void SetApprovalRuleId(Aws::String&& value) { m_approvalRuleId = std::move(value); }

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline void SetApprovalRuleId(const char* value) { m_approvalRuleId.assign(value); }

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const Aws::String& value) { SetApprovalRuleId(value); return *this;}

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(Aws::String&& value) { SetApprovalRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted approval rule. </p> <note> <p>If the approval rule was
     * deleted in an earlier API call, the response is 200 OK without content.</p>
     * </note>
     */
    inline DeletePullRequestApprovalRuleResult& WithApprovalRuleId(const char* value) { SetApprovalRuleId(value); return *this;}

  private:

    Aws::String m_approvalRuleId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
