/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/DateInterval.h>
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
   * <p>The amount of Savings Plans utilization (in hours).</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansUtilizationByTime">AWS
   * API Reference</a></p>
   */
  class SavingsPlansUtilizationByTime
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansUtilizationByTime() = default;
    AWS_COSTEXPLORER_API SavingsPlansUtilizationByTime(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansUtilizationByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    SavingsPlansUtilizationByTime& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ratio of your effectiveness of using existing Savings Plans to apply to
     * workloads that are Savings Plans eligible.</p>
     */
    inline const SavingsPlansUtilization& GetUtilization() const { return m_utilization; }
    inline bool UtilizationHasBeenSet() const { return m_utilizationHasBeenSet; }
    template<typename UtilizationT = SavingsPlansUtilization>
    void SetUtilization(UtilizationT&& value) { m_utilizationHasBeenSet = true; m_utilization = std::forward<UtilizationT>(value); }
    template<typename UtilizationT = SavingsPlansUtilization>
    SavingsPlansUtilizationByTime& WithUtilization(UtilizationT&& value) { SetUtilization(std::forward<UtilizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount that's saved by using existing Savings Plans. Savings returns both
     * net savings from Savings Plans and also the <code>onDemandCostEquivalent</code>
     * of the Savings Plans when considering the utilization rate.</p>
     */
    inline const SavingsPlansSavings& GetSavings() const { return m_savings; }
    inline bool SavingsHasBeenSet() const { return m_savingsHasBeenSet; }
    template<typename SavingsT = SavingsPlansSavings>
    void SetSavings(SavingsT&& value) { m_savingsHasBeenSet = true; m_savings = std::forward<SavingsT>(value); }
    template<typename SavingsT = SavingsPlansSavings>
    SavingsPlansUtilizationByTime& WithSavings(SavingsT&& value) { SetSavings(std::forward<SavingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amortized commitment for a Savings Plans. This includes the sum of
     * the upfront and recurring Savings Plans fees.</p>
     */
    inline const SavingsPlansAmortizedCommitment& GetAmortizedCommitment() const { return m_amortizedCommitment; }
    inline bool AmortizedCommitmentHasBeenSet() const { return m_amortizedCommitmentHasBeenSet; }
    template<typename AmortizedCommitmentT = SavingsPlansAmortizedCommitment>
    void SetAmortizedCommitment(AmortizedCommitmentT&& value) { m_amortizedCommitmentHasBeenSet = true; m_amortizedCommitment = std::forward<AmortizedCommitmentT>(value); }
    template<typename AmortizedCommitmentT = SavingsPlansAmortizedCommitment>
    SavingsPlansUtilizationByTime& WithAmortizedCommitment(AmortizedCommitmentT&& value) { SetAmortizedCommitment(std::forward<AmortizedCommitmentT>(value)); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

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
