/**
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


    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedRepositoryNames() const{ return m_associatedRepositoryNames; }

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline void SetAssociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { m_associatedRepositoryNames = value; }

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline void SetAssociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { m_associatedRepositoryNames = std::move(value); }

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithAssociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { SetAssociatedRepositoryNames(value); return *this;}

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithAssociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { SetAssociatedRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(const Aws::String& value) { m_associatedRepositoryNames.push_back(value); return *this; }

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(Aws::String&& value) { m_associatedRepositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(const char* value) { m_associatedRepositoryNames.push_back(value); return *this; }


    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& value) { m_errors = value; }

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline void SetErrors(Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithErrors(const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithErrors(Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddErrors(const BatchAssociateApprovalRuleTemplateWithRepositoriesError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddErrors(BatchAssociateApprovalRuleTemplateWithRepositoriesError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_associatedRepositoryNames;

    Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError> m_errors;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
