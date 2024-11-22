/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillScenarioCommitmentModificationAction.h>
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
   * <p> Represents an entry object in the batch operation to create bill scenario
   * commitment modifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioCommitmentModificationEntry">AWS
   * API Reference</a></p>
   */
  class BatchCreateBillScenarioCommitmentModificationEntry
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationEntry();
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for this entry in the batch operation. This can be any
     * valid string. This key is useful to identify errors associated with any
     * commitment entry as any error is returned with this key. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional group identifier for the commitment modification. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID to which this commitment will be applied
     * to. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific commitment action to be taken (e.g., adding a Reserved Instance
     * or Savings Plan). </p>
     */
    inline const BillScenarioCommitmentModificationAction& GetCommitmentAction() const{ return m_commitmentAction; }
    inline bool CommitmentActionHasBeenSet() const { return m_commitmentActionHasBeenSet; }
    inline void SetCommitmentAction(const BillScenarioCommitmentModificationAction& value) { m_commitmentActionHasBeenSet = true; m_commitmentAction = value; }
    inline void SetCommitmentAction(BillScenarioCommitmentModificationAction&& value) { m_commitmentActionHasBeenSet = true; m_commitmentAction = std::move(value); }
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithCommitmentAction(const BillScenarioCommitmentModificationAction& value) { SetCommitmentAction(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationEntry& WithCommitmentAction(BillScenarioCommitmentModificationAction&& value) { SetCommitmentAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    BillScenarioCommitmentModificationAction m_commitmentAction;
    bool m_commitmentActionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
