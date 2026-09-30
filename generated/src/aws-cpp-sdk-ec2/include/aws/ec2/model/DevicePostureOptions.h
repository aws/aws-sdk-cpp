/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnTrustProviderRequest.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the device posture options for a Client VPN endpoint. Device
 * posture options specify the device trust providers that the endpoint uses to
 * evaluate the security posture of connecting devices.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DevicePostureOptions">AWS
 * API Reference</a></p>
 */
class DevicePostureOptions {
 public:
  AWS_EC2_API DevicePostureOptions() = default;
  AWS_EC2_API DevicePostureOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API DevicePostureOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The device trust providers to configure for the Client VPN endpoint.</p>
   */
  inline const Aws::Vector<ClientVpnTrustProviderRequest>& GetTrustProviders() const { return m_trustProviders; }
  inline bool TrustProvidersHasBeenSet() const { return m_trustProvidersHasBeenSet; }
  template <typename TrustProvidersT = Aws::Vector<ClientVpnTrustProviderRequest>>
  void SetTrustProviders(TrustProvidersT&& value) {
    m_trustProvidersHasBeenSet = true;
    m_trustProviders = std::forward<TrustProvidersT>(value);
  }
  template <typename TrustProvidersT = Aws::Vector<ClientVpnTrustProviderRequest>>
  DevicePostureOptions& WithTrustProviders(TrustProvidersT&& value) {
    SetTrustProviders(std::forward<TrustProvidersT>(value));
    return *this;
  }
  template <typename TrustProvidersT = ClientVpnTrustProviderRequest>
  DevicePostureOptions& AddTrustProviders(TrustProvidersT&& value) {
    m_trustProvidersHasBeenSet = true;
    m_trustProviders.emplace_back(std::forward<TrustProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether device posture evaluation is enabled for the Client VPN
   * endpoint. Specify <code>false</code> to disable device posture, which clears the
   * configured device trust providers.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DevicePostureOptions& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClientVpnTrustProviderRequest> m_trustProviders;

  bool m_enabled{false};
  bool m_trustProvidersHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
