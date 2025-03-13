/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/ec2/model/VerifiedAccessEndpointPortRange.h>
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
   * <p>Describes the CIDR options for a Verified Access endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessEndpointCidrOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessEndpointCidrOptions
  {
  public:
    AWS_EC2_API VerifiedAccessEndpointCidrOptions() = default;
    AWS_EC2_API VerifiedAccessEndpointCidrOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessEndpointCidrOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    VerifiedAccessEndpointCidrOptions& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<VerifiedAccessEndpointPortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<VerifiedAccessEndpointPortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<VerifiedAccessEndpointPortRange>>
    VerifiedAccessEndpointCidrOptions& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = VerifiedAccessEndpointPortRange>
    VerifiedAccessEndpointCidrOptions& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline VerifiedAccessEndpointProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline VerifiedAccessEndpointCidrOptions& WithProtocol(VerifiedAccessEndpointProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VerifiedAccessEndpointCidrOptions& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VerifiedAccessEndpointCidrOptions& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::Vector<VerifiedAccessEndpointPortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    VerifiedAccessEndpointProtocol m_protocol{VerifiedAccessEndpointProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
