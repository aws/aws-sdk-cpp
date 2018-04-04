/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API GetAggregateComplianceDetailsByConfigRuleResult
  {
  public:
    GetAggregateComplianceDetailsByConfigRuleResult();
    GetAggregateComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAggregateComplianceDetailsByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline const Aws::Vector<AggregateEvaluationResult>& GetAggregateEvaluationResults() const{ return m_aggregateEvaluationResults; }

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline void SetAggregateEvaluationResults(const Aws::Vector<AggregateEvaluationResult>& value) { m_aggregateEvaluationResults = value; }

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline void SetAggregateEvaluationResults(Aws::Vector<AggregateEvaluationResult>&& value) { m_aggregateEvaluationResults = std::move(value); }

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithAggregateEvaluationResults(const Aws::Vector<AggregateEvaluationResult>& value) { SetAggregateEvaluationResults(value); return *this;}

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithAggregateEvaluationResults(Aws::Vector<AggregateEvaluationResult>&& value) { SetAggregateEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& AddAggregateEvaluationResults(const AggregateEvaluationResult& value) { m_aggregateEvaluationResults.push_back(value); return *this; }

    /**
     * <p>Returns an AggregateEvaluationResults object.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& AddAggregateEvaluationResults(AggregateEvaluationResult&& value) { m_aggregateEvaluationResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateComplianceDetailsByConfigRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AggregateEvaluationResult> m_aggregateEvaluationResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
