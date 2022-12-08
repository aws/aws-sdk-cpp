/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Wi-Fi access point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/WiFiAccessPoint">AWS
   * API Reference</a></p>
   */
  class WiFiAccessPoint
  {
  public:
    AWS_IOTWIRELESS_API WiFiAccessPoint();
    AWS_IOTWIRELESS_API WiFiAccessPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API WiFiAccessPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline WiFiAccessPoint& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline WiFiAccessPoint& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>Wi-Fi MAC Address.</p>
     */
    inline WiFiAccessPoint& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>Recived signal strength of the WLAN measurement data.</p>
     */
    inline int GetRss() const{ return m_rss; }

    /**
     * <p>Recived signal strength of the WLAN measurement data.</p>
     */
    inline bool RssHasBeenSet() const { return m_rssHasBeenSet; }

    /**
     * <p>Recived signal strength of the WLAN measurement data.</p>
     */
    inline void SetRss(int value) { m_rssHasBeenSet = true; m_rss = value; }

    /**
     * <p>Recived signal strength of the WLAN measurement data.</p>
     */
    inline WiFiAccessPoint& WithRss(int value) { SetRss(value); return *this;}

  private:

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    int m_rss;
    bool m_rssHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
