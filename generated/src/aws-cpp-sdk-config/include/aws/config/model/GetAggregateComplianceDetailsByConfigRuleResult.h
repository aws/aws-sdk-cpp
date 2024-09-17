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
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult();
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline const Aws::Vector<AggregateEvaluationResult>& GetAggregateEvaluationResults() const{ return m_aggregateEvaluationResults; }
    inline void SetAggregateEvaluationResults(const Aws::Vector<AggregateEvaluationResult>& value) { m_aggregateEvaluationResults = value; }
    inline void SetAggregateEvaluationResults(Aws::Vector<AggregateEvaluationResult>&& value) { m_aggregateEvaluationResults = std::move(value); }
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithAggregateEvaluationResults(const Aws::Vector<AggregateEvaluationResult>& value) { SetAggregateEvaluationResults(value); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithAggregateEvaluationResults(Aws::Vector<AggregateEvaluationResult>&& value) { SetAggregateEvaluationResults(std::move(value)); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& AddAggregateEvaluationResults(const AggregateEvaluationResult& value) { m_aggregateEvaluationResults.push_back(value); return *this; }
    inline GetAggregateComplianceDetailsByConfigRuleResult& AddAggregateEvaluationResults(AggregateEvaluationResult&& value) { m_aggregateEvaluationResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateEvaluationResult> m_aggregateEvaluationResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
