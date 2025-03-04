/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/EventType.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure describing a notification configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/NotificationConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class NotificationConfigurationSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API NotificationConfigurationSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API NotificationConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API NotificationConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event triggering a device notification to the customer-managed
     * destination.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline NotificationConfigurationSummary& WithEventType(const EventType& value) { SetEventType(value); return *this;}
    inline NotificationConfigurationSummary& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the destination for the notification configuration.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }
    inline NotificationConfigurationSummary& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline NotificationConfigurationSummary& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline NotificationConfigurationSummary& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}
  private:

    EventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
