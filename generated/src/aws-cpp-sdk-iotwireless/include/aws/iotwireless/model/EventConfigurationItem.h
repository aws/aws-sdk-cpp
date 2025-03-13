/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/IdentifierType.h>
#include <aws/iotwireless/model/EventNotificationPartnerType.h>
#include <aws/iotwireless/model/EventNotificationItemConfigurations.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Event configuration object for a single resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/EventConfigurationItem">AWS
   * API Reference</a></p>
   */
  class EventConfigurationItem
  {
  public:
    AWS_IOTWIRELESS_API EventConfigurationItem() = default;
    AWS_IOTWIRELESS_API EventConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API EventConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    EventConfigurationItem& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline IdentifierType GetIdentifierType() const { return m_identifierType; }
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }
    inline void SetIdentifierType(IdentifierType value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }
    inline EventConfigurationItem& WithIdentifierType(IdentifierType value) { SetIdentifierType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline EventNotificationPartnerType GetPartnerType() const { return m_partnerType; }
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }
    inline void SetPartnerType(EventNotificationPartnerType value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }
    inline EventConfigurationItem& WithPartnerType(EventNotificationPartnerType value) { SetPartnerType(value); return *this;}
    ///@}

    ///@{
    
    inline const EventNotificationItemConfigurations& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = EventNotificationItemConfigurations>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = EventNotificationItemConfigurations>
    EventConfigurationItem& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType{IdentifierType::NOT_SET};
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType{EventNotificationPartnerType::NOT_SET};
    bool m_partnerTypeHasBeenSet = false;

    EventNotificationItemConfigurations m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
