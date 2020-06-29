/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p>Describes the status of the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ApplicationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONINSIGHTS_API ApplicationInfo
  {
  public:
    ApplicationInfo();
    ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline ApplicationInfo& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p>The lifecycle of the application. </p>
     */
    inline const Aws::String& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(const Aws::String& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(Aws::String&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline void SetLifeCycle(const char* value) { m_lifeCycleHasBeenSet = true; m_lifeCycle.assign(value); }

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(const Aws::String& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(Aws::String&& value) { SetLifeCycle(std::move(value)); return *this;}

    /**
     * <p>The lifecycle of the application. </p>
     */
    inline ApplicationInfo& WithLifeCycle(const char* value) { SetLifeCycle(value); return *this;}


    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const{ return m_opsItemSNSTopicArn; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline void SetOpsItemSNSTopicArn(const Aws::String& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = value; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline void SetOpsItemSNSTopicArn(Aws::String&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::move(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline void SetOpsItemSNSTopicArn(const char* value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn.assign(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline ApplicationInfo& WithOpsItemSNSTopicArn(const Aws::String& value) { SetOpsItemSNSTopicArn(value); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline ApplicationInfo& WithOpsItemSNSTopicArn(Aws::String&& value) { SetOpsItemSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline ApplicationInfo& WithOpsItemSNSTopicArn(const char* value) { SetOpsItemSNSTopicArn(value); return *this;}


    /**
     * <p> Indicates whether Application Insights will create opsItems for any problem
     * detected by Application Insights for an application. </p>
     */
    inline bool GetOpsCenterEnabled() const{ return m_opsCenterEnabled; }

    /**
     * <p> Indicates whether Application Insights will create opsItems for any problem
     * detected by Application Insights for an application. </p>
     */
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }

    /**
     * <p> Indicates whether Application Insights will create opsItems for any problem
     * detected by Application Insights for an application. </p>
     */
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }

    /**
     * <p> Indicates whether Application Insights will create opsItems for any problem
     * detected by Application Insights for an application. </p>
     */
    inline ApplicationInfo& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}


    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline bool GetCWEMonitorEnabled() const{ return m_cWEMonitorEnabled; }

    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline bool CWEMonitorEnabledHasBeenSet() const { return m_cWEMonitorEnabledHasBeenSet; }

    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline void SetCWEMonitorEnabled(bool value) { m_cWEMonitorEnabledHasBeenSet = true; m_cWEMonitorEnabled = value; }

    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline ApplicationInfo& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}


    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline const Aws::String& GetRemarks() const{ return m_remarks; }

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline bool RemarksHasBeenSet() const { return m_remarksHasBeenSet; }

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline void SetRemarks(const Aws::String& value) { m_remarksHasBeenSet = true; m_remarks = value; }

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline void SetRemarks(Aws::String&& value) { m_remarksHasBeenSet = true; m_remarks = std::move(value); }

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline void SetRemarks(const char* value) { m_remarksHasBeenSet = true; m_remarks.assign(value); }

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline ApplicationInfo& WithRemarks(const Aws::String& value) { SetRemarks(value); return *this;}

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline ApplicationInfo& WithRemarks(Aws::String&& value) { SetRemarks(std::move(value)); return *this;}

    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline ApplicationInfo& WithRemarks(const char* value) { SetRemarks(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet;

    Aws::String m_lifeCycle;
    bool m_lifeCycleHasBeenSet;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet;

    bool m_opsCenterEnabled;
    bool m_opsCenterEnabledHasBeenSet;

    bool m_cWEMonitorEnabled;
    bool m_cWEMonitorEnabledHasBeenSet;

    Aws::String m_remarks;
    bool m_remarksHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
