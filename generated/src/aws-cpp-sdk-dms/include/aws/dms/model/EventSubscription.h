/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Describes an event notification subscription created by the
   * <code>CreateEventSubscription</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/EventSubscription">AWS
   * API Reference</a></p>
   */
  class EventSubscription
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription();
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const{ return m_customerAwsId; }

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(const Aws::String& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = value; }

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(Aws::String&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::move(value); }

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline void SetCustomerAwsId(const char* value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId.assign(value); }

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(const Aws::String& value) { SetCustomerAwsId(value); return *this;}

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(Aws::String&& value) { SetCustomerAwsId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline EventSubscription& WithCustomerAwsId(const char* value) { SetCustomerAwsId(value); return *this;}


    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const{ return m_custSubscriptionId; }

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline void SetCustSubscriptionId(const Aws::String& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = value; }

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline void SetCustSubscriptionId(Aws::String&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::move(value); }

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline void SetCustSubscriptionId(const char* value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId.assign(value); }

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(const Aws::String& value) { SetCustSubscriptionId(value); return *this;}

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(Aws::String&& value) { SetCustSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline EventSubscription& WithCustSubscriptionId(const char* value) { SetCustSubscriptionId(value); return *this;}


    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline EventSubscription& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline EventSubscription& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline EventSubscription& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline const Aws::String& GetSubscriptionCreationTime() const{ return m_subscriptionCreationTime; }

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline void SetSubscriptionCreationTime(const Aws::String& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = value; }

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline void SetSubscriptionCreationTime(Aws::String&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::move(value); }

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline void SetSubscriptionCreationTime(const char* value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime.assign(value); }

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline EventSubscription& WithSubscriptionCreationTime(const Aws::String& value) { SetSubscriptionCreationTime(value); return *this;}

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline EventSubscription& WithSubscriptionCreationTime(Aws::String&& value) { SetSubscriptionCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline EventSubscription& WithSubscriptionCreationTime(const char* value) { SetSubscriptionCreationTime(value); return *this;}


    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline EventSubscription& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline EventSubscription& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline EventSubscription& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const{ return m_sourceIdsList; }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline void SetSourceIdsList(const Aws::Vector<Aws::String>& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = value; }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline void SetSourceIdsList(Aws::Vector<Aws::String>&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::move(value); }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline EventSubscription& WithSourceIdsList(const Aws::Vector<Aws::String>& value) { SetSourceIdsList(value); return *this;}

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline EventSubscription& WithSourceIdsList(Aws::Vector<Aws::String>&& value) { SetSourceIdsList(std::move(value)); return *this;}

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(const Aws::String& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(Aws::String&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline EventSubscription& AddSourceIdsList(const char* value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }


    /**
     * <p>A lists of event categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const{ return m_eventCategoriesList; }

    /**
     * <p>A lists of event categories.</p>
     */
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }

    /**
     * <p>A lists of event categories.</p>
     */
    inline void SetEventCategoriesList(const Aws::Vector<Aws::String>& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = value; }

    /**
     * <p>A lists of event categories.</p>
     */
    inline void SetEventCategoriesList(Aws::Vector<Aws::String>&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::move(value); }

    /**
     * <p>A lists of event categories.</p>
     */
    inline EventSubscription& WithEventCategoriesList(const Aws::Vector<Aws::String>& value) { SetEventCategoriesList(value); return *this;}

    /**
     * <p>A lists of event categories.</p>
     */
    inline EventSubscription& WithEventCategoriesList(Aws::Vector<Aws::String>&& value) { SetEventCategoriesList(std::move(value)); return *this;}

    /**
     * <p>A lists of event categories.</p>
     */
    inline EventSubscription& AddEventCategoriesList(const Aws::String& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }

    /**
     * <p>A lists of event categories.</p>
     */
    inline EventSubscription& AddEventCategoriesList(Aws::String&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(std::move(value)); return *this; }

    /**
     * <p>A lists of event categories.</p>
     */
    inline EventSubscription& AddEventCategoriesList(const char* value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }


    /**
     * <p>Boolean value that indicates if the event subscription is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Boolean value that indicates if the event subscription is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Boolean value that indicates if the event subscription is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Boolean value that indicates if the event subscription is enabled.</p>
     */
    inline EventSubscription& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_customerAwsId;
    bool m_customerAwsIdHasBeenSet = false;

    Aws::String m_custSubscriptionId;
    bool m_custSubscriptionIdHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionCreationTime;
    bool m_subscriptionCreationTimeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
