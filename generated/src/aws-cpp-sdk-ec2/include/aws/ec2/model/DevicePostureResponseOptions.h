/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnTrustProvider.h>

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
 * <p>Information about the device posture options for a Client VPN
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DevicePostureResponseOptions">AWS
 * API Reference</a></p>
 */
class DevicePostureResponseOptions {
 public:
  AWS_EC2_API DevicePostureResponseOptions() = default;
  AWS_EC2_API DevicePostureResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API DevicePostureResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The device trust providers configured for the Client VPN endpoint.</p>
   */
  inline const Aws::Vector<ClientVpnTrustProvider>& GetTrustProviders() const { return m_trustProviders; }
  inline bool TrustProvidersHasBeenSet() const { return m_trustProvidersHasBeenSet; }
  template <typename TrustProvidersT = Aws::Vector<ClientVpnTrustProvider>>
  void SetTrustProviders(TrustProvidersT&& value) {
    m_trustProvidersHasBeenSet = true;
    m_trustProviders = std::forward<TrustProvidersT>(value);
  }
  template <typename TrustProvidersT = Aws::Vector<ClientVpnTrustProvider>>
  DevicePostureResponseOptions& WithTrustProviders(TrustProvidersT&& value) {
    SetTrustProviders(std::forward<TrustProvidersT>(value));
    return *this;
  }
  template <typename TrustProvidersT = ClientVpnTrustProvider>
  DevicePostureResponseOptions& AddTrustProviders(TrustProvidersT&& value) {
    m_trustProvidersHasBeenSet = true;
    m_trustProviders.emplace_back(std::forward<TrustProvidersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ClientVpnTrustProvider> m_trustProviders;
  bool m_trustProvidersHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
