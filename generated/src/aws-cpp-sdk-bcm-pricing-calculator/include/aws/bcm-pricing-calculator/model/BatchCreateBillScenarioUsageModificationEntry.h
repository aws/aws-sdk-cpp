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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationEntry() = default;
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
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the usage details of the usage line item. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage modification. Describes
     * the specific Amazon Web Services operation that this usage line models. For
     * example, <code>RunInstances</code> indicates the operation of an Amazon EC2
     * instance. </p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Availability Zone that this usage line uses. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this entry in the batch operation. This can be any
     * valid string. This key is useful to identify errors associated with any usage
     * entry as any error is returned with this key. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional group identifier for the usage modification. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID to which this usage will be applied to.
     * </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BatchCreateBillScenarioUsageModificationEntry& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of usage you want to create for the service use you are modeling.
     * </p>
     */
    inline const Aws::Vector<UsageAmount>& GetAmounts() const { return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    template<typename AmountsT = Aws::Vector<UsageAmount>>
    void SetAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts = std::forward<AmountsT>(value); }
    template<typename AmountsT = Aws::Vector<UsageAmount>>
    BatchCreateBillScenarioUsageModificationEntry& WithAmounts(AmountsT&& value) { SetAmounts(std::forward<AmountsT>(value)); return *this;}
    template<typename AmountsT = UsageAmount>
    BatchCreateBillScenarioUsageModificationEntry& AddAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts.emplace_back(std::forward<AmountsT>(value)); return *this; }
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
    BatchCreateBillScenarioUsageModificationEntry& WithHistoricalUsage(HistoricalUsageT&& value) { SetHistoricalUsage(std::forward<HistoricalUsageT>(value)); return *this;}
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
