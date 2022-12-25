/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ConnectivityType.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateNatGatewayRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateNatGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNatGateway"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline CreateNatGatewayRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline CreateNatGatewayRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateNatGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The subnet in which to create the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline CreateNatGatewayRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline const ConnectivityType& GetConnectivityType() const{ return m_connectivityType; }

    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }

    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline void SetConnectivityType(const ConnectivityType& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = value; }

    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline void SetConnectivityType(ConnectivityType&& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = std::move(value); }

    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline CreateNatGatewayRequest& WithConnectivityType(const ConnectivityType& value) { SetConnectivityType(value); return *this;}

    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline CreateNatGatewayRequest& WithConnectivityType(ConnectivityType&& value) { SetConnectivityType(std::move(value)); return *this;}


    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline CreateNatGatewayRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline CreateNatGatewayRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline CreateNatGatewayRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    ConnectivityType m_connectivityType;
    bool m_connectivityTypeHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
