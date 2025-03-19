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
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry() = default;
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the usage modification to update. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BatchUpdateBillScenarioUsageModificationEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated group identifier for the usage modification. </p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    BatchUpdateBillScenarioUsageModificationEntry& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated usage amounts for the modification. </p>
     */
    inline const Aws::Vector<UsageAmount>& GetAmounts() const { return m_amounts; }
    inline bool AmountsHasBeenSet() const { return m_amountsHasBeenSet; }
    template<typename AmountsT = Aws::Vector<UsageAmount>>
    void SetAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts = std::forward<AmountsT>(value); }
    template<typename AmountsT = Aws::Vector<UsageAmount>>
    BatchUpdateBillScenarioUsageModificationEntry& WithAmounts(AmountsT&& value) { SetAmounts(std::forward<AmountsT>(value)); return *this;}
    template<typename AmountsT = UsageAmount>
    BatchUpdateBillScenarioUsageModificationEntry& AddAmounts(AmountsT&& value) { m_amountsHasBeenSet = true; m_amounts.emplace_back(std::forward<AmountsT>(value)); return *this; }
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
