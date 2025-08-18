/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/CostAndUsageQuery.h>
#include <aws/bcm-dashboards/model/SavingsPlansCoverageQuery.h>
#include <aws/bcm-dashboards/model/SavingsPlansUtilizationQuery.h>
#include <aws/bcm-dashboards/model/ReservationCoverageQuery.h>
#include <aws/bcm-dashboards/model/ReservationUtilizationQuery.h>
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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Defines the data retrieval parameters for a widget.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/QueryParameters">AWS
   * API Reference</a></p>
   */
  class QueryParameters
  {
  public:
    AWS_BCMDASHBOARDS_API QueryParameters() = default;
    AWS_BCMDASHBOARDS_API QueryParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API QueryParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters for querying cost and usage data, including metrics, time
     * range, granularity, grouping dimensions, and filters.</p>
     */
    inline const CostAndUsageQuery& GetCostAndUsage() const { return m_costAndUsage; }
    inline bool CostAndUsageHasBeenSet() const { return m_costAndUsageHasBeenSet; }
    template<typename CostAndUsageT = CostAndUsageQuery>
    void SetCostAndUsage(CostAndUsageT&& value) { m_costAndUsageHasBeenSet = true; m_costAndUsage = std::forward<CostAndUsageT>(value); }
    template<typename CostAndUsageT = CostAndUsageQuery>
    QueryParameters& WithCostAndUsage(CostAndUsageT&& value) { SetCostAndUsage(std::forward<CostAndUsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for querying Savings Plans coverage data, showing how much of
     * your eligible compute usage is covered by Savings Plans.</p>
     */
    inline const SavingsPlansCoverageQuery& GetSavingsPlansCoverage() const { return m_savingsPlansCoverage; }
    inline bool SavingsPlansCoverageHasBeenSet() const { return m_savingsPlansCoverageHasBeenSet; }
    template<typename SavingsPlansCoverageT = SavingsPlansCoverageQuery>
    void SetSavingsPlansCoverage(SavingsPlansCoverageT&& value) { m_savingsPlansCoverageHasBeenSet = true; m_savingsPlansCoverage = std::forward<SavingsPlansCoverageT>(value); }
    template<typename SavingsPlansCoverageT = SavingsPlansCoverageQuery>
    QueryParameters& WithSavingsPlansCoverage(SavingsPlansCoverageT&& value) { SetSavingsPlansCoverage(std::forward<SavingsPlansCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for querying Savings Plans utilization data, showing how
     * effectively your Savings Plans are being used.</p>
     */
    inline const SavingsPlansUtilizationQuery& GetSavingsPlansUtilization() const { return m_savingsPlansUtilization; }
    inline bool SavingsPlansUtilizationHasBeenSet() const { return m_savingsPlansUtilizationHasBeenSet; }
    template<typename SavingsPlansUtilizationT = SavingsPlansUtilizationQuery>
    void SetSavingsPlansUtilization(SavingsPlansUtilizationT&& value) { m_savingsPlansUtilizationHasBeenSet = true; m_savingsPlansUtilization = std::forward<SavingsPlansUtilizationT>(value); }
    template<typename SavingsPlansUtilizationT = SavingsPlansUtilizationQuery>
    QueryParameters& WithSavingsPlansUtilization(SavingsPlansUtilizationT&& value) { SetSavingsPlansUtilization(std::forward<SavingsPlansUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for querying Reserved Instance coverage data, showing how much
     * of your eligible instance usage is covered by Reserved Instances.</p>
     */
    inline const ReservationCoverageQuery& GetReservationCoverage() const { return m_reservationCoverage; }
    inline bool ReservationCoverageHasBeenSet() const { return m_reservationCoverageHasBeenSet; }
    template<typename ReservationCoverageT = ReservationCoverageQuery>
    void SetReservationCoverage(ReservationCoverageT&& value) { m_reservationCoverageHasBeenSet = true; m_reservationCoverage = std::forward<ReservationCoverageT>(value); }
    template<typename ReservationCoverageT = ReservationCoverageQuery>
    QueryParameters& WithReservationCoverage(ReservationCoverageT&& value) { SetReservationCoverage(std::forward<ReservationCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for querying Reserved Instance utilization data, showing how
     * effectively your Reserved Instances are being used.</p>
     */
    inline const ReservationUtilizationQuery& GetReservationUtilization() const { return m_reservationUtilization; }
    inline bool ReservationUtilizationHasBeenSet() const { return m_reservationUtilizationHasBeenSet; }
    template<typename ReservationUtilizationT = ReservationUtilizationQuery>
    void SetReservationUtilization(ReservationUtilizationT&& value) { m_reservationUtilizationHasBeenSet = true; m_reservationUtilization = std::forward<ReservationUtilizationT>(value); }
    template<typename ReservationUtilizationT = ReservationUtilizationQuery>
    QueryParameters& WithReservationUtilization(ReservationUtilizationT&& value) { SetReservationUtilization(std::forward<ReservationUtilizationT>(value)); return *this;}
    ///@}
  private:

    CostAndUsageQuery m_costAndUsage;
    bool m_costAndUsageHasBeenSet = false;

    SavingsPlansCoverageQuery m_savingsPlansCoverage;
    bool m_savingsPlansCoverageHasBeenSet = false;

    SavingsPlansUtilizationQuery m_savingsPlansUtilization;
    bool m_savingsPlansUtilizationHasBeenSet = false;

    ReservationCoverageQuery m_reservationCoverage;
    bool m_reservationCoverageHasBeenSet = false;

    ReservationUtilizationQuery m_reservationUtilization;
    bool m_reservationUtilizationHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
