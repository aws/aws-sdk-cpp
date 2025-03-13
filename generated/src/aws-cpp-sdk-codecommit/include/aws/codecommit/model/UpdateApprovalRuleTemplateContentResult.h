/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ApprovalRuleTemplate.h>
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
  class UpdateApprovalRuleTemplateContentResult
  {
  public:
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult() = default;
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ApprovalRuleTemplate& GetApprovalRuleTemplate() const { return m_approvalRuleTemplate; }
    template<typename ApprovalRuleTemplateT = ApprovalRuleTemplate>
    void SetApprovalRuleTemplate(ApprovalRuleTemplateT&& value) { m_approvalRuleTemplateHasBeenSet = true; m_approvalRuleTemplate = std::forward<ApprovalRuleTemplateT>(value); }
    template<typename ApprovalRuleTemplateT = ApprovalRuleTemplate>
    UpdateApprovalRuleTemplateContentResult& WithApprovalRuleTemplate(ApprovalRuleTemplateT&& value) { SetApprovalRuleTemplate(std::forward<ApprovalRuleTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApprovalRuleTemplateContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApprovalRuleTemplate m_approvalRuleTemplate;
    bool m_approvalRuleTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
