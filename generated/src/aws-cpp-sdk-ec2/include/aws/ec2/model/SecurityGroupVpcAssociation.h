/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SecurityGroupVpcAssociationState.h>
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
   * <p>A security group association with a VPC that you made with <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_AssociateSecurityGroupVpc.html">AssociateSecurityGroupVpc</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupVpcAssociation">AWS
   * API Reference</a></p>
   */
  class SecurityGroupVpcAssociation
  {
  public:
    AWS_EC2_API SecurityGroupVpcAssociation() = default;
    AWS_EC2_API SecurityGroupVpcAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupVpcAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The association's security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    SecurityGroupVpcAssociation& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    SecurityGroupVpcAssociation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC.</p>
     */
    inline const Aws::String& GetVpcOwnerId() const { return m_vpcOwnerId; }
    inline bool VpcOwnerIdHasBeenSet() const { return m_vpcOwnerIdHasBeenSet; }
    template<typename VpcOwnerIdT = Aws::String>
    void SetVpcOwnerId(VpcOwnerIdT&& value) { m_vpcOwnerIdHasBeenSet = true; m_vpcOwnerId = std::forward<VpcOwnerIdT>(value); }
    template<typename VpcOwnerIdT = Aws::String>
    SecurityGroupVpcAssociation& WithVpcOwnerId(VpcOwnerIdT&& value) { SetVpcOwnerId(std::forward<VpcOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's state.</p>
     */
    inline SecurityGroupVpcAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SecurityGroupVpcAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SecurityGroupVpcAssociation& WithState(SecurityGroupVpcAssociationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's state reason.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    SecurityGroupVpcAssociation& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetGroupOwnerId() const { return m_groupOwnerId; }
    inline bool GroupOwnerIdHasBeenSet() const { return m_groupOwnerIdHasBeenSet; }
    template<typename GroupOwnerIdT = Aws::String>
    void SetGroupOwnerId(GroupOwnerIdT&& value) { m_groupOwnerIdHasBeenSet = true; m_groupOwnerId = std::forward<GroupOwnerIdT>(value); }
    template<typename GroupOwnerIdT = Aws::String>
    SecurityGroupVpcAssociation& WithGroupOwnerId(GroupOwnerIdT&& value) { SetGroupOwnerId(std::forward<GroupOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcOwnerId;
    bool m_vpcOwnerIdHasBeenSet = false;

    SecurityGroupVpcAssociationState m_state{SecurityGroupVpcAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_groupOwnerId;
    bool m_groupOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
