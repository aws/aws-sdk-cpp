/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamAssociatedResourceDiscoveryStatus.h>
#include <aws/ec2/model/IpamResourceDiscoveryAssociationState.h>
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
   * <p>An IPAM resource discovery association. An associated resource discovery is a
   * resource discovery that has been associated with an IPAM. IPAM aggregates the
   * resource CIDRs discovered by the associated resource discovery.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamResourceDiscoveryAssociation">AWS
   * API Reference</a></p>
   */
  class IpamResourceDiscoveryAssociation
  {
  public:
    AWS_EC2_API IpamResourceDiscoveryAssociation() = default;
    AWS_EC2_API IpamResourceDiscoveryAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceDiscoveryAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the resource discovery owner.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    IpamResourceDiscoveryAssociation& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery association ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryAssociationId() const { return m_ipamResourceDiscoveryAssociationId; }
    inline bool IpamResourceDiscoveryAssociationIdHasBeenSet() const { return m_ipamResourceDiscoveryAssociationIdHasBeenSet; }
    template<typename IpamResourceDiscoveryAssociationIdT = Aws::String>
    void SetIpamResourceDiscoveryAssociationId(IpamResourceDiscoveryAssociationIdT&& value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId = std::forward<IpamResourceDiscoveryAssociationIdT>(value); }
    template<typename IpamResourceDiscoveryAssociationIdT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationId(IpamResourceDiscoveryAssociationIdT&& value) { SetIpamResourceDiscoveryAssociationId(std::forward<IpamResourceDiscoveryAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery association Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryAssociationArn() const { return m_ipamResourceDiscoveryAssociationArn; }
    inline bool IpamResourceDiscoveryAssociationArnHasBeenSet() const { return m_ipamResourceDiscoveryAssociationArnHasBeenSet; }
    template<typename IpamResourceDiscoveryAssociationArnT = Aws::String>
    void SetIpamResourceDiscoveryAssociationArn(IpamResourceDiscoveryAssociationArnT&& value) { m_ipamResourceDiscoveryAssociationArnHasBeenSet = true; m_ipamResourceDiscoveryAssociationArn = std::forward<IpamResourceDiscoveryAssociationArnT>(value); }
    template<typename IpamResourceDiscoveryAssociationArnT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryAssociationArn(IpamResourceDiscoveryAssociationArnT&& value) { SetIpamResourceDiscoveryAssociationArn(std::forward<IpamResourceDiscoveryAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value); }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM ARN.</p>
     */
    inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    template<typename IpamArnT = Aws::String>
    void SetIpamArn(IpamArnT&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::forward<IpamArnT>(value); }
    template<typename IpamArnT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamArn(IpamArnT&& value) { SetIpamArn(std::forward<IpamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM home Region.</p>
     */
    inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    template<typename IpamRegionT = Aws::String>
    void SetIpamRegion(IpamRegionT&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::forward<IpamRegionT>(value); }
    template<typename IpamRegionT = Aws::String>
    IpamResourceDiscoveryAssociation& WithIpamRegion(IpamRegionT&& value) { SetIpamRegion(std::forward<IpamRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if the resource discovery is the default. When you create an IPAM, a
     * default resource discovery is created for your IPAM and it's associated with
     * your IPAM.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline IpamResourceDiscoveryAssociation& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery status.</p> <ul> <li> <p> <code>active</code> -
     * Connection or permissions required to read the results of the resource discovery
     * are intact.</p> </li> <li> <p> <code>not-found</code> - Connection or
     * permissions required to read the results of the resource discovery are broken.
     * This may happen if the owner of the resource discovery stopped sharing it or
     * deleted the resource discovery. Verify the resource discovery still exists and
     * the Amazon Web Services RAM resource share is still intact.</p> </li> </ul>
     */
    inline IpamAssociatedResourceDiscoveryStatus GetResourceDiscoveryStatus() const { return m_resourceDiscoveryStatus; }
    inline bool ResourceDiscoveryStatusHasBeenSet() const { return m_resourceDiscoveryStatusHasBeenSet; }
    inline void SetResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus value) { m_resourceDiscoveryStatusHasBeenSet = true; m_resourceDiscoveryStatus = value; }
    inline IpamResourceDiscoveryAssociation& WithResourceDiscoveryStatus(IpamAssociatedResourceDiscoveryStatus value) { SetResourceDiscoveryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the association when you associate or disassociate a
     * resource discovery.</p> <ul> <li> <p> <code>associate-in-progress</code> -
     * Resource discovery is being associated.</p> </li> <li> <p>
     * <code>associate-complete</code> - Resource discovery association is
     * complete.</p> </li> <li> <p> <code>associate-failed</code> - Resource discovery
     * association has failed.</p> </li> <li> <p> <code>disassociate-in-progress</code>
     * - Resource discovery is being disassociated.</p> </li> <li> <p>
     * <code>disassociate-complete</code> - Resource discovery disassociation is
     * complete.</p> </li> <li> <p> <code>disassociate-failed </code> - Resource
     * discovery disassociation has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery association has been removed and the resource discovery
     * associatation is being isolated.</p> </li> <li> <p>
     * <code>isolate-complete</code> - Resource discovery isolation is complete..</p>
     * </li> <li> <p> <code>restore-in-progress</code> - Resource discovery is being
     * restored.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamResourceDiscoveryAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamResourceDiscoveryAssociation& WithState(IpamResourceDiscoveryAssociationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    IpamResourceDiscoveryAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IpamResourceDiscoveryAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryAssociationId;
    bool m_ipamResourceDiscoveryAssociationIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryAssociationArn;
    bool m_ipamResourceDiscoveryAssociationArnHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    IpamAssociatedResourceDiscoveryStatus m_resourceDiscoveryStatus{IpamAssociatedResourceDiscoveryStatus::NOT_SET};
    bool m_resourceDiscoveryStatusHasBeenSet = false;

    IpamResourceDiscoveryAssociationState m_state{IpamResourceDiscoveryAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
