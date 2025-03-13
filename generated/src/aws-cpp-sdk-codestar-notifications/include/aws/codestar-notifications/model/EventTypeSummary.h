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
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary() = default;
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API EventTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARNOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the event. For a complete list of event types and
     * IDs, see <a
     * href="https://docs.aws.amazon.com/codestar-notifications/latest/userguide/concepts.html#concepts-api">Notification
     * concepts</a> in the <i>Developer Tools Console User Guide</i>.</p>
     */
    inline const Aws::String& GetEventTypeId() const { return m_eventTypeId; }
    inline bool EventTypeIdHasBeenSet() const { return m_eventTypeIdHasBeenSet; }
    template<typename EventTypeIdT = Aws::String>
    void SetEventTypeId(EventTypeIdT&& value) { m_eventTypeIdHasBeenSet = true; m_eventTypeId = std::forward<EventTypeIdT>(value); }
    template<typename EventTypeIdT = Aws::String>
    EventTypeSummary& WithEventTypeId(EventTypeIdT&& value) { SetEventTypeId(std::forward<EventTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service for which the event applies.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    EventTypeSummary& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    EventTypeSummary& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the event.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    EventTypeSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}
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
