/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/IdentifierType.h>
#include <aws/iotwireless/model/EventNotificationPartnerType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class GetResourceEventConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetResourceEventConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceEventConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline GetResourceEventConfigurationRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline GetResourceEventConfigurationRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline GetResourceEventConfigurationRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


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
    inline GetResourceEventConfigurationRequest& WithIdentifierType(const IdentifierType& value) { SetIdentifierType(value); return *this;}

    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline GetResourceEventConfigurationRequest& WithIdentifierType(IdentifierType&& value) { SetIdentifierType(std::move(value)); return *this;}


    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline const EventNotificationPartnerType& GetPartnerType() const{ return m_partnerType; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline void SetPartnerType(const EventNotificationPartnerType& value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline void SetPartnerType(EventNotificationPartnerType&& value) { m_partnerTypeHasBeenSet = true; m_partnerType = std::move(value); }

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline GetResourceEventConfigurationRequest& WithPartnerType(const EventNotificationPartnerType& value) { SetPartnerType(value); return *this;}

    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline GetResourceEventConfigurationRequest& WithPartnerType(EventNotificationPartnerType&& value) { SetPartnerType(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType;
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType;
    bool m_partnerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
