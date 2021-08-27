/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-notifications/model/DetailType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codestar-notifications/model/NotificationRuleStatus.h>
#include <aws/codestar-notifications/model/Target.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

  /**
   */
  class AWS_CODESTARNOTIFICATIONS_API CreateNotificationRuleRequest : public CodeStarNotificationsRequest
  {
  public:
    CreateNotificationRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotificationRule"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline CreateNotificationRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline CreateNotificationRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the notification rule. Notifictaion rule names must be unique in
     * your AWS account.</p>
     */
    inline CreateNotificationRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeIds() const{ return m_eventTypeIds; }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline bool EventTypeIdsHasBeenSet() const { return m_eventTypeIdsHasBeenSet; }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline void SetEventTypeIds(const Aws::Vector<Aws::String>& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = value; }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline void SetEventTypeIds(Aws::Vector<Aws::String>&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = std::move(value); }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline CreateNotificationRuleRequest& WithEventTypeIds(const Aws::Vector<Aws::String>& value) { SetEventTypeIds(value); return *this;}

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline CreateNotificationRuleRequest& WithEventTypeIds(Aws::Vector<Aws::String>&& value) { SetEventTypeIds(std::move(value)); return *this;}

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline CreateNotificationRuleRequest& AddEventTypeIds(const Aws::String& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline CreateNotificationRuleRequest& AddEventTypeIds(Aws::String&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline CreateNotificationRuleRequest& AddEventTypeIds(const char* value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline CreateNotificationRuleRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline CreateNotificationRuleRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in AWS CodePipeline,
     * repositories in AWS CodeCommit, and build projects in AWS CodeBuild.</p>
     */
    inline CreateNotificationRuleRequest& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline CreateNotificationRuleRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline CreateNotificationRuleRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline CreateNotificationRuleRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of SNS topics to associate with the
     * notification rule.</p>
     */
    inline CreateNotificationRuleRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline const DetailType& GetDetailType() const{ return m_detailType; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(const DetailType& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(DetailType&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline CreateNotificationRuleRequest& WithDetailType(const DetailType& value) { SetDetailType(value); return *this;}

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in AWS
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline CreateNotificationRuleRequest& WithDetailType(DetailType&& value) { SetDetailType(std::move(value)); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline CreateNotificationRuleRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline CreateNotificationRuleRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The AWS SDKs prepopulate client request tokens. If you are using an
     * AWS SDK, an idempotency token is created for you.</p> 
     */
    inline CreateNotificationRuleRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "aws". </p>
     */
    inline CreateNotificationRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline const NotificationRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline void SetStatus(const NotificationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline void SetStatus(NotificationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline CreateNotificationRuleRequest& WithStatus(const NotificationRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the notification rule. The default value is ENABLED. If the
     * status is set to DISABLED, notifications aren't sent for the notification
     * rule.</p>
     */
    inline CreateNotificationRuleRequest& WithStatus(NotificationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_eventTypeIds;
    bool m_eventTypeIdsHasBeenSet;

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    DetailType m_detailType;
    bool m_detailTypeHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    NotificationRuleStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
