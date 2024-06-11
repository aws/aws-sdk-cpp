﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAssociatedApprovalRuleTemplatesForRepositoryResult
  {
  public:
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult();
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API ListAssociatedApprovalRuleTemplatesForRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all approval rule templates associated with the repository.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovalRuleTemplateNames() const{ return m_approvalRuleTemplateNames; }
    inline void SetApprovalRuleTemplateNames(const Aws::Vector<Aws::String>& value) { m_approvalRuleTemplateNames = value; }
    inline void SetApprovalRuleTemplateNames(Aws::Vector<Aws::String>&& value) { m_approvalRuleTemplateNames = std::move(value); }
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithApprovalRuleTemplateNames(const Aws::Vector<Aws::String>& value) { SetApprovalRuleTemplateNames(value); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithApprovalRuleTemplateNames(Aws::Vector<Aws::String>&& value) { SetApprovalRuleTemplateNames(std::move(value)); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& AddApprovalRuleTemplateNames(const Aws::String& value) { m_approvalRuleTemplateNames.push_back(value); return *this; }
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& AddApprovalRuleTemplateNames(Aws::String&& value) { m_approvalRuleTemplateNames.push_back(std::move(value)); return *this; }
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& AddApprovalRuleTemplateNames(const char* value) { m_approvalRuleTemplateNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An enumeration token that allows the operation to batch the next results of
     * the operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociatedApprovalRuleTemplatesForRepositoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_approvalRuleTemplateNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
