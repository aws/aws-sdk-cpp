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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline BatchCreateWorkloadEstimateUsageEntry& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of usage being estimated. </p>
     */
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageType(const char* value) { SetUsageType(value); return *this;}
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
    inline BatchCreateWorkloadEstimateUsageEntry& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this entry in the batch operation. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline BatchCreateWorkloadEstimateUsageEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional group identifier for the usage estimate. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchCreateWorkloadEstimateUsageEntry& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this usage estimate. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated usage amount. </p>
     */
    inline double GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline BatchCreateWorkloadEstimateUsageEntry& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Historical usage data associated with this estimate, if available. </p>
     */
    inline const HistoricalUsageEntity& GetHistoricalUsage() const{ return m_historicalUsage; }
    inline bool HistoricalUsageHasBeenSet() const { return m_historicalUsageHasBeenSet; }
    inline void SetHistoricalUsage(const HistoricalUsageEntity& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = value; }
    inline void SetHistoricalUsage(HistoricalUsageEntity&& value) { m_historicalUsageHasBeenSet = true; m_historicalUsage = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageEntry& WithHistoricalUsage(const HistoricalUsageEntity& value) { SetHistoricalUsage(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageEntry& WithHistoricalUsage(HistoricalUsageEntity&& value) { SetHistoricalUsage(std::move(value)); return *this;}
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

    double m_amount;
    bool m_amountHasBeenSet = false;

    HistoricalUsageEntity m_historicalUsage;
    bool m_historicalUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
