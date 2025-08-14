/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceConnectEndpointDnsNames.h>
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
   * <p>The public DNS names of the endpoint, including IPv4-only and dualstack DNS
   * names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceConnectEndpointPublicDnsNames">AWS
   * API Reference</a></p>
   */
  class InstanceConnectEndpointPublicDnsNames
  {
  public:
    AWS_EC2_API InstanceConnectEndpointPublicDnsNames() = default;
    AWS_EC2_API InstanceConnectEndpointPublicDnsNames(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceConnectEndpointPublicDnsNames& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4-only DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline const InstanceConnectEndpointDnsNames& GetIpv4() const { return m_ipv4; }
    inline bool Ipv4HasBeenSet() const { return m_ipv4HasBeenSet; }
    template<typename Ipv4T = InstanceConnectEndpointDnsNames>
    void SetIpv4(Ipv4T&& value) { m_ipv4HasBeenSet = true; m_ipv4 = std::forward<Ipv4T>(value); }
    template<typename Ipv4T = InstanceConnectEndpointDnsNames>
    InstanceConnectEndpointPublicDnsNames& WithIpv4(Ipv4T&& value) { SetIpv4(std::forward<Ipv4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dualstack DNS name of the EC2 Instance Connect Endpoint. A dualstack DNS
     * name supports connections from both IPv4 and IPv6 clients.</p>
     */
    inline const InstanceConnectEndpointDnsNames& GetDualstack() const { return m_dualstack; }
    inline bool DualstackHasBeenSet() const { return m_dualstackHasBeenSet; }
    template<typename DualstackT = InstanceConnectEndpointDnsNames>
    void SetDualstack(DualstackT&& value) { m_dualstackHasBeenSet = true; m_dualstack = std::forward<DualstackT>(value); }
    template<typename DualstackT = InstanceConnectEndpointDnsNames>
    InstanceConnectEndpointPublicDnsNames& WithDualstack(DualstackT&& value) { SetDualstack(std::forward<DualstackT>(value)); return *this;}
    ///@}
  private:

    InstanceConnectEndpointDnsNames m_ipv4;
    bool m_ipv4HasBeenSet = false;

    InstanceConnectEndpointDnsNames m_dualstack;
    bool m_dualstackHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
