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
   * <p> Represents a successfully created item in a batch operation for bill
   * scenario commitment modifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchCreateBillScenarioCommitmentModificationItem">AWS
   * API Reference</a></p>
   */
  class BatchCreateBillScenarioCommitmentModificationItem
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationItem() = default;
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The key of the successfully created entry. This can be any valid string.
     * This key is useful to identify errors associated with any commitment entry as
     * any error is returned with this key. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationItem& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier assigned to the created commitment modification. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for the created commitment modification. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationItem& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with the created commitment
     * modification. </p>
     */
    inline const Aws::String& GetUsageAccountId() const { return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    template<typename UsageAccountIdT = Aws::String>
    void SetUsageAccountId(UsageAccountIdT&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::forward<UsageAccountIdT>(value); }
    template<typename UsageAccountIdT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationItem& WithUsageAccountId(UsageAccountIdT&& value) { SetUsageAccountId(std::forward<UsageAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific commitment action that was taken. </p>
     */
    inline const BillScenarioCommitmentModificationAction& GetCommitmentAction() const { return m_commitmentAction; }
    inline bool CommitmentActionHasBeenSet() const { return m_commitmentActionHasBeenSet; }
    template<typename CommitmentActionT = BillScenarioCommitmentModificationAction>
    void SetCommitmentAction(CommitmentActionT&& value) { m_commitmentActionHasBeenSet = true; m_commitmentAction = std::forward<CommitmentActionT>(value); }
    template<typename CommitmentActionT = BillScenarioCommitmentModificationAction>
    BatchCreateBillScenarioCommitmentModificationItem& WithCommitmentAction(CommitmentActionT&& value) { SetCommitmentAction(std::forward<CommitmentActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
