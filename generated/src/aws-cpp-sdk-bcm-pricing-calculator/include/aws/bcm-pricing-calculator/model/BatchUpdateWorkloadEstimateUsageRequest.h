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
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageRequest() = default;

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
    inline const Aws::String& GetWorkloadEstimateId() const { return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    template<typename WorkloadEstimateIdT = Aws::String>
    void SetWorkloadEstimateId(WorkloadEstimateIdT&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::forward<WorkloadEstimateIdT>(value); }
    template<typename WorkloadEstimateIdT = Aws::String>
    BatchUpdateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(WorkloadEstimateIdT&& value) { SetWorkloadEstimateId(std::forward<WorkloadEstimateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage line amounts and usage group that you want to update in a
     * Workload estimate identified by the usage ID. </p>
     */
    inline const Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Aws::Vector<BatchUpdateWorkloadEstimateUsageEntry>>
    BatchUpdateWorkloadEstimateUsageRequest& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    template<typename UsageT = BatchUpdateWorkloadEstimateUsageEntry>
    BatchUpdateWorkloadEstimateUsageRequest& AddUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage.emplace_back(std::forward<UsageT>(value)); return *this; }
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
