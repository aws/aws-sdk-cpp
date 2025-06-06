﻿/**
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
   * <p> Represents a usage item in a workload estimate. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/WorkloadEstimateUsageItem">AWS
   * API Reference</a></p>
   */
  class WorkloadEstimateUsageItem
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageItem() = default;
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API WorkloadEstimateUsageItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code associated with this usage item. </p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    WorkloadEstimateUsageItem& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage for this item. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    WorkloadEstimateUsageItem& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage item. </p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    WorkloadEstimateUsageItem& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this usage item. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    WorkloadEstimateUsageItem& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of this usage item. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WorkloadEstimateUsageItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this usage item. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    WorkloadEstimateUsageItem& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for this usage item. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    WorkloadEstimateUsageItem& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage quantity for this item. </p>
     */
    inline const WorkloadEstimateUsageQuantity& GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    template<typename QuantityT = WorkloadEstimateUsageQuantity>
    void SetQuantity(QuantityT&& value) { m_quantityHasBeenSet = true; m_quantity = std::forward<QuantityT>(value); }
    template<typename QuantityT = WorkloadEstimateUsageQuantity>
    WorkloadEstimateUsageItem& WithQuantity(QuantityT&& value) { SetQuantity(std::forward<QuantityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost for this usage item. </p>
     */
    inline double GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    inline void SetCost(double value) { m_costHasBeenSet = true; m_cost = value; }
    inline WorkloadEstimateUsageItem& WithCost(double value) { SetCost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The currency of the estimated cost. </p>
     */
    inline CurrencyCode GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(CurrencyCode value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline WorkloadEstimateUsageItem& WithCurrency(CurrencyCode value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of this usage item. </p>
     */
    inline WorkloadEstimateCostStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkloadEstimateCostStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline WorkloadEstimateUsageItem& WithStatus(WorkloadEstimateCostStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this item, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const { return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    void SetHistoricalUsage(HistoricalUsageT&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::forward<HistoricalUsageT>(value); }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    WorkloadEstimateUsageItem& WithHistoricalUsage(HistoricalUsageT&& value) { SetHistoricalUsage(std::forward<HistoricalUsageT>(value)); return *this;}
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

    double m_cost{0.0};
    bool m_costHasBeenSet = false;

    CurrencyCode m_currency{CurrencyCode::NOT_SET};
    bool m_currencyHasBeenSet = false;

    WorkloadEstimateCostStatus m_status{WorkloadEstimateCostStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
