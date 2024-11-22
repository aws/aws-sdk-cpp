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
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary();
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateLineItemSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code associated with this line item. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline BillEstimateLineItemSummary& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline BillEstimateLineItemSummary& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage for this line item. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline BillEstimateLineItemSummary& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline BillEstimateLineItemSummary& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this line item. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline BillEstimateLineItemSummary& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline BillEstimateLineItemSummary& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this line item. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline BillEstimateLineItemSummary& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline BillEstimateLineItemSummary& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone associated with this line item, if applicable. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline BillEstimateLineItemSummary& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline BillEstimateLineItemSummary& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of this line item. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BillEstimateLineItemSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BillEstimateLineItemSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The line item identifier from the original bill. </p>
     */
    inline const Aws::String& GetLineItemId() const{ return m_lineItemId; }
    inline bool LineItemIdHasBeenSet() const { return m_lineItemIdHasBeenSet; }
    inline void SetLineItemId(const Aws::String& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = value; }
    inline void SetLineItemId(Aws::String&& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = std::move(value); }
    inline void SetLineItemId(const char* value) { m_lineItemIdHasBeenSet = true; m_lineItemId.assign(value); }
    inline BillEstimateLineItemSummary& WithLineItemId(const Aws::String& value) { SetLineItemId(value); return *this;}
    inline BillEstimateLineItemSummary& WithLineItemId(Aws::String&& value) { SetLineItemId(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithLineItemId(const char* value) { SetLineItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of this line item (e.g., Usage, Tax, Credit). </p>
     */
    inline const Aws::String& GetLineItemType() const{ return m_lineItemType; }
    inline bool LineItemTypeHasBeenSet() const { return m_lineItemTypeHasBeenSet; }
    inline void SetLineItemType(const Aws::String& value) { m_lineItemTypeHasBeenSet = true; m_lineItemType = value; }
    inline void SetLineItemType(Aws::String&& value) { m_lineItemTypeHasBeenSet = true; m_lineItemType = std::move(value); }
    inline void SetLineItemType(const char* value) { m_lineItemTypeHasBeenSet = true; m_lineItemType.assign(value); }
    inline BillEstimateLineItemSummary& WithLineItemType(const Aws::String& value) { SetLineItemType(value); return *this;}
    inline BillEstimateLineItemSummary& WithLineItemType(Aws::String&& value) { SetLineItemType(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithLineItemType(const char* value) { SetLineItemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID of the payer for this line item. </p>
     */
    inline const Aws::String& GetPayerAccountId() const{ return m_payerAccountId; }
    inline bool PayerAccountIdHasBeenSet() const { return m_payerAccountIdHasBeenSet; }
    inline void SetPayerAccountId(const Aws::String& value) { m_payerAccountIdHasBeenSet = true; m_payerAccountId = value; }
    inline void SetPayerAccountId(Aws::String&& value) { m_payerAccountIdHasBeenSet = true; m_payerAccountId = std::move(value); }
    inline void SetPayerAccountId(const char* value) { m_payerAccountIdHasBeenSet = true; m_payerAccountId.assign(value); }
    inline BillEstimateLineItemSummary& WithPayerAccountId(const Aws::String& value) { SetPayerAccountId(value); return *this;}
    inline BillEstimateLineItemSummary& WithPayerAccountId(Aws::String&& value) { SetPayerAccountId(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithPayerAccountId(const char* value) { SetPayerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the usage for this line
     * item. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BillEstimateLineItemSummary& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BillEstimateLineItemSummary& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage quantity for this line item. </p>
     */
    inline const UsageQuantityResult& GetEstimatedUsageQuantity() const{ return m_estimatedUsageQuantity; }
    inline bool EstimatedUsageQuantityHasBeenSet() const { return m_estimatedUsageQuantityHasBeenSet; }
    inline void SetEstimatedUsageQuantity(const UsageQuantityResult& value) { m_estimatedUsageQuantityHasBeenSet = true; m_estimatedUsageQuantity = value; }
    inline void SetEstimatedUsageQuantity(UsageQuantityResult&& value) { m_estimatedUsageQuantityHasBeenSet = true; m_estimatedUsageQuantity = std::move(value); }
    inline BillEstimateLineItemSummary& WithEstimatedUsageQuantity(const UsageQuantityResult& value) { SetEstimatedUsageQuantity(value); return *this;}
    inline BillEstimateLineItemSummary& WithEstimatedUsageQuantity(UsageQuantityResult&& value) { SetEstimatedUsageQuantity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated cost for this line item. </p>
     */
    inline const CostAmount& GetEstimatedCost() const{ return m_estimatedCost; }
    inline bool EstimatedCostHasBeenSet() const { return m_estimatedCostHasBeenSet; }
    inline void SetEstimatedCost(const CostAmount& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = value; }
    inline void SetEstimatedCost(CostAmount&& value) { m_estimatedCostHasBeenSet = true; m_estimatedCost = std::move(value); }
    inline BillEstimateLineItemSummary& WithEstimatedCost(const CostAmount& value) { SetEstimatedCost(value); return *this;}
    inline BillEstimateLineItemSummary& WithEstimatedCost(CostAmount&& value) { SetEstimatedCost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The historical usage quantity for this line item. </p>
     */
    inline const UsageQuantityResult& GetHistoricalUsageQuantity() const{ return m_historicalUsageQuantity; }
    inline bool HistoricalUsageQuantityHasBeenSet() const { return m_historicalUsageQuantityHasBeenSet; }
    inline void SetHistoricalUsageQuantity(const UsageQuantityResult& value) { m_historicalUsageQuantityHasBeenSet = true; m_historicalUsageQuantity = value; }
    inline void SetHistoricalUsageQuantity(UsageQuantityResult&& value) { m_historicalUsageQuantityHasBeenSet = true; m_historicalUsageQuantity = std::move(value); }
    inline BillEstimateLineItemSummary& WithHistoricalUsageQuantity(const UsageQuantityResult& value) { SetHistoricalUsageQuantity(value); return *this;}
    inline BillEstimateLineItemSummary& WithHistoricalUsageQuantity(UsageQuantityResult&& value) { SetHistoricalUsageQuantity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The historical cost for this line item. </p>
     */
    inline const CostAmount& GetHistoricalCost() const{ return m_historicalCost; }
    inline bool HistoricalCostHasBeenSet() const { return m_historicalCostHasBeenSet; }
    inline void SetHistoricalCost(const CostAmount& value) { m_historicalCostHasBeenSet = true; m_historicalCost = value; }
    inline void SetHistoricalCost(CostAmount&& value) { m_historicalCostHasBeenSet = true; m_historicalCost = std::move(value); }
    inline BillEstimateLineItemSummary& WithHistoricalCost(const CostAmount& value) { SetHistoricalCost(value); return *this;}
    inline BillEstimateLineItemSummary& WithHistoricalCost(CostAmount&& value) { SetHistoricalCost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Names (ARNs) of any Savings Plans applied to this line
     * item. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSavingsPlanArns() const{ return m_savingsPlanArns; }
    inline bool SavingsPlanArnsHasBeenSet() const { return m_savingsPlanArnsHasBeenSet; }
    inline void SetSavingsPlanArns(const Aws::Vector<Aws::String>& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = value; }
    inline void SetSavingsPlanArns(Aws::Vector<Aws::String>&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns = std::move(value); }
    inline BillEstimateLineItemSummary& WithSavingsPlanArns(const Aws::Vector<Aws::String>& value) { SetSavingsPlanArns(value); return *this;}
    inline BillEstimateLineItemSummary& WithSavingsPlanArns(Aws::Vector<Aws::String>&& value) { SetSavingsPlanArns(std::move(value)); return *this;}
    inline BillEstimateLineItemSummary& AddSavingsPlanArns(const Aws::String& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(value); return *this; }
    inline BillEstimateLineItemSummary& AddSavingsPlanArns(Aws::String&& value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(std::move(value)); return *this; }
    inline BillEstimateLineItemSummary& AddSavingsPlanArns(const char* value) { m_savingsPlanArnsHasBeenSet = true; m_savingsPlanArns.push_back(value); return *this; }
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
