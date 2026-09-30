/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GlobalAccelerator {
namespace Model {

/**
 * <p>Detailed information for the IP addresses assigned to the Global
 * Accelerator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/IpAddressDetail">AWS
 * API Reference</a></p>
 */
class IpAddressDetail {
 public:
  AWS_GLOBALACCELERATOR_API IpAddressDetail() = default;
  AWS_GLOBALACCELERATOR_API IpAddressDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLOBALACCELERATOR_API IpAddressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The static IP address.</p>
   */
  inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
  inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
  template <typename IpAddressT = Aws::String>
  void SetIpAddress(IpAddressT&& value) {
    m_ipAddressHasBeenSet = true;
    m_ipAddress = std::forward<IpAddressT>(value);
  }
  template <typename IpAddressT = Aws::String>
  IpAddressDetail& WithIpAddress(IpAddressT&& value) {
    SetIpAddress(std::forward<IpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network zone that the specified IP address is located on.</p>
   */
  inline const Aws::String& GetNetworkZone() const { return m_networkZone; }
  inline bool NetworkZoneHasBeenSet() const { return m_networkZoneHasBeenSet; }
  template <typename NetworkZoneT = Aws::String>
  void SetNetworkZone(NetworkZoneT&& value) {
    m_networkZoneHasBeenSet = true;
    m_networkZone = std::forward<NetworkZoneT>(value);
  }
  template <typename NetworkZoneT = Aws::String>
  IpAddressDetail& WithNetworkZone(NetworkZoneT&& value) {
    SetNetworkZone(std::forward<NetworkZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ipAddress;

  Aws::String m_networkZone;
  bool m_ipAddressHasBeenSet = false;
  bool m_networkZoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace GlobalAccelerator
}  // namespace Aws
