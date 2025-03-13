/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class GetWirelessGatewayStatisticsRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWirelessGatewayStatistics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const { return m_wirelessGatewayId; }
    inline bool WirelessGatewayIdHasBeenSet() const { return m_wirelessGatewayIdHasBeenSet; }
    template<typename WirelessGatewayIdT = Aws::String>
    void SetWirelessGatewayId(WirelessGatewayIdT&& value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId = std::forward<WirelessGatewayIdT>(value); }
    template<typename WirelessGatewayIdT = Aws::String>
    GetWirelessGatewayStatisticsRequest& WithWirelessGatewayId(WirelessGatewayIdT&& value) { SetWirelessGatewayId(std::forward<WirelessGatewayIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessGatewayId;
    bool m_wirelessGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
