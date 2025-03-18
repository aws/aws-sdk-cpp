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
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult() = default;
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of repository names that have had their association with the template
     * removed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisassociatedRepositoryNames() const { return m_disassociatedRepositoryNames; }
    template<typename DisassociatedRepositoryNamesT = Aws::Vector<Aws::String>>
    void SetDisassociatedRepositoryNames(DisassociatedRepositoryNamesT&& value) { m_disassociatedRepositoryNamesHasBeenSet = true; m_disassociatedRepositoryNames = std::forward<DisassociatedRepositoryNamesT>(value); }
    template<typename DisassociatedRepositoryNamesT = Aws::Vector<Aws::String>>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithDisassociatedRepositoryNames(DisassociatedRepositoryNamesT&& value) { SetDisassociatedRepositoryNames(std::forward<DisassociatedRepositoryNamesT>(value)); return *this;}
    template<typename DisassociatedRepositoryNamesT = Aws::String>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddDisassociatedRepositoryNames(DisassociatedRepositoryNamesT&& value) { m_disassociatedRepositoryNamesHasBeenSet = true; m_disassociatedRepositoryNames.emplace_back(std::forward<DisassociatedRepositoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any errors that might have occurred while attempting to remove the
     * association between the template and the repositories.</p>
     */
    inline const Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError>>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchDisassociateApprovalRuleTemplateFromRepositoriesError>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_disassociatedRepositoryNames;
    bool m_disassociatedRepositoryNamesHasBeenSet = false;

    Aws::Vector<BatchDisassociateApprovalRuleTemplateFromRepositoriesError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
