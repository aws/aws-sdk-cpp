/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEventSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class CreateEventSubscriptionRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateEventSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSubscription"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the DMS event notification subscription. This name must be less
     * than 255 characters.</p>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Amazon SNS topic created for event
     * notification. The ARN is created by Amazon SNS when you create a topic and
     * subscribe to it. </p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p> The type of DMS resource that generates the events. For example, if you want
     * to be notified of events generated by a replication instance, you set this
     * parameter to <code>replication-instance</code>. If this value isn't specified,
     * all events are returned. </p> <p>Valid values: <code>replication-instance</code>
     * | <code>replication-task</code> </p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event categories for a source type that you want to subscribe to.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
     * with Events and Notifications</a> in the <i>Database Migration Service User
     * Guide.</i> </p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIds() const{ return m_sourceIds; }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline bool SourceIdsHasBeenSet() const { return m_sourceIdsHasBeenSet; }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline void SetSourceIds(const Aws::Vector<Aws::String>& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = value; }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline void SetSourceIds(Aws::Vector<Aws::String>&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = std::move(value); }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(const Aws::Vector<Aws::String>& value) { SetSourceIds(value); return *this;}

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(Aws::Vector<Aws::String>&& value) { SetSourceIds(std::move(value)); return *this;}

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const Aws::String& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(Aws::String&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of identifiers for which DMS provides notification events.</p> <p>If
     * you don't specify a value, notifications are provided for all sources.</p> <p>If
     * you specify multiple values, they must be of the same type. For example, if you
     * specify a database instance ID, then all of the other values must be database
     * instance IDs.</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const char* value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }


    /**
     * <p> A Boolean value; set to <code>true</code> to activate the subscription, or
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> A Boolean value; set to <code>true</code> to activate the subscription, or
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> A Boolean value; set to <code>true</code> to activate the subscription, or
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> A Boolean value; set to <code>true</code> to activate the subscription, or
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline CreateEventSubscriptionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline CreateEventSubscriptionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline CreateEventSubscriptionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline CreateEventSubscriptionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags to be assigned to the event subscription.</p>
     */
    inline CreateEventSubscriptionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIds;
    bool m_sourceIdsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
