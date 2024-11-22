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
    AWS_BCMPRICINGCALCULATOR_API BatchCreateWorkloadEstimateUsageRequest();

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
    inline const Aws::String& GetWorkloadEstimateId() const{ return m_workloadEstimateId; }
    inline bool WorkloadEstimateIdHasBeenSet() const { return m_workloadEstimateIdHasBeenSet; }
    inline void SetWorkloadEstimateId(const Aws::String& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = value; }
    inline void SetWorkloadEstimateId(Aws::String&& value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId = std::move(value); }
    inline void SetWorkloadEstimateId(const char* value) { m_workloadEstimateIdHasBeenSet = true; m_workloadEstimateId.assign(value); }
    inline BatchCreateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const Aws::String& value) { SetWorkloadEstimateId(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(Aws::String&& value) { SetWorkloadEstimateId(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& WithWorkloadEstimateId(const char* value) { SetWorkloadEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of usage that you want to model in the Workload estimate. </p>
     */
    inline const Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>& GetUsage() const{ return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    inline void SetUsage(const Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>& value) { m_usageHasBeenSet = true; m_usage = value; }
    inline void SetUsage(Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>&& value) { m_usageHasBeenSet = true; m_usage = std::move(value); }
    inline BatchCreateWorkloadEstimateUsageRequest& WithUsage(const Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>& value) { SetUsage(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& WithUsage(Aws::Vector<BatchCreateWorkloadEstimateUsageEntry>&& value) { SetUsage(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& AddUsage(const BatchCreateWorkloadEstimateUsageEntry& value) { m_usageHasBeenSet = true; m_usage.push_back(value); return *this; }
    inline BatchCreateWorkloadEstimateUsageRequest& AddUsage(BatchCreateWorkloadEstimateUsageEntry&& value) { m_usageHasBeenSet = true; m_usage.push_back(std::move(value)); return *this; }
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
    inline BatchCreateWorkloadEstimateUsageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline BatchCreateWorkloadEstimateUsageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadEstimateId;
    bool m_workloadEstimateIdHasBeenSet = false;

    Aws::Vector<BatchCreateWorkloadEstimateUsageEntry> m_usage;
    bool m_usageHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
