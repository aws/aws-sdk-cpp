/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Represents an entry in a batch operation to create workload estimate usage.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateWorkloadEstimateUsageEntry">AWS
   * API Reference</a></p>
   */
  class BatchCreateWorkloadEstimateUsageEntry
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry() = default;
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Web Services service code for this usage estimate. </p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage being estimated. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific operation associated with this usage estimate. </p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this entry in the batch operation. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional group identifier for the usage estimate. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this usage estimate. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BatchCreateWorkloadEstimateUsageEntry& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage amount. </p>
     */
    inline double GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline BatchCreateWorkloadEstimateUsageEntry& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this estimate, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const { return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    void SetHistoricalUsage(HistoricalUsageT&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::forward<HistoricalUsageT>(value); }
    template<typename HistoricalUsageT = HistoricalUsageEntity>
    BatchCreateWorkloadEstimateUsageEntry& WithHistoricalUsage(HistoricalUsageT&& value) { SetHistoricalUsage(std::forward<HistoricalUsageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    double m_amount{0.0};
    bool m_amountHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
