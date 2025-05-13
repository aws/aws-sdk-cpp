/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioUsageModificationEntry.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class BatchCreateBillScenarioUsageModificationRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioUsageModificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateBillScenarioUsageModification"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Bill Scenario for which you want to create the modeled usage.
     * </p>
     */
    inline const Aws::String& GetBillScenarioId() const { return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    template<typename BillScenarioIdT = Aws::String>
    void SetBillScenarioId(BillScenarioIdT&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::forward<BillScenarioIdT>(value); }
    template<typename BillScenarioIdT = Aws::String>
    BatchCreateBillScenarioUsageModificationRequest& WithBillScenarioId(BillScenarioIdT&& value) { SetBillScenarioId(std::forward<BillScenarioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage that you want to model in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioUsageModificationEntry>& GetUsageModifications() const { return m_usageModifications; }
    inline bool UsageModificationsHasBeenSet() const { return m_usageModificationsHasBeenSet; }
    template<typename UsageModificationsT = Aws::Vector<BatchCreateBillScenarioUsageModificationEntry>>
    void SetUsageModifications(UsageModificationsT&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications = std::forward<UsageModificationsT>(value); }
    template<typename UsageModificationsT = Aws::Vector<BatchCreateBillScenarioUsageModificationEntry>>
    BatchCreateBillScenarioUsageModificationRequest& WithUsageModifications(UsageModificationsT&& value) { SetUsageModifications(std::forward<UsageModificationsT>(value)); return *this;}
    template<typename UsageModificationsT = BatchCreateBillScenarioUsageModificationEntry>
    BatchCreateBillScenarioUsageModificationRequest& AddUsageModifications(UsageModificationsT&& value) { m_usageModificationsHasBeenSet = true; m_usageModifications.emplace_back(std::forward<UsageModificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    BatchCreateBillScenarioUsageModificationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billScenarioId;
    bool m_billScenarioIdHasBeenSet = false;

    Aws::Vector<BatchCreateBillScenarioUsageModificationEntry> m_usageModifications;
    bool m_usageModificationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
