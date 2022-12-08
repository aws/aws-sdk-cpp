/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/NetworkConnectionStatus.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A device's Ethernet status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/EthernetStatus">AWS
   * API Reference</a></p>
   */
  class EthernetStatus
  {
  public:
    AWS_PANORAMA_API EthernetStatus();
    AWS_PANORAMA_API EthernetStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API EthernetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device's connection status.</p>
     */
    inline const NetworkConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The device's connection status.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>The device's connection status.</p>
     */
    inline void SetConnectionStatus(const NetworkConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>The device's connection status.</p>
     */
    inline void SetConnectionStatus(NetworkConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>The device's connection status.</p>
     */
    inline EthernetStatus& WithConnectionStatus(const NetworkConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The device's connection status.</p>
     */
    inline EthernetStatus& WithConnectionStatus(NetworkConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>The device's physical address.</p>
     */
    inline const Aws::String& GetHwAddress() const{ return m_hwAddress; }

    /**
     * <p>The device's physical address.</p>
     */
    inline bool HwAddressHasBeenSet() const { return m_hwAddressHasBeenSet; }

    /**
     * <p>The device's physical address.</p>
     */
    inline void SetHwAddress(const Aws::String& value) { m_hwAddressHasBeenSet = true; m_hwAddress = value; }

    /**
     * <p>The device's physical address.</p>
     */
    inline void SetHwAddress(Aws::String&& value) { m_hwAddressHasBeenSet = true; m_hwAddress = std::move(value); }

    /**
     * <p>The device's physical address.</p>
     */
    inline void SetHwAddress(const char* value) { m_hwAddressHasBeenSet = true; m_hwAddress.assign(value); }

    /**
     * <p>The device's physical address.</p>
     */
    inline EthernetStatus& WithHwAddress(const Aws::String& value) { SetHwAddress(value); return *this;}

    /**
     * <p>The device's physical address.</p>
     */
    inline EthernetStatus& WithHwAddress(Aws::String&& value) { SetHwAddress(std::move(value)); return *this;}

    /**
     * <p>The device's physical address.</p>
     */
    inline EthernetStatus& WithHwAddress(const char* value) { SetHwAddress(value); return *this;}


    /**
     * <p>The device's IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The device's IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The device's IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The device's IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The device's IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The device's IP address.</p>
     */
    inline EthernetStatus& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The device's IP address.</p>
     */
    inline EthernetStatus& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The device's IP address.</p>
     */
    inline EthernetStatus& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

  private:

    NetworkConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_hwAddress;
    bool m_hwAddressHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
