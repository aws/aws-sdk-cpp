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
    AWS_DRS_API NetworkInterface() = default;
    AWS_DRS_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Network interface IPs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIps() const { return m_ips; }
    inline bool IpsHasBeenSet() const { return m_ipsHasBeenSet; }
    template<typename IpsT = Aws::Vector<Aws::String>>
    void SetIps(IpsT&& value) { m_ipsHasBeenSet = true; m_ips = std::forward<IpsT>(value); }
    template<typename IpsT = Aws::Vector<Aws::String>>
    NetworkInterface& WithIps(IpsT&& value) { SetIps(std::forward<IpsT>(value)); return *this;}
    template<typename IpsT = Aws::String>
    NetworkInterface& AddIps(IpsT&& value) { m_ipsHasBeenSet = true; m_ips.emplace_back(std::forward<IpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether this is the primary network interface.</p>
     */
    inline bool GetIsPrimary() const { return m_isPrimary; }
    inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
    inline void SetIsPrimary(bool value) { m_isPrimaryHasBeenSet = true; m_isPrimary = value; }
    inline NetworkInterface& WithIsPrimary(bool value) { SetIsPrimary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC address of the network interface.</p>
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    NetworkInterface& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ips;
    bool m_ipsHasBeenSet = false;

    bool m_isPrimary{false};
    bool m_isPrimaryHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
