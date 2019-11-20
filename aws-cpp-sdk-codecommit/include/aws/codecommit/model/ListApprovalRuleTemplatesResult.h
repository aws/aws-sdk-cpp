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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CODECOMMIT_API ListApprovalRuleTemplatesResult
  {
  public:
    ListApprovalRuleTemplatesResult();
    ListApprovalRuleTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApprovalRuleTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRuleTemplateNames() const{ return m_approvalRuleTemplateNames; }

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline void SetApprovalRuleTemplateNames(const Aws::Vector<Aws::String>& value) { m_approvalRuleTemplateNames = value; }

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline void SetApprovalRuleTemplateNames(Aws::Vector<Aws::String>&& value) { m_approvalRuleTemplateNames = std::move(value); }

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline ListApprovalRuleTemplatesResult& WithApprovalRuleTemplateNames(const Aws::Vector<Aws::String>& value) { SetApprovalRuleTemplateNames(value); return *this;}

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline ListApprovalRuleTemplatesResult& WithApprovalRuleTemplateNames(Aws::Vector<Aws::String>&& value) { SetApprovalRuleTemplateNames(std::move(value)); return *this;}

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline ListApprovalRuleTemplatesResult& AddApprovalRuleTemplateNames(const Aws::String& value) { m_approvalRuleTemplateNames.push_back(value); return *this; }

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline ListApprovalRuleTemplatesResult& AddApprovalRuleTemplateNames(Aws::String&& value) { m_approvalRuleTemplateNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of all the approval rule templates found in the AWS Region for your
     * AWS account.</p>
     */
    inline ListApprovalRuleTemplatesResult& AddApprovalRuleTemplateNames(const char* value) { m_approvalRuleTemplateNames.push_back(value); return *this; }


    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListApprovalRuleTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListApprovalRuleTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline ListApprovalRuleTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_approvalRuleTemplateNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
