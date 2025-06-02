/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/RDSInstanceSavingsOpportunityAfterDiscounts.h>
#include <aws/compute-optimizer/model/RDSDBUtilizationMetric.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p> Describes the recommendation options for a DB instance. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBInstanceRecommendationOption">AWS
   * API Reference</a></p>
   */
  class RDSDBInstanceRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption() = default;
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the DB instance class recommendation option for your Amazon Aurora
     * or RDS database. </p>
     */
    inline const Aws::String& GetDbInstanceClass() const { return m_dbInstanceClass; }
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }
    template<typename DbInstanceClassT = Aws::String>
    void SetDbInstanceClass(DbInstanceClassT&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::forward<DbInstanceClassT>(value); }
    template<typename DbInstanceClassT = Aws::String>
    RDSDBInstanceRecommendationOption& WithDbInstanceClass(DbInstanceClassT&& value) { SetDbInstanceClass(std::forward<DbInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * DB instance recommendation option. </p>
     */
    inline const Aws::Vector<RDSDBUtilizationMetric>& GetProjectedUtilizationMetrics() const { return m_projectedUtilizationMetrics; }
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<RDSDBUtilizationMetric>>
    void SetProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::forward<ProjectedUtilizationMetricsT>(value); }
    template<typename ProjectedUtilizationMetricsT = Aws::Vector<RDSDBUtilizationMetric>>
    RDSDBInstanceRecommendationOption& WithProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { SetProjectedUtilizationMetrics(std::forward<ProjectedUtilizationMetricsT>(value)); return *this;}
    template<typename ProjectedUtilizationMetricsT = RDSDBUtilizationMetric>
    RDSDBInstanceRecommendationOption& AddProjectedUtilizationMetrics(ProjectedUtilizationMetricsT&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.emplace_back(std::forward<ProjectedUtilizationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The performance risk of the DB instance recommendation option. </p>
     */
    inline double GetPerformanceRisk() const { return m_performanceRisk; }
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }
    inline RDSDBInstanceRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank identifier of the DB instance recommendation option. </p>
     */
    inline int GetRank() const { return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RDSDBInstanceRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetSavingsOpportunity() const { return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    void SetSavingsOpportunity(SavingsOpportunityT&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::forward<SavingsOpportunityT>(value); }
    template<typename SavingsOpportunityT = SavingsOpportunity>
    RDSDBInstanceRecommendationOption& WithSavingsOpportunity(SavingsOpportunityT&& value) { SetSavingsOpportunity(std::forward<SavingsOpportunityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings opportunity for Amazon Aurora and RDS database
     * recommendations or for the recommendation option. </p> <p>Savings opportunity
     * represents the estimated monthly savings after applying Savings Plans discounts.
     * You can achieve this by implementing a given Compute Optimizer
     * recommendation.</p>
     */
    inline const RDSInstanceSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const { return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    template<typename SavingsOpportunityAfterDiscountsT = RDSInstanceSavingsOpportunityAfterDiscounts>
    void SetSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::forward<SavingsOpportunityAfterDiscountsT>(value); }
    template<typename SavingsOpportunityAfterDiscountsT = RDSInstanceSavingsOpportunityAfterDiscounts>
    RDSDBInstanceRecommendationOption& WithSavingsOpportunityAfterDiscounts(SavingsOpportunityAfterDiscountsT&& value) { SetSavingsOpportunityAfterDiscounts(std::forward<SavingsOpportunityAfterDiscountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet = false;

    Aws::Vector<RDSDBUtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    double m_performanceRisk{0.0};
    bool m_performanceRiskHasBeenSet = false;

    int m_rank{0};
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    RDSInstanceSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
