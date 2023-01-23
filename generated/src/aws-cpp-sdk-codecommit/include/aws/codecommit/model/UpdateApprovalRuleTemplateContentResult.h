/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ApprovalRuleTemplate.h>
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
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult();
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdateApprovalRuleTemplateContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApprovalRuleTemplate& GetApprovalRuleTemplate() const{ return m_approvalRuleTemplate; }

    
    inline void SetApprovalRuleTemplate(const ApprovalRuleTemplate& value) { m_approvalRuleTemplate = value; }

    
    inline void SetApprovalRuleTemplate(ApprovalRuleTemplate&& value) { m_approvalRuleTemplate = std::move(value); }

    
    inline UpdateApprovalRuleTemplateContentResult& WithApprovalRuleTemplate(const ApprovalRuleTemplate& value) { SetApprovalRuleTemplate(value); return *this;}

    
    inline UpdateApprovalRuleTemplateContentResult& WithApprovalRuleTemplate(ApprovalRuleTemplate&& value) { SetApprovalRuleTemplate(std::move(value)); return *this;}

  private:

    ApprovalRuleTemplate m_approvalRuleTemplate;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
