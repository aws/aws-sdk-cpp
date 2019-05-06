/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateEventSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API CreateEventSubscriptionRequest : public RedshiftRequest
  {
  public:
    CreateEventSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSubscription"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the event subscription to be created.</p> <p>Constraints:</p>
     * <ul> <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain
     * from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateEventSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used to transmit the
     * event notifications. The ARN is created by Amazon SNS when you create a topic
     * and subscribe to it.</p>
     */
    inline CreateEventSubscriptionRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of source that will be generating the events. For example, if you
     * want to be notified of events generated by a cluster, you would set this
     * parameter to cluster. If this value is not specified, events are returned for
     * all Amazon Redshift objects in your AWS account. You must specify a source type
     * in order to specify source IDs.</p> <p>Valid values: cluster,
     * cluster-parameter-group, cluster-security-group, and cluster-snapshot.</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIds() const{ return m_sourceIds; }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline bool SourceIdsHasBeenSet() const { return m_sourceIdsHasBeenSet; }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline void SetSourceIds(const Aws::Vector<Aws::String>& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = value; }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline void SetSourceIds(Aws::Vector<Aws::String>&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds = std::move(value); }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(const Aws::Vector<Aws::String>& value) { SetSourceIds(value); return *this;}

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline CreateEventSubscriptionRequest& WithSourceIds(Aws::Vector<Aws::String>&& value) { SetSourceIds(std::move(value)); return *this;}

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const Aws::String& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(Aws::String&& value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more identifiers of Amazon Redshift source objects. All of
     * the objects must be of the same type as was specified in the source type
     * parameter. The event subscription will return only events generated by the
     * specified objects. If not specified, then events are returned for all objects
     * within the source type specified.</p> <p>Example: my-cluster-1, my-cluster-2</p>
     * <p>Example: my-snapshot-20131010</p>
     */
    inline CreateEventSubscriptionRequest& AddSourceIds(const char* value) { m_sourceIdsHasBeenSet = true; m_sourceIds.push_back(value); return *this; }


    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline CreateEventSubscriptionRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Redshift event categories to be published by the event
     * notification subscription.</p> <p>Values: configuration, management, monitoring,
     * security</p>
     */
    inline CreateEventSubscriptionRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline CreateEventSubscriptionRequest& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline CreateEventSubscriptionRequest& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Redshift event severity to be published by the event
     * notification subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline CreateEventSubscriptionRequest& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>A boolean value; set to <code>true</code> to activate the subscription, and
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A boolean value; set to <code>true</code> to activate the subscription, and
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A boolean value; set to <code>true</code> to activate the subscription, and
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A boolean value; set to <code>true</code> to activate the subscription, and
     * set to <code>false</code> to create the subscription but not activate it. </p>
     */
    inline CreateEventSubscriptionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateEventSubscriptionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateEventSubscriptionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateEventSubscriptionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateEventSubscriptionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_sourceIds;
    bool m_sourceIdsHasBeenSet;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet;

    Aws::String m_severity;
    bool m_severityHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
