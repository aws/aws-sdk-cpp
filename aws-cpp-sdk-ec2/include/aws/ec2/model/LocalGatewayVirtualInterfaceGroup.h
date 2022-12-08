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
   * <p>Describes a local gateway virtual interface group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayVirtualInterfaceGroup">AWS
   * API Reference</a></p>
   */
  class LocalGatewayVirtualInterfaceGroup
  {
  public:
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup();
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayVirtualInterfaceGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceGroupId(const char* value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}


    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalGatewayVirtualInterfaceIds() const{ return m_localGatewayVirtualInterfaceIds; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline bool LocalGatewayVirtualInterfaceIdsHasBeenSet() const { return m_localGatewayVirtualInterfaceIdsHasBeenSet; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceIds(const Aws::Vector<Aws::String>& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = value; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceIds(Aws::Vector<Aws::String>&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds = std::move(value); }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceIds(const Aws::Vector<Aws::String>& value) { SetLocalGatewayVirtualInterfaceIds(value); return *this;}

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayVirtualInterfaceIds(Aws::Vector<Aws::String>&& value) { SetLocalGatewayVirtualInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& AddLocalGatewayVirtualInterfaceIds(const Aws::String& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& AddLocalGatewayVirtualInterfaceIds(Aws::String&& value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the virtual interfaces.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& AddLocalGatewayVirtualInterfaceIds(const char* value) { m_localGatewayVirtualInterfaceIdsHasBeenSet = true; m_localGatewayVirtualInterfaceIds.push_back(value); return *this; }


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
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway virtual
     * interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the virtual interface group.</p>
     */
    inline LocalGatewayVirtualInterfaceGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
