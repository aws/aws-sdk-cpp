/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AssessmentSummary.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetPortfolioSummaryResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline const AssessmentSummary& GetAssessmentSummary() const{ return m_assessmentSummary; }

    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline void SetAssessmentSummary(const AssessmentSummary& value) { m_assessmentSummary = value; }

    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline void SetAssessmentSummary(AssessmentSummary&& value) { m_assessmentSummary = std::move(value); }

    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline GetPortfolioSummaryResult& WithAssessmentSummary(const AssessmentSummary& value) { SetAssessmentSummary(value); return *this;}

    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline GetPortfolioSummaryResult& WithAssessmentSummary(AssessmentSummary&& value) { SetAssessmentSummary(std::move(value)); return *this;}

  private:

    AssessmentSummary m_assessmentSummary;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
