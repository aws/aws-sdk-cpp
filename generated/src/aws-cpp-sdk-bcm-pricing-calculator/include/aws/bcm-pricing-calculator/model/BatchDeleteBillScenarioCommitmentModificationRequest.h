/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class BatchDeleteBillScenarioCommitmentModificationRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteBillScenarioCommitmentModificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteBillScenarioCommitmentModification"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Bill Scenario for which you want to delete the modeled
     * commitment. </p>
     */
    inline const Aws::String& GetBillScenarioId() const{ return m_billScenarioId; }
    inline bool BillScenarioIdHasBeenSet() const { return m_billScenarioIdHasBeenSet; }
    inline void SetBillScenarioId(const Aws::String& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = value; }
    inline void SetBillScenarioId(Aws::String&& value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId = std::move(value); }
    inline void SetBillScenarioId(const char* value) { m_billScenarioIdHasBeenSet = true; m_billScenarioId.assign(value); }
    inline BatchDeleteBillScenarioCommitmentModificationRequest& WithBillScenarioId(const Aws::String& value) { SetBillScenarioId(value); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationRequest& WithBillScenarioId(Aws::String&& value) { SetBillScenarioId(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationRequest& WithBillScenarioId(const char* value) { SetBillScenarioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of commitments that you want to delete from the Bill Scenario. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }
    inline BatchDeleteBillScenarioCommitmentModificationRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline BatchDeleteBillScenarioCommitmentModificationRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    inline BatchDeleteBillScenarioCommitmentModificationRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }
    inline BatchDeleteBillScenarioCommitmentModificationRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_billScenarioId;
    bool m_billScenarioIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
