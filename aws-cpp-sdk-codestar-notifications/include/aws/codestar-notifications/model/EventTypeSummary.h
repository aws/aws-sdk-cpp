/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStarNotifications
{
namespace Model
{

  /**
   * <p>Returns information about an event that has triggered a notification
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/EventTypeSummary">AWS
   * API Reference</a></p>
   */
  class EventTypeSummary
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary();
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline const Aws::String& GetEventTypeId() const{ return m_eventTypeId; }

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline bool EventTypeIdHasBeenSet() const { return m_eventTypeIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline void SetEventTypeId(const Aws::String& value) { m_eventTypeIdHasBeenSet = true; m_eventTypeId = value; }

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline void SetEventTypeId(Aws::String&& value) { m_eventTypeIdHasBeenSet = true; m_eventTypeId = std::move(value); }

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline void SetEventTypeId(const char* value) { m_eventTypeIdHasBeenSet = true; m_eventTypeId.assign(value); }

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline EventTypeSummary& WithEventTypeId(const Aws::String& value) { SetEventTypeId(value); return *this;}

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline EventTypeSummary& WithEventTypeId(Aws::String&& value) { SetEventTypeId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline EventTypeSummary& WithEventTypeId(const char* value) { SetEventTypeId(value); return *this;}


    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline EventTypeSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline EventTypeSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline EventTypeSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The name of the event.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The name of the event.</p>
     */
    inline EventTypeSummary& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline EventTypeSummary& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the event.</p>
     */
    inline EventTypeSummary& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The resource type of the event.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type of the event.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the event.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type of the event.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type of the event.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type of the event.</p>
     */
    inline EventTypeSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type of the event.</p>
     */
    inline EventTypeSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type of the event.</p>
     */
    inline EventTypeSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_eventTypeId;
    bool m_eventTypeIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
