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
   * <p>Describes a VPC with a security group that references your security
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupReference">AWS
   * API Reference</a></p>
   */
  class SecurityGroupReference
  {
  public:
    AWS_EC2_API SecurityGroupReference();
    AWS_EC2_API SecurityGroupReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of your security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline SecurityGroupReference& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline SecurityGroupReference& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline SecurityGroupReference& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline const Aws::String& GetReferencingVpcId() const{ return m_referencingVpcId; }
    inline bool ReferencingVpcIdHasBeenSet() const { return m_referencingVpcIdHasBeenSet; }
    inline void SetReferencingVpcId(const Aws::String& value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId = value; }
    inline void SetReferencingVpcId(Aws::String&& value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId = std::move(value); }
    inline void SetReferencingVpcId(const char* value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId.assign(value); }
    inline SecurityGroupReference& WithReferencingVpcId(const Aws::String& value) { SetReferencingVpcId(value); return *this;}
    inline SecurityGroupReference& WithReferencingVpcId(Aws::String&& value) { SetReferencingVpcId(std::move(value)); return *this;}
    inline SecurityGroupReference& WithReferencingVpcId(const char* value) { SetReferencingVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection (if applicable). For more information
     * about security group referencing for peering connections, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/peering/vpc-peering-security-groups.html">Update
     * your security groups to reference peer security groups</a> in the <i>VPC Peering
     * Guide</i>.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }
    inline SecurityGroupReference& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}
    inline SecurityGroupReference& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}
    inline SecurityGroupReference& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This parameter is in preview and may not be available for your
     * account.</p>  <p>The ID of the transit gateway (if applicable).</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }
    inline SecurityGroupReference& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline SecurityGroupReference& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline SecurityGroupReference& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_referencingVpcId;
    bool m_referencingVpcIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
