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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes an association between a local gateway route table and a
   * VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayRouteTableVpcAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LocalGatewayRouteTableVpcAssociation
  {
  public:
    LocalGatewayRouteTableVpcAssociation();
    LocalGatewayRouteTableVpcAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    LocalGatewayRouteTableVpcAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVpcAssociationId() const{ return m_localGatewayRouteTableVpcAssociationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool LocalGatewayRouteTableVpcAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVpcAssociationId(const char* value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { SetLocalGatewayRouteTableVpcAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(const char* value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}


    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The tags assigned to the association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVpcAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_localGatewayRouteTableVpcAssociationId;
    bool m_localGatewayRouteTableVpcAssociationIdHasBeenSet;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
