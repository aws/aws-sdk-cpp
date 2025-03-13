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
    AWS_IOTWIRELESS_API GetResourceEventConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceEventConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Resource identifier to opt in for event messaging.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetResourceEventConfigurationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier type of the particular resource identifier for event
     * configuration.</p>
     */
    inline IdentifierType GetIdentifierType() const { return m_identifierType; }
    inline bool IdentifierTypeHasBeenSet() const { return m_identifierTypeHasBeenSet; }
    inline void SetIdentifierType(IdentifierType value) { m_identifierTypeHasBeenSet = true; m_identifierType = value; }
    inline GetResourceEventConfigurationRequest& WithIdentifierType(IdentifierType value) { SetIdentifierType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Partner type of the resource if the identifier type is
     * <code>PartnerAccountId</code>.</p>
     */
    inline EventNotificationPartnerType GetPartnerType() const { return m_partnerType; }
    inline bool PartnerTypeHasBeenSet() const { return m_partnerTypeHasBeenSet; }
    inline void SetPartnerType(EventNotificationPartnerType value) { m_partnerTypeHasBeenSet = true; m_partnerType = value; }
    inline GetResourceEventConfigurationRequest& WithPartnerType(EventNotificationPartnerType value) { SetPartnerType(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    IdentifierType m_identifierType{IdentifierType::NOT_SET};
    bool m_identifierTypeHasBeenSet = false;

    EventNotificationPartnerType m_partnerType{EventNotificationPartnerType::NOT_SET};
    bool m_partnerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
