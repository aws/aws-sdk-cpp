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
    AWS_APPLICATIONINSIGHTS_API UpdateComponentConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponentConfiguration"; }

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
    inline UpdateComponentConfigurationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateComponentConfigurationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateComponentConfigurationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool GetMonitor() const{ return m_monitor; }

    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline bool MonitorHasBeenSet() const { return m_monitorHasBeenSet; }

    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline void SetMonitor(bool value) { m_monitorHasBeenSet = true; m_monitor = value; }

    /**
     * <p>Indicates whether the application component is monitored.</p>
     */
    inline UpdateComponentConfigurationRequest& WithMonitor(bool value) { SetMonitor(value); return *this;}


    /**
     * <p>The tier of the application component.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the application component.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier of the application component.</p>
     */
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier of the application component.</p>
     */
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier of the application component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithTier(const Tier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the application component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}


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
    inline const Aws::String& GetComponentConfiguration() const{ return m_componentConfiguration; }

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
    inline bool ComponentConfigurationHasBeenSet() const { return m_componentConfigurationHasBeenSet; }

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
    inline void SetComponentConfiguration(const Aws::String& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = value; }

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
    inline void SetComponentConfiguration(Aws::String&& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = std::move(value); }

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
    inline void SetComponentConfiguration(const char* value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration.assign(value); }

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
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(const Aws::String& value) { SetComponentConfiguration(value); return *this;}

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
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(Aws::String&& value) { SetComponentConfiguration(std::move(value)); return *this;}

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
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(const char* value) { SetComponentConfiguration(value); return *this;}


    /**
     * <p> Automatically configures the component by applying the recommended
     * configurations. </p>
     */
    inline bool GetAutoConfigEnabled() const{ return m_autoConfigEnabled; }

    /**
     * <p> Automatically configures the component by applying the recommended
     * configurations. </p>
     */
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }

    /**
     * <p> Automatically configures the component by applying the recommended
     * configurations. </p>
     */
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }

    /**
     * <p> Automatically configures the component by applying the recommended
     * configurations. </p>
     */
    inline UpdateComponentConfigurationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    bool m_monitor;
    bool m_monitorHasBeenSet = false;

    Tier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_componentConfiguration;
    bool m_componentConfigurationHasBeenSet = false;

    bool m_autoConfigEnabled;
    bool m_autoConfigEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
