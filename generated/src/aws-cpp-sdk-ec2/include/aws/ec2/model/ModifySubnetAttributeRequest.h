/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/HostnameType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifySubnetAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySubnetAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySubnetAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline const AttributeBooleanValue& GetAssignIpv6AddressOnCreation() const { return m_assignIpv6AddressOnCreation; }
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }
    template<typename AssignIpv6AddressOnCreationT = AttributeBooleanValue>
    void SetAssignIpv6AddressOnCreation(AssignIpv6AddressOnCreationT&& value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = std::forward<AssignIpv6AddressOnCreationT>(value); }
    template<typename AssignIpv6AddressOnCreationT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithAssignIpv6AddressOnCreation(AssignIpv6AddressOnCreationT&& value) { SetAssignIpv6AddressOnCreation(std::forward<AssignIpv6AddressOnCreationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to indicate that network interfaces attached to
     * instances created in the specified subnet should be assigned a public IPv4
     * address.</p> <p>Amazon Web Services charges for all public IPv4 addresses,
     * including public IPv4 addresses associated with running instances and Elastic IP
     * addresses. For more information, see the <i>Public IPv4 Address</i> tab on the
     * <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing page</a>.</p>
     */
    inline const AttributeBooleanValue& GetMapPublicIpOnLaunch() const { return m_mapPublicIpOnLaunch; }
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }
    template<typename MapPublicIpOnLaunchT = AttributeBooleanValue>
    void SetMapPublicIpOnLaunch(MapPublicIpOnLaunchT&& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = std::forward<MapPublicIpOnLaunchT>(value); }
    template<typename MapPublicIpOnLaunchT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(MapPublicIpOnLaunchT&& value) { SetMapPublicIpOnLaunch(std::forward<MapPublicIpOnLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    ModifySubnetAttributeRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to indicate that network interfaces attached to
     * instances created in the specified subnet should be assigned a customer-owned
     * IPv4 address.</p> <p>When this value is <code>true</code>, you must specify the
     * customer-owned IP pool using <code>CustomerOwnedIpv4Pool</code>.</p>
     */
    inline const AttributeBooleanValue& GetMapCustomerOwnedIpOnLaunch() const { return m_mapCustomerOwnedIpOnLaunch; }
    inline bool MapCustomerOwnedIpOnLaunchHasBeenSet() const { return m_mapCustomerOwnedIpOnLaunchHasBeenSet; }
    template<typename MapCustomerOwnedIpOnLaunchT = AttributeBooleanValue>
    void SetMapCustomerOwnedIpOnLaunch(MapCustomerOwnedIpOnLaunchT&& value) { m_mapCustomerOwnedIpOnLaunchHasBeenSet = true; m_mapCustomerOwnedIpOnLaunch = std::forward<MapCustomerOwnedIpOnLaunchT>(value); }
    template<typename MapCustomerOwnedIpOnLaunchT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithMapCustomerOwnedIpOnLaunch(MapCustomerOwnedIpOnLaunchT&& value) { SetMapCustomerOwnedIpOnLaunch(std::forward<MapCustomerOwnedIpOnLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IPv4 address pool associated with the subnet.</p> <p>You
     * must set this value when you specify <code>true</code> for
     * <code>MapCustomerOwnedIpOnLaunch</code>.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const { return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    void SetCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::forward<CustomerOwnedIpv4PoolT>(value); }
    template<typename CustomerOwnedIpv4PoolT = Aws::String>
    ModifySubnetAttributeRequest& WithCustomerOwnedIpv4Pool(CustomerOwnedIpv4PoolT&& value) { SetCustomerOwnedIpv4Pool(std::forward<CustomerOwnedIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS queries made to the Amazon-provided DNS Resolver in
     * this subnet should return synthetic IPv6 addresses for IPv4-only
     * destinations.</p> <p>You must first configure a NAT gateway in a public subnet
     * (separate from the subnet containing the IPv6-only workloads). For example, the
     * subnet containing the NAT gateway should have a <code>0.0.0.0/0</code> route
     * pointing to the internet gateway. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-nat64-dns64.html#nat-gateway-nat64-dns64-walkthrough">Configure
     * DNS64 and NAT64</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const AttributeBooleanValue& GetEnableDns64() const { return m_enableDns64; }
    inline bool EnableDns64HasBeenSet() const { return m_enableDns64HasBeenSet; }
    template<typename EnableDns64T = AttributeBooleanValue>
    void SetEnableDns64(EnableDns64T&& value) { m_enableDns64HasBeenSet = true; m_enableDns64 = std::forward<EnableDns64T>(value); }
    template<typename EnableDns64T = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithEnableDns64(EnableDns64T&& value) { SetEnableDns64(std::forward<EnableDns64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hostname to assign to instances in the subnet at launch. For
     * IPv4-only and dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be
     * based on the instance IPv4 address (ip-name) or the instance ID (resource-name).
     * For IPv6 only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p>
     */
    inline HostnameType GetPrivateDnsHostnameTypeOnLaunch() const { return m_privateDnsHostnameTypeOnLaunch; }
    inline bool PrivateDnsHostnameTypeOnLaunchHasBeenSet() const { return m_privateDnsHostnameTypeOnLaunchHasBeenSet; }
    inline void SetPrivateDnsHostnameTypeOnLaunch(HostnameType value) { m_privateDnsHostnameTypeOnLaunchHasBeenSet = true; m_privateDnsHostnameTypeOnLaunch = value; }
    inline ModifySubnetAttributeRequest& WithPrivateDnsHostnameTypeOnLaunch(HostnameType value) { SetPrivateDnsHostnameTypeOnLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline const AttributeBooleanValue& GetEnableResourceNameDnsARecordOnLaunch() const { return m_enableResourceNameDnsARecordOnLaunch; }
    inline bool EnableResourceNameDnsARecordOnLaunchHasBeenSet() const { return m_enableResourceNameDnsARecordOnLaunchHasBeenSet; }
    template<typename EnableResourceNameDnsARecordOnLaunchT = AttributeBooleanValue>
    void SetEnableResourceNameDnsARecordOnLaunch(EnableResourceNameDnsARecordOnLaunchT&& value) { m_enableResourceNameDnsARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsARecordOnLaunch = std::forward<EnableResourceNameDnsARecordOnLaunchT>(value); }
    template<typename EnableResourceNameDnsARecordOnLaunchT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithEnableResourceNameDnsARecordOnLaunch(EnableResourceNameDnsARecordOnLaunchT&& value) { SetEnableResourceNameDnsARecordOnLaunch(std::forward<EnableResourceNameDnsARecordOnLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline const AttributeBooleanValue& GetEnableResourceNameDnsAAAARecordOnLaunch() const { return m_enableResourceNameDnsAAAARecordOnLaunch; }
    inline bool EnableResourceNameDnsAAAARecordOnLaunchHasBeenSet() const { return m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet; }
    template<typename EnableResourceNameDnsAAAARecordOnLaunchT = AttributeBooleanValue>
    void SetEnableResourceNameDnsAAAARecordOnLaunch(EnableResourceNameDnsAAAARecordOnLaunchT&& value) { m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsAAAARecordOnLaunch = std::forward<EnableResourceNameDnsAAAARecordOnLaunchT>(value); }
    template<typename EnableResourceNameDnsAAAARecordOnLaunchT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithEnableResourceNameDnsAAAARecordOnLaunch(EnableResourceNameDnsAAAARecordOnLaunchT&& value) { SetEnableResourceNameDnsAAAARecordOnLaunch(std::forward<EnableResourceNameDnsAAAARecordOnLaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the device position for local network interfaces in this subnet.
     * For example, <code>1</code> indicates local network interfaces in this subnet
     * are the secondary network interface (eth1). A local network interface cannot be
     * the primary network interface (eth0). </p>
     */
    inline int GetEnableLniAtDeviceIndex() const { return m_enableLniAtDeviceIndex; }
    inline bool EnableLniAtDeviceIndexHasBeenSet() const { return m_enableLniAtDeviceIndexHasBeenSet; }
    inline void SetEnableLniAtDeviceIndex(int value) { m_enableLniAtDeviceIndexHasBeenSet = true; m_enableLniAtDeviceIndex = value; }
    inline ModifySubnetAttributeRequest& WithEnableLniAtDeviceIndex(int value) { SetEnableLniAtDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specify <code>true</code> to indicate that local network interfaces at the
     * current position should be disabled. </p>
     */
    inline const AttributeBooleanValue& GetDisableLniAtDeviceIndex() const { return m_disableLniAtDeviceIndex; }
    inline bool DisableLniAtDeviceIndexHasBeenSet() const { return m_disableLniAtDeviceIndexHasBeenSet; }
    template<typename DisableLniAtDeviceIndexT = AttributeBooleanValue>
    void SetDisableLniAtDeviceIndex(DisableLniAtDeviceIndexT&& value) { m_disableLniAtDeviceIndexHasBeenSet = true; m_disableLniAtDeviceIndex = std::forward<DisableLniAtDeviceIndexT>(value); }
    template<typename DisableLniAtDeviceIndexT = AttributeBooleanValue>
    ModifySubnetAttributeRequest& WithDisableLniAtDeviceIndex(DisableLniAtDeviceIndexT&& value) { SetDisableLniAtDeviceIndex(std::forward<DisableLniAtDeviceIndexT>(value)); return *this;}
    ///@}
  private:

    AttributeBooleanValue m_assignIpv6AddressOnCreation;
    bool m_assignIpv6AddressOnCreationHasBeenSet = false;

    AttributeBooleanValue m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    AttributeBooleanValue m_mapCustomerOwnedIpOnLaunch;
    bool m_mapCustomerOwnedIpOnLaunchHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;

    AttributeBooleanValue m_enableDns64;
    bool m_enableDns64HasBeenSet = false;

    HostnameType m_privateDnsHostnameTypeOnLaunch{HostnameType::NOT_SET};
    bool m_privateDnsHostnameTypeOnLaunchHasBeenSet = false;

    AttributeBooleanValue m_enableResourceNameDnsARecordOnLaunch;
    bool m_enableResourceNameDnsARecordOnLaunchHasBeenSet = false;

    AttributeBooleanValue m_enableResourceNameDnsAAAARecordOnLaunch;
    bool m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet = false;

    int m_enableLniAtDeviceIndex{0};
    bool m_enableLniAtDeviceIndexHasBeenSet = false;

    AttributeBooleanValue m_disableLniAtDeviceIndex;
    bool m_disableLniAtDeviceIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
