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
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary();
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the workload estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkloadEstimateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkloadEstimateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkloadEstimateSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the workload estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkloadEstimateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkloadEstimateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkloadEstimateSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WorkloadEstimateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WorkloadEstimateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the workload estimate will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline WorkloadEstimateSummary& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline WorkloadEstimateSummary& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rates used for the estimate. </p>
     */
    inline const WorkloadEstimateRateType& GetRateType() const{ return m_rateType; }
    inline bool RateTypeHasBeenSet() const { return m_rateTypeHasBeenSet; }
    inline void SetRateType(const WorkloadEstimateRateType& value) { m_rateTypeHasBeenSet = true; m_rateType = value; }
    inline void SetRateType(WorkloadEstimateRateType&& value) { m_rateTypeHasBeenSet = true; m_rateType = std::move(value); }
    inline WorkloadEstimateSummary& WithRateType(const WorkloadEstimateRateType& value) { SetRateType(value); return *this;}
    inline WorkloadEstimateSummary& WithRateType(WorkloadEstimateRateType&& value) { SetRateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the pricing rates used for the estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetRateTimestamp() const{ return m_rateTimestamp; }
    inline bool RateTimestampHasBeenSet() const { return m_rateTimestampHasBeenSet; }
    inline void SetRateTimestamp(const Aws::Utils::DateTime& value) { m_rateTimestampHasBeenSet = true; m_rateTimestamp = value; }
    inline void SetRateTimestamp(Aws::Utils::DateTime&& value) { m_rateTimestampHasBeenSet = true; m_rateTimestamp = std::move(value); }
    inline WorkloadEstimateSummary& WithRateTimestamp(const Aws::Utils::DateTime& value) { SetRateTimestamp(value); return *this;}
    inline WorkloadEstimateSummary& WithRateTimestamp(Aws::Utils::DateTime&& value) { SetRateTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the workload estimate. </p>
     */
    inline const WorkloadEstimateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkloadEstimateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkloadEstimateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkloadEstimateSummary& WithStatus(const WorkloadEstimateStatus& value) { SetStatus(value); return *this;}
    inline WorkloadEstimateSummary& WithStatus(WorkloadEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total estimated cost for the workload. </p>
     */
    inline double GetTotalCost() const{ return m_totalCost; }
    inline bool TotalCostHasBeenSet() const { return m_totalCostHasBeenSet; }
    inline void SetTotalCost(double value) { m_totalCostHasBeenSet = true; m_totalCost = value; }
    inline WorkloadEstimateSummary& WithTotalCost(double value) { SetTotalCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the estimated cost. </p>
     */
    inline const CurrencyCode& GetCostCurrency() const{ return m_costCurrency; }
    inline bool CostCurrencyHasBeenSet() const { return m_costCurrencyHasBeenSet; }
    inline void SetCostCurrency(const CurrencyCode& value) { m_costCurrencyHasBeenSet = true; m_costCurrency = value; }
    inline void SetCostCurrency(CurrencyCode&& value) { m_costCurrencyHasBeenSet = true; m_costCurrency = std::move(value); }
    inline WorkloadEstimateSummary& WithCostCurrency(const CurrencyCode& value) { SetCostCurrency(value); return *this;}
    inline WorkloadEstimateSummary& WithCostCurrency(CurrencyCode&& value) { SetCostCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the workload estimate creation or processing failed.
     * </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline WorkloadEstimateSummary& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline WorkloadEstimateSummary& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline WorkloadEstimateSummary& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    WorkloadEstimateRateType m_rateType;
    bool m_rateTypeHasBeenSet = false;

    Aws::Utils::DateTime m_rateTimestamp;
    bool m_rateTimestampHasBeenSet = false;

    WorkloadEstimateStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_totalCost;
    bool m_totalCostHasBeenSet = false;

    CurrencyCode m_costCurrency;
    bool m_costCurrencyHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
