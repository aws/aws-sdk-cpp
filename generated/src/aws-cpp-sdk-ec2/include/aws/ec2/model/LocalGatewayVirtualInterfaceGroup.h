﻿/**
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
   * <p>Describes a local gateway virtual interface group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayVirtualInterfaceGroup">AWS
   * API Reference</a></p>
   */
  class LocalGatewayVirtualInterfaceGroup
  {
  public:
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup() = default;
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const { return m_localGatewayVirtualInterfaceGroupId; }
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    void SetLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value); }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayVirtualInterfaceIds() const { return m_localGatewayVirtualInterfaceIds; }
    inline bool LocalGatewayVirtualInterfaceIdsHasBeenSet() const { return m_localGatewayVirtualInterfaceIdsHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = std::forward<LocalGatewayVirtualInterfaceIdsT>(value); }
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::Vector<Aws::String>>
    LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { SetLocalGatewayVirtualInterfaceIds(std::forward<LocalGatewayVirtualInterfaceIdsT>(value)); return *this;}
    template<typename LocalGatewayVirtualInterfaceIdsT = Aws::String>
    LocalGatewayVirtualInterfaceGroup& AddLocalGatewayVirtualInterfaceIds(LocalGatewayVirtualInterfaceIdsT&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.emplace_back(std::forward<LocalGatewayVirtualInterfaceIdsT>(value)); return *this; }
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
    LocalGatewayVirtualInterfaceGroup& WithLocalGatewayId(LocalGatewayIdT&& value) { SetLocalGatewayId(std::forward<LocalGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    LocalGatewayVirtualInterfaceGroup& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LocalGatewayVirtualInterfaceGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LocalGatewayVirtualInterfaceGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_localGatewayVirtualInterfaceIds;
    bool m_localGatewayVirtualInterfaceIdsHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
