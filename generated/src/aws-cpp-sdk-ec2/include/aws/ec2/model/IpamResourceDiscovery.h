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
    AWS_EC2_API IpamResourceDiscovery();
    AWS_EC2_API IpamResourceDiscovery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamResourceDiscovery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the owner.</p>
     */
    inline IpamResourceDiscovery& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the owner.</p>
     */
    inline IpamResourceDiscovery& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the owner.</p>
     */
    inline IpamResourceDiscovery& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}

    /**
     * <p>The resource discovery ID.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}


    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryArn() const{ return m_ipamResourceDiscoveryArn; }

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline bool IpamResourceDiscoveryArnHasBeenSet() const { return m_ipamResourceDiscoveryArnHasBeenSet; }

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryArn(const Aws::String& value) { m_ipamResourceDiscoveryArnHasBeenSet = true; m_ipamResourceDiscoveryArn = value; }

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryArn(Aws::String&& value) { m_ipamResourceDiscoveryArnHasBeenSet = true; m_ipamResourceDiscoveryArn = std::move(value); }

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline void SetIpamResourceDiscoveryArn(const char* value) { m_ipamResourceDiscoveryArnHasBeenSet = true; m_ipamResourceDiscoveryArn.assign(value); }

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryArn(const Aws::String& value) { SetIpamResourceDiscoveryArn(value); return *this;}

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryArn(Aws::String&& value) { SetIpamResourceDiscoveryArn(std::move(value)); return *this;}

    /**
     * <p>The resource discovery Amazon Resource Name (ARN).</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryArn(const char* value) { SetIpamResourceDiscoveryArn(value); return *this;}


    /**
     * <p>The resource discovery Region.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryRegion() const{ return m_ipamResourceDiscoveryRegion; }

    /**
     * <p>The resource discovery Region.</p>
     */
    inline bool IpamResourceDiscoveryRegionHasBeenSet() const { return m_ipamResourceDiscoveryRegionHasBeenSet; }

    /**
     * <p>The resource discovery Region.</p>
     */
    inline void SetIpamResourceDiscoveryRegion(const Aws::String& value) { m_ipamResourceDiscoveryRegionHasBeenSet = true; m_ipamResourceDiscoveryRegion = value; }

    /**
     * <p>The resource discovery Region.</p>
     */
    inline void SetIpamResourceDiscoveryRegion(Aws::String&& value) { m_ipamResourceDiscoveryRegionHasBeenSet = true; m_ipamResourceDiscoveryRegion = std::move(value); }

    /**
     * <p>The resource discovery Region.</p>
     */
    inline void SetIpamResourceDiscoveryRegion(const char* value) { m_ipamResourceDiscoveryRegionHasBeenSet = true; m_ipamResourceDiscoveryRegion.assign(value); }

    /**
     * <p>The resource discovery Region.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryRegion(const Aws::String& value) { SetIpamResourceDiscoveryRegion(value); return *this;}

    /**
     * <p>The resource discovery Region.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryRegion(Aws::String&& value) { SetIpamResourceDiscoveryRegion(std::move(value)); return *this;}

    /**
     * <p>The resource discovery Region.</p>
     */
    inline IpamResourceDiscovery& WithIpamResourceDiscoveryRegion(const char* value) { SetIpamResourceDiscoveryRegion(value); return *this;}


    /**
     * <p>The resource discovery description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The resource discovery description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The resource discovery description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The resource discovery description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The resource discovery description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The resource discovery description.</p>
     */
    inline IpamResourceDiscovery& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The resource discovery description.</p>
     */
    inline IpamResourceDiscovery& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The resource discovery description.</p>
     */
    inline IpamResourceDiscovery& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline const Aws::Vector<IpamOperatingRegion>& GetOperatingRegions() const{ return m_operatingRegions; }

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline void SetOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = value; }

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline void SetOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::move(value); }

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline IpamResourceDiscovery& WithOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { SetOperatingRegions(value); return *this;}

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline IpamResourceDiscovery& WithOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { SetOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline IpamResourceDiscovery& AddOperatingRegions(const IpamOperatingRegion& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(value); return *this; }

    /**
     * <p>The operating Regions for the resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline IpamResourceDiscovery& AddOperatingRegions(IpamOperatingRegion&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines if the resource discovery is the default. The default resource
     * discovery is the resource discovery automatically created when you create an
     * IPAM.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Defines if the resource discovery is the default. The default resource
     * discovery is the resource discovery automatically created when you create an
     * IPAM.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>Defines if the resource discovery is the default. The default resource
     * discovery is the resource discovery automatically created when you create an
     * IPAM.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Defines if the resource discovery is the default. The default resource
     * discovery is the resource discovery automatically created when you create an
     * IPAM.</p>
     */
    inline IpamResourceDiscovery& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


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
    inline const IpamResourceDiscoveryState& GetState() const{ return m_state; }

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
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

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
    inline void SetState(const IpamResourceDiscoveryState& value) { m_stateHasBeenSet = true; m_state = value; }

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
    inline void SetState(IpamResourceDiscoveryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

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
    inline IpamResourceDiscovery& WithState(const IpamResourceDiscoveryState& value) { SetState(value); return *this;}

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
    inline IpamResourceDiscovery& WithState(IpamResourceDiscoveryState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscovery& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscovery& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscovery& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline IpamResourceDiscovery& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    IpamResourceDiscoveryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
