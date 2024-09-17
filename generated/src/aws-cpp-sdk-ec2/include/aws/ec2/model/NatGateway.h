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
    AWS_EC2_API NatGateway();
    AWS_EC2_API NatGateway(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NatGateway& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time the NAT gateway was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline NatGateway& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline NatGateway& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the NAT gateway was deleted, if applicable.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTime() const{ return m_deleteTime; }
    inline bool DeleteTimeHasBeenSet() const { return m_deleteTimeHasBeenSet; }
    inline void SetDeleteTime(const Aws::Utils::DateTime& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = value; }
    inline void SetDeleteTime(Aws::Utils::DateTime&& value) { m_deleteTimeHasBeenSet = true; m_deleteTime = std::move(value); }
    inline NatGateway& WithDeleteTime(const Aws::Utils::DateTime& value) { SetDeleteTime(value); return *this;}
    inline NatGateway& WithDeleteTime(Aws::Utils::DateTime&& value) { SetDeleteTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the NAT gateway could not be created, specifies the error code for the
     * failure. (<code>InsufficientFreeAddressesInSubnet</code> |
     * <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> |
     * <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> |
     * <code>InvalidSubnetID.NotFound</code>)</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline NatGateway& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline NatGateway& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline NatGateway& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
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
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline NatGateway& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline NatGateway& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline NatGateway& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IP addresses and network interface associated with the
     * NAT gateway.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const{ return m_natGatewayAddresses; }
    inline bool NatGatewayAddressesHasBeenSet() const { return m_natGatewayAddressesHasBeenSet; }
    inline void SetNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = value; }
    inline void SetNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = std::move(value); }
    inline NatGateway& WithNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { SetNatGatewayAddresses(value); return *this;}
    inline NatGateway& WithNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { SetNatGatewayAddresses(std::move(value)); return *this;}
    inline NatGateway& AddNatGatewayAddresses(const NatGatewayAddress& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.push_back(value); return *this; }
    inline NatGateway& AddNatGatewayAddresses(NatGatewayAddress&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }
    inline NatGateway& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}
    inline NatGateway& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}
    inline NatGateway& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-gateways">documented
     * limits</a>, contact Amazon Web Services Support.</p>
     */
    inline const ProvisionedBandwidth& GetProvisionedBandwidth() const{ return m_provisionedBandwidth; }
    inline bool ProvisionedBandwidthHasBeenSet() const { return m_provisionedBandwidthHasBeenSet; }
    inline void SetProvisionedBandwidth(const ProvisionedBandwidth& value) { m_provisionedBandwidthHasBeenSet = true; m_provisionedBandwidth = value; }
    inline void SetProvisionedBandwidth(ProvisionedBandwidth&& value) { m_provisionedBandwidthHasBeenSet = true; m_provisionedBandwidth = std::move(value); }
    inline NatGateway& WithProvisionedBandwidth(const ProvisionedBandwidth& value) { SetProvisionedBandwidth(value); return *this;}
    inline NatGateway& WithProvisionedBandwidth(ProvisionedBandwidth&& value) { SetProvisionedBandwidth(std::move(value)); return *this;}
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
    inline const NatGatewayState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const NatGatewayState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(NatGatewayState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline NatGateway& WithState(const NatGatewayState& value) { SetState(value); return *this;}
    inline NatGateway& WithState(NatGatewayState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline NatGateway& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline NatGateway& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline NatGateway& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC in which the NAT gateway is located.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline NatGateway& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NatGateway& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NatGateway& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the NAT gateway.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline NatGateway& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NatGateway& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NatGateway& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NatGateway& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the NAT gateway supports public or private
     * connectivity.</p>
     */
    inline const ConnectivityType& GetConnectivityType() const{ return m_connectivityType; }
    inline bool ConnectivityTypeHasBeenSet() const { return m_connectivityTypeHasBeenSet; }
    inline void SetConnectivityType(const ConnectivityType& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = value; }
    inline void SetConnectivityType(ConnectivityType&& value) { m_connectivityTypeHasBeenSet = true; m_connectivityType = std::move(value); }
    inline NatGateway& WithConnectivityType(const ConnectivityType& value) { SetConnectivityType(value); return *this;}
    inline NatGateway& WithConnectivityType(ConnectivityType&& value) { SetConnectivityType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTime;
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

    NatGatewayState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ConnectivityType m_connectivityType;
    bool m_connectivityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
