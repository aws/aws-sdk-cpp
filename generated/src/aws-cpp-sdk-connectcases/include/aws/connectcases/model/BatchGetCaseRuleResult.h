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
    AWS_CONNECTCASES_API BatchGetCaseRuleResult();
    AWS_CONNECTCASES_API BatchGetCaseRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API BatchGetCaseRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of detailed case rule information.</p>
     */
    inline const Aws::Vector<GetCaseRuleResponse>& GetCaseRules() const{ return m_caseRules; }
    inline void SetCaseRules(const Aws::Vector<GetCaseRuleResponse>& value) { m_caseRules = value; }
    inline void SetCaseRules(Aws::Vector<GetCaseRuleResponse>&& value) { m_caseRules = std::move(value); }
    inline BatchGetCaseRuleResult& WithCaseRules(const Aws::Vector<GetCaseRuleResponse>& value) { SetCaseRules(value); return *this;}
    inline BatchGetCaseRuleResult& WithCaseRules(Aws::Vector<GetCaseRuleResponse>&& value) { SetCaseRules(std::move(value)); return *this;}
    inline BatchGetCaseRuleResult& AddCaseRules(const GetCaseRuleResponse& value) { m_caseRules.push_back(value); return *this; }
    inline BatchGetCaseRuleResult& AddCaseRules(GetCaseRuleResponse&& value) { m_caseRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of case rule errors.</p>
     */
    inline const Aws::Vector<CaseRuleError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<CaseRuleError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<CaseRuleError>&& value) { m_errors = std::move(value); }
    inline BatchGetCaseRuleResult& WithErrors(const Aws::Vector<CaseRuleError>& value) { SetErrors(value); return *this;}
    inline BatchGetCaseRuleResult& WithErrors(Aws::Vector<CaseRuleError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetCaseRuleResult& AddErrors(const CaseRuleError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetCaseRuleResult& AddErrors(CaseRuleError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetCaseRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetCaseRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetCaseRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GetCaseRuleResponse> m_caseRules;

    Aws::Vector<CaseRuleError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
