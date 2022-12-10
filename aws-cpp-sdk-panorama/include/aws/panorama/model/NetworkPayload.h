/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/EthernetPayload.h>
#include <aws/panorama/model/NtpPayload.h>
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
   * <p>The network configuration for a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NetworkPayload">AWS
   * API Reference</a></p>
   */
  class NetworkPayload
  {
  public:
    AWS_PANORAMA_API NetworkPayload();
    AWS_PANORAMA_API NetworkPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NetworkPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline const EthernetPayload& GetEthernet0() const{ return m_ethernet0; }

    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline bool Ethernet0HasBeenSet() const { return m_ethernet0HasBeenSet; }

    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline void SetEthernet0(const EthernetPayload& value) { m_ethernet0HasBeenSet = true; m_ethernet0 = value; }

    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline void SetEthernet0(EthernetPayload&& value) { m_ethernet0HasBeenSet = true; m_ethernet0 = std::move(value); }

    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline NetworkPayload& WithEthernet0(const EthernetPayload& value) { SetEthernet0(value); return *this;}

    /**
     * <p>Settings for Ethernet port 0.</p>
     */
    inline NetworkPayload& WithEthernet0(EthernetPayload&& value) { SetEthernet0(std::move(value)); return *this;}


    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline const EthernetPayload& GetEthernet1() const{ return m_ethernet1; }

    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline bool Ethernet1HasBeenSet() const { return m_ethernet1HasBeenSet; }

    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline void SetEthernet1(const EthernetPayload& value) { m_ethernet1HasBeenSet = true; m_ethernet1 = value; }

    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline void SetEthernet1(EthernetPayload&& value) { m_ethernet1HasBeenSet = true; m_ethernet1 = std::move(value); }

    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline NetworkPayload& WithEthernet1(const EthernetPayload& value) { SetEthernet1(value); return *this;}

    /**
     * <p>Settings for Ethernet port 1.</p>
     */
    inline NetworkPayload& WithEthernet1(EthernetPayload&& value) { SetEthernet1(std::move(value)); return *this;}


    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline const NtpPayload& GetNtp() const{ return m_ntp; }

    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline bool NtpHasBeenSet() const { return m_ntpHasBeenSet; }

    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline void SetNtp(const NtpPayload& value) { m_ntpHasBeenSet = true; m_ntp = value; }

    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline void SetNtp(NtpPayload&& value) { m_ntpHasBeenSet = true; m_ntp = std::move(value); }

    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline NetworkPayload& WithNtp(const NtpPayload& value) { SetNtp(value); return *this;}

    /**
     * <p>Network time protocol (NTP) server settings.</p>
     */
    inline NetworkPayload& WithNtp(NtpPayload&& value) { SetNtp(std::move(value)); return *this;}

  private:

    EthernetPayload m_ethernet0;
    bool m_ethernet0HasBeenSet = false;

    EthernetPayload m_ethernet1;
    bool m_ethernet1HasBeenSet = false;

    NtpPayload m_ntp;
    bool m_ntpHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
