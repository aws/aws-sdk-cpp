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
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation() = default;
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRouteTableVpcAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVpcAssociationId() const { return m_localGatewayRouteTableVpcAssociationId; }
    inline bool LocalGatewayRouteTableVpcAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVpcAssociationIdHasBeenSet; }
    template<typename LocalGatewayRouteTableVpcAssociationIdT = Aws::String>
    void SetLocalGatewayRouteTableVpcAssociationId(LocalGatewayRouteTableVpcAssociationIdT&& value) { m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true; m_localGatewayRouteTableVpcAssociationId = std::forward<LocalGatewayRouteTableVpcAssociationIdT>(value); }
    template<typename LocalGatewayRouteTableVpcAssociationIdT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableVpcAssociationId(LocalGatewayRouteTableVpcAssociationIdT&& value) { SetLocalGatewayRouteTableVpcAssociationId(std::forward<LocalGatewayRouteTableVpcAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const { return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    void SetLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::forward<LocalGatewayRouteTableIdT>(value); }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { SetLocalGatewayRouteTableId(std::forward<LocalGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table for the
     * association.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const { return m_localGatewayRouteTableArn; }
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }
    template<typename LocalGatewayRouteTableArnT = Aws::String>
    void SetLocalGatewayRouteTableArn(LocalGatewayRouteTableArnT&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::forward<LocalGatewayRouteTableArnT>(value); }
    template<typename LocalGatewayRouteTableArnT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithLocalGatewayRouteTableArn(LocalGatewayRouteTableArnT&& value) { SetLocalGatewayRouteTableArn(std::forward<LocalGatewayRouteTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const { return m_localGatewayId; }
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }
    template<typename LocalGatewayIdT = Aws::String>
    void SetLocalGatewayId(LocalGatewayIdT&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::forward<LocalGatewayIdT>(value); }
    template<typename LocalGatewayIdT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway route
     * table for the association.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    LocalGatewayRouteTableVpcAssociation& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LocalGatewayRouteTableVpcAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LocalGatewayRouteTableVpcAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
