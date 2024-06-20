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
   * <p> Describes the recommendation options for an Amazon RDS instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RDSDBInstanceRecommendationOption">AWS
   * API Reference</a></p>
   */
  class RDSDBInstanceRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RDSDBInstanceRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the DB instance class recommendation option for your Amazon RDS
     * instance. </p>
     */
    inline const Aws::String& GetDbInstanceClass() const{ return m_dbInstanceClass; }
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }
    inline void SetDbInstanceClass(const Aws::String& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = value; }
    inline void SetDbInstanceClass(Aws::String&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::move(value); }
    inline void SetDbInstanceClass(const char* value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass.assign(value); }
    inline RDSDBInstanceRecommendationOption& WithDbInstanceClass(const Aws::String& value) { SetDbInstanceClass(value); return *this;}
    inline RDSDBInstanceRecommendationOption& WithDbInstanceClass(Aws::String&& value) { SetDbInstanceClass(std::move(value)); return *this;}
    inline RDSDBInstanceRecommendationOption& WithDbInstanceClass(const char* value) { SetDbInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that describe the projected utilization metrics of the
     * RDS instance recommendation option. </p>
     */
    inline const Aws::Vector<RDSDBUtilizationMetric>& GetProjectedUtilizationMetrics() const{ return m_projectedUtilizationMetrics; }
    inline bool ProjectedUtilizationMetricsHasBeenSet() const { return m_projectedUtilizationMetricsHasBeenSet; }
    inline void SetProjectedUtilizationMetrics(const Aws::Vector<RDSDBUtilizationMetric>& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = value; }
    inline void SetProjectedUtilizationMetrics(Aws::Vector<RDSDBUtilizationMetric>&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics = std::move(value); }
    inline RDSDBInstanceRecommendationOption& WithProjectedUtilizationMetrics(const Aws::Vector<RDSDBUtilizationMetric>& value) { SetProjectedUtilizationMetrics(value); return *this;}
    inline RDSDBInstanceRecommendationOption& WithProjectedUtilizationMetrics(Aws::Vector<RDSDBUtilizationMetric>&& value) { SetProjectedUtilizationMetrics(std::move(value)); return *this;}
    inline RDSDBInstanceRecommendationOption& AddProjectedUtilizationMetrics(const RDSDBUtilizationMetric& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(value); return *this; }
    inline RDSDBInstanceRecommendationOption& AddProjectedUtilizationMetrics(RDSDBUtilizationMetric&& value) { m_projectedUtilizationMetricsHasBeenSet = true; m_projectedUtilizationMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The performance risk of the RDS instance recommendation option. </p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }
    inline RDSDBInstanceRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The rank identifier of the RDS instance recommendation option. </p>
     */
    inline int GetRank() const{ return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline RDSDBInstanceRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline RDSDBInstanceRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline RDSDBInstanceRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the savings opportunity for Amazon RDS recommendations or for the
     * recommendation option. </p> <p>Savings opportunity represents the estimated
     * monthly savings after applying Savings Plans discounts. You can achieve this by
     * implementing a given Compute Optimizer recommendation.</p>
     */
    inline const RDSInstanceSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const{ return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    inline void SetSavingsOpportunityAfterDiscounts(const RDSInstanceSavingsOpportunityAfterDiscounts& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = value; }
    inline void SetSavingsOpportunityAfterDiscounts(RDSInstanceSavingsOpportunityAfterDiscounts&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::move(value); }
    inline RDSDBInstanceRecommendationOption& WithSavingsOpportunityAfterDiscounts(const RDSInstanceSavingsOpportunityAfterDiscounts& value) { SetSavingsOpportunityAfterDiscounts(value); return *this;}
    inline RDSDBInstanceRecommendationOption& WithSavingsOpportunityAfterDiscounts(RDSInstanceSavingsOpportunityAfterDiscounts&& value) { SetSavingsOpportunityAfterDiscounts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet = false;

    Aws::Vector<RDSDBUtilizationMetric> m_projectedUtilizationMetrics;
    bool m_projectedUtilizationMetricsHasBeenSet = false;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    RDSInstanceSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
