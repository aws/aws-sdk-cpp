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
   * <p>Details about an NTP server connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NtpStatus">AWS
   * API Reference</a></p>
   */
  class NtpStatus
  {
  public:
    AWS_PANORAMA_API NtpStatus();
    AWS_PANORAMA_API NtpStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NtpStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The connection's status.</p>
     */
    inline const NetworkConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }

    /**
     * <p>The connection's status.</p>
     */
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }

    /**
     * <p>The connection's status.</p>
     */
    inline void SetConnectionStatus(const NetworkConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }

    /**
     * <p>The connection's status.</p>
     */
    inline void SetConnectionStatus(NetworkConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }

    /**
     * <p>The connection's status.</p>
     */
    inline NtpStatus& WithConnectionStatus(const NetworkConnectionStatus& value) { SetConnectionStatus(value); return *this;}

    /**
     * <p>The connection's status.</p>
     */
    inline NtpStatus& WithConnectionStatus(NetworkConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}


    /**
     * <p>The IP address of the server.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the server.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the server.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the server.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the server.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the server.</p>
     */
    inline NtpStatus& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the server.</p>
     */
    inline NtpStatus& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the server.</p>
     */
    inline NtpStatus& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The domain name of the server.</p>
     */
    inline const Aws::String& GetNtpServerName() const{ return m_ntpServerName; }

    /**
     * <p>The domain name of the server.</p>
     */
    inline bool NtpServerNameHasBeenSet() const { return m_ntpServerNameHasBeenSet; }

    /**
     * <p>The domain name of the server.</p>
     */
    inline void SetNtpServerName(const Aws::String& value) { m_ntpServerNameHasBeenSet = true; m_ntpServerName = value; }

    /**
     * <p>The domain name of the server.</p>
     */
    inline void SetNtpServerName(Aws::String&& value) { m_ntpServerNameHasBeenSet = true; m_ntpServerName = std::move(value); }

    /**
     * <p>The domain name of the server.</p>
     */
    inline void SetNtpServerName(const char* value) { m_ntpServerNameHasBeenSet = true; m_ntpServerName.assign(value); }

    /**
     * <p>The domain name of the server.</p>
     */
    inline NtpStatus& WithNtpServerName(const Aws::String& value) { SetNtpServerName(value); return *this;}

    /**
     * <p>The domain name of the server.</p>
     */
    inline NtpStatus& WithNtpServerName(Aws::String&& value) { SetNtpServerName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the server.</p>
     */
    inline NtpStatus& WithNtpServerName(const char* value) { SetNtpServerName(value); return *this;}

  private:

    NetworkConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_ntpServerName;
    bool m_ntpServerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
