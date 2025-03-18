/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Tier.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class UpdateComponentConfigurationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateComponentConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponentConfiguration"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    UpdateComponentConfigurationRequest& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    UpdateComponentConfigurationRequest& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool GetMonitor() const { return m_monitor; }
    inline bool MonitorHasBeenSet() const { return m_monitorHasBeenSet; }
    inline void SetMonitor(bool value) { m_monitorHasBeenSet = true; m_monitor = value; }
    inline UpdateComponentConfigurationRequest& WithMonitor(bool value) { SetMonitor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the application component.</p>
     */
    inline Tier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(Tier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline UpdateComponentConfigurationRequest& WithTier(Tier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component. For the complete format of the component
     * configuration file, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/component-config.html">Component
     * Configuration</a>.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const { return m_componentConfiguration; }
    inline bool ComponentConfigurationHasBeenSet() const { return m_componentConfigurationHasBeenSet; }
    template<typename ComponentConfigurationT = Aws::String>
    void SetComponentConfiguration(ComponentConfigurationT&& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = std::forward<ComponentConfigurationT>(value); }
    template<typename ComponentConfigurationT = Aws::String>
    UpdateComponentConfigurationRequest& WithComponentConfiguration(ComponentConfigurationT&& value) { SetComponentConfiguration(std::forward<ComponentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Automatically configures the component by applying the recommended
     * configurations. </p>
     */
    inline bool GetAutoConfigEnabled() const { return m_autoConfigEnabled; }
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }
    inline UpdateComponentConfigurationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    bool m_monitor{false};
    bool m_monitorHasBeenSet = false;

    Tier m_tier{Tier::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_componentConfiguration;
    bool m_componentConfigurationHasBeenSet = false;

    bool m_autoConfigEnabled{false};
    bool m_autoConfigEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
