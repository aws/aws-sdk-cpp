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
  class DeleteApprovalRuleTemplateResult
  {
  public:
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult() = default;
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API DeleteApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The system-generated ID of the deleted approval rule template. If the
     * template has been previously deleted, the only response is a 200 OK.</p>
     */
    inline const Aws::String& GetApprovalRuleTemplateId() const { return m_approvalRuleTemplateId; }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    void SetApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { m_approvalRuleTemplateIdHasBeenSet = true; m_approvalRuleTemplateId = std::forward<ApprovalRuleTemplateIdT>(value); }
    template<typename ApprovalRuleTemplateIdT = Aws::String>
    DeleteApprovalRuleTemplateResult& WithApprovalRuleTemplateId(ApprovalRuleTemplateIdT&& value) { SetApprovalRuleTemplateId(std::forward<ApprovalRuleTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteApprovalRuleTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_approvalRuleTemplateId;
    bool m_approvalRuleTemplateIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
