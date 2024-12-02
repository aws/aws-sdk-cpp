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
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions();
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateVerifiedAccessEndpointLoadBalancerOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP protocol.</p>
     */
    inline const VerifiedAccessEndpointProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const VerifiedAccessEndpointProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(VerifiedAccessEndpointProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP port number.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port ranges.</p>
     */
    inline const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& GetPortRanges() const{ return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    inline void SetPortRanges(const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }
    inline void SetPortRanges(Aws::Vector<CreateVerifiedAccessEndpointPortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithPortRanges(const Aws::Vector<CreateVerifiedAccessEndpointPortRange>& value) { SetPortRanges(value); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& WithPortRanges(Aws::Vector<CreateVerifiedAccessEndpointPortRange>&& value) { SetPortRanges(std::move(value)); return *this;}
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& AddPortRanges(const CreateVerifiedAccessEndpointPortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }
    inline CreateVerifiedAccessEndpointLoadBalancerOptions& AddPortRanges(CreateVerifiedAccessEndpointPortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }
    ///@}
  private:

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
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
