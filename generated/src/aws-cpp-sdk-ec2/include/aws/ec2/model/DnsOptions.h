/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DnsRecordIpType.h>
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
   * <p>Describes the DNS options for an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DnsOptions">AWS API
   * Reference</a></p>
   */
  class DnsOptions
  {
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
    inline void SetDnsRecordIpType(DnsRecordIpType value) { m_dnsRecordIpTypeHasBeenSet = true; m_dnsRecordIpType = value; }
    inline DnsOptions& WithDnsRecordIpType(DnsRecordIpType value) { SetDnsRecordIpType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable private DNS only for inbound endpoints.</p>
     */
    inline bool GetPrivateDnsOnlyForInboundResolverEndpoint() const { return m_privateDnsOnlyForInboundResolverEndpoint; }
    inline bool PrivateDnsOnlyForInboundResolverEndpointHasBeenSet() const { return m_privateDnsOnlyForInboundResolverEndpointHasBeenSet; }
    inline void SetPrivateDnsOnlyForInboundResolverEndpoint(bool value) { m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = true; m_privateDnsOnlyForInboundResolverEndpoint = value; }
    inline DnsOptions& WithPrivateDnsOnlyForInboundResolverEndpoint(bool value) { SetPrivateDnsOnlyForInboundResolverEndpoint(value); return *this;}
    ///@}
  private:

    DnsRecordIpType m_dnsRecordIpType{DnsRecordIpType::NOT_SET};
    bool m_dnsRecordIpTypeHasBeenSet = false;

    bool m_privateDnsOnlyForInboundResolverEndpoint{false};
    bool m_privateDnsOnlyForInboundResolverEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
