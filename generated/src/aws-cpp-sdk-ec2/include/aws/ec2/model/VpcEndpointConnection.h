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
    AWS_EC2_API VpcEndpointConnection() = default;
    AWS_EC2_API VpcEndpointConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpointConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the service to which the endpoint is connected.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    VpcEndpointConnection& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    VpcEndpointConnection& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointOwner() const { return m_vpcEndpointOwner; }
    inline bool VpcEndpointOwnerHasBeenSet() const { return m_vpcEndpointOwnerHasBeenSet; }
    template<typename VpcEndpointOwnerT = Aws::String>
    void SetVpcEndpointOwner(VpcEndpointOwnerT&& value) { m_vpcEndpointOwnerHasBeenSet = true; m_vpcEndpointOwner = std::forward<VpcEndpointOwnerT>(value); }
    template<typename VpcEndpointOwnerT = Aws::String>
    VpcEndpointConnection& WithVpcEndpointOwner(VpcEndpointOwnerT&& value) { SetVpcEndpointOwner(std::forward<VpcEndpointOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the VPC endpoint.</p>
     */
    inline State GetVpcEndpointState() const { return m_vpcEndpointState; }
    inline bool VpcEndpointStateHasBeenSet() const { return m_vpcEndpointStateHasBeenSet; }
    inline void SetVpcEndpointState(State value) { m_vpcEndpointStateHasBeenSet = true; m_vpcEndpointState = value; }
    inline VpcEndpointConnection& WithVpcEndpointState(State value) { SetVpcEndpointState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the VPC endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    VpcEndpointConnection& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entries for the VPC endpoint.</p>
     */
    inline const Aws::Vector<DnsEntry>& GetDnsEntries() const { return m_dnsEntries; }
    inline bool DnsEntriesHasBeenSet() const { return m_dnsEntriesHasBeenSet; }
    template<typename DnsEntriesT = Aws::Vector<DnsEntry>>
    void SetDnsEntries(DnsEntriesT&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries = std::forward<DnsEntriesT>(value); }
    template<typename DnsEntriesT = Aws::Vector<DnsEntry>>
    VpcEndpointConnection& WithDnsEntries(DnsEntriesT&& value) { SetDnsEntries(std::forward<DnsEntriesT>(value)); return *this;}
    template<typename DnsEntriesT = DnsEntry>
    VpcEndpointConnection& AddDnsEntries(DnsEntriesT&& value) { m_dnsEntriesHasBeenSet = true; m_dnsEntries.emplace_back(std::forward<DnsEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the network load balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const { return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::forward<NetworkLoadBalancerArnsT>(value); }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    VpcEndpointConnection& WithNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { SetNetworkLoadBalancerArns(std::forward<NetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename NetworkLoadBalancerArnsT = Aws::String>
    VpcEndpointConnection& AddNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.emplace_back(std::forward<NetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const { return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::forward<GatewayLoadBalancerArnsT>(value); }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    VpcEndpointConnection& WithGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { SetGatewayLoadBalancerArns(std::forward<GatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename GatewayLoadBalancerArnsT = Aws::String>
    VpcEndpointConnection& AddGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.emplace_back(std::forward<GatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the endpoint.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline VpcEndpointConnection& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint connection.</p>
     */
    inline const Aws::String& GetVpcEndpointConnectionId() const { return m_vpcEndpointConnectionId; }
    inline bool VpcEndpointConnectionIdHasBeenSet() const { return m_vpcEndpointConnectionIdHasBeenSet; }
    template<typename VpcEndpointConnectionIdT = Aws::String>
    void SetVpcEndpointConnectionId(VpcEndpointConnectionIdT&& value) { m_vpcEndpointConnectionIdHasBeenSet = true; m_vpcEndpointConnectionId = std::forward<VpcEndpointConnectionIdT>(value); }
    template<typename VpcEndpointConnectionIdT = Aws::String>
    VpcEndpointConnection& WithVpcEndpointConnectionId(VpcEndpointConnectionIdT&& value) { SetVpcEndpointConnectionId(std::forward<VpcEndpointConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcEndpointConnection& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcEndpointConnection& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointRegion() const { return m_vpcEndpointRegion; }
    inline bool VpcEndpointRegionHasBeenSet() const { return m_vpcEndpointRegionHasBeenSet; }
    template<typename VpcEndpointRegionT = Aws::String>
    void SetVpcEndpointRegion(VpcEndpointRegionT&& value) { m_vpcEndpointRegionHasBeenSet = true; m_vpcEndpointRegion = std::forward<VpcEndpointRegionT>(value); }
    template<typename VpcEndpointRegionT = Aws::String>
    VpcEndpointConnection& WithVpcEndpointRegion(VpcEndpointRegionT&& value) { SetVpcEndpointRegion(std::forward<VpcEndpointRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcEndpointOwner;
    bool m_vpcEndpointOwnerHasBeenSet = false;

    State m_vpcEndpointState{State::NOT_SET};
    bool m_vpcEndpointStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Vector<DnsEntry> m_dnsEntries;
    bool m_dnsEntriesHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
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
