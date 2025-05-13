/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageEntry.h>
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
  class BatchCreateWorkloadEstimateUsageRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateWorkloadEstimateUsage"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ID of the Workload estimate for which you want to create the modeled
     * usage. </p>
     */
    inline const Aws::String& GetWorkloadEstimateId() const { return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    template<typename WorkloadEstimateIdT = Aws::String>
    void SetWorkloadEstimateId(WorkloadEstimateIdT&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::forward<WorkloadEstimateIdT>(value); }
    template<typename WorkloadEstimateIdT = Aws::String>
    BatchCreateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(WorkloadEstimateIdT&& value) { SetWorkloadEstimateId(std::forward<WorkloadEstimateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage that you want to model in the Workload estimate. </p>
     */
    inline const Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>>
    BatchCreateWorkloadEstimateUsageRequest& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    template<typename UsageT = BatchCreateWorkloadEstimateUsageEntry>
    BatchCreateWorkloadEstimateUsageRequest& AddUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage.emplace_back(std::forward<UsageT>(value)); return *this; }
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
    BatchCreateWorkloadEstimateUsageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadEstimateId;
    bool m_workloadEstimateIdHasBeenSet = false;

    Aws::Vector<BatchCreateWorkloadEstimateUsageEntry> m_usage;
    bool m_usageHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
