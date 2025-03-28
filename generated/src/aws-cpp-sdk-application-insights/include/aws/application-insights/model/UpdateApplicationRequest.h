﻿/**
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
    AWS_APPLICATIONINSIGHTS_API UpdateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

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
    UpdateApplicationRequest& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool GetOpsCenterEnabled() const { return m_opsCenterEnabled; }
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }
    inline UpdateApplicationRequest& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline bool GetCWEMonitorEnabled() const { return m_cWEMonitorEnabled; }
    inline bool CWEMonitorEnabledHasBeenSet() const { return m_cWEMonitorEnabledHasBeenSet; }
    inline void SetCWEMonitorEnabled(bool value) { m_cWEMonitorEnabledHasBeenSet = true; m_cWEMonitorEnabled = value; }
    inline UpdateApplicationRequest& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the
     * opsItem.</p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const { return m_opsItemSNSTopicArn; }
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }
    template<typename OpsItemSNSTopicArnT = Aws::String>
    void SetOpsItemSNSTopicArn(OpsItemSNSTopicArnT&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::forward<OpsItemSNSTopicArnT>(value); }
    template<typename OpsItemSNSTopicArnT = Aws::String>
    UpdateApplicationRequest& WithOpsItemSNSTopicArn(OpsItemSNSTopicArnT&& value) { SetOpsItemSNSTopicArn(std::forward<OpsItemSNSTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS topic ARN. Allows you to receive SNS notifications for updates and
     * issues with an application. </p>
     */
    inline const Aws::String& GetSNSNotificationArn() const { return m_sNSNotificationArn; }
    inline bool SNSNotificationArnHasBeenSet() const { return m_sNSNotificationArnHasBeenSet; }
    template<typename SNSNotificationArnT = Aws::String>
    void SetSNSNotificationArn(SNSNotificationArnT&& value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn = std::forward<SNSNotificationArnT>(value); }
    template<typename SNSNotificationArnT = Aws::String>
    UpdateApplicationRequest& WithSNSNotificationArn(SNSNotificationArnT&& value) { SetSNSNotificationArn(std::forward<SNSNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Disassociates the SNS topic from the opsItem created for detected
     * problems.</p>
     */
    inline bool GetRemoveSNSTopic() const { return m_removeSNSTopic; }
    inline bool RemoveSNSTopicHasBeenSet() const { return m_removeSNSTopicHasBeenSet; }
    inline void SetRemoveSNSTopic(bool value) { m_removeSNSTopicHasBeenSet = true; m_removeSNSTopic = value; }
    inline UpdateApplicationRequest& WithRemoveSNSTopic(bool value) { SetRemoveSNSTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Turns auto-configuration on or off. </p>
     */
    inline bool GetAutoConfigEnabled() const { return m_autoConfigEnabled; }
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }
    inline UpdateApplicationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, the managed policies for SSM and CW will be attached to the
     * instance roles if they are missing.</p>
     */
    inline bool GetAttachMissingPermission() const { return m_attachMissingPermission; }
    inline bool AttachMissingPermissionHasBeenSet() const { return m_attachMissingPermissionHasBeenSet; }
    inline void SetAttachMissingPermission(bool value) { m_attachMissingPermissionHasBeenSet = true; m_attachMissingPermission = value; }
    inline UpdateApplicationRequest& WithAttachMissingPermission(bool value) { SetAttachMissingPermission(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    bool m_opsCenterEnabled{false};
    bool m_opsCenterEnabledHasBeenSet = false;

    bool m_cWEMonitorEnabled{false};
    bool m_cWEMonitorEnabledHasBeenSet = false;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet = false;

    Aws::String m_sNSNotificationArn;
    bool m_sNSNotificationArnHasBeenSet = false;

    bool m_removeSNSTopic{false};
    bool m_removeSNSTopicHasBeenSet = false;

    bool m_autoConfigEnabled{false};
    bool m_autoConfigEnabledHasBeenSet = false;

    bool m_attachMissingPermission{false};
    bool m_attachMissingPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
