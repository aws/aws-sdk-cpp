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
   * <p>Information about an association between a branch network interface with a
   * trunk network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrunkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class TrunkInterfaceAssociation
  {
  public:
    AWS_EC2_API TrunkInterfaceAssociation() = default;
    AWS_EC2_API TrunkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrunkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    TrunkInterfaceAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the branch network interface.</p>
     */
    inline const Aws::String& GetBranchInterfaceId() const { return m_branchInterfaceId; }
    inline bool BranchInterfaceIdHasBeenSet() const { return m_branchInterfaceIdHasBeenSet; }
    template<typename BranchInterfaceIdT = Aws::String>
    void SetBranchInterfaceId(BranchInterfaceIdT&& value) { m_branchInterfaceIdHasBeenSet = true; m_branchInterfaceId = std::forward<BranchInterfaceIdT>(value); }
    template<typename BranchInterfaceIdT = Aws::String>
    TrunkInterfaceAssociation& WithBranchInterfaceId(BranchInterfaceIdT&& value) { SetBranchInterfaceId(std::forward<BranchInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the trunk network interface.</p>
     */
    inline const Aws::String& GetTrunkInterfaceId() const { return m_trunkInterfaceId; }
    inline bool TrunkInterfaceIdHasBeenSet() const { return m_trunkInterfaceIdHasBeenSet; }
    template<typename TrunkInterfaceIdT = Aws::String>
    void SetTrunkInterfaceId(TrunkInterfaceIdT&& value) { m_trunkInterfaceIdHasBeenSet = true; m_trunkInterfaceId = std::forward<TrunkInterfaceIdT>(value); }
    template<typename TrunkInterfaceIdT = Aws::String>
    TrunkInterfaceAssociation& WithTrunkInterfaceId(TrunkInterfaceIdT&& value) { SetTrunkInterfaceId(std::forward<TrunkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interface protocol. Valid values are <code>VLAN</code> and
     * <code>GRE</code>.</p>
     */
    inline InterfaceProtocolType GetInterfaceProtocol() const { return m_interfaceProtocol; }
    inline bool InterfaceProtocolHasBeenSet() const { return m_interfaceProtocolHasBeenSet; }
    inline void SetInterfaceProtocol(InterfaceProtocolType value) { m_interfaceProtocolHasBeenSet = true; m_interfaceProtocol = value; }
    inline TrunkInterfaceAssociation& WithInterfaceProtocol(InterfaceProtocolType value) { SetInterfaceProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VLAN when you use the VLAN protocol.</p>
     */
    inline int GetVlanId() const { return m_vlanId; }
    inline bool VlanIdHasBeenSet() const { return m_vlanIdHasBeenSet; }
    inline void SetVlanId(int value) { m_vlanIdHasBeenSet = true; m_vlanId = value; }
    inline TrunkInterfaceAssociation& WithVlanId(int value) { SetVlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application key when you use the GRE protocol.</p>
     */
    inline int GetGreKey() const { return m_greKey; }
    inline bool GreKeyHasBeenSet() const { return m_greKeyHasBeenSet; }
    inline void SetGreKey(int value) { m_greKeyHasBeenSet = true; m_greKey = value; }
    inline TrunkInterfaceAssociation& WithGreKey(int value) { SetGreKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the trunk interface association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrunkInterfaceAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrunkInterfaceAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_branchInterfaceId;
    bool m_branchInterfaceIdHasBeenSet = false;

    Aws::String m_trunkInterfaceId;
    bool m_trunkInterfaceIdHasBeenSet = false;

    InterfaceProtocolType m_interfaceProtocol{InterfaceProtocolType::NOT_SET};
    bool m_interfaceProtocolHasBeenSet = false;

    int m_vlanId{0};
    bool m_vlanIdHasBeenSet = false;

    int m_greKey{0};
    bool m_greKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
