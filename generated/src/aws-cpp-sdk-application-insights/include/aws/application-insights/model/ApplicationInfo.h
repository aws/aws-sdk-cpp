/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/DiscoveryType.h>
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
  class ApplicationInfo
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ApplicationInfo() = default;
    AWS_APPLICATIONINSIGHTS_API ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the application.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ApplicationInfo& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource group used for the application.</p>
     */
    inline const Aws::String& GetResourceGroupName() const { return m_resourceGroupName; }
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }
    template<typename ResourceGroupNameT = Aws::String>
    void SetResourceGroupName(ResourceGroupNameT&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::forward<ResourceGroupNameT>(value); }
    template<typename ResourceGroupNameT = Aws::String>
    ApplicationInfo& WithResourceGroupName(ResourceGroupNameT&& value) { SetResourceGroupName(std::forward<ResourceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle of the application. </p>
     */
    inline const Aws::String& GetLifeCycle() const { return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    template<typename LifeCycleT = Aws::String>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = Aws::String>
    ApplicationInfo& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItems to receive SNS notifications for opsItem updates. </p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const { return m_opsItemSNSTopicArn; }
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }
    template<typename OpsItemSNSTopicArnT = Aws::String>
    void SetOpsItemSNSTopicArn(OpsItemSNSTopicArnT&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::forward<OpsItemSNSTopicArnT>(value); }
    template<typename OpsItemSNSTopicArnT = Aws::String>
    ApplicationInfo& WithOpsItemSNSTopicArn(OpsItemSNSTopicArnT&& value) { SetOpsItemSNSTopicArn(std::forward<OpsItemSNSTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS topic ARN that is associated with SNS notifications for updates or
     * issues. </p>
     */
    inline const Aws::String& GetSNSNotificationArn() const { return m_sNSNotificationArn; }
    inline bool SNSNotificationArnHasBeenSet() const { return m_sNSNotificationArnHasBeenSet; }
    template<typename SNSNotificationArnT = Aws::String>
    void SetSNSNotificationArn(SNSNotificationArnT&& value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn = std::forward<SNSNotificationArnT>(value); }
    template<typename SNSNotificationArnT = Aws::String>
    ApplicationInfo& WithSNSNotificationArn(SNSNotificationArnT&& value) { SetSNSNotificationArn(std::forward<SNSNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Application Insights will create opsItems for any problem
     * detected by Application Insights for an application. </p>
     */
    inline bool GetOpsCenterEnabled() const { return m_opsCenterEnabled; }
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }
    inline ApplicationInfo& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}
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
    inline ApplicationInfo& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issues on the user side that block Application Insights from successfully
     * monitoring an application. Example remarks include:</p> <ul> <li>
     * <p>“Configuring application, detected 1 Errors, 3 Warnings”</p> </li> <li>
     * <p>“Configuring application, detected 1 Unconfigured Components”</p> </li> </ul>
     */
    inline const Aws::String& GetRemarks() const { return m_remarks; }
    inline bool RemarksHasBeenSet() const { return m_remarksHasBeenSet; }
    template<typename RemarksT = Aws::String>
    void SetRemarks(RemarksT&& value) { m_remarksHasBeenSet = true; m_remarks = std::forward<RemarksT>(value); }
    template<typename RemarksT = Aws::String>
    ApplicationInfo& WithRemarks(RemarksT&& value) { SetRemarks(std::forward<RemarksT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether auto-configuration is turned on for this application. </p>
     */
    inline bool GetAutoConfigEnabled() const { return m_autoConfigEnabled; }
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }
    inline ApplicationInfo& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The method used by Application Insights to onboard your resources. </p>
     */
    inline DiscoveryType GetDiscoveryType() const { return m_discoveryType; }
    inline bool DiscoveryTypeHasBeenSet() const { return m_discoveryTypeHasBeenSet; }
    inline void SetDiscoveryType(DiscoveryType value) { m_discoveryTypeHasBeenSet = true; m_discoveryType = value; }
    inline ApplicationInfo& WithDiscoveryType(DiscoveryType value) { SetDiscoveryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, the managed policies for SSM and CW will be attached to the
     * instance roles if they are missing.</p>
     */
    inline bool GetAttachMissingPermission() const { return m_attachMissingPermission; }
    inline bool AttachMissingPermissionHasBeenSet() const { return m_attachMissingPermissionHasBeenSet; }
    inline void SetAttachMissingPermission(bool value) { m_attachMissingPermissionHasBeenSet = true; m_attachMissingPermission = value; }
    inline ApplicationInfo& WithAttachMissingPermission(bool value) { SetAttachMissingPermission(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet = false;

    Aws::String m_sNSNotificationArn;
    bool m_sNSNotificationArnHasBeenSet = false;

    bool m_opsCenterEnabled{false};
    bool m_opsCenterEnabledHasBeenSet = false;

    bool m_cWEMonitorEnabled{false};
    bool m_cWEMonitorEnabledHasBeenSet = false;

    Aws::String m_remarks;
    bool m_remarksHasBeenSet = false;

    bool m_autoConfigEnabled{false};
    bool m_autoConfigEnabledHasBeenSet = false;

    DiscoveryType m_discoveryType{DiscoveryType::NOT_SET};
    bool m_discoveryTypeHasBeenSet = false;

    bool m_attachMissingPermission{false};
    bool m_attachMissingPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
