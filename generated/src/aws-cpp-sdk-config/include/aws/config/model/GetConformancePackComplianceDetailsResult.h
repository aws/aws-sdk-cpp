/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackEvaluationResult.h>
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
namespace ConfigService
{
namespace Model
{
  class GetConformancePackComplianceDetailsResult
  {
  public:
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult() = default;
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetConformancePackComplianceDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const { return m_conformancePackName; }
    template<typename ConformancePackNameT = Aws::String>
    void SetConformancePackName(ConformancePackNameT&& value) { m_conformancePackNameHasBeenSet = true; m_conformancePackName = std::forward<ConformancePackNameT>(value); }
    template<typename ConformancePackNameT = Aws::String>
    GetConformancePackComplianceDetailsResult& WithConformancePackName(ConformancePackNameT&& value) { SetConformancePackName(std::forward<ConformancePackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of <code>ConformancePackEvaluationResult</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackEvaluationResult>& GetConformancePackRuleEvaluationResults() const { return m_conformancePackRuleEvaluationResults; }
    template<typename ConformancePackRuleEvaluationResultsT = Aws::Vector<ConformancePackEvaluationResult>>
    void SetConformancePackRuleEvaluationResults(ConformancePackRuleEvaluationResultsT&& value) { m_conformancePackRuleEvaluationResultsHasBeenSet = true; m_conformancePackRuleEvaluationResults = std::forward<ConformancePackRuleEvaluationResultsT>(value); }
    template<typename ConformancePackRuleEvaluationResultsT = Aws::Vector<ConformancePackEvaluationResult>>
    GetConformancePackComplianceDetailsResult& WithConformancePackRuleEvaluationResults(ConformancePackRuleEvaluationResultsT&& value) { SetConformancePackRuleEvaluationResults(std::forward<ConformancePackRuleEvaluationResultsT>(value)); return *this;}
    template<typename ConformancePackRuleEvaluationResultsT = ConformancePackEvaluationResult>
    GetConformancePackComplianceDetailsResult& AddConformancePackRuleEvaluationResults(ConformancePackRuleEvaluationResultsT&& value) { m_conformancePackRuleEvaluationResultsHasBeenSet = true; m_conformancePackRuleEvaluationResults.emplace_back(std::forward<ConformancePackRuleEvaluationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetConformancePackComplianceDetailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConformancePackComplianceDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackName;
    bool m_conformancePackNameHasBeenSet = false;

    Aws::Vector<ConformancePackEvaluationResult> m_conformancePackRuleEvaluationResults;
    bool m_conformancePackRuleEvaluationResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
