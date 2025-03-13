/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ProvisionedBandwidth.h>
#include <aws/ec2/model/NatGatewayState.h>
#include <aws/ec2/model/ConnectivityType.h>
#include <aws/ec2/model/NatGatewayAddress.h>
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
   * <p>Describes a NAT gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NatGateway">AWS API
   * Reference</a></p>
   */
  class NatGateway
  {
  public:
    AWS_EC2_API NatGateway() = default;
    AWS_EC2_API NatGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NatGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time the NAT gateway was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    NatGateway& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the NAT gateway was deleted, if applicable.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTime() const { return m_deleteTime; }
    inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
    template<typename DeleteTimeT = Aws::Utils::DateTime>
    void SetDeleteTime(DeleteTimeT&& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = std::forward<DeleteTimeT>(value); }
    template<typename DeleteTimeT = Aws::Utils::DateTime>
    NatGateway& WithDeleteTime(DeleteTimeT&& value) { SetDeleteTime(std::forward<DeleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    NatGateway& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the NAT gateway could not be created, specifies the error message for the
     * failure, that corresponds to the error code.</p> <ul> <li> <p>For
     * InsufficientFreeAddressesInSubnet: "Subnet has insufficient free addresses to
     * create this NAT gateway"</p> </li> <li> <p>For Gateway.NotAttached: "Network
     * vpc-xxxxxxxx has no Internet gateway attached"</p> </li> <li> <p>For
     * InvalidAllocationID.NotFound: "Elastic IP address eipalloc-xxxxxxxx could not be
     * associated with this NAT gateway"</p> </li> <li> <p>For
     * Resource.AlreadyAssociated: "Elastic IP address eipalloc-xxxxxxxx is already
     * associated"</p> </li> <li> <p>For InternalError: "Network interface
     * eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid
     * state. Please try again."</p> </li> <li> <p>For InvalidSubnetID.NotFound: "The
     * specified subnet subnet-xxxxxxxx does not exist or could not be found."</p>
     * </li> </ul>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    NatGateway& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const { return m_natGatewayAddresses; }
    inline bool NatGatewayAddressesHasBeenSet() const { return m_natGatewayAddressesHasBeenSet; }
    template<typename NatGatewayAddressesT = Aws::Vector<NatGatewayAddress>>
    void SetNatGatewayAddresses(NatGatewayAddressesT&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = std::forward<NatGatewayAddressesT>(value); }
    template<typename NatGatewayAddressesT = Aws::Vector<NatGatewayAddress>>
    NatGateway& WithNatGatewayAddresses(NatGatewayAddressesT&& value) { SetNatGatewayAddresses(std::forward<NatGatewayAddressesT>(value)); return *this;}
    template<typename NatGatewayAddressesT = NatGatewayAddress>
    NatGateway& AddNatGatewayAddresses(NatGatewayAddressesT&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.emplace_back(std::forward<NatGatewayAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    template<typename NatGatewayIdT = Aws::String>
    void SetNatGatewayId(NatGatewayIdT&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::forward<NatGatewayIdT>(value); }
    template<typename NatGatewayIdT = Aws::String>
    NatGateway& WithNatGatewayId(NatGatewayIdT&& value) { SetNatGatewayId(std::forward<NatGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-gateways">documented
     * limits</a>, contact Amazon Web Services Support.</p>
     */
    inline const ProvisionedBandwidth& GetProvisionedBandwidth() const { return m_provisionedBandwidth; }
    inline bool ProvisionedBandwidthHasBeenSet() const { return m_provisionedBandwidthHasBeenSet; }
    template<typename ProvisionedBandwidthT = ProvisionedBandwidth>
    void SetProvisionedBandwidth(ProvisionedBandwidthT&& value) { m_provisionedBandwidthHasBeenSet = true; m_provisionedBandwidth = std::forward<ProvisionedBandwidthT>(value); }
    template<typename ProvisionedBandwidthT = ProvisionedBandwidth>
    NatGateway& WithProvisionedBandwidth(ProvisionedBandwidthT&& value) { SetProvisionedBandwidth(std::forward<ProvisionedBandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the NAT gateway.</p> <ul> <li> <p> <code>pending</code>: The NAT
     * gateway is being created and is not ready to process traffic.</p> </li> <li> <p>
     * <code>failed</code>: The NAT gateway could not be created. Check the
     * <code>failureCode</code> and <code>failureMessage</code> fields for the
     * reason.</p> </li> <li> <p> <code>available</code>: The NAT gateway is able to
     * process traffic. This status remains until you delete the NAT gateway, and does
     * not indicate the health of the NAT gateway.</p> </li> <li> <p>
     * <code>deleting</code>: The NAT gateway is in the process of being terminated and
     * may still be processing traffic.</p> </li> <li> <p> <code>deleted</code>: The
     * NAT gateway has been terminated and is no longer processing traffic.</p> </li>
     * </ul>
     */
    inline NatGatewayState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(NatGatewayState value) { m_stateHasBeenSet = true; m_state = value; }
    inline NatGateway& WithState(NatGatewayState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    NatGateway& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    NatGateway& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the NAT gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NatGateway& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NatGateway& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the NAT gateway supports public or private
     * connectivity.</p>
     */
    inline ConnectivityType GetConnectivityType() const { return m_connectivityType; }
    inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }
    inline void SetConnectivityType(ConnectivityType value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = value; }
    inline NatGateway& WithConnectivityType(ConnectivityType value) { SetConnectivityType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTime{};
    bool m_deleteTimeHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<NatGatewayAddress> m_natGatewayAddresses;
    bool m_natGatewayAddressesHasBeenSet = false;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    ProvisionedBandwidth m_provisionedBandwidth;
    bool m_provisionedBandwidthHasBeenSet = false;

    NatGatewayState m_state{NatGatewayState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ConnectivityType m_connectivityType{ConnectivityType::NOT_SET};
    bool m_connectivityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
