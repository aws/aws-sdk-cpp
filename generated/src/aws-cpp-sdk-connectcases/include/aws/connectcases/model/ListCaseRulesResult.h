/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CaseRuleSummary.h>
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
  class ListCaseRulesResult
  {
  public:
    AWS_CONNECTCASES_API ListCaseRulesResult() = default;
    AWS_CONNECTCASES_API ListCaseRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API ListCaseRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of field summary objects.</p>
     */
    inline const Aws::Vector<CaseRuleSummary>& GetCaseRules() const { return m_caseRules; }
    template<typename CaseRulesT = Aws::Vector<CaseRuleSummary>>
    void SetCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules = std::forward<CaseRulesT>(value); }
    template<typename CaseRulesT = Aws::Vector<CaseRuleSummary>>
    ListCaseRulesResult& WithCaseRules(CaseRulesT&& value) { SetCaseRules(std::forward<CaseRulesT>(value)); return *this;}
    template<typename CaseRulesT = CaseRuleSummary>
    ListCaseRulesResult& AddCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules.emplace_back(std::forward<CaseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCaseRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCaseRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CaseRuleSummary> m_caseRules;
    bool m_caseRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
