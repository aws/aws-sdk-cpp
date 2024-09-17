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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notification rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeNotificationRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeNotificationRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the notification rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeNotificationRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeNotificationRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the event types associated with the notification rule.</p>
     */
    inline const Aws::Vector<EventTypeSummary>& GetEventTypes() const{ return m_eventTypes; }
    inline void SetEventTypes(const Aws::Vector<EventTypeSummary>& value) { m_eventTypes = value; }
    inline void SetEventTypes(Aws::Vector<EventTypeSummary>&& value) { m_eventTypes = std::move(value); }
    inline DescribeNotificationRuleResult& WithEventTypes(const Aws::Vector<EventTypeSummary>& value) { SetEventTypes(value); return *this;}
    inline DescribeNotificationRuleResult& WithEventTypes(Aws::Vector<EventTypeSummary>&& value) { SetEventTypes(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& AddEventTypes(const EventTypeSummary& value) { m_eventTypes.push_back(value); return *this; }
    inline DescribeNotificationRuleResult& AddEventTypes(EventTypeSummary&& value) { m_eventTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource associated with the
     * notification rule.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline void SetResource(const Aws::String& value) { m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resource.assign(value); }
    inline DescribeNotificationRuleResult& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline DescribeNotificationRuleResult& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Chatbot topics and Chatbot clients associated with the
     * notification rule.</p>
     */
    inline const Aws::Vector<TargetSummary>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<TargetSummary>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<TargetSummary>&& value) { m_targets = std::move(value); }
    inline DescribeNotificationRuleResult& WithTargets(const Aws::Vector<TargetSummary>& value) { SetTargets(value); return *this;}
    inline DescribeNotificationRuleResult& WithTargets(Aws::Vector<TargetSummary>&& value) { SetTargets(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& AddTargets(const TargetSummary& value) { m_targets.push_back(value); return *this; }
    inline DescribeNotificationRuleResult& AddTargets(TargetSummary&& value) { m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The level of detail included in the notifications for this resource. BASIC
     * will include only the contents of the event as it would appear in Amazon
     * CloudWatch. FULL will include any supplemental information provided by AWS
     * CodeStar Notifications and/or the service for the resource for which the
     * notification is created.</p>
     */
    inline const DetailType& GetDetailType() const{ return m_detailType; }
    inline void SetDetailType(const DetailType& value) { m_detailType = value; }
    inline void SetDetailType(DetailType&& value) { m_detailType = std::move(value); }
    inline DescribeNotificationRuleResult& WithDetailType(const DetailType& value) { SetDetailType(value); return *this;}
    inline DescribeNotificationRuleResult& WithDetailType(DetailType&& value) { SetDetailType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or email alias of the person who created the notification rule.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline DescribeNotificationRuleResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DescribeNotificationRuleResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notification rule. Valid statuses are on (sending
     * notifications) or off (not sending notifications).</p>
     */
    inline const NotificationRuleStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NotificationRuleStatus& value) { m_status = value; }
    inline void SetStatus(NotificationRuleStatus&& value) { m_status = std::move(value); }
    inline DescribeNotificationRuleResult& WithStatus(const NotificationRuleStatus& value) { SetStatus(value); return *this;}
    inline DescribeNotificationRuleResult& WithStatus(NotificationRuleStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the notification rule was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline DescribeNotificationRuleResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline DescribeNotificationRuleResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the notification rule was most recently updated, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline DescribeNotificationRuleResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline DescribeNotificationRuleResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the notification rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeNotificationRuleResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeNotificationRuleResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeNotificationRuleResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeNotificationRuleResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeNotificationRuleResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeNotificationRuleResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeNotificationRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeNotificationRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeNotificationRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
