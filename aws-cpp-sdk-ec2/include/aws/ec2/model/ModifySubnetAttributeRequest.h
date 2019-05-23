/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifySubnetAttributeRequest : public EC2Request
  {
  public:
    ModifySubnetAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySubnetAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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

    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline bool AssignIpv6AddressOnCreationHasBeenSet() const { return m_assignIpv6AddressOnCreationHasBeenSet; }

    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline void SetAssignIpv6AddressOnCreation(const AttributeBooleanValue& value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = value; }

    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline void SetAssignIpv6AddressOnCreation(AttributeBooleanValue&& value) { m_assignIpv6AddressOnCreationHasBeenSet = true; m_assignIpv6AddressOnCreation = std::move(value); }

    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline ModifySubnetAttributeRequest& WithAssignIpv6AddressOnCreation(const AttributeBooleanValue& value) { SetAssignIpv6AddressOnCreation(value); return *this;}

    /**
     * <p>Specify <code>true</code> to indicate that network interfaces created in the
     * specified subnet should be assigned an IPv6 address. This includes a network
     * interface that's created when launching an instance into the subnet (the
     * instance therefore receives an IPv6 address). </p> <p>If you enable the IPv6
     * addressing feature for your subnet, your network interface or instance only
     * receives an IPv6 address if it's created using version <code>2016-11-15</code>
     * or later of the Amazon EC2 API.</p>
     */
    inline ModifySubnetAttributeRequest& WithAssignIpv6AddressOnCreation(AttributeBooleanValue&& value) { SetAssignIpv6AddressOnCreation(std::move(value)); return *this;}


    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline const AttributeBooleanValue& GetMapPublicIpOnLaunch() const{ return m_mapPublicIpOnLaunch; }

    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline bool MapPublicIpOnLaunchHasBeenSet() const { return m_mapPublicIpOnLaunchHasBeenSet; }

    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline void SetMapPublicIpOnLaunch(const AttributeBooleanValue& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = value; }

    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline void SetMapPublicIpOnLaunch(AttributeBooleanValue&& value) { m_mapPublicIpOnLaunchHasBeenSet = true; m_mapPublicIpOnLaunch = std::move(value); }

    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(const AttributeBooleanValue& value) { SetMapPublicIpOnLaunch(value); return *this;}

    /**
     * <p>Specify <code>true</code> to indicate that ENIs attached to instances created
     * in the specified subnet should be assigned a public IPv4 address.</p>
     */
    inline ModifySubnetAttributeRequest& WithMapPublicIpOnLaunch(AttributeBooleanValue&& value) { SetMapPublicIpOnLaunch(std::move(value)); return *this;}


    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline ModifySubnetAttributeRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}

  private:

    AttributeBooleanValue m_assignIpv6AddressOnCreation;
    bool m_assignIpv6AddressOnCreationHasBeenSet;

    AttributeBooleanValue m_mapPublicIpOnLaunch;
    bool m_mapPublicIpOnLaunchHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
