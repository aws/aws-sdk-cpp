/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
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
   * <p>Describes a load balancer when creating an Amazon Web Services Verified
   * Access endpoint using the <code>load-balancer</code> type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyVerifiedAccessEndpointLoadBalancerOptions">AWS
   * API Reference</a></p>
   */
  class ModifyVerifiedAccessEndpointLoadBalancerOptions
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessEndpointLoadBalancerOptions();
    AWS_EC2_API ModifyVerifiedAccessEndpointLoadBalancerOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyVerifiedAccessEndpointLoadBalancerOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IDs of the subnets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The IP protocol.</p>
     */
    inline const VerifiedAccessEndpointProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The IP protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The IP protocol.</p>
     */
    inline void SetProtocol(const VerifiedAccessEndpointProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The IP protocol.</p>
     */
    inline void SetProtocol(VerifiedAccessEndpointProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The IP protocol.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& WithProtocol(const VerifiedAccessEndpointProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The IP protocol.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& WithProtocol(VerifiedAccessEndpointProtocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The IP port number.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The IP port number.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The IP port number.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The IP port number.</p>
     */
    inline ModifyVerifiedAccessEndpointLoadBalancerOptions& WithPort(int value) { SetPort(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    VerifiedAccessEndpointProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
