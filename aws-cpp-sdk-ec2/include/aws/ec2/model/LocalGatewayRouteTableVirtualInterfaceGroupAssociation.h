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
   * <p>Describes an association between a local gateway route table and a virtual
   * interface group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayRouteTableVirtualInterfaceGroupAssociation">AWS
   * API Reference</a></p>
   */
  class LocalGatewayRouteTableVirtualInterfaceGroupAssociation
  {
  public:
    AWS_EC2_API LocalGatewayRouteTableVirtualInterfaceGroupAssociation();
    AWS_EC2_API LocalGatewayRouteTableVirtualInterfaceGroupAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRouteTableVirtualInterfaceGroupAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId() const{ return m_localGatewayRouteTableVirtualInterfaceGroupAssociationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool LocalGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const Aws::String& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(Aws::String&& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const char* value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const Aws::String& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(Aws::String&& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const char* value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(value); return *this;}


    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const{ return m_localGatewayVirtualInterfaceGroupId; }

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = value; }

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::move(value); }

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(const char* value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId.assign(value); }

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayVirtualInterfaceGroupId(const char* value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}


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
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}


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
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const{ return m_localGatewayRouteTableArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline void SetLocalGatewayRouteTableArn(const Aws::String& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline void SetLocalGatewayRouteTableArn(Aws::String&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline void SetLocalGatewayRouteTableArn(const char* value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableArn(const Aws::String& value) { SetLocalGatewayRouteTableArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableArn(Aws::String&& value) { SetLocalGatewayRouteTableArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * virtual interface group.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithLocalGatewayRouteTableArn(const char* value) { SetLocalGatewayRouteTableArn(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


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
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithState(const char* value) { SetState(value); return *this;}


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
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the association.</p>
     */
    inline LocalGatewayRouteTableVirtualInterfaceGroupAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_localGatewayRouteTableVirtualInterfaceGroupAssociationId;
    bool m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = false;

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableArn;
    bool m_localGatewayRouteTableArnHasBeenSet = false;

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
