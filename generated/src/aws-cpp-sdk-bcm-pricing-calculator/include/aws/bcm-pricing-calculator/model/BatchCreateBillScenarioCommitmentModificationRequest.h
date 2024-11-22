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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateBillScenarioCommitmentModificationRequest();

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
    inline const Aws::String& GetBillScenarioId() const{ return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    inline void SetBillScenarioId(const Aws::String& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = value; }
    inline void SetBillScenarioId(Aws::String&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::move(value); }
    inline void SetBillScenarioId(const char* value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithBillScenarioId(const Aws::String& value) { SetBillScenarioId(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithBillScenarioId(Aws::String&& value) { SetBillScenarioId(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithBillScenarioId(const char* value) { SetBillScenarioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of commitments that you want to model in the Bill Scenario. </p>
     */
    inline const Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>& GetCommitmentModifications() const{ return m_commitmentModifications; }
    inline bool CommitmentModificationsHasBeenSet() const { return m_commitmentModificationsHasBeenSet; }
    inline void SetCommitmentModifications(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications = value; }
    inline void SetCommitmentModifications(Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>&& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications = std::move(value); }
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithCommitmentModifications(const Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>& value) { SetCommitmentModifications(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithCommitmentModifications(Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry>&& value) { SetCommitmentModifications(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& AddCommitmentModifications(const BatchCreateBillScenarioCommitmentModificationEntry& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications.push_back(value); return *this; }
    inline BatchCreateBillScenarioCommitmentModificationRequest& AddCommitmentModifications(BatchCreateBillScenarioCommitmentModificationEntry&& value) { m_commitmentModificationsHasBeenSet = true; m_commitmentModifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline BatchCreateBillScenarioCommitmentModificationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_billScenarioId;
    bool m_billScenarioIdHasBeenSet = false;

    Aws::Vector<BatchCreateBillScenarioCommitmentModificationEntry> m_commitmentModifications;
    bool m_commitmentModificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
