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
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics() = default;
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RecommendationDetailHourlyMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    RecommendationDetailHourlyMetrics& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining On-Demand cost estimated to not be covered by the recommended
     * Savings Plan, over the length of the lookback period.</p>
     */
    inline const Aws::String& GetEstimatedOnDemandCost() const { return m_estimatedOnDemandCost; }
    inline bool EstimatedOnDemandCostHasBeenSet() const { return m_estimatedOnDemandCostHasBeenSet; }
    template<typename EstimatedOnDemandCostT = Aws::String>
    void SetEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { m_estimatedOnDemandCostHasBeenSet = true; m_estimatedOnDemandCost = std::forward<EstimatedOnDemandCostT>(value); }
    template<typename EstimatedOnDemandCostT = Aws::String>
    RecommendationDetailHourlyMetrics& WithEstimatedOnDemandCost(EstimatedOnDemandCostT&& value) { SetEstimatedOnDemandCost(std::forward<EstimatedOnDemandCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current amount of Savings Plans eligible usage that the Savings Plan
     * covered.</p>
     */
    inline const Aws::String& GetCurrentCoverage() const { return m_currentCoverage; }
    inline bool CurrentCoverageHasBeenSet() const { return m_currentCoverageHasBeenSet; }
    template<typename CurrentCoverageT = Aws::String>
    void SetCurrentCoverage(CurrentCoverageT&& value) { m_currentCoverageHasBeenSet = true; m_currentCoverage = std::forward<CurrentCoverageT>(value); }
    template<typename CurrentCoverageT = Aws::String>
    RecommendationDetailHourlyMetrics& WithCurrentCoverage(CurrentCoverageT&& value) { SetCurrentCoverage(std::forward<CurrentCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated coverage amount based on the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedCoverage() const { return m_estimatedCoverage; }
    inline bool EstimatedCoverageHasBeenSet() const { return m_estimatedCoverageHasBeenSet; }
    template<typename EstimatedCoverageT = Aws::String>
    void SetEstimatedCoverage(EstimatedCoverageT&& value) { m_estimatedCoverageHasBeenSet = true; m_estimatedCoverage = std::forward<EstimatedCoverageT>(value); }
    template<typename EstimatedCoverageT = Aws::String>
    RecommendationDetailHourlyMetrics& WithEstimatedCoverage(EstimatedCoverageT&& value) { SetEstimatedCoverage(std::forward<EstimatedCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated utilization for the recommended Savings Plan.</p>
     */
    inline const Aws::String& GetEstimatedNewCommitmentUtilization() const { return m_estimatedNewCommitmentUtilization; }
    inline bool EstimatedNewCommitmentUtilizationHasBeenSet() const { return m_estimatedNewCommitmentUtilizationHasBeenSet; }
    template<typename EstimatedNewCommitmentUtilizationT = Aws::String>
    void SetEstimatedNewCommitmentUtilization(EstimatedNewCommitmentUtilizationT&& value) { m_estimatedNewCommitmentUtilizationHasBeenSet = true; m_estimatedNewCommitmentUtilization = std::forward<EstimatedNewCommitmentUtilizationT>(value); }
    template<typename EstimatedNewCommitmentUtilizationT = Aws::String>
    RecommendationDetailHourlyMetrics& WithEstimatedNewCommitmentUtilization(EstimatedNewCommitmentUtilizationT&& value) { SetEstimatedNewCommitmentUtilization(std::forward<EstimatedNewCommitmentUtilizationT>(value)); return *this;}
    ///@}
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
