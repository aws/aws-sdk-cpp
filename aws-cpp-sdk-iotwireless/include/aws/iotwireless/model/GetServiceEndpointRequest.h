/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/iotwireless/model/WirelessGatewayServiceType.h>
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
  class GetServiceEndpointRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetServiceEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceEndpoint"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline const WirelessGatewayServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline void SetServiceType(const WirelessGatewayServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline void SetServiceType(WirelessGatewayServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline GetServiceEndpointRequest& WithServiceType(const WirelessGatewayServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The service type for which to get endpoint information about. Can be
     * <code>CUPS</code> for the Configuration and Update Server endpoint, or
     * <code>LNS</code> for the LoRaWAN Network Server endpoint or <code>CLAIM</code>
     * for the global endpoint.</p>
     */
    inline GetServiceEndpointRequest& WithServiceType(WirelessGatewayServiceType&& value) { SetServiceType(std::move(value)); return *this;}

  private:

    WirelessGatewayServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
