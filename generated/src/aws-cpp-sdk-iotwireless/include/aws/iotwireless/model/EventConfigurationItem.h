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
    AWS_IOTWIRELESS_API EventConfigurationItem();
    AWS_IOTWIRELESS_API EventConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API EventConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline EventConfigurationItem& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline EventConfigurationItem& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier opted in for event messaging.</p>
     */
    inline EventConfigurationItem& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline const IdentifierType& GetIdentifierType() const{ return m_identifierType; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline void SetIdentifierType(const IdentifierType& value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline void SetIdentifierType(IdentifierType&& value) { m_identifierTypeHasBeenSet = true; m_identifierType = std::move(value); }

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline EventConfigurationItem& WithIdentifierType(const IdentifierType& value) { SetIdentifierType(value); return *this;}

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline EventConfigurationItem& WithIdentifierType(IdentifierType&& value) { SetIdentifierType(std::move(value)); return *this;}


    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline const EventNotificationPartnerType& GetPartnerType() const{ return m_partnerType; }

    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }

    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline void SetPartnerType(const EventNotificationPartnerType& value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }

    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline void SetPartnerType(EventNotificationPartnerType&& value) { m_partnerTypeHasBeenSet = true; m_partnerType = std::move(value); }

    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline EventConfigurationItem& WithPartnerType(const EventNotificationPartnerType& value) { SetPartnerType(value); return *this;}

    /**
     * <p>Partner type of the resource if the identifier type is PartnerAccountId.</p>
     */
    inline EventConfigurationItem& WithPartnerType(EventNotificationPartnerType&& value) { SetPartnerType(std::move(value)); return *this;}


    
    inline const EventNotificationItemConfigurations& GetEvents() const{ return m_events; }

    
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    
    inline void SetEvents(const EventNotificationItemConfigurations& value) { m_eventsHasBeenSet = true; m_events = value; }

    
    inline void SetEvents(EventNotificationItemConfigurations&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    
    inline EventConfigurationItem& WithEvents(const EventNotificationItemConfigurations& value) { SetEvents(value); return *this;}

    
    inline EventConfigurationItem& WithEvents(EventNotificationItemConfigurations&& value) { SetEvents(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType;
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType;
    bool m_partnerTypeHasBeenSet = false;

    EventNotificationItemConfigurations m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
