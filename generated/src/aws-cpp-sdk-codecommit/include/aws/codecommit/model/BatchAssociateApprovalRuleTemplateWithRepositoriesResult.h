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
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult() = default;
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchAssociateApprovalRuleTemplateWithRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of names of the repositories that have been associated with the
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedRepositoryNames() const { return m_associatedRepositoryNames; }
    template<typename AssociatedRepositoryNamesT = Aws::Vector<Aws::String>>
    void SetAssociatedRepositoryNames(AssociatedRepositoryNamesT&& value) { m_associatedRepositoryNamesHasBeenSet = true; m_associatedRepositoryNames = std::forward<AssociatedRepositoryNamesT>(value); }
    template<typename AssociatedRepositoryNamesT = Aws::Vector<Aws::String>>
    BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithAssociatedRepositoryNames(AssociatedRepositoryNamesT&& value) { SetAssociatedRepositoryNames(std::forward<AssociatedRepositoryNamesT>(value)); return *this;}
    template<typename AssociatedRepositoryNamesT = Aws::String>
    BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddAssociatedRepositoryNames(AssociatedRepositoryNamesT&& value) { m_associatedRepositoryNamesHasBeenSet = true; m_associatedRepositoryNames.emplace_back(std::forward<AssociatedRepositoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any errors that might have occurred while attempting to create the
     * association between the template and the repositories.</p>
     */
    inline const Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError>>
    BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchAssociateApprovalRuleTemplateWithRepositoriesError>
    BatchAssociateApprovalRuleTemplateWithRepositoriesResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateApprovalRuleTemplateWithRepositoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_associatedRepositoryNames;
    bool m_associatedRepositoryNamesHasBeenSet = false;

    Aws::Vector<BatchAssociateApprovalRuleTemplateWithRepositoriesError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
