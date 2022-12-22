/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-notifications/model/DetailType.h>
#include <aws/codestar-notifications/model/NotificationRuleStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codestar-notifications/model/EventTypeSummary.h>
#include <aws/codestar-notifications/model/TargetSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeStarNotifications
{
namespace Model
{
  class DescribeNotificationRuleResult
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API DescribeNotificationRuleResult();
    AWS_CODESTARNOTIFICATIONS_API DescribeNotificationRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARNOTIFICATIONS_API DescribeNotificationRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the notification rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline const Aws::Vector<EventTypeSummary>& GetEventTypes() const{ return m_eventTypes; }

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline void SetEventTypes(const Aws::Vector<EventTypeSummary>& value) { m_eventTypes = value; }

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline void SetEventTypes(Aws::Vector<EventTypeSummary>&& value) { m_eventTypes = std::move(value); }

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithEventTypes(const Aws::Vector<EventTypeSummary>& value) { SetEventTypes(value); return *this;}

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithEventTypes(Aws::Vector<EventTypeSummary>&& value) { SetEventTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddEventTypes(const EventTypeSummary& value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddEventTypes(EventTypeSummary&& value) { m_eventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline void SetResource(const char* value) { m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline const Aws::Vector<TargetSummary>& GetTargets() const{ return m_targets; }

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline void SetTargets(const Aws::Vector<TargetSummary>& value) { m_targets = value; }

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline void SetTargets(Aws::Vector<TargetSummary>&& value) { m_targets = std::move(value); }

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithTargets(const Aws::Vector<TargetSummary>& value) { SetTargets(value); return *this;}

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithTargets(Aws::Vector<TargetSummary>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTargets(const TargetSummary& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTargets(TargetSummary&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline const DetailType& GetDetailType() const{ return m_detailType; }

    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(const DetailType& value) { m_detailType = value; }

    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline void SetDetailType(DetailType&& value) { m_detailType = std::move(value); }

    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline DescribeNotificationRuleResult& WithDetailType(const DetailType& value) { SetDetailType(value); return *this;}

    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline DescribeNotificationRuleResult& WithDetailType(DetailType&& value) { SetDetailType(std::move(value)); return *this;}


    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline const NotificationRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline void SetStatus(const NotificationRuleStatus& value) { m_status = value; }

    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline void SetStatus(NotificationRuleStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline DescribeNotificationRuleResult& WithStatus(const NotificationRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline DescribeNotificationRuleResult& WithStatus(NotificationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline DescribeNotificationRuleResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline DescribeNotificationRuleResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }

    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }

    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }

    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline DescribeNotificationRuleResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}

    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline DescribeNotificationRuleResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline DescribeNotificationRuleResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::Vector<EventTypeSummary> m_eventTypes;

    Aws::String m_resource;

    Aws::Vector<TargetSummary> m_targets;

    DetailType m_detailType;

    Aws::String m_createdBy;

    NotificationRuleStatus m_status;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
