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
  class CreateNotificationRuleRequest : public CodeStarNotificationsRequest
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API CreateNotificationRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotificationRule"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the notification rule. Notification rule names must be unique in
     * your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNotificationRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNotificationRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeIds() const{ return m_eventTypeIds; }
    inline bool EventTypeIdsHasBeenSet() const { return m_eventTypeIdsHasBeenSet; }
    inline void SetEventTypeIds(const Aws::Vector<Aws::String>& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = value; }
    inline void SetEventTypeIds(Aws::Vector<Aws::String>&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = std::move(value); }
    inline CreateNotificationRuleRequest& WithEventTypeIds(const Aws::Vector<Aws::String>& value) { SetEventTypeIds(value); return *this;}
    inline CreateNotificationRuleRequest& WithEventTypeIds(Aws::Vector<Aws::String>&& value) { SetEventTypeIds(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& AddEventTypeIds(const Aws::String& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }
    inline CreateNotificationRuleRequest& AddEventTypeIds(Aws::String&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(std::move(value)); return *this; }
    inline CreateNotificationRuleRequest& AddEventTypeIds(const char* value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in CodePipeline,
     * repositories in CodeCommit, and build projects in CodeBuild.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline CreateNotificationRuleRequest& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline CreateNotificationRuleRequest& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * topics and Chatbot clients to associate with the notification rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline CreateNotificationRuleRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline CreateNotificationRuleRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline CreateNotificationRuleRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The level of detail to include in the notifications for this resource.
     * <code>BASIC</code> will include only the contents of the event as it would
     * appear in Amazon CloudWatch. <code>FULL</code> will include any supplemental
     * information provided by AWS CodeStar Notifications and/or the service for the
     * resource for which the notification is created.</p>
     */
    inline const DetailType& GetDetailType() const{ return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    inline void SetDetailType(const DetailType& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }
    inline void SetDetailType(DetailType&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }
    inline CreateNotificationRuleRequest& WithDetailType(const DetailType& value) { SetDetailType(value); return *this;}
    inline CreateNotificationRuleRequest& WithDetailType(DetailType&& value) { SetDetailType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request with the same parameters is received and a token is included, the
     * request returns information about the initial request that used that token.</p>
     *  <p>The Amazon Web Services SDKs prepopulate client request tokens. If you
     * are using an Amazon Web Services SDK, an idempotency token is created for
     * you.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateNotificationRuleRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateNotificationRuleRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "<code>aws</code>". </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNotificationRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateNotificationRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNotificationRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNotificationRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateNotificationRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateNotificationRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateNotificationRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the notification rule. The default value is
     * <code>ENABLED</code>. If the status is set to <code>DISABLED</code>,
     * notifications aren't sent for the notification rule.</p>
     */
    inline const NotificationRuleStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NotificationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NotificationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateNotificationRuleRequest& WithStatus(const NotificationRuleStatus& value) { SetStatus(value); return *this;}
    inline CreateNotificationRuleRequest& WithStatus(NotificationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTypeIds;
    bool m_eventTypeIdsHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    DetailType m_detailType;
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    NotificationRuleStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
