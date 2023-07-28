/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/WorkloadConfiguration.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class UpdateWorkloadRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateWorkloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkload"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateWorkloadRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateWorkloadRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateWorkloadRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p> The name of the component. </p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p> The name of the component. </p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p> The name of the component. </p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p> The name of the component. </p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p> The name of the component. </p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p> The name of the component. </p>
     */
    inline UpdateWorkloadRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p> The name of the component. </p>
     */
    inline UpdateWorkloadRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p> The name of the component. </p>
     */
    inline UpdateWorkloadRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The ID of the workload.</p>
     */
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    /**
     * <p>The ID of the workload.</p>
     */
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    /**
     * <p>The ID of the workload.</p>
     */
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    /**
     * <p>The ID of the workload.</p>
     */
    inline UpdateWorkloadRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    /**
     * <p>The ID of the workload.</p>
     */
    inline UpdateWorkloadRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workload.</p>
     */
    inline UpdateWorkloadRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline const WorkloadConfiguration& GetWorkloadConfiguration() const{ return m_workloadConfiguration; }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline bool WorkloadConfigurationHasBeenSet() const { return m_workloadConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetWorkloadConfiguration(const WorkloadConfiguration& value) { m_workloadConfigurationHasBeenSet = true; m_workloadConfiguration = value; }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline void SetWorkloadConfiguration(WorkloadConfiguration&& value) { m_workloadConfigurationHasBeenSet = true; m_workloadConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline UpdateWorkloadRequest& WithWorkloadConfiguration(const WorkloadConfiguration& value) { SetWorkloadConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the workload. The value is the escaped JSON of
     * the configuration.</p>
     */
    inline UpdateWorkloadRequest& WithWorkloadConfiguration(WorkloadConfiguration&& value) { SetWorkloadConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    WorkloadConfiguration m_workloadConfiguration;
    bool m_workloadConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
