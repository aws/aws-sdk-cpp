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

    ///@{
    /**
     * <p>[Public NAT gateways only] The allocation ID of an Elastic IP address to
     * associate with the NAT gateway. You cannot specify an Elastic IP address with a
     * private NAT gateway. If the Elastic IP address is associated with another
     * resource, you must first disassociate it.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline CreateNatGatewayRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline CreateNatGatewayRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateNatGatewayRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateNatGatewayRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateNatGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which to create the NAT gateway.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline CreateNatGatewayRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline CreateNatGatewayRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateNatGatewayRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateNatGatewayRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateNatGatewayRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline const ConnectivityType& GetConnectivityType() const{ return m_connectivityType; }
    inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }
    inline void SetConnectivityType(const ConnectivityType& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = value; }
    inline void SetConnectivityType(ConnectivityType&& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = std::move(value); }
    inline CreateNatGatewayRequest& WithConnectivityType(const ConnectivityType& value) { SetConnectivityType(value); return *this;}
    inline CreateNatGatewayRequest& WithConnectivityType(ConnectivityType&& value) { SetConnectivityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }
    inline CreateNatGatewayRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}
    inline CreateNatGatewayRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary EIP allocation IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryAllocationIds() const{ return m_secondaryAllocationIds; }
    inline bool SecondaryAllocationIdsHasBeenSet() const { return m_secondaryAllocationIdsHasBeenSet; }
    inline void SetSecondaryAllocationIds(const Aws::Vector<Aws::String>& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds = value; }
    inline void SetSecondaryAllocationIds(Aws::Vector<Aws::String>&& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds = std::move(value); }
    inline CreateNatGatewayRequest& WithSecondaryAllocationIds(const Aws::Vector<Aws::String>& value) { SetSecondaryAllocationIds(value); return *this;}
    inline CreateNatGatewayRequest& WithSecondaryAllocationIds(Aws::Vector<Aws::String>&& value) { SetSecondaryAllocationIds(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& AddSecondaryAllocationIds(const Aws::String& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds.push_back(value); return *this; }
    inline CreateNatGatewayRequest& AddSecondaryAllocationIds(Aws::String&& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds.push_back(std::move(value)); return *this; }
    inline CreateNatGatewayRequest& AddSecondaryAllocationIds(const char* value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secondary private IPv4 addresses. For more information about secondary
     * addresses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryPrivateIpAddresses() const{ return m_secondaryPrivateIpAddresses; }
    inline bool SecondaryPrivateIpAddressesHasBeenSet() const { return m_secondaryPrivateIpAddressesHasBeenSet; }
    inline void SetSecondaryPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses = value; }
    inline void SetSecondaryPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses = std::move(value); }
    inline CreateNatGatewayRequest& WithSecondaryPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetSecondaryPrivateIpAddresses(value); return *this;}
    inline CreateNatGatewayRequest& WithSecondaryPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetSecondaryPrivateIpAddresses(std::move(value)); return *this;}
    inline CreateNatGatewayRequest& AddSecondaryPrivateIpAddresses(const Aws::String& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses.push_back(value); return *this; }
    inline CreateNatGatewayRequest& AddSecondaryPrivateIpAddresses(Aws::String&& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses.push_back(std::move(value)); return *this; }
    inline CreateNatGatewayRequest& AddSecondaryPrivateIpAddresses(const char* value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Private NAT gateway only] The number of secondary private IPv4 addresses you
     * want to assign to the NAT gateway. For more information about secondary
     * addresses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline CreateNatGatewayRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}
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

    Aws::Vector<Aws::String> m_secondaryAllocationIds;
    bool m_secondaryAllocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_secondaryPrivateIpAddresses;
    bool m_secondaryPrivateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
