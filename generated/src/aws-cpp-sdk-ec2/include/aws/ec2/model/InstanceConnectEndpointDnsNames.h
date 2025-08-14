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
   * <p>The DNS names of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceConnectEndpointDnsNames">AWS
   * API Reference</a></p>
   */
  class InstanceConnectEndpointDnsNames
  {
  public:
    AWS_EC2_API InstanceConnectEndpointDnsNames() = default;
    AWS_EC2_API InstanceConnectEndpointDnsNames(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceConnectEndpointDnsNames& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The DNS name of the EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    InstanceConnectEndpointDnsNames& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Federal Information Processing Standards (FIPS) compliant DNS name of the
     * EC2 Instance Connect Endpoint.</p>
     */
    inline const Aws::String& GetFipsDnsName() const { return m_fipsDnsName; }
    inline bool FipsDnsNameHasBeenSet() const { return m_fipsDnsNameHasBeenSet; }
    template<typename FipsDnsNameT = Aws::String>
    void SetFipsDnsName(FipsDnsNameT&& value) { m_fipsDnsNameHasBeenSet = true; m_fipsDnsName = std::forward<FipsDnsNameT>(value); }
    template<typename FipsDnsNameT = Aws::String>
    InstanceConnectEndpointDnsNames& WithFipsDnsName(FipsDnsNameT&& value) { SetFipsDnsName(std::forward<FipsDnsNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::String m_fipsDnsName;
    bool m_fipsDnsNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
