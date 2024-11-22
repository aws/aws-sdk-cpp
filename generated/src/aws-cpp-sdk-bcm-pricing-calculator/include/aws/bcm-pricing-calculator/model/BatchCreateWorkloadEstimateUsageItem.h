/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateUsageQuantity.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
#include <aws/bcm-pricing-calculator/model/WorkloadEstimateCostStatus.h>
#include <aws/bcm-pricing-calculator/model/HistoricalUsageEntity.h>
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
   * <p> Represents a successfully created item in a batch operation for workload
   * estimate usage. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateWorkloadEstimateUsageItem">AWS
   * API Reference</a></p>
   */
  class BatchCreateWorkloadEstimateUsageItem
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageItem();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code for this usage estimate. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage that was estimated. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage estimate. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this usage estimate. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier assigned to the created usage estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the created usage
     * estimate. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for the created usage estimate. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage quantity. </p>
     */
    inline const WorkloadEstimateUsageQuantity& GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(const WorkloadEstimateUsageQuantity& value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline void SetQuantity(WorkloadEstimateUsageQuantity&& value) { m_quantityHasBeenSet = true; m_quantity = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithQuantity(const WorkloadEstimateUsageQuantity& value) { SetQuantity(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithQuantity(WorkloadEstimateUsageQuantity&& value) { SetQuantity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost associated with this usage. </p>
     */
    inline double GetCost() const{ return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(double value) { m_costHasBeenSet = true; m_cost = value; }
    inline BatchCreateWorkloadEstimateUsageItem& WithCost(double value) { SetCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the estimated cost. </p>
     */
    inline const CurrencyCode& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const CurrencyCode& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(CurrencyCode&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithCurrency(const CurrencyCode& value) { SetCurrency(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithCurrency(CurrencyCode&& value) { SetCurrency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the created usage estimate. </p>
     */
    inline const WorkloadEstimateCostStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkloadEstimateCostStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkloadEstimateCostStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithStatus(const WorkloadEstimateCostStatus& value) { SetStatus(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithStatus(WorkloadEstimateCostStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this estimate, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const{ return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    inline void SetHistoricalUsage(const HistoricalUsageEntity& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = value; }
    inline void SetHistoricalUsage(HistoricalUsageEntity&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithHistoricalUsage(const HistoricalUsageEntity& value) { SetHistoricalUsage(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithHistoricalUsage(HistoricalUsageEntity&& value) { SetHistoricalUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The key of the successfully created entry. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline BatchCreateWorkloadEstimateUsageItem& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageItem& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    WorkloadEstimateUsageQuantity m_quantity;
    bool m_quantityHasBeenSet = false;

    double m_cost;
    bool m_costHasBeenSet = false;

    CurrencyCode m_currency;
    bool m_currencyHasBeenSet = false;

    WorkloadEstimateCostStatus m_status;
    bool m_statusHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
