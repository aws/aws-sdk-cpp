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
    AWS_EC2_API SecurityGroupVpcAssociation();
    AWS_EC2_API SecurityGroupVpcAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupVpcAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The association's security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline SecurityGroupVpcAssociation& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline SecurityGroupVpcAssociation& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline SecurityGroupVpcAssociation& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's VPC ID.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline SecurityGroupVpcAssociation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline SecurityGroupVpcAssociation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline SecurityGroupVpcAssociation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC.</p>
     */
    inline const Aws::String& GetVpcOwnerId() const{ return m_vpcOwnerId; }
    inline bool VpcOwnerIdHasBeenSet() const { return m_vpcOwnerIdHasBeenSet; }
    inline void SetVpcOwnerId(const Aws::String& value) { m_vpcOwnerIdHasBeenSet = true; m_vpcOwnerId = value; }
    inline void SetVpcOwnerId(Aws::String&& value) { m_vpcOwnerIdHasBeenSet = true; m_vpcOwnerId = std::move(value); }
    inline void SetVpcOwnerId(const char* value) { m_vpcOwnerIdHasBeenSet = true; m_vpcOwnerId.assign(value); }
    inline SecurityGroupVpcAssociation& WithVpcOwnerId(const Aws::String& value) { SetVpcOwnerId(value); return *this;}
    inline SecurityGroupVpcAssociation& WithVpcOwnerId(Aws::String&& value) { SetVpcOwnerId(std::move(value)); return *this;}
    inline SecurityGroupVpcAssociation& WithVpcOwnerId(const char* value) { SetVpcOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's state.</p>
     */
    inline const SecurityGroupVpcAssociationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const SecurityGroupVpcAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(SecurityGroupVpcAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SecurityGroupVpcAssociation& WithState(const SecurityGroupVpcAssociationState& value) { SetState(value); return *this;}
    inline SecurityGroupVpcAssociation& WithState(SecurityGroupVpcAssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association's state reason.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline SecurityGroupVpcAssociation& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline SecurityGroupVpcAssociation& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline SecurityGroupVpcAssociation& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcOwnerId;
    bool m_vpcOwnerIdHasBeenSet = false;

    SecurityGroupVpcAssociationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
