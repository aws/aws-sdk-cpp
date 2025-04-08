/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The DynamoDB reserved capacity configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/DynamoDbReservedCapacityConfiguration">AWS
   * API Reference</a></p>
   */
  class DynamoDbReservedCapacityConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacityConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API DynamoDbReservedCapacityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account scope for which you want recommendations.</p>
     */
    inline const Aws::String& GetAccountScope() const { return m_accountScope; }
    inline bool AccountScopeHasBeenSet() const { return m_accountScopeHasBeenSet; }
    template<typename AccountScopeT = Aws::String>
    void SetAccountScope(AccountScopeT&& value) { m_accountScopeHasBeenSet = true; m_accountScope = std::forward<AccountScopeT>(value); }
    template<typename AccountScopeT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithAccountScope(AccountScopeT&& value) { SetAccountScope(std::forward<AccountScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service for which you want recommendations.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reserved capacity recommendation term in years.</p>
     */
    inline const Aws::String& GetTerm() const { return m_term; }
    inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
    template<typename TermT = Aws::String>
    void SetTerm(TermT&& value) { m_termHasBeenSet = true; m_term = std::forward<TermT>(value); }
    template<typename TermT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithTerm(TermT&& value) { SetTerm(std::forward<TermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment option for the commitment.</p>
     */
    inline const Aws::String& GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    template<typename PaymentOptionT = Aws::String>
    void SetPaymentOption(PaymentOptionT&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::forward<PaymentOptionT>(value); }
    template<typename PaymentOptionT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithPaymentOption(PaymentOptionT&& value) { SetPaymentOption(std::forward<PaymentOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the commitment.</p>
     */
    inline const Aws::String& GetReservedInstancesRegion() const { return m_reservedInstancesRegion; }
    inline bool ReservedInstancesRegionHasBeenSet() const { return m_reservedInstancesRegionHasBeenSet; }
    template<typename ReservedInstancesRegionT = Aws::String>
    void SetReservedInstancesRegion(ReservedInstancesRegionT&& value) { m_reservedInstancesRegionHasBeenSet = true; m_reservedInstancesRegion = std::forward<ReservedInstancesRegionT>(value); }
    template<typename ReservedInstancesRegionT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithReservedInstancesRegion(ReservedInstancesRegionT&& value) { SetReservedInstancesRegion(std::forward<ReservedInstancesRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this reserved capacity costs you upfront.</p>
     */
    inline const Aws::String& GetUpfrontCost() const { return m_upfrontCost; }
    inline bool UpfrontCostHasBeenSet() const { return m_upfrontCostHasBeenSet; }
    template<typename UpfrontCostT = Aws::String>
    void SetUpfrontCost(UpfrontCostT&& value) { m_upfrontCostHasBeenSet = true; m_upfrontCost = std::forward<UpfrontCostT>(value); }
    template<typename UpfrontCostT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithUpfrontCost(UpfrontCostT&& value) { SetUpfrontCost(std::forward<UpfrontCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much purchasing this reserved capacity costs you on a monthly basis.</p>
     */
    inline const Aws::String& GetMonthlyRecurringCost() const { return m_monthlyRecurringCost; }
    inline bool MonthlyRecurringCostHasBeenSet() const { return m_monthlyRecurringCostHasBeenSet; }
    template<typename MonthlyRecurringCostT = Aws::String>
    void SetMonthlyRecurringCost(MonthlyRecurringCostT&& value) { m_monthlyRecurringCostHasBeenSet = true; m_monthlyRecurringCost = std::forward<MonthlyRecurringCostT>(value); }
    template<typename MonthlyRecurringCostT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithMonthlyRecurringCost(MonthlyRecurringCostT&& value) { SetMonthlyRecurringCost(std::forward<MonthlyRecurringCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved capacity units that Amazon Web Services recommends
     * that you purchase.</p>
     */
    inline const Aws::String& GetNumberOfCapacityUnitsToPurchase() const { return m_numberOfCapacityUnitsToPurchase; }
    inline bool NumberOfCapacityUnitsToPurchaseHasBeenSet() const { return m_numberOfCapacityUnitsToPurchaseHasBeenSet; }
    template<typename NumberOfCapacityUnitsToPurchaseT = Aws::String>
    void SetNumberOfCapacityUnitsToPurchase(NumberOfCapacityUnitsToPurchaseT&& value) { m_numberOfCapacityUnitsToPurchaseHasBeenSet = true; m_numberOfCapacityUnitsToPurchase = std::forward<NumberOfCapacityUnitsToPurchaseT>(value); }
    template<typename NumberOfCapacityUnitsToPurchaseT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithNumberOfCapacityUnitsToPurchase(NumberOfCapacityUnitsToPurchaseT&& value) { SetNumberOfCapacityUnitsToPurchase(std::forward<NumberOfCapacityUnitsToPurchaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity unit of the recommended reservation.</p>
     */
    inline const Aws::String& GetCapacityUnits() const { return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    template<typename CapacityUnitsT = Aws::String>
    void SetCapacityUnits(CapacityUnitsT&& value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = std::forward<CapacityUnitsT>(value); }
    template<typename CapacityUnitsT = Aws::String>
    DynamoDbReservedCapacityConfiguration& WithCapacityUnits(CapacityUnitsT&& value) { SetCapacityUnits(std::forward<CapacityUnitsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountScope;
    bool m_accountScopeHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_term;
    bool m_termHasBeenSet = false;

    Aws::String m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::String m_reservedInstancesRegion;
    bool m_reservedInstancesRegionHasBeenSet = false;

    Aws::String m_upfrontCost;
    bool m_upfrontCostHasBeenSet = false;

    Aws::String m_monthlyRecurringCost;
    bool m_monthlyRecurringCostHasBeenSet = false;

    Aws::String m_numberOfCapacityUnitsToPurchase;
    bool m_numberOfCapacityUnitsToPurchaseHasBeenSet = false;

    Aws::String m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
