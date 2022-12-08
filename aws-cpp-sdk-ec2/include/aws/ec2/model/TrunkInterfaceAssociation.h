/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InterfaceProtocolType.h>
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
   *  <p>Currently available in <b>limited preview only</b>. If you are
   * interested in using this feature, contact your account manager.</p> 
   * <p>Information about an association between a branch network interface with a
   * trunk network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrunkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class TrunkInterfaceAssociation
  {
  public:
    AWS_EC2_API TrunkInterfaceAssociation();
    AWS_EC2_API TrunkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrunkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline TrunkInterfaceAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline TrunkInterfaceAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline TrunkInterfaceAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline const Aws::String& GetBranchInterfaceId() const{ return m_branchInterfaceId; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline bool BranchInterfaceIdHasBeenSet() const { return m_branchInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(const Aws::String& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = value; }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(Aws::String&& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = std::move(value); }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline void SetBranchInterfaceId(const char* value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId.assign(value); }

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithBranchInterfaceId(const Aws::String& value) { SetBranchInterfaceId(value); return *this;}

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithBranchInterfaceId(Aws::String&& value) { SetBranchInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithBranchInterfaceId(const char* value) { SetBranchInterfaceId(value); return *this;}


    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline const Aws::String& GetTrunkInterfaceId() const{ return m_trunkInterfaceId; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline bool TrunkInterfaceIdHasBeenSet() const { return m_trunkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(const Aws::String& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = value; }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(Aws::String&& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline void SetTrunkInterfaceId(const char* value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId.assign(value); }

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithTrunkInterfaceId(const Aws::String& value) { SetTrunkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithTrunkInterfaceId(Aws::String&& value) { SetTrunkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline TrunkInterfaceAssociation& WithTrunkInterfaceId(const char* value) { SetTrunkInterfaceId(value); return *this;}


    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline const InterfaceProtocolType& GetInterfaceProtocol() const{ return m_interfaceProtocol; }

    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline bool InterfaceProtocolHasBeenSet() const { return m_interfaceProtocolHasBeenSet; }

    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline void SetInterfaceProtocol(const InterfaceProtocolType& value) { m_interfaceProtocolHasBeenSet = true; m_interfaceProtocol = value; }

    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline void SetInterfaceProtocol(InterfaceProtocolType&& value) { m_interfaceProtocolHasBeenSet = true; m_interfaceProtocol = std::move(value); }

    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline TrunkInterfaceAssociation& WithInterfaceProtocol(const InterfaceProtocolType& value) { SetInterfaceProtocol(value); return *this;}

    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline TrunkInterfaceAssociation& WithInterfaceProtocol(InterfaceProtocolType&& value) { SetInterfaceProtocol(std::move(value)); return *this;}


    /**
     * <p>The ID of the VLAN when you use the VLAN protocol.</p>
     */
    inline int GetVlanId() const{ return m_vlanId; }

    /**
     * <p>The ID of the VLAN when you use the VLAN protocol.</p>
     */
    inline bool VlanIdHasBeenSet() const { return m_vlanIdHasBeenSet; }

    /**
     * <p>The ID of the VLAN when you use the VLAN protocol.</p>
     */
    inline void SetVlanId(int value) { m_vlanIdHasBeenSet = true; m_vlanId = value; }

    /**
     * <p>The ID of the VLAN when you use the VLAN protocol.</p>
     */
    inline TrunkInterfaceAssociation& WithVlanId(int value) { SetVlanId(value); return *this;}


    /**
     * <p>The application key when you use the GRE protocol.</p>
     */
    inline int GetGreKey() const{ return m_greKey; }

    /**
     * <p>The application key when you use the GRE protocol.</p>
     */
    inline bool GreKeyHasBeenSet() const { return m_greKeyHasBeenSet; }

    /**
     * <p>The application key when you use the GRE protocol.</p>
     */
    inline void SetGreKey(int value) { m_greKeyHasBeenSet = true; m_greKey = value; }

    /**
     * <p>The application key when you use the GRE protocol.</p>
     */
    inline TrunkInterfaceAssociation& WithGreKey(int value) { SetGreKey(value); return *this;}


    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline TrunkInterfaceAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline TrunkInterfaceAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline TrunkInterfaceAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline TrunkInterfaceAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_branchInterfaceId;
    bool m_branchInterfaceIdHasBeenSet = false;

    Aws::String m_trunkInterfaceId;
    bool m_trunkInterfaceIdHasBeenSet = false;

    InterfaceProtocolType m_interfaceProtocol;
    bool m_interfaceProtocolHasBeenSet = false;

    int m_vlanId;
    bool m_vlanIdHasBeenSet = false;

    int m_greKey;
    bool m_greKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
