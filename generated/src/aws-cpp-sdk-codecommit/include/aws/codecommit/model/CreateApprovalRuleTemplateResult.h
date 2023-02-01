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
  class CreateApprovalRuleTemplateResult
  {
  public:
    AWS_CODECOMMIT_API CreateApprovalRuleTemplateResult();
    AWS_CODECOMMIT_API CreateApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API CreateApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content and structure of the created approval rule template.</p>
     */
    inline const ApprovalRuleTemplate& GetApprovalRuleTemplate() const{ return m_approvalRuleTemplate; }

    /**
     * <p>The content and structure of the created approval rule template.</p>
     */
    inline void SetApprovalRuleTemplate(const ApprovalRuleTemplate& value) { m_approvalRuleTemplate = value; }

    /**
     * <p>The content and structure of the created approval rule template.</p>
     */
    inline void SetApprovalRuleTemplate(ApprovalRuleTemplate&& value) { m_approvalRuleTemplate = std::move(value); }

    /**
     * <p>The content and structure of the created approval rule template.</p>
     */
    inline CreateApprovalRuleTemplateResult& WithApprovalRuleTemplate(const ApprovalRuleTemplate& value) { SetApprovalRuleTemplate(value); return *this;}

    /**
     * <p>The content and structure of the created approval rule template.</p>
     */
    inline CreateApprovalRuleTemplateResult& WithApprovalRuleTemplate(ApprovalRuleTemplate&& value) { SetApprovalRuleTemplate(std::move(value)); return *this;}

  private:

    ApprovalRuleTemplate m_approvalRuleTemplate;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
