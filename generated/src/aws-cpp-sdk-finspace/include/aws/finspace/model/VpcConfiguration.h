/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace/model/IPAddressType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace finspace
{
namespace Model
{

  /**
   * <p>Configuration details about the network where the Privatelink endpoint of the
   * cluster resides.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_FINSPACE_API VpcConfiguration();
    AWS_FINSPACE_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline VpcConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline VpcConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC endpoint.</p>
     */
    inline VpcConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier of the VPC security group applied to the VPC endpoint
     * ENI for the cluster.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline VpcConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline VpcConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline VpcConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the subnet that the Privatelink VPC endpoint uses to
     * connect to the cluster.</p>
     */
    inline VpcConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline const IPAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline void SetIpAddressType(const IPAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline void SetIpAddressType(IPAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline VpcConfiguration& WithIpAddressType(const IPAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type for cluster network configuration parameters. The
     * following type is available:</p> <ul> <li> <p>IP_V4 – IP address version 4</p>
     * </li> </ul>
     */
    inline VpcConfiguration& WithIpAddressType(IPAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    IPAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
