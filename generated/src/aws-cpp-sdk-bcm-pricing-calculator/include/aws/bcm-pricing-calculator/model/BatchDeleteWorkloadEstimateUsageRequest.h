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
  class BatchDeleteWorkloadEstimateUsageRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchDeleteWorkloadEstimateUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteWorkloadEstimateUsage"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Workload estimate for which you want to delete the modeled
     * usage. </p>
     */
    inline const Aws::String& GetWorkloadEstimateId() const{ return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    inline void SetWorkloadEstimateId(const Aws::String& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = value; }
    inline void SetWorkloadEstimateId(Aws::String&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::move(value); }
    inline void SetWorkloadEstimateId(const char* value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId.assign(value); }
    inline BatchDeleteWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const Aws::String& value) { SetWorkloadEstimateId(value); return *this;}
    inline BatchDeleteWorkloadEstimateUsageRequest& WithWorkloadEstimateId(Aws::String&& value) { SetWorkloadEstimateId(std::move(value)); return *this;}
    inline BatchDeleteWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const char* value) { SetWorkloadEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage that you want to delete from the Workload estimate. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }
    inline BatchDeleteWorkloadEstimateUsageRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline BatchDeleteWorkloadEstimateUsageRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline BatchDeleteWorkloadEstimateUsageRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    inline BatchDeleteWorkloadEstimateUsageRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }
    inline BatchDeleteWorkloadEstimateUsageRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_workloadEstimateId;
    bool m_workloadEstimateIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
