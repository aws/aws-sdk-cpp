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
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateBillScenarioUsageModificationRequest();

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
    inline const Aws::String& GetBillScenarioId() const{ return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    inline void SetBillScenarioId(const Aws::String& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = value; }
    inline void SetBillScenarioId(Aws::String&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::move(value); }
    inline void SetBillScenarioId(const char* value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId.assign(value); }
    inline BatchUpdateBillScenarioUsageModificationRequest& WithBillScenarioId(const Aws::String& value) { SetBillScenarioId(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationRequest& WithBillScenarioId(Aws::String&& value) { SetBillScenarioId(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationRequest& WithBillScenarioId(const char* value) { SetBillScenarioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage lines that you want to update in a Bill Scenario identified by
     * the usage ID. </p>
     */
    inline const Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>& GetUsageModifications() const{ return m_usageModifications; }
    inline bool UsageModificationsHasBeenSet() const { return m_usageModificationsHasBeenSet; }
    inline void SetUsageModifications(const Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>& value) { m_usageModificationsHasBeenSet = true; m_usageModifications = value; }
    inline void SetUsageModifications(Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications = std::move(value); }
    inline BatchUpdateBillScenarioUsageModificationRequest& WithUsageModifications(const Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>& value) { SetUsageModifications(value); return *this;}
    inline BatchUpdateBillScenarioUsageModificationRequest& WithUsageModifications(Aws::Vector<BatchUpdateBillScenarioUsageModificationEntry>&& value) { SetUsageModifications(std::move(value)); return *this;}
    inline BatchUpdateBillScenarioUsageModificationRequest& AddUsageModifications(const BatchUpdateBillScenarioUsageModificationEntry& value) { m_usageModificationsHasBeenSet = true; m_usageModifications.push_back(value); return *this; }
    inline BatchUpdateBillScenarioUsageModificationRequest& AddUsageModifications(BatchUpdateBillScenarioUsageModificationEntry&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications.push_back(std::move(value)); return *this; }
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
