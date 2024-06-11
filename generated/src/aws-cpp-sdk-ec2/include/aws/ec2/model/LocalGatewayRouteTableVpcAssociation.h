/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LocalGatewayRouteTableVpcAssociation
  {
  public:
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation();
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVpcAssociationId() const{ return m_localGatewayRouteTableVpcAssociationId; }
    inline bool LocalGatewayRouteTableVpcAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = value; }
    inline void SetLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = std::move(value); }
    inline void SetLocalGatewayRouteTableVpcAssociationId(const char* value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(const Aws::String& value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(Aws::String&& value) { SetLocalGatewayRouteTableVpcAssociationId(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(const char* value) { SetLocalGatewayRouteTableVpcAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const{ return m_localGatewayRouteTableArn; }
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }
    inline void SetLocalGatewayRouteTableArn(const Aws::String& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = value; }
    inline void SetLocalGatewayRouteTableArn(Aws::String&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::move(value); }
    inline void SetLocalGatewayRouteTableArn(const char* value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableArn(const Aws::String& value) { SetLocalGatewayRouteTableArn(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableArn(Aws::String&& value) { SetLocalGatewayRouteTableArn(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableArn(const char* value) { SetLocalGatewayRouteTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}
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
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway route
     * table for the association.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LocalGatewayRouteTableVpcAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LocalGatewayRouteTableVpcAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LocalGatewayRouteTableVpcAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_localGatewayRouteTableVpcAssociationId;
    bool m_localGatewayRouteTableVpcAssociationIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableArn;
    bool m_localGatewayRouteTableArnHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
