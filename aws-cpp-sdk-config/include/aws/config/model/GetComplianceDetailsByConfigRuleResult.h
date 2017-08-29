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
#include <aws/config/model/EvaluationResult.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRuleResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API GetComplianceDetailsByConfigRuleResult
  {
  public:
    GetComplianceDetailsByConfigRuleResult();
    GetComplianceDetailsByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetComplianceDetailsByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline const Aws::Vector<EvaluationResult>& GetEvaluationResults() const{ return m_evaluationResults; }

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline void SetEvaluationResults(const Aws::Vector<EvaluationResult>& value) { m_evaluationResults = value; }

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline void SetEvaluationResults(Aws::Vector<EvaluationResult>&& value) { m_evaluationResults = std::move(value); }

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& WithEvaluationResults(const Aws::Vector<EvaluationResult>& value) { SetEvaluationResults(value); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& WithEvaluationResults(Aws::Vector<EvaluationResult>&& value) { SetEvaluationResults(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& AddEvaluationResults(const EvaluationResult& value) { m_evaluationResults.push_back(value); return *this; }

    /**
     * <p>Indicates whether the AWS resource complies with the specified AWS Config
     * rule.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& AddEvaluationResults(EvaluationResult&& value) { m_evaluationResults.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetComplianceDetailsByConfigRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EvaluationResult> m_evaluationResults;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
