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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes event subscriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EventSubscription">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API EventSubscription
  {
  public:
    EventSubscription();
    EventSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EventSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const{ return m_customerAwsId; }

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(const Aws::String& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = value; }

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(Aws::String&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::move(value); }

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(const char* value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId.assign(value); }

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(const Aws::String& value) { SetCustomerAwsId(value); return *this;}

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(Aws::String&& value) { SetCustomerAwsId(std::move(value)); return *this;}

    /**
     * <p>The AWS customer account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(const char* value) { SetCustomerAwsId(value); return *this;}


    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const{ return m_custSubscriptionId; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline void SetCustSubscriptionId(const Aws::String& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = value; }

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline void SetCustSubscriptionId(Aws::String&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline void SetCustSubscriptionId(const char* value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId.assign(value); }

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(const Aws::String& value) { SetCustSubscriptionId(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(Aws::String&& value) { SetCustSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(const char* value) { SetCustSubscriptionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline EventSubscription& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline EventSubscription& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline EventSubscription& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionCreationTime() const{ return m_subscriptionCreationTime; }

    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }

    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline void SetSubscriptionCreationTime(const Aws::Utils::DateTime& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = value; }

    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline void SetSubscriptionCreationTime(Aws::Utils::DateTime&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::move(value); }

    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline EventSubscription& WithSubscriptionCreationTime(const Aws::Utils::DateTime& value) { SetSubscriptionCreationTime(value); return *this;}

    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline EventSubscription& WithSubscriptionCreationTime(Aws::Utils::DateTime&& value) { SetSubscriptionCreationTime(std::move(value)); return *this;}


    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline EventSubscription& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline EventSubscription& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type of the events returned the Amazon Redshift event
     * notification, such as cluster, or cluster-snapshot.</p>
     */
    inline EventSubscription& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const{ return m_sourceIdsList; }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline void SetSourceIdsList(const Aws::Vector<Aws::String>& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = value; }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline void SetSourceIdsList(Aws::Vector<Aws::String>&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::move(value); }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& WithSourceIdsList(const Aws::Vector<Aws::String>& value) { SetSourceIdsList(value); return *this;}

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& WithSourceIdsList(Aws::Vector<Aws::String>&& value) { SetSourceIdsList(std::move(value)); return *this;}

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(const Aws::String& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(Aws::String&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(const char* value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }


    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const{ return m_eventCategoriesList; }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline void SetEventCategoriesList(const Aws::Vector<Aws::String>& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = value; }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline void SetEventCategoriesList(Aws::Vector<Aws::String>&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::move(value); }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline EventSubscription& WithEventCategoriesList(const Aws::Vector<Aws::String>& value) { SetEventCategoriesList(value); return *this;}

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline EventSubscription& WithEventCategoriesList(Aws::Vector<Aws::String>&& value) { SetEventCategoriesList(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline EventSubscription& AddEventCategoriesList(const Aws::String& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline EventSubscription& AddEventCategoriesList(Aws::String&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security</p>
     */
    inline EventSubscription& AddEventCategoriesList(const char* value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }


    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventSubscription& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventSubscription& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline EventSubscription& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>A boolean value indicating whether the subscription is enabled;
     * <code>true</code> indicates that the subscription is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A boolean value indicating whether the subscription is enabled;
     * <code>true</code> indicates that the subscription is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A boolean value indicating whether the subscription is enabled;
     * <code>true</code> indicates that the subscription is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A boolean value indicating whether the subscription is enabled;
     * <code>true</code> indicates that the subscription is enabled.</p>
     */
    inline EventSubscription& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline EventSubscription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline EventSubscription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline EventSubscription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline EventSubscription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customerAwsId;
    bool m_customerAwsIdHasBeenSet;

    Aws::String m_custSubscriptionId;
    bool m_custSubscriptionIdHasBeenSet;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_subscriptionCreationTime;
    bool m_subscriptionCreationTimeHasBeenSet;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet;

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
