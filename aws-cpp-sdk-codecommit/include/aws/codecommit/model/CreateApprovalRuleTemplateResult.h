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
  class AWS_CODECOMMIT_API CreateApprovalRuleTemplateResult
  {
  public:
    CreateApprovalRuleTemplateResult();
    CreateApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApprovalRuleTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
