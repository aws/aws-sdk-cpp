/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/UsageQuantityResult.h>
#include <aws/bcm-pricing-calculator/model/CostAmount.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Provides a summary of a line item in a bill estimate. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillEstimateLineItemSummary">AWS
   * API Reference</a></p>
   */
  class BillEstimateLineItemSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary() = default;
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code associated with this line item. </p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    BillEstimateLineItemSummary& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage for this line item. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    BillEstimateLineItemSummary& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this line item. </p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    BillEstimateLineItemSummary& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this line item. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    BillEstimateLineItemSummary& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone associated with this line item, if applicable. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    BillEstimateLineItemSummary& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of this line item. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BillEstimateLineItemSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The line item identifier from the original bill. </p>
     */
    inline const Aws::String& GetLineItemId() const { return m_lineItemId; }
    inline bool LineItemIdHasBeenSet() const { return m_lineItemIdHasBeenSet; }
    template<typename LineItemIdT = Aws::String>
    void SetLineItemId(LineItemIdT&& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = std::forward<LineItemIdT>(value); }
    template<typename LineItemIdT = Aws::String>
    BillEstimateLineItemSummary& WithLineItemId(LineItemIdT&& value) { SetLineItemId(std::forward<LineItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of this line item (e.g., Usage, Tax, Credit). </p>
     */
    inline const Aws::String& GetLineItemType() const { return m_lineItemType; }
    inline bool LineItemTypeHasBeenSet() const { return m_lineItemTypeHasBeenSet; }
    template<typename LineItemTypeT = Aws::String>
    void SetLineItemType(LineItemTypeT&& value) { m_lineItemTypeHasBeenSet = true; m_lineItemType = std::forward<LineItemTypeT>(value); }
    template<typename LineItemTypeT = Aws::String>
    BillEstimateLineItemSummary& WithLineItemType(LineItemTypeT&& value) { SetLineItemType(std::forward<LineItemTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the payer for this line item. </p>
     */
    inline const Aws::String& GetPayerAccountId() const { return m_payerAccountId; }
    inline bool PayerAccountIdHasBeenSet() const { return m_payerAccountIdHasBeenSet; }
    template<typename PayerAccountIdT = Aws::String>
    void SetPayerAccountId(PayerAccountIdT&& value) { m_payerAccountIdHasBeenSet = true; m_payerAccountId = std::forward<PayerAccountIdT>(value); }
    template<typename PayerAccountIdT = Aws::String>
    BillEstimateLineItemSummary& WithPayerAccountId(PayerAccountIdT&& value) { SetPayerAccountId(std::forward<PayerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the usage for this line
     * item. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BillEstimateLineItemSummary& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage quantity for this line item. </p>
     */
    inline const UsageQuantityResult& GetEstimatedUsageQuantity() const { return m_estimatedUsageQuantity; }
    inline bool EstimatedUsageQuantityHasBeenSet() const { return m_estimatedUsageQuantityHasBeenSet; }
    template<typename EstimatedUsageQuantityT = UsageQuantityResult>
    void SetEstimatedUsageQuantity(EstimatedUsageQuantityT&& value) { m_estimatedUsageQuantityHasBeenSet = true; m_estimatedUsageQuantity = std::forward<EstimatedUsageQuantityT>(value); }
    template<typename EstimatedUsageQuantityT = UsageQuantityResult>
    BillEstimateLineItemSummary& WithEstimatedUsageQuantity(EstimatedUsageQuantityT&& value) { SetEstimatedUsageQuantity(std::forward<EstimatedUsageQuantityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost for this line item. </p>
     */
    inline const CostAmount& GetEstimatedCost() const { return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    template<typename EstimatedCostT = CostAmount>
    void SetEstimatedCost(EstimatedCostT&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::forward<EstimatedCostT>(value); }
    template<typename EstimatedCostT = CostAmount>
    BillEstimateLineItemSummary& WithEstimatedCost(EstimatedCostT&& value) { SetEstimatedCost(std::forward<EstimatedCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The historical usage quantity for this line item. </p>
     */
    inline const UsageQuantityResult& GetHistoricalUsageQuantity() const { return m_historicalUsageQuantity; }
    inline bool HistoricalUsageQuantityHasBeenSet() const { return m_historicalUsageQuantityHasBeenSet; }
    template<typename HistoricalUsageQuantityT = UsageQuantityResult>
    void SetHistoricalUsageQuantity(HistoricalUsageQuantityT&& value) { m_historicalUsageQuantityHasBeenSet = true; m_historicalUsageQuantity = std::forward<HistoricalUsageQuantityT>(value); }
    template<typename HistoricalUsageQuantityT = UsageQuantityResult>
    BillEstimateLineItemSummary& WithHistoricalUsageQuantity(HistoricalUsageQuantityT&& value) { SetHistoricalUsageQuantity(std::forward<HistoricalUsageQuantityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The historical cost for this line item. </p>
     */
    inline const CostAmount& GetHistoricalCost() const { return m_historicalCost; }
    inline bool HistoricalCostHasBeenSet() const { return m_historicalCostHasBeenSet; }
    template<typename HistoricalCostT = CostAmount>
    void SetHistoricalCost(HistoricalCostT&& value) { m_historicalCostHasBeenSet = true; m_historicalCost = std::forward<HistoricalCostT>(value); }
    template<typename HistoricalCostT = CostAmount>
    BillEstimateLineItemSummary& WithHistoricalCost(HistoricalCostT&& value) { SetHistoricalCost(std::forward<HistoricalCostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Names (ARNs) of any Savings Plans applied to this line
     * item. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanArns() const { return m_savingsPlanArns; }
    inline bool SavingsPlanArnsHasBeenSet() const { return m_savingsPlanArnsHasBeenSet; }
    template<typename SavingsPlanArnsT = Aws::Vector<Aws::String>>
    void SetSavingsPlanArns(SavingsPlanArnsT&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = std::forward<SavingsPlanArnsT>(value); }
    template<typename SavingsPlanArnsT = Aws::Vector<Aws::String>>
    BillEstimateLineItemSummary& WithSavingsPlanArns(SavingsPlanArnsT&& value) { SetSavingsPlanArns(std::forward<SavingsPlanArnsT>(value)); return *this;}
    template<typename SavingsPlanArnsT = Aws::String>
    BillEstimateLineItemSummary& AddSavingsPlanArns(SavingsPlanArnsT&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.emplace_back(std::forward<SavingsPlanArnsT>(value)); return *this; }
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

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lineItemId;
    bool m_lineItemIdHasBeenSet = false;

    Aws::String m_lineItemType;
    bool m_lineItemTypeHasBeenSet = false;

    Aws::String m_payerAccountId;
    bool m_payerAccountIdHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    UsageQuantityResult m_estimatedUsageQuantity;
    bool m_estimatedUsageQuantityHasBeenSet = false;

    CostAmount m_estimatedCost;
    bool m_estimatedCostHasBeenSet = false;

    UsageQuantityResult m_historicalUsageQuantity;
    bool m_historicalUsageQuantityHasBeenSet = false;

    CostAmount m_historicalCost;
    bool m_historicalCostHasBeenSet = false;

    Aws::Vector<Aws::String> m_savingsPlanArns;
    bool m_savingsPlanArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
