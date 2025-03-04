/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/EventType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class UpdateNotificationConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API UpdateNotificationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of event triggering a device notification to the customer-managed
     * destination.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline UpdateNotificationConfigurationRequest& WithEventType(const EventType& value) { SetEventType(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}
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
    inline UpdateNotificationConfigurationRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline UpdateNotificationConfigurationRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
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
