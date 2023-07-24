/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Contains the hourly metrics for the given recommendation over the lookback
   * period. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RecommendationDetailHourlyMetrics">AWS
   * API Reference</a></p>
   */
  class RecommendationDetailHourlyMetrics
  {
  public:
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics();
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    
    inline RecommendationDetailHourlyMetrics& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    
    inline RecommendationDetailHourlyMetrics& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    
    inline RecommendationDetailHourlyMetrics& WithStartTime(const char* value) { SetStartTime(value); return *this;}


    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const{ return m_estimatedOnDemandCost; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const Aws::String& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = value; }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(Aws::String&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::move(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline void SetEstimatedOnDemandCost(const char* value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost.assign(value); }

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedOnDemandCost(const Aws::String& value) { SetEstimatedOnDemandCost(value); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedOnDemandCost(Aws::String&& value) { SetEstimatedOnDemandCost(std::move(value)); return *this;}

    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedOnDemandCost(const char* value) { SetEstimatedOnDemandCost(value); return *this;}


    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline const Aws::String& GetCurrentCoverage() const{ return m_currentCoverage; }

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline bool CurrentCoverageHasBeenSet() const { return m_currentCoverageHasBeenSet; }

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline void SetCurrentCoverage(const Aws::String& value) { m_currentCoverageHasBeenSet = true; m_currentCoverage = value; }

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline void SetCurrentCoverage(Aws::String&& value) { m_currentCoverageHasBeenSet = true; m_currentCoverage = std::move(value); }

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline void SetCurrentCoverage(const char* value) { m_currentCoverageHasBeenSet = true; m_currentCoverage.assign(value); }

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithCurrentCoverage(const Aws::String& value) { SetCurrentCoverage(value); return *this;}

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithCurrentCoverage(Aws::String&& value) { SetCurrentCoverage(std::move(value)); return *this;}

    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithCurrentCoverage(const char* value) { SetCurrentCoverage(value); return *this;}


    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedCoverage() const{ return m_estimatedCoverage; }

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline bool EstimatedCoverageHasBeenSet() const { return m_estimatedCoverageHasBeenSet; }

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline void SetEstimatedCoverage(const Aws::String& value) { m_estimatedCoverageHasBeenSet = true; m_estimatedCoverage = value; }

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline void SetEstimatedCoverage(Aws::String&& value) { m_estimatedCoverageHasBeenSet = true; m_estimatedCoverage = std::move(value); }

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline void SetEstimatedCoverage(const char* value) { m_estimatedCoverageHasBeenSet = true; m_estimatedCoverage.assign(value); }

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedCoverage(const Aws::String& value) { SetEstimatedCoverage(value); return *this;}

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedCoverage(Aws::String&& value) { SetEstimatedCoverage(std::move(value)); return *this;}

    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedCoverage(const char* value) { SetEstimatedCoverage(value); return *this;}


    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedNewCommitmentUtilization() const{ return m_estimatedNewCommitmentUtilization; }

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline bool EstimatedNewCommitmentUtilizationHasBeenSet() const { return m_estimatedNewCommitmentUtilizationHasBeenSet; }

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline void SetEstimatedNewCommitmentUtilization(const Aws::String& value) { m_estimatedNewCommitmentUtilizationHasBeenSet = true; m_estimatedNewCommitmentUtilization = value; }

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline void SetEstimatedNewCommitmentUtilization(Aws::String&& value) { m_estimatedNewCommitmentUtilizationHasBeenSet = true; m_estimatedNewCommitmentUtilization = std::move(value); }

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline void SetEstimatedNewCommitmentUtilization(const char* value) { m_estimatedNewCommitmentUtilizationHasBeenSet = true; m_estimatedNewCommitmentUtilization.assign(value); }

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedNewCommitmentUtilization(const Aws::String& value) { SetEstimatedNewCommitmentUtilization(value); return *this;}

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedNewCommitmentUtilization(Aws::String&& value) { SetEstimatedNewCommitmentUtilization(std::move(value)); return *this;}

    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline RecommendationDetailHourlyMetrics& WithEstimatedNewCommitmentUtilization(const char* value) { SetEstimatedNewCommitmentUtilization(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_estimatedOnDemandCost;
    bool m_estimatedOnDemandCostHasBeenSet = false;

    Aws::String m_currentCoverage;
    bool m_currentCoverageHasBeenSet = false;

    Aws::String m_estimatedCoverage;
    bool m_estimatedCoverageHasBeenSet = false;

    Aws::String m_estimatedNewCommitmentUtilization;
    bool m_estimatedNewCommitmentUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
