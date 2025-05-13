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
    AWS_EC2_API CreateNatGatewayRequest() = default;

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
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    CreateNatGatewayRequest& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 64 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateNatGatewayRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateNatGatewayRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which to create the NAT gateway.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateNatGatewayRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the NAT gateway.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateNatGatewayRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateNatGatewayRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the NAT gateway supports public or private connectivity.
     * The default is public connectivity.</p>
     */
    inline ConnectivityType GetConnectivityType() const { return m_connectivityType; }
    inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }
    inline void SetConnectivityType(ConnectivityType value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = value; }
    inline CreateNatGatewayRequest& WithConnectivityType(ConnectivityType value) { SetConnectivityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address to assign to the NAT gateway. If you don't provide
     * an address, a private IPv4 address will be automatically assigned.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    CreateNatGatewayRequest& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secondary EIP allocation IDs. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryAllocationIds() const { return m_secondaryAllocationIds; }
    inline bool SecondaryAllocationIdsHasBeenSet() const { return m_secondaryAllocationIdsHasBeenSet; }
    template<typename SecondaryAllocationIdsT = Aws::Vector<Aws::String>>
    void SetSecondaryAllocationIds(SecondaryAllocationIdsT&& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds = std::forward<SecondaryAllocationIdsT>(value); }
    template<typename SecondaryAllocationIdsT = Aws::Vector<Aws::String>>
    CreateNatGatewayRequest& WithSecondaryAllocationIds(SecondaryAllocationIdsT&& value) { SetSecondaryAllocationIds(std::forward<SecondaryAllocationIdsT>(value)); return *this;}
    template<typename SecondaryAllocationIdsT = Aws::String>
    CreateNatGatewayRequest& AddSecondaryAllocationIds(SecondaryAllocationIdsT&& value) { m_secondaryAllocationIdsHasBeenSet = true; m_secondaryAllocationIds.emplace_back(std::forward<SecondaryAllocationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secondary private IPv4 addresses. For more information about secondary
     * addresses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecondaryPrivateIpAddresses() const { return m_secondaryPrivateIpAddresses; }
    inline bool SecondaryPrivateIpAddressesHasBeenSet() const { return m_secondaryPrivateIpAddressesHasBeenSet; }
    template<typename SecondaryPrivateIpAddressesT = Aws::Vector<Aws::String>>
    void SetSecondaryPrivateIpAddresses(SecondaryPrivateIpAddressesT&& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses = std::forward<SecondaryPrivateIpAddressesT>(value); }
    template<typename SecondaryPrivateIpAddressesT = Aws::Vector<Aws::String>>
    CreateNatGatewayRequest& WithSecondaryPrivateIpAddresses(SecondaryPrivateIpAddressesT&& value) { SetSecondaryPrivateIpAddresses(std::forward<SecondaryPrivateIpAddressesT>(value)); return *this;}
    template<typename SecondaryPrivateIpAddressesT = Aws::String>
    CreateNatGatewayRequest& AddSecondaryPrivateIpAddresses(SecondaryPrivateIpAddressesT&& value) { m_secondaryPrivateIpAddressesHasBeenSet = true; m_secondaryPrivateIpAddresses.emplace_back(std::forward<SecondaryPrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Private NAT gateway only] The number of secondary private IPv4 addresses you
     * want to assign to the NAT gateway. For more information about secondary
     * addresses, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateway-working-with.html">Create
     * a NAT gateway</a> in the <i>Amazon VPC User Guide</i>.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const { return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline CreateNatGatewayRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    ConnectivityType m_connectivityType{ConnectivityType::NOT_SET};
    bool m_connectivityTypeHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_secondaryAllocationIds;
    bool m_secondaryAllocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_secondaryPrivateIpAddresses;
    bool m_secondaryPrivateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount{0};
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
