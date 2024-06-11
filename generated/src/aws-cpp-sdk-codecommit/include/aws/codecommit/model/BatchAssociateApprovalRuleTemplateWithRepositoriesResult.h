﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/BatchAssociateApprovalRuleTemplateWithRepositoriesError.h>
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
  class BatchAssociateApprovalRuleTemplateWithRepositoriesResult
  {
  public:
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult();
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedRepositoryNames() const{ return m_associatedRepositoryNames; }
    inline void SetAssociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { m_associatedRepositoryNames = value; }
    inline void SetAssociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { m_associatedRepositoryNames = std::move(value); }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithAssociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { SetAssociatedRepositoryNames(value); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithAssociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { SetAssociatedRepositoryNames(std::move(value)); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(const Aws::String& value) { m_associatedRepositoryNames.push_back(value); return *this; }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(Aws::String&& value) { m_associatedRepositoryNames.push_back(std::move(value)); return *this; }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(const char* value) { m_associatedRepositoryNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>&& value) { m_errors = std::move(value); }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithErrors(const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& value) { SetErrors(value); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithErrors(Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddErrors(const BatchAssociateApprovalRuleTemplateWithRepositoriesError& value) { m_errors.push_back(value); return *this; }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddErrors(BatchAssociateApprovalRuleTemplateWithRepositoriesError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_associatedRepositoryNames;

    Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
