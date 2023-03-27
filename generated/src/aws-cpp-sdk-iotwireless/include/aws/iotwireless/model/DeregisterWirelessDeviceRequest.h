/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
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
  class DeregisterWirelessDeviceRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API DeregisterWirelessDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline DeregisterWirelessDeviceRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline DeregisterWirelessDeviceRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the wireless device to deregister from AWS IoT
     * Wireless.</p>
     */
    inline DeregisterWirelessDeviceRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline const WirelessDeviceType& GetWirelessDeviceType() const{ return m_wirelessDeviceType; }

    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }

    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline void SetWirelessDeviceType(const WirelessDeviceType& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }

    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline void SetWirelessDeviceType(WirelessDeviceType&& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = std::move(value); }

    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline DeregisterWirelessDeviceRequest& WithWirelessDeviceType(const WirelessDeviceType& value) { SetWirelessDeviceType(value); return *this;}

    /**
     * <p>The type of wireless device to deregister from AWS IoT Wireless, which can be
     * <code>LoRaWAN</code> or <code>Sidewalk</code>.</p>
     */
    inline DeregisterWirelessDeviceRequest& WithWirelessDeviceType(WirelessDeviceType&& value) { SetWirelessDeviceType(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    WirelessDeviceType m_wirelessDeviceType;
    bool m_wirelessDeviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
