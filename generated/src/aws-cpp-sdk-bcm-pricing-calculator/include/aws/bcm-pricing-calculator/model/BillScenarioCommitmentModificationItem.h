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
   * <p> Represents a commitment modification item in a bill scenario. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillScenarioCommitmentModificationItem">AWS
   * API Reference</a></p>
   */
  class BillScenarioCommitmentModificationItem
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationItem();
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillScenarioCommitmentModificationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the commitment modification. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BillScenarioCommitmentModificationItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BillScenarioCommitmentModificationItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BillScenarioCommitmentModificationItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID associated with this commitment
     * modification. </p>
     */
    inline const Aws::String& GetUsageAccountId() const{ return m_usageAccountId; }
    inline bool UsageAccountIdHasBeenSet() const { return m_usageAccountIdHasBeenSet; }
    inline void SetUsageAccountId(const Aws::String& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = value; }
    inline void SetUsageAccountId(Aws::String&& value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId = std::move(value); }
    inline void SetUsageAccountId(const char* value) { m_usageAccountIdHasBeenSet = true; m_usageAccountId.assign(value); }
    inline BillScenarioCommitmentModificationItem& WithUsageAccountId(const Aws::String& value) { SetUsageAccountId(value); return *this;}
    inline BillScenarioCommitmentModificationItem& WithUsageAccountId(Aws::String&& value) { SetUsageAccountId(std::move(value)); return *this;}
    inline BillScenarioCommitmentModificationItem& WithUsageAccountId(const char* value) { SetUsageAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group identifier for the commitment modification. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BillScenarioCommitmentModificationItem& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BillScenarioCommitmentModificationItem& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BillScenarioCommitmentModificationItem& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific commitment action taken in this modification. </p>
     */
    inline const BillScenarioCommitmentModificationAction& GetCommitmentAction() const{ return m_commitmentAction; }
    inline bool CommitmentActionHasBeenSet() const { return m_commitmentActionHasBeenSet; }
    inline void SetCommitmentAction(const BillScenarioCommitmentModificationAction& value) { m_commitmentActionHasBeenSet = true; m_commitmentAction = value; }
    inline void SetCommitmentAction(BillScenarioCommitmentModificationAction&& value) { m_commitmentActionHasBeenSet = true; m_commitmentAction = std::move(value); }
    inline BillScenarioCommitmentModificationItem& WithCommitmentAction(const BillScenarioCommitmentModificationAction& value) { SetCommitmentAction(value); return *this;}
    inline BillScenarioCommitmentModificationItem& WithCommitmentAction(BillScenarioCommitmentModificationAction&& value) { SetCommitmentAction(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_usageAccountId;
    bool m_usageAccountIdHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    BillScenarioCommitmentModificationAction m_commitmentAction;
    bool m_commitmentActionHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
