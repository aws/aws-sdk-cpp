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
    AWS_CODESTARNOTIFICATIONS_API UpdateNotificationRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationRule"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the notification rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline const NotificationRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline void SetStatus(const NotificationRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline void SetStatus(NotificationRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline UpdateNotificationRuleRequest& WithStatus(const NotificationRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the notification rule. Valid statuses include enabled (sending
     * notifications) or disabled (not sending notifications).</p>
     */
    inline UpdateNotificationRuleRequest& WithStatus(NotificationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypeIds() const{ return m_eventTypeIds; }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline bool EventTypeIdsHasBeenSet() const { return m_eventTypeIdsHasBeenSet; }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline void SetEventTypeIds(const Aws::Vector<Aws::String>& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = value; }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline void SetEventTypeIds(Aws::Vector<Aws::String>&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds = std::move(value); }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline UpdateNotificationRuleRequest& WithEventTypeIds(const Aws::Vector<Aws::String>& value) { SetEventTypeIds(value); return *this;}

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline UpdateNotificationRuleRequest& WithEventTypeIds(Aws::Vector<Aws::String>&& value) { SetEventTypeIds(std::move(value)); return *this;}

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline UpdateNotificationRuleRequest& AddEventTypeIds(const Aws::String& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline UpdateNotificationRuleRequest& AddEventTypeIds(Aws::String&& value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event types associated with this notification rule. For a complete
     * list of event types and IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline UpdateNotificationRuleRequest& AddEventTypeIds(const char* value) { m_eventTypeIdsHasBeenSet = true; m_eventTypeIds.push_back(value); return *this; }


    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The address and type of the targets to receive notifications from this
     * notification rule.</p>
     */
    inline UpdateNotificationRuleRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline const DetailType& GetDetailType() const{ return m_detailType; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline bool DetailTypeHasBeenSet() const { return m_detailTypeHasBeenSet; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(const DetailType& value) { m_detailTypeHasBeenSet = true; m_detailType = value; }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(DetailType&& value) { m_detailTypeHasBeenSet = true; m_detailType = std::move(value); }

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline UpdateNotificationRuleRequest& WithDetailType(const DetailType& value) { SetDetailType(value); return *this;}

    /**
     * <p>The level of detail to include in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline UpdateNotificationRuleRequest& WithDetailType(DetailType&& value) { SetDetailType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NotificationRuleStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTypeIds;
    bool m_eventTypeIdsHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    DetailType m_detailType;
    bool m_detailTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
