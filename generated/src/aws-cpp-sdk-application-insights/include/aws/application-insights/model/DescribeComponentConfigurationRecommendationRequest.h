/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Tier.h>
#include <aws/application-insights/model/RecommendationType.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class DescribeComponentConfigurationRecommendationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeComponentConfigurationRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComponentConfigurationRecommendation"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }
    inline DescribeComponentConfigurationRecommendationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline DescribeComponentConfigurationRecommendationRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the application component.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline DescribeComponentConfigurationRecommendationRequest& WithTier(const Tier& value) { SetTier(value); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload. The name of the workload is required when the tier
     * of the application component is <code>SAP_ASE_SINGLE_NODE</code> or
     * <code>SAP_ASE_HIGH_AVAILABILITY</code>.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline DescribeComponentConfigurationRecommendationRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended configuration type.</p>
     */
    inline const RecommendationType& GetRecommendationType() const{ return m_recommendationType; }
    inline bool RecommendationTypeHasBeenSet() const { return m_recommendationTypeHasBeenSet; }
    inline void SetRecommendationType(const RecommendationType& value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = value; }
    inline void SetRecommendationType(RecommendationType&& value) { m_recommendationTypeHasBeenSet = true; m_recommendationType = std::move(value); }
    inline DescribeComponentConfigurationRecommendationRequest& WithRecommendationType(const RecommendationType& value) { SetRecommendationType(value); return *this;}
    inline DescribeComponentConfigurationRecommendationRequest& WithRecommendationType(RecommendationType&& value) { SetRecommendationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Tier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    RecommendationType m_recommendationType;
    bool m_recommendationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
