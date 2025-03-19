/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationEntry.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class BatchUpdateBillScenarioUsageModificationRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateBillScenarioUsageModification"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Bill Scenario for which you want to modify the usage lines.
     * </p>
     */
    inline const Aws::String& GetBillScenarioId() const { return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    template<typename BillScenarioIdT = Aws::String>
    void SetBillScenarioId(BillScenarioIdT&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::forward<BillScenarioIdT>(value); }
    template<typename BillScenarioIdT = Aws::String>
    BatchUpdateBillScenarioUsageModificationRequest& WithBillScenarioId(BillScenarioIdT&& value) { SetBillScenarioId(std::forward<BillScenarioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage lines that you want to update in a Bill Scenario identified by
     * the usage ID. </p>
     */
    inline const Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>& GetUsageModifications() const { return m_usageModifications; }
    inline bool UsageModificationsHasBeenSet() const { return m_usageModificationsHasBeenSet; }
    template<typename UsageModificationsT = Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>>
    void SetUsageModifications(UsageModificationsT&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications = std::forward<UsageModificationsT>(value); }
    template<typename UsageModificationsT = Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>>
    BatchUpdateBillScenarioUsageModificationRequest& WithUsageModifications(UsageModificationsT&& value) { SetUsageModifications(std::forward<UsageModificationsT>(value)); return *this;}
    template<typename UsageModificationsT = BatchUpdateBillScenarioUsageModificationEntry>
    BatchUpdateBillScenarioUsageModificationRequest& AddUsageModifications(UsageModificationsT&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications.emplace_back(std::forward<UsageModificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_billScenarioId;
    bool m_billScenarioIdHasBeenSet = false;

    Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry> m_usageModifications;
    bool m_usageModificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
