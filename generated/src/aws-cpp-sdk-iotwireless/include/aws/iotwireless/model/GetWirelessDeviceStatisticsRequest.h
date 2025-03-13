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
    AWS_IOTWIRELESS_API GetWirelessDeviceStatisticsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWirelessDeviceStatistics"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the wireless device for which to get the data.</p>
     */
    inline const Aws::String& GetWirelessDeviceId() const { return m_wirelessDeviceId; }
    inline bool WirelessDeviceIdHasBeenSet() const { return m_wirelessDeviceIdHasBeenSet; }
    template<typename WirelessDeviceIdT = Aws::String>
    void SetWirelessDeviceId(WirelessDeviceIdT&& value) { m_wirelessDeviceIdHasBeenSet = true; m_wirelessDeviceId = std::forward<WirelessDeviceIdT>(value); }
    template<typename WirelessDeviceIdT = Aws::String>
    GetWirelessDeviceStatisticsRequest& WithWirelessDeviceId(WirelessDeviceIdT&& value) { SetWirelessDeviceId(std::forward<WirelessDeviceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_wirelessDeviceId;
    bool m_wirelessDeviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
