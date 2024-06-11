﻿/**
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
    AWS_EC2_API ModifySubnetAttributeRequest();

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
    inline const AttributeBooleanValue& GetAssignIpv6AddressOnCreation() const{ return m_assignIpv6AddressOnCreation; }
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }
    inline void SetAssignIpv6AddressOnCreation(const AttributeBooleanValue& value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = value; }
    inline void SetAssignIpv6AddressOnCreation(AttributeBooleanValue&& value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = std::move(value); }
    inline ModifySubnetAttributeRequest& WithAssignIpv6AddressOnCreation(const AttributeBooleanValue& value) { SetAssignIpv6AddressOnCreation(value); return *this;}
    inline ModifySubnetAttributeRequest& WithAssignIpv6AddressOnCreation(AttributeBooleanValue&& value) { SetAssignIpv6AddressOnCreation(std::move(value)); return *this;}
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
    inline const AttributeBooleanValue& GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }
    inline void SetMapPublicIpOnLaunch(const AttributeBooleanValue& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }
    inline void SetMapPublicIpOnLaunch(AttributeBooleanValue&& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = std::move(value); }
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(const AttributeBooleanValue& value) { SetMapPublicIpOnLaunch(value); return *this;}
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(AttributeBooleanValue&& value) { SetMapPublicIpOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline ModifySubnetAttributeRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline ModifySubnetAttributeRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline ModifySubnetAttributeRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to indicate that network interfaces attached to
     * instances created in the specified subnet should be assigned a customer-owned
     * IPv4 address.</p> <p>When this value is <code>true</code>, you must specify the
     * customer-owned IP pool using <code>CustomerOwnedIpv4Pool</code>.</p>
     */
    inline const AttributeBooleanValue& GetMapCustomerOwnedIpOnLaunch() const{ return m_mapCustomerOwnedIpOnLaunch; }
    inline bool MapCustomerOwnedIpOnLaunchHasBeenSet() const { return m_mapCustomerOwnedIpOnLaunchHasBeenSet; }
    inline void SetMapCustomerOwnedIpOnLaunch(const AttributeBooleanValue& value) { m_mapCustomerOwnedIpOnLaunchHasBeenSet = true; m_mapCustomerOwnedIpOnLaunch = value; }
    inline void SetMapCustomerOwnedIpOnLaunch(AttributeBooleanValue&& value) { m_mapCustomerOwnedIpOnLaunchHasBeenSet = true; m_mapCustomerOwnedIpOnLaunch = std::move(value); }
    inline ModifySubnetAttributeRequest& WithMapCustomerOwnedIpOnLaunch(const AttributeBooleanValue& value) { SetMapCustomerOwnedIpOnLaunch(value); return *this;}
    inline ModifySubnetAttributeRequest& WithMapCustomerOwnedIpOnLaunch(AttributeBooleanValue&& value) { SetMapCustomerOwnedIpOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-owned IPv4 address pool associated with the subnet.</p> <p>You
     * must set this value when you specify <code>true</code> for
     * <code>MapCustomerOwnedIpOnLaunch</code>.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }
    inline ModifySubnetAttributeRequest& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    inline ModifySubnetAttributeRequest& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}
    inline ModifySubnetAttributeRequest& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS queries made to the Amazon-provided DNS Resolver in
     * this subnet should return synthetic IPv6 addresses for IPv4-only
     * destinations.</p>
     */
    inline const AttributeBooleanValue& GetEnableDns64() const{ return m_enableDns64; }
    inline bool EnableDns64HasBeenSet() const { return m_enableDns64HasBeenSet; }
    inline void SetEnableDns64(const AttributeBooleanValue& value) { m_enableDns64HasBeenSet = true; m_enableDns64 = value; }
    inline void SetEnableDns64(AttributeBooleanValue&& value) { m_enableDns64HasBeenSet = true; m_enableDns64 = std::move(value); }
    inline ModifySubnetAttributeRequest& WithEnableDns64(const AttributeBooleanValue& value) { SetEnableDns64(value); return *this;}
    inline ModifySubnetAttributeRequest& WithEnableDns64(AttributeBooleanValue&& value) { SetEnableDns64(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hostname to assign to instances in the subnet at launch. For
     * IPv4-only and dual-stack (IPv4 and IPv6) subnets, an instance DNS name can be
     * based on the instance IPv4 address (ip-name) or the instance ID (resource-name).
     * For IPv6 only subnets, an instance DNS name must be based on the instance ID
     * (resource-name).</p>
     */
    inline const HostnameType& GetPrivateDnsHostnameTypeOnLaunch() const{ return m_privateDnsHostnameTypeOnLaunch; }
    inline bool PrivateDnsHostnameTypeOnLaunchHasBeenSet() const { return m_privateDnsHostnameTypeOnLaunchHasBeenSet; }
    inline void SetPrivateDnsHostnameTypeOnLaunch(const HostnameType& value) { m_privateDnsHostnameTypeOnLaunchHasBeenSet = true; m_privateDnsHostnameTypeOnLaunch = value; }
    inline void SetPrivateDnsHostnameTypeOnLaunch(HostnameType&& value) { m_privateDnsHostnameTypeOnLaunchHasBeenSet = true; m_privateDnsHostnameTypeOnLaunch = std::move(value); }
    inline ModifySubnetAttributeRequest& WithPrivateDnsHostnameTypeOnLaunch(const HostnameType& value) { SetPrivateDnsHostnameTypeOnLaunch(value); return *this;}
    inline ModifySubnetAttributeRequest& WithPrivateDnsHostnameTypeOnLaunch(HostnameType&& value) { SetPrivateDnsHostnameTypeOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS A
     * records.</p>
     */
    inline const AttributeBooleanValue& GetEnableResourceNameDnsARecordOnLaunch() const{ return m_enableResourceNameDnsARecordOnLaunch; }
    inline bool EnableResourceNameDnsARecordOnLaunchHasBeenSet() const { return m_enableResourceNameDnsARecordOnLaunchHasBeenSet; }
    inline void SetEnableResourceNameDnsARecordOnLaunch(const AttributeBooleanValue& value) { m_enableResourceNameDnsARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsARecordOnLaunch = value; }
    inline void SetEnableResourceNameDnsARecordOnLaunch(AttributeBooleanValue&& value) { m_enableResourceNameDnsARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsARecordOnLaunch = std::move(value); }
    inline ModifySubnetAttributeRequest& WithEnableResourceNameDnsARecordOnLaunch(const AttributeBooleanValue& value) { SetEnableResourceNameDnsARecordOnLaunch(value); return *this;}
    inline ModifySubnetAttributeRequest& WithEnableResourceNameDnsARecordOnLaunch(AttributeBooleanValue&& value) { SetEnableResourceNameDnsARecordOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to respond to DNS queries for instance hostnames with DNS
     * AAAA records.</p>
     */
    inline const AttributeBooleanValue& GetEnableResourceNameDnsAAAARecordOnLaunch() const{ return m_enableResourceNameDnsAAAARecordOnLaunch; }
    inline bool EnableResourceNameDnsAAAARecordOnLaunchHasBeenSet() const { return m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet; }
    inline void SetEnableResourceNameDnsAAAARecordOnLaunch(const AttributeBooleanValue& value) { m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsAAAARecordOnLaunch = value; }
    inline void SetEnableResourceNameDnsAAAARecordOnLaunch(AttributeBooleanValue&& value) { m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet = true; m_enableResourceNameDnsAAAARecordOnLaunch = std::move(value); }
    inline ModifySubnetAttributeRequest& WithEnableResourceNameDnsAAAARecordOnLaunch(const AttributeBooleanValue& value) { SetEnableResourceNameDnsAAAARecordOnLaunch(value); return *this;}
    inline ModifySubnetAttributeRequest& WithEnableResourceNameDnsAAAARecordOnLaunch(AttributeBooleanValue&& value) { SetEnableResourceNameDnsAAAARecordOnLaunch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the device position for local network interfaces in this subnet.
     * For example, <code>1</code> indicates local network interfaces in this subnet
     * are the secondary network interface (eth1). A local network interface cannot be
     * the primary network interface (eth0). </p>
     */
    inline int GetEnableLniAtDeviceIndex() const{ return m_enableLniAtDeviceIndex; }
    inline bool EnableLniAtDeviceIndexHasBeenSet() const { return m_enableLniAtDeviceIndexHasBeenSet; }
    inline void SetEnableLniAtDeviceIndex(int value) { m_enableLniAtDeviceIndexHasBeenSet = true; m_enableLniAtDeviceIndex = value; }
    inline ModifySubnetAttributeRequest& WithEnableLniAtDeviceIndex(int value) { SetEnableLniAtDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specify <code>true</code> to indicate that local network interfaces at the
     * current position should be disabled. </p>
     */
    inline const AttributeBooleanValue& GetDisableLniAtDeviceIndex() const{ return m_disableLniAtDeviceIndex; }
    inline bool DisableLniAtDeviceIndexHasBeenSet() const { return m_disableLniAtDeviceIndexHasBeenSet; }
    inline void SetDisableLniAtDeviceIndex(const AttributeBooleanValue& value) { m_disableLniAtDeviceIndexHasBeenSet = true; m_disableLniAtDeviceIndex = value; }
    inline void SetDisableLniAtDeviceIndex(AttributeBooleanValue&& value) { m_disableLniAtDeviceIndexHasBeenSet = true; m_disableLniAtDeviceIndex = std::move(value); }
    inline ModifySubnetAttributeRequest& WithDisableLniAtDeviceIndex(const AttributeBooleanValue& value) { SetDisableLniAtDeviceIndex(value); return *this;}
    inline ModifySubnetAttributeRequest& WithDisableLniAtDeviceIndex(AttributeBooleanValue&& value) { SetDisableLniAtDeviceIndex(std::move(value)); return *this;}
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

    HostnameType m_privateDnsHostnameTypeOnLaunch;
    bool m_privateDnsHostnameTypeOnLaunchHasBeenSet = false;

    AttributeBooleanValue m_enableResourceNameDnsARecordOnLaunch;
    bool m_enableResourceNameDnsARecordOnLaunchHasBeenSet = false;

    AttributeBooleanValue m_enableResourceNameDnsAAAARecordOnLaunch;
    bool m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet = false;

    int m_enableLniAtDeviceIndex;
    bool m_enableLniAtDeviceIndexHasBeenSet = false;

    AttributeBooleanValue m_disableLniAtDeviceIndex;
    bool m_disableLniAtDeviceIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
