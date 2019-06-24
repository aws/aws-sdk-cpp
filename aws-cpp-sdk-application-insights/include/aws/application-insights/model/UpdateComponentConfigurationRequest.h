/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONINSIGHTS_API UpdateComponentConfigurationRequest : public ApplicationInsightsRequest
  {
  public:
    UpdateComponentConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComponentConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline const Aws::String& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline void SetTier(const Aws::String& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline void SetTier(Aws::String&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline void SetTier(const char* value) { m_tierHasBeenSet = true; m_tier.assign(value); }

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline UpdateComponentConfigurationRequest& WithTier(const Aws::String& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline UpdateComponentConfigurationRequest& WithTier(Aws::String&& value) { SetTier(std::move(value)); return *this;}

    /**
     * <p>The tier of the application component. Supported tiers include
     * <code>DOT_NET_WORKER</code>, <code>DOT_NET_WEB_TIER</code>,
     * <code>SQL_SERVER</code>, and <code>DEFAULT</code>.</p>
     */
    inline UpdateComponentConfigurationRequest& WithTier(const char* value) { SetTier(value); return *this;}


    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline const Aws::String& GetComponentConfiguration() const{ return m_componentConfiguration; }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline bool ComponentConfigurationHasBeenSet() const { return m_componentConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline void SetComponentConfiguration(const Aws::String& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = value; }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline void SetComponentConfiguration(Aws::String&& value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline void SetComponentConfiguration(const char* value) { m_componentConfigurationHasBeenSet = true; m_componentConfiguration.assign(value); }

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(const Aws::String& value) { SetComponentConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(Aws::String&& value) { SetComponentConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration settings of the component. The value is the escaped JSON of
     * the configuration. For more information about the JSON format, see <a
     * href="https://docs.aws.amazon.com/sdk-for-javascript/v2/developer-guide/working-with-json.html">Working
     * with JSON</a>. You can send a request to
     * <code>DescribeComponentConfigurationRecommendation</code> to see the recommended
     * configuration for a component.</p>
     */
    inline UpdateComponentConfigurationRequest& WithComponentConfiguration(const char* value) { SetComponentConfiguration(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet;

    bool m_monitor;
    bool m_monitorHasBeenSet;

    Aws::String m_tier;
    bool m_tierHasBeenSet;

    Aws::String m_componentConfiguration;
    bool m_componentConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
