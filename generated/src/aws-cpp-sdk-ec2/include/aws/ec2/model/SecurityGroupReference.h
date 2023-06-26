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


    /**
     * <p>The ID of your security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of your security group.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The ID of your security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of your security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of your security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of your security group.</p>
     */
    inline SecurityGroupReference& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of your security group.</p>
     */
    inline SecurityGroupReference& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of your security group.</p>
     */
    inline SecurityGroupReference& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline const Aws::String& GetReferencingVpcId() const{ return m_referencingVpcId; }

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline bool ReferencingVpcIdHasBeenSet() const { return m_referencingVpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline void SetReferencingVpcId(const Aws::String& value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId = value; }

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline void SetReferencingVpcId(Aws::String&& value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId = std::move(value); }

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline void SetReferencingVpcId(const char* value) { m_referencingVpcIdHasBeenSet = true; m_referencingVpcId.assign(value); }

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline SecurityGroupReference& WithReferencingVpcId(const Aws::String& value) { SetReferencingVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline SecurityGroupReference& WithReferencingVpcId(Aws::String&& value) { SetReferencingVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC with the referencing security group.</p>
     */
    inline SecurityGroupReference& WithReferencingVpcId(const char* value) { SetReferencingVpcId(value); return *this;}


    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline SecurityGroupReference& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline SecurityGroupReference& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline SecurityGroupReference& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_referencingVpcId;
    bool m_referencingVpcIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
