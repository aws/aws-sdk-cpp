/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationEntry.h>
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
  class BatchCreateBillScenarioCommitmentModificationRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateBillScenarioCommitmentModification"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Bill Scenario for which you want to create the modeled
     * commitment. </p>
     */
    inline const Aws::String& GetBillScenarioId() const { return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    template<typename BillScenarioIdT = Aws::String>
    void SetBillScenarioId(BillScenarioIdT&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::forward<BillScenarioIdT>(value); }
    template<typename BillScenarioIdT = Aws::String>
    BatchCreateBillScenarioCommitmentModificationRequest& WithBillScenarioId(BillScenarioIdT&& value) { SetBillScenarioId(std::forward<BillScenarioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of commitments that you want to model in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>& GetCommitmentModifications() const { return m_commitmentModifications; }
    inline bool CommitmentModificationsHasBeenSet() const { return m_commitmentModificationsHasBeenSet; }
    template<typename CommitmentModificationsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>>
    void SetCommitmentModifications(CommitmentModificationsT&& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications = std::forward<CommitmentModificationsT>(value); }
    template<typename CommitmentModificationsT = Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>>
    BatchCreateBillScenarioCommitmentModificationRequest& WithCommitmentModifications(CommitmentModificationsT&& value) { SetCommitmentModifications(std::forward<CommitmentModificationsT>(value)); return *this;}
    template<typename CommitmentModificationsT = BatchCreateBillScenarioCommitmentModificationEntry>
    BatchCreateBillScenarioCommitmentModificationRequest& AddCommitmentModifications(CommitmentModificationsT&& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications.emplace_back(std::forward<CommitmentModificationsT>(value)); return *this; }
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
    BatchCreateBillScenarioCommitmentModificationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billScenarioId;
    bool m_billScenarioIdHasBeenSet = false;

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry> m_commitmentModifications;
    bool m_commitmentModificationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
