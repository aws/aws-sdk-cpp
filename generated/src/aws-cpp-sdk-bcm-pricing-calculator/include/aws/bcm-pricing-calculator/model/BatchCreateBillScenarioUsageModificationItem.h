/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/HistoricalUsageEntity.h>
#include <aws/bcm-pricing-calculator/model/UsageQuantity.h>
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
   * <p> Represents a successfully created item in a batch operation for bill
   * scenario usage modifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioUsageModificationItem">AWS
   * API Reference</a></p>
   */
  class BatchCreateBillScenarioUsageModificationItem
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code for this usage modification. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage that was modified. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageType(const char* value) { SetUsageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage modification. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this usage modification. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone associated with this usage modification, if
     * applicable. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier assigned to the created usage modification. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for the created usage modification. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the created usage
     * modification. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The modified usage quantities. </p>
     */
    inline const Aws::Vector<UsageQuantity>& GetQuantities() const{ return m_quantities; }
    inline bool QuantitiesHasBeenSet() const { return m_quantitiesHasBeenSet; }
    inline void SetQuantities(const Aws::Vector<UsageQuantity>& value) { m_quantitiesHasBeenSet = true; m_quantities = value; }
    inline void SetQuantities(Aws::Vector<UsageQuantity>&& value) { m_quantitiesHasBeenSet = true; m_quantities = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithQuantities(const Aws::Vector<UsageQuantity>& value) { SetQuantities(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithQuantities(Aws::Vector<UsageQuantity>&& value) { SetQuantities(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& AddQuantities(const UsageQuantity& value) { m_quantitiesHasBeenSet = true; m_quantities.push_back(value); return *this; }
    inline BatchCreateBillScenarioUsageModificationItem& AddQuantities(UsageQuantity&& value) { m_quantitiesHasBeenSet = true; m_quantities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this modification, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const{ return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    inline void SetHistoricalUsage(const HistoricalUsageEntity& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = value; }
    inline void SetHistoricalUsage(HistoricalUsageEntity&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::move(value); }
    inline BatchCreateBillScenarioUsageModificationItem& WithHistoricalUsage(const HistoricalUsageEntity& value) { SetHistoricalUsage(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithHistoricalUsage(HistoricalUsageEntity&& value) { SetHistoricalUsage(std::move(value)); return *this;}
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
    inline BatchCreateBillScenarioUsageModificationItem& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateBillScenarioUsageModificationItem& WithKey(const char* value) { SetKey(value); return *this;}
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

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    Aws::Vector<UsageQuantity> m_quantities;
    bool m_quantitiesHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
