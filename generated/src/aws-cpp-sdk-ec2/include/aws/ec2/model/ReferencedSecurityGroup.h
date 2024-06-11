/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Describes the security group that is referenced in the security group
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReferencedSecurityGroup">AWS
   * API Reference</a></p>
   */
  class ReferencedSecurityGroup
  {
  public:
    AWS_EC2_API ReferencedSecurityGroup();
    AWS_EC2_API ReferencedSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReferencedSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline ReferencedSecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline ReferencedSecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline ReferencedSecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetPeeringStatus() const{ return m_peeringStatus; }
    inline bool PeeringStatusHasBeenSet() const { return m_peeringStatusHasBeenSet; }
    inline void SetPeeringStatus(const Aws::String& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = value; }
    inline void SetPeeringStatus(Aws::String&& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = std::move(value); }
    inline void SetPeeringStatus(const char* value) { m_peeringStatusHasBeenSet = true; m_peeringStatus.assign(value); }
    inline ReferencedSecurityGroup& WithPeeringStatus(const Aws::String& value) { SetPeeringStatus(value); return *this;}
    inline ReferencedSecurityGroup& WithPeeringStatus(Aws::String&& value) { SetPeeringStatus(std::move(value)); return *this;}
    inline ReferencedSecurityGroup& WithPeeringStatus(const char* value) { SetPeeringStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline ReferencedSecurityGroup& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ReferencedSecurityGroup& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ReferencedSecurityGroup& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline ReferencedSecurityGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline ReferencedSecurityGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline ReferencedSecurityGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection (if applicable).</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }
    inline ReferencedSecurityGroup& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}
    inline ReferencedSecurityGroup& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}
    inline ReferencedSecurityGroup& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_peeringStatus;
    bool m_peeringStatusHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
