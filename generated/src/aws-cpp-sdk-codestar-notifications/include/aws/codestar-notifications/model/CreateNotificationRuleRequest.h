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
    AWS_CODESTARNOTIFICATIONS_API CreateNotificationRuleRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNotificationRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event types associated with this notification rule. For a list of
     * allowed events, see <a>EventTypeSummary</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeIds() const { return m_eventTypeIds; }
    inline bool EventTypeIdsHasBeenSet() const { return m_eventTypeIdsHasBeenSet; }
    template<typename EventTypeIdsT = Aws::Vector<Aws::String>>
    void SetEventTypeIds(EventTypeIdsT&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = std::forward<EventTypeIdsT>(value); }
    template<typename EventTypeIdsT = Aws::Vector<Aws::String>>
    CreateNotificationRuleRequest& WithEventTypeIds(EventTypeIdsT&& value) { SetEventTypeIds(std::forward<EventTypeIdsT>(value)); return *this;}
    template<typename EventTypeIdsT = Aws::String>
    CreateNotificationRuleRequest& AddEventTypeIds(EventTypeIdsT&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.emplace_back(std::forward<EventTypeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource to associate with the
     * notification rule. Supported resources include pipelines in CodePipeline,
     * repositories in CodeCommit, and build projects in CodeBuild.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    CreateNotificationRuleRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * topics and Amazon Q Developer in chat applications clients to associate with the
     * notification rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    CreateNotificationRuleRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    CreateNotificationRuleRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The level of detail to include in the notifications for this resource.
     * <code>BASIC</code> will include only the contents of the event as it would
     * appear in Amazon CloudWatch. <code>FULL</code> will include any supplemental
     * information provided by CodeStar Notifications and/or the service for the
     * resource for which the notification is created.</p>
     */
    inline DetailType GetDetailType() const { return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    inline void SetDetailType(DetailType value) { m_detailTypeHasBeenSet = true; m_detailType = value; }
    inline CreateNotificationRuleRequest& WithDetailType(DetailType value) { SetDetailType(value); return *this;}
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
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateNotificationRuleRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to this notification rule. Key names cannot start
     * with "<code>aws</code>". </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateNotificationRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateNotificationRuleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the notification rule. The default value is
     * <code>ENABLED</code>. If the status is set to <code>DISABLED</code>,
     * notifications aren't sent for the notification rule.</p>
     */
    inline NotificationRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotificationRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateNotificationRuleRequest& WithStatus(NotificationRuleStatus value) { SetStatus(value); return *this;}
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

    DetailType m_detailType{DetailType::NOT_SET};
    bool m_detailTypeHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    NotificationRuleStatus m_status{NotificationRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
