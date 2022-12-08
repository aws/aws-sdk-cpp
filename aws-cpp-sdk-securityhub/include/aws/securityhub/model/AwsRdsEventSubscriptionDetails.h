/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon RDS event notification subscription. The subscription
   * allows Amazon RDS to post events to an SNS topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsEventSubscriptionDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsEventSubscriptionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails();
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const{ return m_custSubscriptionId; }

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline void SetCustSubscriptionId(const Aws::String& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = value; }

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline void SetCustSubscriptionId(Aws::String&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::move(value); }

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline void SetCustSubscriptionId(const char* value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId.assign(value); }

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustSubscriptionId(const Aws::String& value) { SetCustSubscriptionId(value); return *this;}

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustSubscriptionId(Aws::String&& value) { SetCustSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustSubscriptionId(const char* value) { SetCustSubscriptionId(value); return *this;}


    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const{ return m_customerAwsId; }

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline void SetCustomerAwsId(const Aws::String& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = value; }

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline void SetCustomerAwsId(Aws::String&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::move(value); }

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline void SetCustomerAwsId(const char* value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId.assign(value); }

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustomerAwsId(const Aws::String& value) { SetCustomerAwsId(value); return *this;}

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustomerAwsId(Aws::String&& value) { SetCustomerAwsId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithCustomerAwsId(const char* value) { SetCustomerAwsId(value); return *this;}


    /**
     * <p>Whether the event notification subscription is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether the event notification subscription is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether the event notification subscription is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether the event notification subscription is enabled.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const{ return m_eventCategoriesList; }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline void SetEventCategoriesList(const Aws::Vector<Aws::String>& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = value; }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline void SetEventCategoriesList(Aws::Vector<Aws::String>&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::move(value); }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEventCategoriesList(const Aws::Vector<Aws::String>& value) { SetEventCategoriesList(value); return *this;}

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEventCategoriesList(Aws::Vector<Aws::String>&& value) { SetEventCategoriesList(std::move(value)); return *this;}

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddEventCategoriesList(const Aws::String& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddEventCategoriesList(Aws::String&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddEventCategoriesList(const char* value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }


    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline const Aws::String& GetEventSubscriptionArn() const{ return m_eventSubscriptionArn; }

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline bool EventSubscriptionArnHasBeenSet() const { return m_eventSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline void SetEventSubscriptionArn(const Aws::String& value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn = value; }

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline void SetEventSubscriptionArn(Aws::String&& value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline void SetEventSubscriptionArn(const char* value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEventSubscriptionArn(const Aws::String& value) { SetEventSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEventSubscriptionArn(Aws::String&& value) { SetEventSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithEventSubscriptionArn(const char* value) { SetEventSubscriptionArn(value); return *this;}


    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const{ return m_sourceIdsList; }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline void SetSourceIdsList(const Aws::Vector<Aws::String>& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = value; }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline void SetSourceIdsList(Aws::Vector<Aws::String>&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::move(value); }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSourceIdsList(const Aws::Vector<Aws::String>& value) { SetSourceIdsList(value); return *this;}

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSourceIdsList(Aws::Vector<Aws::String>&& value) { SetSourceIdsList(std::move(value)); return *this;}

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddSourceIdsList(const Aws::String& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddSourceIdsList(Aws::String&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& AddSourceIdsList(const char* value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }


    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline AwsRdsEventSubscriptionDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline AwsRdsEventSubscriptionDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline AwsRdsEventSubscriptionDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetSubscriptionCreationTime() const{ return m_subscriptionCreationTime; }

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSubscriptionCreationTime(const Aws::String& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = value; }

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSubscriptionCreationTime(Aws::String&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::move(value); }

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetSubscriptionCreationTime(const char* value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime.assign(value); }

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSubscriptionCreationTime(const Aws::String& value) { SetSubscriptionCreationTime(value); return *this;}

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSubscriptionCreationTime(Aws::String&& value) { SetSubscriptionCreationTime(std::move(value)); return *this;}

    /**
     * <p>The datetime when the event notification subscription was created.</p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsEventSubscriptionDetails& WithSubscriptionCreationTime(const char* value) { SetSubscriptionCreationTime(value); return *this;}

  private:

    Aws::String m_custSubscriptionId;
    bool m_custSubscriptionIdHasBeenSet = false;

    Aws::String m_customerAwsId;
    bool m_customerAwsIdHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet = false;

    Aws::String m_eventSubscriptionArn;
    bool m_eventSubscriptionArnHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionCreationTime;
    bool m_subscriptionCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
