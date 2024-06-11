﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/SavingsPlansUtilization.h>
#include <aws/ce/model/SavingsPlansSavings.h>
#include <aws/ce/model/SavingsPlansAmortizedCommitment.h>
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
   * <p>The aggregated utilization metrics for your Savings Plans
   * usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansUtilizationAggregates">AWS
   * API Reference</a></p>
   */
  class SavingsPlansUtilizationAggregates
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansUtilizationAggregates();
    AWS_COSTEXPLORER_API SavingsPlansUtilizationAggregates(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilizationAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A ratio of your effectiveness of using existing Savings Plans to apply to
     * workloads that are Savings Plans eligible.</p>
     */
    inline const SavingsPlansUtilization& GetUtilization() const{ return m_utilization; }
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
    inline void SetUtilization(const SavingsPlansUtilization& value) { m_utilizationHasBeenSet = true; m_utilization = value; }
    inline void SetUtilization(SavingsPlansUtilization&& value) { m_utilizationHasBeenSet = true; m_utilization = std::move(value); }
    inline SavingsPlansUtilizationAggregates& WithUtilization(const SavingsPlansUtilization& value) { SetUtilization(value); return *this;}
    inline SavingsPlansUtilizationAggregates& WithUtilization(SavingsPlansUtilization&& value) { SetUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount that's saved by using existing Savings Plans. Savings returns both
     * net savings from Savings Plans and also the <code>onDemandCostEquivalent</code>
     * of the Savings Plans when considering the utilization rate.</p>
     */
    inline const SavingsPlansSavings& GetSavings() const{ return m_savings; }
    inline bool SavingsHasBeenSet() const { return m_savingsHasBeenSet; }
    inline void SetSavings(const SavingsPlansSavings& value) { m_savingsHasBeenSet = true; m_savings = value; }
    inline void SetSavings(SavingsPlansSavings&& value) { m_savingsHasBeenSet = true; m_savings = std::move(value); }
    inline SavingsPlansUtilizationAggregates& WithSavings(const SavingsPlansSavings& value) { SetSavings(value); return *this;}
    inline SavingsPlansUtilizationAggregates& WithSavings(SavingsPlansSavings&& value) { SetSavings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amortized commitment for a Savings Plans. This includes the sum of
     * the upfront and recurring Savings Plans fees.</p>
     */
    inline const SavingsPlansAmortizedCommitment& GetAmortizedCommitment() const{ return m_amortizedCommitment; }
    inline bool AmortizedCommitmentHasBeenSet() const { return m_amortizedCommitmentHasBeenSet; }
    inline void SetAmortizedCommitment(const SavingsPlansAmortizedCommitment& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = value; }
    inline void SetAmortizedCommitment(SavingsPlansAmortizedCommitment&& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = std::move(value); }
    inline SavingsPlansUtilizationAggregates& WithAmortizedCommitment(const SavingsPlansAmortizedCommitment& value) { SetAmortizedCommitment(value); return *this;}
    inline SavingsPlansUtilizationAggregates& WithAmortizedCommitment(SavingsPlansAmortizedCommitment&& value) { SetAmortizedCommitment(std::move(value)); return *this;}
    ///@}
  private:

    SavingsPlansUtilization m_utilization;
    bool m_utilizationHasBeenSet = false;

    SavingsPlansSavings m_savings;
    bool m_savingsHasBeenSet = false;

    SavingsPlansAmortizedCommitment m_amortizedCommitment;
    bool m_amortizedCommitmentHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
