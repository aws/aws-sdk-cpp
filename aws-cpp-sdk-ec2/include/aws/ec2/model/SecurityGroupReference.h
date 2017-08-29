/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API SecurityGroupReference
  {
  public:
    SecurityGroupReference();
    SecurityGroupReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    SecurityGroupReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of your security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

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
    bool m_groupIdHasBeenSet;

    Aws::String m_referencingVpcId;
    bool m_referencingVpcIdHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
