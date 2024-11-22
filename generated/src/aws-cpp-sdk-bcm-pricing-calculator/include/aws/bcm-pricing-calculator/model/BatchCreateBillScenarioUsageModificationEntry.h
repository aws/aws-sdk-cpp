/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/HistoricalUsageEntity.h>
#include <aws/bcm-pricing-calculator/model/UsageAmount.h>
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
   * <p> Represents an entry in a batch operation to create bill scenario usage
   * modifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioUsageModificationEntry">AWS
   * API Reference</a></p>
   */
  class BatchCreateBillScenarioUsageModificationEntry
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationEntry();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code for this usage modification. This
     * identifies the specific Amazon Web Services service to the customer as a unique
     * short abbreviation. For example, <code>AmazonEC2</code> and <code>AWSKMS</code>.
     * </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the usage details of the usage line item. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage modification. Describes
     * the specific Amazon Web Services operation that this usage line models. For
     * example, <code>RunInstances</code> indicates the operation of an Amazon EC2
     * instance. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Availability Zone that this usage line uses. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this entry in the batch operation. This can be any
     * valid string. This key is useful to identify errors associated with any usage
     * entry as any error is returned with this key. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional group identifier for the usage modification. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID to which this usage will be applied to.
     * </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of usage you want to create for the service use you are modeling.
     * </p>
     */
    inline const Aws::Vector<UsageAmount>& GetAmounts() const{ return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    inline void SetAmounts(const Aws::Vector<UsageAmount>& value) { m_amountsHasBeenSet = true; m_amounts = value; }
    inline void SetAmounts(Aws::Vector<UsageAmount>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithAmounts(const Aws::Vector<UsageAmount>& value) { SetAmounts(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithAmounts(Aws::Vector<UsageAmount>&& value) { SetAmounts(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& AddAmounts(const UsageAmount& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }
    inline BatchCreateBillScenarioUsageModificationEntry& AddAmounts(UsageAmount&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this modification, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const{ return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    inline void SetHistoricalUsage(const HistoricalUsageEntity& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = value; }
    inline void SetHistoricalUsage(HistoricalUsageEntity&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationEntry& WithHistoricalUsage(const HistoricalUsageEntity& value) { SetHistoricalUsage(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationEntry& WithHistoricalUsage(HistoricalUsageEntity&& value) { SetHistoricalUsage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    Aws::Vector<UsageAmount> m_amounts;
    bool m_amountsHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
