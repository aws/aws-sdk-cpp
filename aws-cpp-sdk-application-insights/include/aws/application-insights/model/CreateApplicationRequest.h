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
    inline CreateApplicationRequest& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline CreateApplicationRequest& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


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
    inline CreateApplicationRequest& WithOpsCenterEnabled(bool value) { SetOpsCenterEnabled(value); return *this;}


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
    inline CreateApplicationRequest& WithCWEMonitorEnabled(bool value) { SetCWEMonitorEnabled(value); return *this;}


    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline const Aws::String& GetOpsItemSNSTopicArn() const{ return m_opsItemSNSTopicArn; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline bool OpsItemSNSTopicArnHasBeenSet() const { return m_opsItemSNSTopicArnHasBeenSet; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(const Aws::String& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = value; }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(Aws::String&& value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn = std::move(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline void SetOpsItemSNSTopicArn(const char* value) { m_opsItemSNSTopicArnHasBeenSet = true; m_opsItemSNSTopicArn.assign(value); }

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const Aws::String& value) { SetOpsItemSNSTopicArn(value); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(Aws::String&& value) { SetOpsItemSNSTopicArn(std::move(value)); return *this;}

    /**
     * <p> The SNS topic provided to Application Insights that is associated to the
     * created opsItem. Allows you to receive notifications for updates to the opsItem.
     * </p>
     */
    inline CreateApplicationRequest& WithOpsItemSNSTopicArn(const char* value) { SetOpsItemSNSTopicArn(value); return *this;}


    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>List of tags to add to the application. tag key (<code>Key</code>) and an
     * associated tag value (<code>Value</code>). The maximum length of a tag key is
     * 128 characters. The maximum length of a tag value is 256 characters.</p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p> Indicates whether Application Insights automatically configures unmonitored
     * resources in the resource group. </p>
     */
    inline bool GetAutoConfigEnabled() const{ return m_autoConfigEnabled; }

    /**
     * <p> Indicates whether Application Insights automatically configures unmonitored
     * resources in the resource group. </p>
     */
    inline bool AutoConfigEnabledHasBeenSet() const { return m_autoConfigEnabledHasBeenSet; }

    /**
     * <p> Indicates whether Application Insights automatically configures unmonitored
     * resources in the resource group. </p>
     */
    inline void SetAutoConfigEnabled(bool value) { m_autoConfigEnabledHasBeenSet = true; m_autoConfigEnabled = value; }

    /**
     * <p> Indicates whether Application Insights automatically configures unmonitored
     * resources in the resource group. </p>
     */
    inline CreateApplicationRequest& WithAutoConfigEnabled(bool value) { SetAutoConfigEnabled(value); return *this;}


    /**
     * <p> Configures all of the resources in the resource group by applying the
     * recommended configurations. </p>
     */
    inline bool GetAutoCreate() const{ return m_autoCreate; }

    /**
     * <p> Configures all of the resources in the resource group by applying the
     * recommended configurations. </p>
     */
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }

    /**
     * <p> Configures all of the resources in the resource group by applying the
     * recommended configurations. </p>
     */
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }

    /**
     * <p> Configures all of the resources in the resource group by applying the
     * recommended configurations. </p>
     */
    inline CreateApplicationRequest& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}


    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline const GroupingType& GetGroupingType() const{ return m_groupingType; }

    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline bool GroupingTypeHasBeenSet() const { return m_groupingTypeHasBeenSet; }

    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline void SetGroupingType(const GroupingType& value) { m_groupingTypeHasBeenSet = true; m_groupingType = value; }

    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline void SetGroupingType(GroupingType&& value) { m_groupingTypeHasBeenSet = true; m_groupingType = std::move(value); }

    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline CreateApplicationRequest& WithGroupingType(const GroupingType& value) { SetGroupingType(value); return *this;}

    /**
     * <p>Application Insights can create applications based on a resource group or on
     * an account. To create an account-based application using all of the resources in
     * the account, set this parameter to <code>ACCOUNT_BASED</code>. </p>
     */
    inline CreateApplicationRequest& WithGroupingType(GroupingType&& value) { SetGroupingType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    bool m_opsCenterEnabled;
    bool m_opsCenterEnabledHasBeenSet = false;

    bool m_cWEMonitorEnabled;
    bool m_cWEMonitorEnabledHasBeenSet = false;

    Aws::String m_opsItemSNSTopicArn;
    bool m_opsItemSNSTopicArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_autoConfigEnabled;
    bool m_autoConfigEnabledHasBeenSet = false;

    bool m_autoCreate;
    bool m_autoCreateHasBeenSet = false;

    GroupingType m_groupingType;
    bool m_groupingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
