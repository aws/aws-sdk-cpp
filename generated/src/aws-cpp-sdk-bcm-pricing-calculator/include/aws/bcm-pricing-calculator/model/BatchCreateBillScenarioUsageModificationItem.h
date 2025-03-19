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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem() = default;
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code for this usage modification. </p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage that was modified. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage modification. </p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The location associated with this usage modification. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The availability zone associated with this usage modification, if
     * applicable. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier assigned to the created usage modification. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for the created usage modification. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the created usage
     * modification. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The modified usage quantities. </p>
     */
    inline const Aws::Vector<UsageQuantity>& GetQuantities() const { return m_quantities; }
    inline bool QuantitiesHasBeenSet() const { return m_quantitiesHasBeenSet; }
    template<typename QuantitiesT = Aws::Vector<UsageQuantity>>
    void SetQuantities(QuantitiesT&& value) { m_quantitiesHasBeenSet = true; m_quantities = std::forward<QuantitiesT>(value); }
    template<typename QuantitiesT = Aws::Vector<UsageQuantity>>
    BatchCreateBillScenarioUsageModificationItem& WithQuantities(QuantitiesT&& value) { SetQuantities(std::forward<QuantitiesT>(value)); return *this;}
    template<typename QuantitiesT = UsageQuantity>
    BatchCreateBillScenarioUsageModificationItem& AddQuantities(QuantitiesT&& value) { m_quantitiesHasBeenSet = true; m_quantities.emplace_back(std::forward<QuantitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this modification, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const { return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    void SetHistoricalUsage(HistoricalUsageT&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::forward<HistoricalUsageT>(value); }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    BatchCreateBillScenarioUsageModificationItem& WithHistoricalUsage(HistoricalUsageT&& value) { SetHistoricalUsage(std::forward<HistoricalUsageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The key of the successfully created entry. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    BatchCreateBillScenarioUsageModificationItem& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
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
