/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateEvaluationResult.h>
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
  class GetAggregateComplianceDetailsByConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult() = default;
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline const Aws::Vector<AggregateEvaluationResult>& GetAggregateEvaluationResults() const { return m_aggregateEvaluationResults; }
    template<typename AggregateEvaluationResultsT = Aws::Vector<AggregateEvaluationResult>>
    void SetAggregateEvaluationResults(AggregateEvaluationResultsT&& value) { m_aggregateEvaluationResultsHasBeenSet = true; m_aggregateEvaluationResults = std::forward<AggregateEvaluationResultsT>(value); }
    template<typename AggregateEvaluationResultsT = Aws::Vector<AggregateEvaluationResult>>
    GetAggregateComplianceDetailsByConfigRuleResult& WithAggregateEvaluationResults(AggregateEvaluationResultsT&& value) { SetAggregateEvaluationResults(std::forward<AggregateEvaluationResultsT>(value)); return *this;}
    template<typename AggregateEvaluationResultsT = AggregateEvaluationResult>
    GetAggregateComplianceDetailsByConfigRuleResult& AddAggregateEvaluationResults(AggregateEvaluationResultsT&& value) { m_aggregateEvaluationResultsHasBeenSet = true; m_aggregateEvaluationResults.emplace_back(std::forward<AggregateEvaluationResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAggregateComplianceDetailsByConfigRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateEvaluationResult> m_aggregateEvaluationResults;
    bool m_aggregateEvaluationResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
