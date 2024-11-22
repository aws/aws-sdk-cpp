/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Represents an entry in a batch operation to update bill scenario usage
   * modifications. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchUpdateBillScenarioUsageModificationEntry">AWS
   * API Reference</a></p>
   */
  class BatchUpdateBillScenarioUsageModificationEntry
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry();
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the usage modification to update. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchUpdateBillScenarioUsageModificationEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated group identifier for the usage modification. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchUpdateBillScenarioUsageModificationEntry& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated usage amounts for the modification. </p>
     */
    inline const Aws::Vector<UsageAmount>& GetAmounts() const{ return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    inline void SetAmounts(const Aws::Vector<UsageAmount>& value) { m_amountsHasBeenSet = true; m_amounts = value; }
    inline void SetAmounts(Aws::Vector<UsageAmount>&& value) { m_amountsHasBeenSet = true; m_amounts = std::move(value); }
    inline BatchUpdateBillScenarioUsageModificationEntry& WithAmounts(const Aws::Vector<UsageAmount>& value) { SetAmounts(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& WithAmounts(Aws::Vector<UsageAmount>&& value) { SetAmounts(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationEntry& AddAmounts(const UsageAmount& value) { m_amountsHasBeenSet = true; m_amounts.push_back(value); return *this; }
    inline BatchUpdateBillScenarioUsageModificationEntry& AddAmounts(UsageAmount&& value) { m_amountsHasBeenSet = true; m_amounts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<UsageAmount> m_amounts;
    bool m_amountsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
