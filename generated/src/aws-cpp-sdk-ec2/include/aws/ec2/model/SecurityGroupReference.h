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
    AWS_EC2_API SecurityGroupReference() = default;
    AWS_EC2_API SecurityGroupReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of your security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    SecurityGroupReference& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline const Aws::String& GetReferencingVpcId() const { return m_referencingVpcId; }
    inline bool ReferencingVpcIdHasBeenSet() const { return m_referencingVpcIdHasBeenSet; }
    template<typename ReferencingVpcIdT = Aws::String>
    void SetReferencingVpcId(ReferencingVpcIdT&& value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId = std::forward<ReferencingVpcIdT>(value); }
    template<typename ReferencingVpcIdT = Aws::String>
    SecurityGroupReference& WithReferencingVpcId(ReferencingVpcIdT&& value) { SetReferencingVpcId(std::forward<ReferencingVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection (if applicable). For more information
     * about security group referencing for peering connections, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/peering/vpc-peering-security-groups.html">Update
     * your security groups to reference peer security groups</a> in the <i>VPC Peering
     * Guide</i>.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    SecurityGroupReference& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway (if applicable).</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    SecurityGroupReference& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
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
