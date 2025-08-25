/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-notifications/model/NotificationRuleStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-notifications/model/DetailType.h>
#include <aws/codestar-notifications/model/Target.h>
#include <utility>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

  /**
   */
  class UpdateNotificationRuleRequest : public CodeStarNotificationsRequest
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API UpdateNotificationRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationRule"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateNotificationRuleRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the notification rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateNotificationRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline NotificationRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotificationRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateNotificationRuleRequest& WithStatus(NotificationRuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeIds() const { return m_eventTypeIds; }
    inline bool EventTypeIdsHasBeenSet() const { return m_eventTypeIdsHasBeenSet; }
    template<typename EventTypeIdsT = Aws::Vector<Aws::String>>
    void SetEventTypeIds(EventTypeIdsT&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = std::forward<EventTypeIdsT>(value); }
    template<typename EventTypeIdsT = Aws::Vector<Aws::String>>
    UpdateNotificationRuleRequest& WithEventTypeIds(EventTypeIdsT&& value) { SetEventTypeIds(std::forward<EventTypeIdsT>(value)); return *this;}
    template<typename EventTypeIdsT = Aws::String>
    UpdateNotificationRuleRequest& AddEventTypeIds(EventTypeIdsT&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.emplace_back(std::forward<EventTypeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    UpdateNotificationRuleRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    UpdateNotificationRuleRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by CodeStar
     * Notifications and/or the service for the resource for which the notification is
     * created.</p>
     */
    inline DetailType GetDetailType() const { return m_detailType; }
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }
    inline void SetDetailType(DetailType value) { m_detailTypeHasBeenSet = true; m_detailType = value; }
    inline UpdateNotificationRuleRequest& WithDetailType(DetailType value) { SetDetailType(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NotificationRuleStatus m_status{NotificationRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTypeIds;
    bool m_eventTypeIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    DetailType m_detailType{DetailType::NOT_SET};
    bool m_detailTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
