/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CreateVerifiedAccessEndpointPortRange.h>
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
   * <p>Describes the load balancer options when creating an Amazon Web Services
   * Verified Access endpoint using the <code>load-balancer</code>
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVerifiedAccessEndpointLoadBalancerOptions">AWS
   * API Reference</a></p>
   */
  class CreateVerifiedAccessEndpointLoadBalancerOptions
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions() = default;
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP protocol.</p>
     */
    inline VerifiedAccessEndpointProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithProtocol(VerifiedAccessEndpointProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP port number.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    CreateVerifiedAccessEndpointLoadBalancerOptions& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets. You can specify only one subnet per Availability
     * Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateVerifiedAccessEndpointLoadBalancerOptions& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<CreateVerifiedAccessEndpointPortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<CreateVerifiedAccessEndpointPortRange>>
    CreateVerifiedAccessEndpointLoadBalancerOptions& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = CreateVerifiedAccessEndpointPortRange>
    CreateVerifiedAccessEndpointLoadBalancerOptions& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}
  private:

    VerifiedAccessEndpointProtocol m_protocol{VerifiedAccessEndpointProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<CreateVerifiedAccessEndpointPortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
