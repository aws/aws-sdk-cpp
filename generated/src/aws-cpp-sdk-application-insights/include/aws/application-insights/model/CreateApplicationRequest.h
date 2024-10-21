/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-insights/model/GroupingType.h>
#include <aws/application-insights/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

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
    inline CreateApplicationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}
    inline CreateApplicationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> When set to <code>true</code>, creates opsItems for any problems detected on
     * an application. </p>
     */
    inline bool GetOpsCenterEnabled() const{ return m_opsCenterEnabled; }
    inline bool OpsCenterEnabledHasBeenSet() const { return m_opsCenterEnabledHasBeenSet; }
    inline void SetOpsCenterEnabled(bool value) { m_opsCenterEnabledHasBeenSet = true; m_opsCenterEnabled = value; }
    inline CreateApplicationRequest& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Application Insights can listen to CloudWatch events for
     * the application resources, such as <code>instance terminated</code>,
     * <code>failed deployment</code>, and others. </p>
     */
    inline bool GetCWEMonitorEnabled() const{ return m_cWEMonitorEnabled; }
    inline bool CWEMonitorEnabledHasBeenSet() const { return m_cWEMonitorEnabledHasBeenSet; }
    inline void SetCWEMonitorEnabled(bool value) { m_cWEMonitorEnabledHasBeenSet = true; m_cWEMonitorEnabled = value; }
    inline CreateApplicationRequest& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const{ return m_opsItemSNSTopicArn; }
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }
    inline void SetOpsItemSNSTopicArn(const Aws::String& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = value; }
    inline void SetOpsItemSNSTopicArn(Aws::String&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::move(value); }
    inline void SetOpsItemSNSTopicArn(const char* value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn.assign(value); }
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const Aws::String& value) { SetOpsItemSNSTopicArn(value); return *this;}
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(Aws::String&& value) { SetOpsItemSNSTopicArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const char* value) { SetOpsItemSNSTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SNS notification topic ARN. </p>
     */
    inline const Aws::String& GetSNSNotificationArn() const{ return m_sNSNotificationArn; }
    inline bool SNSNotificationArnHasBeenSet() const { return m_sNSNotificationArnHasBeenSet; }
    inline void SetSNSNotificationArn(const Aws::String& value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn = value; }
    inline void SetSNSNotificationArn(Aws::String&& value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn = std::move(value); }
    inline void SetSNSNotificationArn(const char* value) { m_sNSNotificationArnHasBeenSet = true; m_sNSNotificationArn.assign(value); }
    inline CreateApplicationRequest& WithSNSNotificationArn(const Aws::String& value) { SetSNSNotificationArn(value); return *this;}
    inline CreateApplicationRequest& WithSNSNotificationArn(Aws::String&& value) { SetSNSNotificationArn(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithSNSNotificationArn(const char* value) { SetSNSNotificationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether Application Insights automatically configures unmonitored
     * resources in the resource group. </p>
     */
    inline bool GetAutoConfigEnabled() const{ return m_autoConfigEnabled; }
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }
    inline CreateApplicationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configures all of the resources in the resource group by applying the
     * recommended configurations. </p>
     */
    inline bool GetAutoCreate() const{ return m_autoCreate; }
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }
    inline CreateApplicationRequest& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline const GroupingType& GetGroupingType() const{ return m_groupingType; }
    inline bool GroupingTypeHasBeenSet() const { return m_groupingTypeHasBeenSet; }
    inline void SetGroupingType(const GroupingType& value) { m_groupingTypeHasBeenSet = true; m_groupingType = value; }
    inline void SetGroupingType(GroupingType&& value) { m_groupingTypeHasBeenSet = true; m_groupingType = std::move(value); }
    inline CreateApplicationRequest& WithGroupingType(const GroupingType& value) { SetGroupingType(value); return *this;}
    inline CreateApplicationRequest& WithGroupingType(GroupingType&& value) { SetGroupingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, the managed policies for SSM and CW will be attached to the
     * instance roles if they are missing.</p>
     */
    inline bool GetAttachMissingPermission() const{ return m_attachMissingPermission; }
    inline bool AttachMissingPermissionHasBeenSet() const { return m_attachMissingPermissionHasBeenSet; }
    inline void SetAttachMissingPermission(bool value) { m_attachMissingPermissionHasBeenSet = true; m_attachMissingPermission = value; }
    inline CreateApplicationRequest& WithAttachMissingPermission(bool value) { SetAttachMissingPermission(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    bool m_opsCenterEnabled;
    bool m_opsCenterEnabledHasBeenSet = false;

    bool m_cWEMonitorEnabled;
    bool m_cWEMonitorEnabledHasBeenSet = false;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet = false;

    Aws::String m_sNSNotificationArn;
    bool m_sNSNotificationArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_autoConfigEnabled;
    bool m_autoConfigEnabledHasBeenSet = false;

    bool m_autoCreate;
    bool m_autoCreateHasBeenSet = false;

    GroupingType m_groupingType;
    bool m_groupingTypeHasBeenSet = false;

    bool m_attachMissingPermission;
    bool m_attachMissingPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
