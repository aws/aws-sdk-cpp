/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateWorkloadEstimateUsageEntry.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class BatchUpdateWorkloadEstimateUsageRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateWorkloadEstimateUsage"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Workload estimate for which you want to modify the usage
     * lines. </p>
     */
    inline const Aws::String& GetWorkloadEstimateId() const{ return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    inline void SetWorkloadEstimateId(const Aws::String& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = value; }
    inline void SetWorkloadEstimateId(Aws::String&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::move(value); }
    inline void SetWorkloadEstimateId(const char* value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId.assign(value); }
    inline BatchUpdateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const Aws::String& value) { SetWorkloadEstimateId(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(Aws::String&& value) { SetWorkloadEstimateId(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const char* value) { SetWorkloadEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage line amounts and usage group that you want to update in a
     * Workload estimate identified by the usage ID. </p>
     */
    inline const Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline BatchUpdateWorkloadEstimateUsageRequest& WithUsage(const Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>& value) { SetUsage(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageRequest& WithUsage(Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>&& value) { SetUsage(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageRequest& AddUsage(const BatchUpdateWorkloadEstimateUsageEntry& value) { m_usageHasBeenSet = true; m_usage.push_back(value); return *this; }
    inline BatchUpdateWorkloadEstimateUsageRequest& AddUsage(BatchUpdateWorkloadEstimateUsageEntry&& value) { m_usageHasBeenSet = true; m_usage.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_workloadEstimateId;
    bool m_workloadEstimateIdHasBeenSet = false;

    Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry> m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
