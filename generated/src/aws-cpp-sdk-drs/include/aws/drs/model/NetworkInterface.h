/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_DRS_API NetworkInterface();
    AWS_DRS_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Network interface IPs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIps() const{ return m_ips; }

    /**
     * <p>Network interface IPs.</p>
     */
    inline bool IpsHasBeenSet() const { return m_ipsHasBeenSet; }

    /**
     * <p>Network interface IPs.</p>
     */
    inline void SetIps(const Aws::Vector<Aws::String>& value) { m_ipsHasBeenSet = true; m_ips = value; }

    /**
     * <p>Network interface IPs.</p>
     */
    inline void SetIps(Aws::Vector<Aws::String>&& value) { m_ipsHasBeenSet = true; m_ips = std::move(value); }

    /**
     * <p>Network interface IPs.</p>
     */
    inline NetworkInterface& WithIps(const Aws::Vector<Aws::String>& value) { SetIps(value); return *this;}

    /**
     * <p>Network interface IPs.</p>
     */
    inline NetworkInterface& WithIps(Aws::Vector<Aws::String>&& value) { SetIps(std::move(value)); return *this;}

    /**
     * <p>Network interface IPs.</p>
     */
    inline NetworkInterface& AddIps(const Aws::String& value) { m_ipsHasBeenSet = true; m_ips.push_back(value); return *this; }

    /**
     * <p>Network interface IPs.</p>
     */
    inline NetworkInterface& AddIps(Aws::String&& value) { m_ipsHasBeenSet = true; m_ips.push_back(std::move(value)); return *this; }

    /**
     * <p>Network interface IPs.</p>
     */
    inline NetworkInterface& AddIps(const char* value) { m_ipsHasBeenSet = true; m_ips.push_back(value); return *this; }


    /**
     * <p>Whether this is the primary network interface.</p>
     */
    inline bool GetIsPrimary() const{ return m_isPrimary; }

    /**
     * <p>Whether this is the primary network interface.</p>
     */
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }

    /**
     * <p>Whether this is the primary network interface.</p>
     */
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }

    /**
     * <p>Whether this is the primary network interface.</p>
     */
    inline NetworkInterface& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}


    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline NetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline NetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline NetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ips;
    bool m_ipsHasBeenSet = false;

    bool m_isPrimary;
    bool m_isPrimaryHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
