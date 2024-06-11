﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/VolumeConfiguration.h>
#include <aws/compute-optimizer/model/SavingsOpportunity.h>
#include <aws/compute-optimizer/model/EBSSavingsOpportunityAfterDiscounts.h>
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
   * <p>Describes a recommendation option for an Amazon Elastic Block Store (Amazon
   * EBS) instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/VolumeRecommendationOption">AWS
   * API Reference</a></p>
   */
  class VolumeRecommendationOption
  {
  public:
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendationOption();
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API VolumeRecommendationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that describe a volume configuration.</p>
     */
    inline const VolumeConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const VolumeConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(VolumeConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline VolumeRecommendationOption& WithConfiguration(const VolumeConfiguration& value) { SetConfiguration(value); return *this;}
    inline VolumeRecommendationOption& WithConfiguration(VolumeConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance risk of the volume recommendation option.</p> <p>Performance
     * risk is the likelihood of the recommended volume type meeting the performance
     * requirement of your workload.</p> <p>The value ranges from <code>0</code> -
     * <code>4</code>, with <code>0</code> meaning that the recommended resource is
     * predicted to always provide enough hardware capability. The higher the
     * performance risk is, the more likely you should validate whether the
     * recommendation will meet the performance requirements of your workload before
     * migrating your resource.</p>
     */
    inline double GetPerformanceRisk() const{ return m_performanceRisk; }
    inline bool PerformanceRiskHasBeenSet() const { return m_performanceRiskHasBeenSet; }
    inline void SetPerformanceRisk(double value) { m_performanceRiskHasBeenSet = true; m_performanceRisk = value; }
    inline VolumeRecommendationOption& WithPerformanceRisk(double value) { SetPerformanceRisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rank of the volume recommendation option.</p> <p>The top recommendation
     * option is ranked as <code>1</code>.</p>
     */
    inline int GetRank() const{ return m_rank; }
    inline bool RankHasBeenSet() const { return m_rankHasBeenSet; }
    inline void SetRank(int value) { m_rankHasBeenSet = true; m_rank = value; }
    inline VolumeRecommendationOption& WithRank(int value) { SetRank(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the savings opportunity for the EBS volume
     * recommendation option. Savings opportunity includes the estimated monthly
     * savings amount and percentage.</p>
     */
    inline const SavingsOpportunity& GetSavingsOpportunity() const{ return m_savingsOpportunity; }
    inline bool SavingsOpportunityHasBeenSet() const { return m_savingsOpportunityHasBeenSet; }
    inline void SetSavingsOpportunity(const SavingsOpportunity& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = value; }
    inline void SetSavingsOpportunity(SavingsOpportunity&& value) { m_savingsOpportunityHasBeenSet = true; m_savingsOpportunity = std::move(value); }
    inline VolumeRecommendationOption& WithSavingsOpportunity(const SavingsOpportunity& value) { SetSavingsOpportunity(value); return *this;}
    inline VolumeRecommendationOption& WithSavingsOpportunity(SavingsOpportunity&& value) { SetSavingsOpportunity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that describes the savings opportunity for the Amazon EBS volume
     * recommendation option with specific discounts. Savings opportunity includes the
     * estimated monthly savings and percentage. </p>
     */
    inline const EBSSavingsOpportunityAfterDiscounts& GetSavingsOpportunityAfterDiscounts() const{ return m_savingsOpportunityAfterDiscounts; }
    inline bool SavingsOpportunityAfterDiscountsHasBeenSet() const { return m_savingsOpportunityAfterDiscountsHasBeenSet; }
    inline void SetSavingsOpportunityAfterDiscounts(const EBSSavingsOpportunityAfterDiscounts& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = value; }
    inline void SetSavingsOpportunityAfterDiscounts(EBSSavingsOpportunityAfterDiscounts&& value) { m_savingsOpportunityAfterDiscountsHasBeenSet = true; m_savingsOpportunityAfterDiscounts = std::move(value); }
    inline VolumeRecommendationOption& WithSavingsOpportunityAfterDiscounts(const EBSSavingsOpportunityAfterDiscounts& value) { SetSavingsOpportunityAfterDiscounts(value); return *this;}
    inline VolumeRecommendationOption& WithSavingsOpportunityAfterDiscounts(EBSSavingsOpportunityAfterDiscounts&& value) { SetSavingsOpportunityAfterDiscounts(std::move(value)); return *this;}
    ///@}
  private:

    VolumeConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    double m_performanceRisk;
    bool m_performanceRiskHasBeenSet = false;

    int m_rank;
    bool m_rankHasBeenSet = false;

    SavingsOpportunity m_savingsOpportunity;
    bool m_savingsOpportunityHasBeenSet = false;

    EBSSavingsOpportunityAfterDiscounts m_savingsOpportunityAfterDiscounts;
    bool m_savingsOpportunityAfterDiscountsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
