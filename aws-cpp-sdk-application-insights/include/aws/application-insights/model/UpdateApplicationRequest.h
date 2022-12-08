/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateApplicationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

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
    inline UpdateApplicationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateApplicationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline UpdateApplicationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool GetOpsCenterEnabled() const{ return m_opsCenterEnabled; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }

    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline UpdateApplicationRequest& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}


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
    inline UpdateApplicationRequest& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}


    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const{ return m_opsItemSNSTopicArn; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline void SetOpsItemSNSTopicArn(const Aws::String& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = value; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline void SetOpsItemSNSTopicArn(Aws::String&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::move(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline void SetOpsItemSNSTopicArn(const char* value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn.assign(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline UpdateApplicationRequest& WithOpsItemSNSTopicArn(const Aws::String& value) { SetOpsItemSNSTopicArn(value); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline UpdateApplicationRequest& WithOpsItemSNSTopicArn(Aws::String&& value) { SetOpsItemSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline UpdateApplicationRequest& WithOpsItemSNSTopicArn(const char* value) { SetOpsItemSNSTopicArn(value); return *this;}


    /**
     * <p> Disassociates the SNS topic from the opsItem created for detected
     * problems.</p>
     */
    inline bool GetRemoveSNSTopic() const{ return m_removeSNSTopic; }

    /**
     * <p> Disassociates the SNS topic from the opsItem created for detected
     * problems.</p>
     */
    inline bool RemoveSNSTopicHasBeenSet() const { return m_removeSNSTopicHasBeenSet; }

    /**
     * <p> Disassociates the SNS topic from the opsItem created for detected
     * problems.</p>
     */
    inline void SetRemoveSNSTopic(bool value) { m_removeSNSTopicHasBeenSet = true; m_removeSNSTopic = value; }

    /**
     * <p> Disassociates the SNS topic from the opsItem created for detected
     * problems.</p>
     */
    inline UpdateApplicationRequest& WithRemoveSNSTopic(bool value) { SetRemoveSNSTopic(value); return *this;}


    /**
     * <p> Turns auto-configuration on or off. </p>
     */
    inline bool GetAutoConfigEnabled() const{ return m_autoConfigEnabled; }

    /**
     * <p> Turns auto-configuration on or off. </p>
     */
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }

    /**
     * <p> Turns auto-configuration on or off. </p>
     */
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }

    /**
     * <p> Turns auto-configuration on or off. </p>
     */
    inline UpdateApplicationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    bool m_opsCenterEnabled;
    bool m_opsCenterEnabledHasBeenSet = false;

    bool m_cWEMonitorEnabled;
    bool m_cWEMonitorEnabledHasBeenSet = false;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet = false;

    bool m_removeSNSTopic;
    bool m_removeSNSTopicHasBeenSet = false;

    bool m_autoConfigEnabled;
    bool m_autoConfigEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
