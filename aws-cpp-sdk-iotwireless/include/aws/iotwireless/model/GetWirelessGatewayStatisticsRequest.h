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
    AWS_IOTWIRELESS_API GetWirelessGatewayStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWirelessGatewayStatistics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline const Aws::String& GetWirelessGatewayId() const{ return m_wirelessGatewayId; }

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline bool WirelessGatewayIdHasBeenSet() const { return m_wirelessGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline void SetWirelessGatewayId(const Aws::String& value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId = value; }

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline void SetWirelessGatewayId(Aws::String&& value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId = std::move(value); }

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline void SetWirelessGatewayId(const char* value) { m_wirelessGatewayIdHasBeenSet = true; m_wirelessGatewayId.assign(value); }

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline GetWirelessGatewayStatisticsRequest& WithWirelessGatewayId(const Aws::String& value) { SetWirelessGatewayId(value); return *this;}

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline GetWirelessGatewayStatisticsRequest& WithWirelessGatewayId(Aws::String&& value) { SetWirelessGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateway for which to get the data.</p>
     */
    inline GetWirelessGatewayStatisticsRequest& WithWirelessGatewayId(const char* value) { SetWirelessGatewayId(value); return *this;}

  private:

    Aws::String m_wirelessGatewayId;
    bool m_wirelessGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
