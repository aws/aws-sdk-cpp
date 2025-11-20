/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/IpamCidrConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>The configuration IPAM settings that includes the quantity of CIDR
 * configurations and the list of IPAM CIDR configurations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/IpamConfig">AWS
 * API Reference</a></p>
 */
class IpamConfig {
 public:
  AWS_CLOUDFRONT_API IpamConfig() = default;
  AWS_CLOUDFRONT_API IpamConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API IpamConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The number of IPAM CIDR configurations in the <code>IpamCidrConfigs</code>
   * list.</p>
   */
  inline int GetQuantity() const { return m_quantity; }
  inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
  inline void SetQuantity(int value) {
    m_quantityHasBeenSet = true;
    m_quantity = value;
  }
  inline IpamConfig& WithQuantity(int value) {
    SetQuantity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of IPAM CIDR configurations that define the IP address ranges, IPAM
   * pools, and associated Anycast IP addresses.</p>
   */
  inline const Aws::Vector<IpamCidrConfig>& GetIpamCidrConfigs() const { return m_ipamCidrConfigs; }
  inline bool IpamCidrConfigsHasBeenSet() const { return m_ipamCidrConfigsHasBeenSet; }
  template <typename IpamCidrConfigsT = Aws::Vector<IpamCidrConfig>>
  void SetIpamCidrConfigs(IpamCidrConfigsT&& value) {
    m_ipamCidrConfigsHasBeenSet = true;
    m_ipamCidrConfigs = std::forward<IpamCidrConfigsT>(value);
  }
  template <typename IpamCidrConfigsT = Aws::Vector<IpamCidrConfig>>
  IpamConfig& WithIpamCidrConfigs(IpamCidrConfigsT&& value) {
    SetIpamCidrConfigs(std::forward<IpamCidrConfigsT>(value));
    return *this;
  }
  template <typename IpamCidrConfigsT = IpamCidrConfig>
  IpamConfig& AddIpamCidrConfigs(IpamCidrConfigsT&& value) {
    m_ipamCidrConfigsHasBeenSet = true;
    m_ipamCidrConfigs.emplace_back(std::forward<IpamCidrConfigsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_quantity{0};
  bool m_quantityHasBeenSet = false;

  Aws::Vector<IpamCidrConfig> m_ipamCidrConfigs;
  bool m_ipamCidrConfigsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
