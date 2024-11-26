/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/State.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpAddressType.h>
#include <aws/ec2/model/DnsEntry.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a VPC endpoint connection to a service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEndpointConnection">AWS
   * API Reference</a></p>
   */
  class VpcEndpointConnection
  {
  public:
    AWS_EC2_API VpcEndpointConnection();
    AWS_EC2_API VpcEndpointConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpointConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline VpcEndpointConnection& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline VpcEndpointConnection& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline VpcEndpointConnection& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline VpcEndpointConnection& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }
    inline VpcEndpointConnection& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline const State& GetVpcEndpointState() const{ return m_vpcEndpointState; }
    inline bool VpcEndpointStateHasBeenSet() const { return m_vpcEndpointStateHasBeenSet; }
    inline void SetVpcEndpointState(const State& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = value; }
    inline void SetVpcEndpointState(State&& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = std::move(value); }
    inline VpcEndpointConnection& WithVpcEndpointState(const State& value) { SetVpcEndpointState(value); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointState(State&& value) { SetVpcEndpointState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline VpcEndpointConnection& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline VpcEndpointConnection& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const{ return m_dnsEntries; }
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }
    inline void SetDnsEntries(const Aws::Vector<DnsEntry>& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = value; }
    inline void SetDnsEntries(Aws::Vector<DnsEntry>&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::move(value); }
    inline VpcEndpointConnection& WithDnsEntries(const Aws::Vector<DnsEntry>& value) { SetDnsEntries(value); return *this;}
    inline VpcEndpointConnection& WithDnsEntries(Aws::Vector<DnsEntry>&& value) { SetDnsEntries(std::move(value)); return *this;}
    inline VpcEndpointConnection& AddDnsEntries(const DnsEntry& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(value); return *this; }
    inline VpcEndpointConnection& AddDnsEntries(DnsEntry&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }
    inline VpcEndpointConnection& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}
    inline VpcEndpointConnection& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }
    inline VpcEndpointConnection& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}
    inline VpcEndpointConnection& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline VpcEndpointConnection& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline VpcEndpointConnection& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline const Aws::String& GetVpcEndpointConnectionId() const{ return m_vpcEndpointConnectionId; }
    inline bool VpcEndpointConnectionIdHasBeenSet() const { return m_vpcEndpointConnectionIdHasBeenSet; }
    inline void SetVpcEndpointConnectionId(const Aws::String& value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId = value; }
    inline void SetVpcEndpointConnectionId(Aws::String&& value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId = std::move(value); }
    inline void SetVpcEndpointConnectionId(const char* value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId.assign(value); }
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(const Aws::String& value) { SetVpcEndpointConnectionId(value); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(Aws::String&& value) { SetVpcEndpointConnectionId(std::move(value)); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(const char* value) { SetVpcEndpointConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcEndpointConnection& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpcEndpointConnection& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcEndpointConnection& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpcEndpointConnection& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointRegion() const{ return m_vpcEndpointRegion; }
    inline bool VpcEndpointRegionHasBeenSet() const { return m_vpcEndpointRegionHasBeenSet; }
    inline void SetVpcEndpointRegion(const Aws::String& value) { m_vpcEndpointRegionHasBeenSet = true; m_vpcEndpointRegion = value; }
    inline void SetVpcEndpointRegion(Aws::String&& value) { m_vpcEndpointRegionHasBeenSet = true; m_vpcEndpointRegion = std::move(value); }
    inline void SetVpcEndpointRegion(const char* value) { m_vpcEndpointRegionHasBeenSet = true; m_vpcEndpointRegion.assign(value); }
    inline VpcEndpointConnection& WithVpcEndpointRegion(const Aws::String& value) { SetVpcEndpointRegion(value); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointRegion(Aws::String&& value) { SetVpcEndpointRegion(std::move(value)); return *this;}
    inline VpcEndpointConnection& WithVpcEndpointRegion(const char* value) { SetVpcEndpointRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    State m_vpcEndpointState;
    bool m_vpcEndpointStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Vector<DnsEntry> m_dnsEntries;
    bool m_dnsEntriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_vpcEndpointConnectionId;
    bool m_vpcEndpointConnectionIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcEndpointRegion;
    bool m_vpcEndpointRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
