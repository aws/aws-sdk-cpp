/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/BatchDisassociateApprovalRuleTemplateFromRepositoriesError.h>
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
  class BatchDisassociateApprovalRuleTemplateFromRepositoriesResult
  {
  public:
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult();
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisassociatedRepositoryNames() const{ return m_disassociatedRepositoryNames; }

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline void SetDisassociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { m_disassociatedRepositoryNames = value; }

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline void SetDisassociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { m_disassociatedRepositoryNames = std::move(value); }

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithDisassociatedRepositoryNames(const Aws::Vector<Aws::String>& value) { SetDisassociatedRepositoryNames(value); return *this;}

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithDisassociatedRepositoryNames(Aws::Vector<Aws::String>&& value) { SetDisassociatedRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddDisassociatedRepositoryNames(const Aws::String& value) { m_disassociatedRepositoryNames.push_back(value); return *this; }

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddDisassociatedRepositoryNames(Aws::String&& value) { m_disassociatedRepositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddDisassociatedRepositoryNames(const char* value) { m_disassociatedRepositoryNames.push_back(value); return *this; }


    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline const Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>& value) { m_errors = value; }

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithErrors(const Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithErrors(Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddErrors(const BatchDisassociateApprovalRuleTemplateFromRepositoriesError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddErrors(BatchDisassociateApprovalRuleTemplateFromRepositoriesError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_disassociatedRepositoryNames;

    Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError> m_errors;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
