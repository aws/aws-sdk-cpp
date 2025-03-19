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
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription() = default;
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API EventSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services customer account associated with the DMS event
     * notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const { return m_customerAwsId; }
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }
    template<typename CustomerAwsIdT = Aws::String>
    void SetCustomerAwsId(CustomerAwsIdT&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::forward<CustomerAwsIdT>(value); }
    template<typename CustomerAwsIdT = Aws::String>
    EventSubscription& WithCustomerAwsId(CustomerAwsIdT&& value) { SetCustomerAwsId(std::forward<CustomerAwsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DMS event notification subscription Id.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const { return m_custSubscriptionId; }
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }
    template<typename CustSubscriptionIdT = Aws::String>
    void SetCustSubscriptionId(CustSubscriptionIdT&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::forward<CustSubscriptionIdT>(value); }
    template<typename CustSubscriptionIdT = Aws::String>
    EventSubscription& WithCustSubscriptionId(CustSubscriptionIdT&& value) { SetCustSubscriptionId(std::forward<CustSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic ARN of the DMS event notification subscription.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    EventSubscription& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DMS event notification subscription.</p>
     * <p>Constraints:</p> <p>Can be one of the following: creating | modifying |
     * deleting | active | no-permission | topic-not-exist</p> <p>The status
     * "no-permission" indicates that DMS no longer has permission to post to the SNS
     * topic. The status "topic-not-exist" indicates that the topic was deleted after
     * the subscription was created.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EventSubscription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the DMS event notification subscription was created.</p>
     */
    inline const Aws::String& GetSubscriptionCreationTime() const { return m_subscriptionCreationTime; }
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }
    template<typename SubscriptionCreationTimeT = Aws::String>
    void SetSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::forward<SubscriptionCreationTimeT>(value); }
    template<typename SubscriptionCreationTimeT = Aws::String>
    EventSubscription& WithSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { SetSubscriptionCreationTime(std::forward<SubscriptionCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of DMS resource that generates events. </p> <p>Valid values:
     * replication-instance | replication-server | security-group |
     * replication-task</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    EventSubscription& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source Ids for the event subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const { return m_sourceIdsList; }
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    void SetSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::forward<SourceIdsListT>(value); }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    EventSubscription& WithSourceIdsList(SourceIdsListT&& value) { SetSourceIdsList(std::forward<SourceIdsListT>(value)); return *this;}
    template<typename SourceIdsListT = Aws::String>
    EventSubscription& AddSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.emplace_back(std::forward<SourceIdsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A lists of event categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const { return m_eventCategoriesList; }
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    void SetEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::forward<EventCategoriesListT>(value); }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    EventSubscription& WithEventCategoriesList(EventCategoriesListT&& value) { SetEventCategoriesList(std::forward<EventCategoriesListT>(value)); return *this;}
    template<typename EventCategoriesListT = Aws::String>
    EventSubscription& AddEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.emplace_back(std::forward<EventCategoriesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Boolean value that indicates if the event subscription is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventSubscription& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
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

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
