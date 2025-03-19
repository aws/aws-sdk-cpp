/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateRateType.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Provides a summary of a workload estimate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/WorkloadEstimateSummary">AWS
   * API Reference</a></p>
   */
  class WorkloadEstimateSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary() = default;
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the workload estimate. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WorkloadEstimateSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the workload estimate. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkloadEstimateSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WorkloadEstimateSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    WorkloadEstimateSummary& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rates used for the estimate. </p>
     */
    inline WorkloadEstimateRateType GetRateType() const { return m_rateType; }
    inline bool RateTypeHasBeenSet() const { return m_rateTypeHasBeenSet; }
    inline void SetRateType(WorkloadEstimateRateType value) { m_rateTypeHasBeenSet = true; m_rateType = value; }
    inline WorkloadEstimateSummary& WithRateType(WorkloadEstimateRateType value) { SetRateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the pricing rates used for the estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetRateTimestamp() const { return m_rateTimestamp; }
    inline bool RateTimestampHasBeenSet() const { return m_rateTimestampHasBeenSet; }
    template<typename RateTimestampT = Aws::Utils::DateTime>
    void SetRateTimestamp(RateTimestampT&& value) { m_rateTimestampHasBeenSet = true; m_rateTimestamp = std::forward<RateTimestampT>(value); }
    template<typename RateTimestampT = Aws::Utils::DateTime>
    WorkloadEstimateSummary& WithRateTimestamp(RateTimestampT&& value) { SetRateTimestamp(std::forward<RateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the workload estimate. </p>
     */
    inline WorkloadEstimateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkloadEstimateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadEstimateSummary& WithStatus(WorkloadEstimateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total estimated cost for the workload. </p>
     */
    inline double GetTotalCost() const { return m_totalCost; }
    inline bool TotalCostHasBeenSet() const { return m_totalCostHasBeenSet; }
    inline void SetTotalCost(double value) { m_totalCostHasBeenSet = true; m_totalCost = value; }
    inline WorkloadEstimateSummary& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the estimated cost. </p>
     */
    inline CurrencyCode GetCostCurrency() const { return m_costCurrency; }
    inline bool CostCurrencyHasBeenSet() const { return m_costCurrencyHasBeenSet; }
    inline void SetCostCurrency(CurrencyCode value) { m_costCurrencyHasBeenSet = true; m_costCurrency = value; }
    inline WorkloadEstimateSummary& WithCostCurrency(CurrencyCode value) { SetCostCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the workload estimate creation or processing failed.
     * </p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    WorkloadEstimateSummary& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    WorkloadEstimateRateType m_rateType{WorkloadEstimateRateType::NOT_SET};
    bool m_rateTypeHasBeenSet = false;

    Aws::Utils::DateTime m_rateTimestamp{};
    bool m_rateTimestampHasBeenSet = false;

    WorkloadEstimateStatus m_status{WorkloadEstimateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_totalCost{0.0};
    bool m_totalCostHasBeenSet = false;

    CurrencyCode m_costCurrency{CurrencyCode::NOT_SET};
    bool m_costCurrencyHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
