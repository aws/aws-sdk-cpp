/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/GetCaseRuleResponse.h>
#include <aws/connectcases/model/CaseRuleError.h>
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
namespace ConnectCases
{
namespace Model
{
  class BatchGetCaseRuleResult
  {
  public:
    AWS_CONNECTCASES_API BatchGetCaseRuleResult() = default;
    AWS_CONNECTCASES_API BatchGetCaseRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API BatchGetCaseRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of detailed case rule information.</p>
     */
    inline const Aws::Vector<GetCaseRuleResponse>& GetCaseRules() const { return m_caseRules; }
    template<typename CaseRulesT = Aws::Vector<GetCaseRuleResponse>>
    void SetCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules = std::forward<CaseRulesT>(value); }
    template<typename CaseRulesT = Aws::Vector<GetCaseRuleResponse>>
    BatchGetCaseRuleResult& WithCaseRules(CaseRulesT&& value) { SetCaseRules(std::forward<CaseRulesT>(value)); return *this;}
    template<typename CaseRulesT = GetCaseRuleResponse>
    BatchGetCaseRuleResult& AddCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules.emplace_back(std::forward<CaseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of case rule errors.</p>
     */
    inline const Aws::Vector<CaseRuleError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<CaseRuleError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<CaseRuleError>>
    BatchGetCaseRuleResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = CaseRuleError>
    BatchGetCaseRuleResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCaseRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GetCaseRuleResponse> m_caseRules;
    bool m_caseRulesHasBeenSet = false;

    Aws::Vector<CaseRuleError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
