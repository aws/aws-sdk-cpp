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


    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline VpcEndpointConnection& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const{ return m_vpcEndpointOwner; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const Aws::String& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(Aws::String&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline void SetVpcEndpointOwner(const char* value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(const Aws::String& value) { SetVpcEndpointOwner(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(Aws::String&& value) { SetVpcEndpointOwner(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointOwner(const char* value) { SetVpcEndpointOwner(value); return *this;}


    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline const State& GetVpcEndpointState() const{ return m_vpcEndpointState; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline bool VpcEndpointStateHasBeenSet() const { return m_vpcEndpointStateHasBeenSet; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointState(const State& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = value; }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointState(State&& value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = std::move(value); }

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointState(const State& value) { SetVpcEndpointState(value); return *this;}

    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointState(State&& value) { SetVpcEndpointState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline VpcEndpointConnection& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline VpcEndpointConnection& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const{ return m_dnsEntries; }

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline void SetDnsEntries(const Aws::Vector<DnsEntry>& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = value; }

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline void SetDnsEntries(Aws::Vector<DnsEntry>&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::move(value); }

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithDnsEntries(const Aws::Vector<DnsEntry>& value) { SetDnsEntries(value); return *this;}

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& WithDnsEntries(Aws::Vector<DnsEntry>&& value) { SetDnsEntries(std::move(value)); return *this;}

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& AddDnsEntries(const DnsEntry& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(value); return *this; }

    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline VpcEndpointConnection& AddDnsEntries(DnsEntry&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline VpcEndpointConnection& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline VpcEndpointConnection& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline VpcEndpointConnection& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline const Aws::String& GetVpcEndpointConnectionId() const{ return m_vpcEndpointConnectionId; }

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline bool VpcEndpointConnectionIdHasBeenSet() const { return m_vpcEndpointConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline void SetVpcEndpointConnectionId(const Aws::String& value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId = value; }

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline void SetVpcEndpointConnectionId(Aws::String&& value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline void SetVpcEndpointConnectionId(const char* value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(const Aws::String& value) { SetVpcEndpointConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(Aws::String&& value) { SetVpcEndpointConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline VpcEndpointConnection& WithVpcEndpointConnectionId(const char* value) { SetVpcEndpointConnectionId(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline VpcEndpointConnection& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VpcEndpointConnection& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline VpcEndpointConnection& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline VpcEndpointConnection& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
