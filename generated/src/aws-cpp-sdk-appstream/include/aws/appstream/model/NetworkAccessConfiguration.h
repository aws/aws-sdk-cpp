/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes the network details of the fleet or image builder
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/NetworkAccessConfiguration">AWS
 * API Reference</a></p>
 */
class NetworkAccessConfiguration {
 public:
  AWS_APPSTREAM_API NetworkAccessConfiguration() = default;
  AWS_APPSTREAM_API NetworkAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API NetworkAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The private IP address of the elastic network interface that is attached to
   * instances in your VPC.</p>
   */
  inline const Aws::String& GetEniPrivateIpAddress() const { return m_eniPrivateIpAddress; }
  inline bool EniPrivateIpAddressHasBeenSet() const { return m_eniPrivateIpAddressHasBeenSet; }
  template <typename EniPrivateIpAddressT = Aws::String>
  void SetEniPrivateIpAddress(EniPrivateIpAddressT&& value) {
    m_eniPrivateIpAddressHasBeenSet = true;
    m_eniPrivateIpAddress = std::forward<EniPrivateIpAddressT>(value);
  }
  template <typename EniPrivateIpAddressT = Aws::String>
  NetworkAccessConfiguration& WithEniPrivateIpAddress(EniPrivateIpAddressT&& value) {
    SetEniPrivateIpAddress(std::forward<EniPrivateIpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv6 addresses assigned to the elastic network interface. This field
   * supports IPv6 connectivity for WorkSpaces Applications instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEniIpv6Addresses() const { return m_eniIpv6Addresses; }
  inline bool EniIpv6AddressesHasBeenSet() const { return m_eniIpv6AddressesHasBeenSet; }
  template <typename EniIpv6AddressesT = Aws::Vector<Aws::String>>
  void SetEniIpv6Addresses(EniIpv6AddressesT&& value) {
    m_eniIpv6AddressesHasBeenSet = true;
    m_eniIpv6Addresses = std::forward<EniIpv6AddressesT>(value);
  }
  template <typename EniIpv6AddressesT = Aws::Vector<Aws::String>>
  NetworkAccessConfiguration& WithEniIpv6Addresses(EniIpv6AddressesT&& value) {
    SetEniIpv6Addresses(std::forward<EniIpv6AddressesT>(value));
    return *this;
  }
  template <typename EniIpv6AddressesT = Aws::String>
  NetworkAccessConfiguration& AddEniIpv6Addresses(EniIpv6AddressesT&& value) {
    m_eniIpv6AddressesHasBeenSet = true;
    m_eniIpv6Addresses.emplace_back(std::forward<EniIpv6AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource identifier of the elastic network interface that is attached to
   * instances in your VPC. All network interfaces have the eni-xxxxxxxx resource
   * identifier.</p>
   */
  inline const Aws::String& GetEniId() const { return m_eniId; }
  inline bool EniIdHasBeenSet() const { return m_eniIdHasBeenSet; }
  template <typename EniIdT = Aws::String>
  void SetEniId(EniIdT&& value) {
    m_eniIdHasBeenSet = true;
    m_eniId = std::forward<EniIdT>(value);
  }
  template <typename EniIdT = Aws::String>
  NetworkAccessConfiguration& WithEniId(EniIdT&& value) {
    SetEniId(std::forward<EniIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eniPrivateIpAddress;
  bool m_eniPrivateIpAddressHasBeenSet = false;

  Aws::Vector<Aws::String> m_eniIpv6Addresses;
  bool m_eniIpv6AddressesHasBeenSet = false;

  Aws::String m_eniId;
  bool m_eniIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
