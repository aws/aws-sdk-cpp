/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamResourceDiscoveryState.h>
#include <aws/ec2/model/IpamOperatingRegion.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/IpamOrganizationalUnitExclusion.h>
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
   * <p>A resource discovery is an IPAM component that enables IPAM to manage and
   * monitor resources that belong to the owning account.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamResourceDiscovery">AWS
   * API Reference</a></p>
   */
  class IpamResourceDiscovery
  {
  public:
    AWS_EC2_API IpamResourceDiscovery() = default;
    AWS_EC2_API IpamResourceDiscovery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceDiscovery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    IpamResourceDiscovery& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
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
    IpamResourceDiscovery& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryArn() const { return m_ipamResourceDiscoveryArn; }
    inline bool IpamResourceDiscoveryArnHasBeenSet() const { return m_ipamResourceDiscoveryArnHasBeenSet; }
    template<typename IpamResourceDiscoveryArnT = Aws::String>
    void SetIpamResourceDiscoveryArn(IpamResourceDiscoveryArnT&& value) { m_ipamResourceDiscoveryArnHasBeenSet = true; m_ipamResourceDiscoveryArn = std::forward<IpamResourceDiscoveryArnT>(value); }
    template<typename IpamResourceDiscoveryArnT = Aws::String>
    IpamResourceDiscovery& WithIpamResourceDiscoveryArn(IpamResourceDiscoveryArnT&& value) { SetIpamResourceDiscoveryArn(std::forward<IpamResourceDiscoveryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery Region.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryRegion() const { return m_ipamResourceDiscoveryRegion; }
    inline bool IpamResourceDiscoveryRegionHasBeenSet() const { return m_ipamResourceDiscoveryRegionHasBeenSet; }
    template<typename IpamResourceDiscoveryRegionT = Aws::String>
    void SetIpamResourceDiscoveryRegion(IpamResourceDiscoveryRegionT&& value) { m_ipamResourceDiscoveryRegionHasBeenSet = true; m_ipamResourceDiscoveryRegion = std::forward<IpamResourceDiscoveryRegionT>(value); }
    template<typename IpamResourceDiscoveryRegionT = Aws::String>
    IpamResourceDiscovery& WithIpamResourceDiscoveryRegion(IpamResourceDiscoveryRegionT&& value) { SetIpamResourceDiscoveryRegion(std::forward<IpamResourceDiscoveryRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource discovery description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpamResourceDiscovery& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline const Aws::Vector<IpamOperatingRegion>& GetOperatingRegions() const { return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    template<typename OperatingRegionsT = Aws::Vector<IpamOperatingRegion>>
    void SetOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::forward<OperatingRegionsT>(value); }
    template<typename OperatingRegionsT = Aws::Vector<IpamOperatingRegion>>
    IpamResourceDiscovery& WithOperatingRegions(OperatingRegionsT&& value) { SetOperatingRegions(std::forward<OperatingRegionsT>(value)); return *this;}
    template<typename OperatingRegionsT = IpamOperatingRegion>
    IpamResourceDiscovery& AddOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.emplace_back(std::forward<OperatingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines if the resource discovery is the default. The default resource
     * discovery is the resource discovery automatically created when you create an
     * IPAM.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline IpamResourceDiscovery& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle state of the resource discovery.</p> <ul> <li> <p>
     * <code>create-in-progress</code> - Resource discovery is being created.</p> </li>
     * <li> <p> <code>create-complete</code> - Resource discovery creation is
     * complete.</p> </li> <li> <p> <code>create-failed</code> - Resource discovery
     * creation has failed.</p> </li> <li> <p> <code>modify-in-progress</code> -
     * Resource discovery is being modified.</p> </li> <li> <p>
     * <code>modify-complete</code> - Resource discovery modification is complete.</p>
     * </li> <li> <p> <code>modify-failed</code> - Resource discovery modification has
     * failed.</p> </li> <li> <p> <code>delete-in-progress</code> - Resource discovery
     * is being deleted.</p> </li> <li> <p> <code>delete-complete</code> - Resource
     * discovery deletion is complete.</p> </li> <li> <p> <code>delete-failed</code> -
     * Resource discovery deletion has failed.</p> </li> <li> <p>
     * <code>isolate-in-progress</code> - Amazon Web Services account that created the
     * resource discovery has been removed and the resource discovery is being
     * isolated.</p> </li> <li> <p> <code>isolate-complete</code> - Resource discovery
     * isolation is complete.</p> </li> <li> <p> <code>restore-in-progress</code> -
     * Amazon Web Services account that created the resource discovery and was isolated
     * has been restored.</p> </li> </ul>
     */
    inline IpamResourceDiscoveryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamResourceDiscoveryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamResourceDiscovery& WithState(IpamResourceDiscoveryState value) { SetState(value); return *this;}
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
    IpamResourceDiscovery& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IpamResourceDiscovery& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If your IPAM is integrated with Amazon Web Services Organizations and you add
     * an organizational unit (OU) exclusion, IPAM will not manage the IP addresses in
     * accounts in that OU exclusion.</p>
     */
    inline const Aws::Vector<IpamOrganizationalUnitExclusion>& GetOrganizationalUnitExclusions() const { return m_organizationalUnitExclusions; }
    inline bool OrganizationalUnitExclusionsHasBeenSet() const { return m_organizationalUnitExclusionsHasBeenSet; }
    template<typename OrganizationalUnitExclusionsT = Aws::Vector<IpamOrganizationalUnitExclusion>>
    void SetOrganizationalUnitExclusions(OrganizationalUnitExclusionsT&& value) { m_organizationalUnitExclusionsHasBeenSet = true; m_organizationalUnitExclusions = std::forward<OrganizationalUnitExclusionsT>(value); }
    template<typename OrganizationalUnitExclusionsT = Aws::Vector<IpamOrganizationalUnitExclusion>>
    IpamResourceDiscovery& WithOrganizationalUnitExclusions(OrganizationalUnitExclusionsT&& value) { SetOrganizationalUnitExclusions(std::forward<OrganizationalUnitExclusionsT>(value)); return *this;}
    template<typename OrganizationalUnitExclusionsT = IpamOrganizationalUnitExclusion>
    IpamResourceDiscovery& AddOrganizationalUnitExclusions(OrganizationalUnitExclusionsT&& value) { m_organizationalUnitExclusionsHasBeenSet = true; m_organizationalUnitExclusions.emplace_back(std::forward<OrganizationalUnitExclusionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryArn;
    bool m_ipamResourceDiscoveryArnHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryRegion;
    bool m_ipamResourceDiscoveryRegionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    IpamResourceDiscoveryState m_state{IpamResourceDiscoveryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<IpamOrganizationalUnitExclusion> m_organizationalUnitExclusions;
    bool m_organizationalUnitExclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
