/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/SourceIpAddressTypeEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticLoadBalancingv2 {
namespace Model {

/**
 * <p>Information about a source IP condition.</p> <p>You can use this condition to
 * route based on the IP address of the source that connects to the load balancer.
 * If a client is behind a proxy, this is the IP address of the proxy not the IP
 * address of the client.</p> <p>For Application Load Balancers, use
 * <code>Values</code> to specify CIDR ranges. For Network Load Balancers, use
 * <code>IpAddressType</code> to match on the IP address type of the source
 * traffic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/SourceIpConditionConfig">AWS
 * API Reference</a></p>
 */
class SourceIpConditionConfig {
 public:
  AWS_ELASTICLOADBALANCINGV2_API SourceIpConditionConfig() = default;
  AWS_ELASTICLOADBALANCINGV2_API SourceIpConditionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API SourceIpConditionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The source IP addresses, in CIDR format. You can use both IPv4 and IPv6
   * addresses. Wildcards are not supported.</p> <p>If you specify multiple
   * addresses, the condition is satisfied if the source IP address of the request
   * matches one of the CIDR blocks. This condition is not satisfied by the addresses
   * in the X-Forwarded-For header. To search for addresses in the X-Forwarded-For
   * header, use an <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#http-header-conditions">HTTP
   * header condition</a>.</p> <p>The total number of values must be less than, or
   * equal to five.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  SourceIpConditionConfig& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  SourceIpConditionConfig& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address type for Network Load Balancers.</p> <p>The valid values
   * are:</p> <ul> <li> <p> <code>ipv4</code> – IPv4 addresses only.</p> </li> <li>
   * <p> <code>ipv6</code> – IPv6 addresses only.</p> </li> </ul>
   */
  inline SourceIpAddressTypeEnum GetIpAddressType() const { return m_ipAddressType; }
  inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
  inline void SetIpAddressType(SourceIpAddressTypeEnum value) {
    m_ipAddressTypeHasBeenSet = true;
    m_ipAddressType = value;
  }
  inline SourceIpConditionConfig& WithIpAddressType(SourceIpAddressTypeEnum value) {
    SetIpAddressType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_values;

  SourceIpAddressTypeEnum m_ipAddressType{SourceIpAddressTypeEnum::NOT_SET};
  bool m_valuesHasBeenSet = false;
  bool m_ipAddressTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
