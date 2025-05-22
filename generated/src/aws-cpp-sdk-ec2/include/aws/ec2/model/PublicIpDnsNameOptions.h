/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Public hostname type options. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
   * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PublicIpDnsNameOptions">AWS
   * API Reference</a></p>
   */
  class PublicIpDnsNameOptions
  {
  public:
    AWS_EC2_API PublicIpDnsNameOptions() = default;
    AWS_EC2_API PublicIpDnsNameOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PublicIpDnsNameOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The public hostname type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-naming.html">EC2
     * instance hostnames, DNS names, and domains</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetDnsHostnameType() const { return m_dnsHostnameType; }
    inline bool DnsHostnameTypeHasBeenSet() const { return m_dnsHostnameTypeHasBeenSet; }
    template<typename DnsHostnameTypeT = Aws::String>
    void SetDnsHostnameType(DnsHostnameTypeT&& value) { m_dnsHostnameTypeHasBeenSet = true; m_dnsHostnameType = std::forward<DnsHostnameTypeT>(value); }
    template<typename DnsHostnameTypeT = Aws::String>
    PublicIpDnsNameOptions& WithDnsHostnameType(DnsHostnameTypeT&& value) { SetDnsHostnameType(std::forward<DnsHostnameTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv4-enabled public hostname for a network interface. Requests from within
     * the VPC resolve to the private primary IPv4 address of the network interface.
     * Requests from the internet resolve to the public IPv4 address of the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIpv4DnsName() const { return m_publicIpv4DnsName; }
    inline bool PublicIpv4DnsNameHasBeenSet() const { return m_publicIpv4DnsNameHasBeenSet; }
    template<typename PublicIpv4DnsNameT = Aws::String>
    void SetPublicIpv4DnsName(PublicIpv4DnsNameT&& value) { m_publicIpv4DnsNameHasBeenSet = true; m_publicIpv4DnsName = std::forward<PublicIpv4DnsNameT>(value); }
    template<typename PublicIpv4DnsNameT = Aws::String>
    PublicIpDnsNameOptions& WithPublicIpv4DnsName(PublicIpv4DnsNameT&& value) { SetPublicIpv4DnsName(std::forward<PublicIpv4DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPv6-enabled public hostname for a network interface. Requests from within
     * the VPC or from the internet resolve to the IPv6 GUA of the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIpv6DnsName() const { return m_publicIpv6DnsName; }
    inline bool PublicIpv6DnsNameHasBeenSet() const { return m_publicIpv6DnsNameHasBeenSet; }
    template<typename PublicIpv6DnsNameT = Aws::String>
    void SetPublicIpv6DnsName(PublicIpv6DnsNameT&& value) { m_publicIpv6DnsNameHasBeenSet = true; m_publicIpv6DnsName = std::forward<PublicIpv6DnsNameT>(value); }
    template<typename PublicIpv6DnsNameT = Aws::String>
    PublicIpDnsNameOptions& WithPublicIpv6DnsName(PublicIpv6DnsNameT&& value) { SetPublicIpv6DnsName(std::forward<PublicIpv6DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dual-stack public hostname for a network interface. Requests from within
     * the VPC resolve to both the private IPv4 address and the IPv6 Global Unicast
     * Address of the network interface. Requests from the internet resolve to both the
     * public IPv4 and the IPv6 GUA address of the network interface.</p>
     */
    inline const Aws::String& GetPublicDualStackDnsName() const { return m_publicDualStackDnsName; }
    inline bool PublicDualStackDnsNameHasBeenSet() const { return m_publicDualStackDnsNameHasBeenSet; }
    template<typename PublicDualStackDnsNameT = Aws::String>
    void SetPublicDualStackDnsName(PublicDualStackDnsNameT&& value) { m_publicDualStackDnsNameHasBeenSet = true; m_publicDualStackDnsName = std::forward<PublicDualStackDnsNameT>(value); }
    template<typename PublicDualStackDnsNameT = Aws::String>
    PublicIpDnsNameOptions& WithPublicDualStackDnsName(PublicDualStackDnsNameT&& value) { SetPublicDualStackDnsName(std::forward<PublicDualStackDnsNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dnsHostnameType;
    bool m_dnsHostnameTypeHasBeenSet = false;

    Aws::String m_publicIpv4DnsName;
    bool m_publicIpv4DnsNameHasBeenSet = false;

    Aws::String m_publicIpv6DnsName;
    bool m_publicIpv6DnsNameHasBeenSet = false;

    Aws::String m_publicDualStackDnsName;
    bool m_publicDualStackDnsNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
