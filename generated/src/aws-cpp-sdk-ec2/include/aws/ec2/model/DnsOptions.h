/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DnsRecordIpType.h>

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
 * <p>Describes the DNS options for an endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DnsOptions">AWS API
 * Reference</a></p>
 */
class DnsOptions {
 public:
  AWS_EC2_API DnsOptions() = default;
  AWS_EC2_API DnsOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API DnsOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The DNS records created for the endpoint.</p>
   */
  inline DnsRecordIpType GetDnsRecordIpType() const { return m_dnsRecordIpType; }
  inline bool DnsRecordIpTypeHasBeenSet() const { return m_dnsRecordIpTypeHasBeenSet; }
  inline void SetDnsRecordIpType(DnsRecordIpType value) {
    m_dnsRecordIpTypeHasBeenSet = true;
    m_dnsRecordIpType = value;
  }
  inline DnsOptions& WithDnsRecordIpType(DnsRecordIpType value) {
    SetDnsRecordIpType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to enable private DNS only for inbound endpoints.</p>
   */
  inline bool GetPrivateDnsOnlyForInboundResolverEndpoint() const { return m_privateDnsOnlyForInboundResolverEndpoint; }
  inline bool PrivateDnsOnlyForInboundResolverEndpointHasBeenSet() const { return m_privateDnsOnlyForInboundResolverEndpointHasBeenSet; }
  inline void SetPrivateDnsOnlyForInboundResolverEndpoint(bool value) {
    m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = true;
    m_privateDnsOnlyForInboundResolverEndpoint = value;
  }
  inline DnsOptions& WithPrivateDnsOnlyForInboundResolverEndpoint(bool value) {
    SetPrivateDnsOnlyForInboundResolverEndpoint(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The preference for which private domains have a private hosted zone created
   * for and associated with the specified VPC. Only supported when private DNS is
   * enabled and when the VPC endpoint type is ServiceNetwork or Resource. </p> <ul>
   * <li> <p> <code>ALL_DOMAINS</code> - VPC Lattice provisions private hosted zones
   * for all custom domain names.</p> </li> <li> <p>
   * <code>VERIFIED_DOMAINS_ONLY</code> - VPC Lattice provisions a private hosted
   * zone only if custom domain name has been verified by the provider.</p> </li>
   * <li> <p> <code>VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS</code> - VPC Lattice
   * provisions private hosted zones for all verified custom domain names and other
   * domain names that the resource consumer specifies. The resource consumer
   * specifies the domain names in the PrivateDnsSpecifiedDomains parameter.</p>
   * </li> <li> <p> <code>SPECIFIED_DOMAINS_ONLY</code> - VPC Lattice provisions a
   * private hosted zone for domain names specified by the resource consumer. The
   * resource consumer specifies the domain names in the PrivateDnsSpecifiedDomains
   * parameter.</p> </li> </ul>
   */
  inline const Aws::String& GetPrivateDnsPreference() const { return m_privateDnsPreference; }
  inline bool PrivateDnsPreferenceHasBeenSet() const { return m_privateDnsPreferenceHasBeenSet; }
  template <typename PrivateDnsPreferenceT = Aws::String>
  void SetPrivateDnsPreference(PrivateDnsPreferenceT&& value) {
    m_privateDnsPreferenceHasBeenSet = true;
    m_privateDnsPreference = std::forward<PrivateDnsPreferenceT>(value);
  }
  template <typename PrivateDnsPreferenceT = Aws::String>
  DnsOptions& WithPrivateDnsPreference(PrivateDnsPreferenceT&& value) {
    SetPrivateDnsPreference(std::forward<PrivateDnsPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates which of the private domains to create private hosted zones for
   * and associate with the specified VPC. Only supported when private DNS is enabled
   * and the private DNS preference is
   * <code>VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS</code> or
   * <code>SPECIFIED_DOMAINS_ONLY</code>. </p>
   */
  inline const Aws::Vector<Aws::String>& GetPrivateDnsSpecifiedDomains() const { return m_privateDnsSpecifiedDomains; }
  inline bool PrivateDnsSpecifiedDomainsHasBeenSet() const { return m_privateDnsSpecifiedDomainsHasBeenSet; }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::Vector<Aws::String>>
  void SetPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    m_privateDnsSpecifiedDomainsHasBeenSet = true;
    m_privateDnsSpecifiedDomains = std::forward<PrivateDnsSpecifiedDomainsT>(value);
  }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::Vector<Aws::String>>
  DnsOptions& WithPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    SetPrivateDnsSpecifiedDomains(std::forward<PrivateDnsSpecifiedDomainsT>(value));
    return *this;
  }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::String>
  DnsOptions& AddPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    m_privateDnsSpecifiedDomainsHasBeenSet = true;
    m_privateDnsSpecifiedDomains.emplace_back(std::forward<PrivateDnsSpecifiedDomainsT>(value));
    return *this;
  }
  ///@}
 private:
  DnsRecordIpType m_dnsRecordIpType{DnsRecordIpType::NOT_SET};
  bool m_dnsRecordIpTypeHasBeenSet = false;

  bool m_privateDnsOnlyForInboundResolverEndpoint{false};
  bool m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = false;

  Aws::String m_privateDnsPreference;
  bool m_privateDnsPreferenceHasBeenSet = false;

  Aws::Vector<Aws::String> m_privateDnsSpecifiedDomains;
  bool m_privateDnsSpecifiedDomainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
