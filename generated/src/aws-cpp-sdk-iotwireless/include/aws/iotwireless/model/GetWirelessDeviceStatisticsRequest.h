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
  class GetWirelessDeviceStatisticsRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWirelessDeviceStatistics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline const Aws::String& GetWirelessDeviceId() const{ return m_wirelessDeviceId; }

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline bool WirelessDeviceIdHasBeenSet() const { return m_wirelessDeviceIdHasBeenSet; }

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline void SetWirelessDeviceId(const Aws::String& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = value; }

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline void SetWirelessDeviceId(Aws::String&& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = std::move(value); }

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline void SetWirelessDeviceId(const char* value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId.assign(value); }

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline GetWirelessDeviceStatisticsRequest& WithWirelessDeviceId(const Aws::String& value) { SetWirelessDeviceId(value); return *this;}

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline GetWirelessDeviceStatisticsRequest& WithWirelessDeviceId(Aws::String&& value) { SetWirelessDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline GetWirelessDeviceStatisticsRequest& WithWirelessDeviceId(const char* value) { SetWirelessDeviceId(value); return *this;}

  private:

    Aws::String m_wirelessDeviceId;
    bool m_wirelessDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
