/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamState.h>
#include <aws/ec2/model/IpamTier.h>
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
   * <p>IPAM is a VPC feature that you can use to automate your IP address management
   * workflows including assigning, tracking, troubleshooting, and auditing IP
   * addresses across Amazon Web Services Regions and accounts throughout your Amazon
   * Web Services Organization. For more information, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/ipam/what-is-it-ipam.html">What is
   * IPAM?</a> in the <i>Amazon VPC IPAM User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipam">AWS API
   * Reference</a></p>
   */
  class Ipam
  {
  public:
    AWS_EC2_API Ipam();
    AWS_EC2_API Ipam(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipam& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Ipam& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Ipam& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Ipam& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }
    inline Ipam& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}
    inline Ipam& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}
    inline Ipam& WithIpamId(const char* value) { SetIpamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }
    inline Ipam& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}
    inline Ipam& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}
    inline Ipam& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }
    inline Ipam& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}
    inline Ipam& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}
    inline Ipam& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline const Aws::String& GetPublicDefaultScopeId() const{ return m_publicDefaultScopeId; }
    inline bool PublicDefaultScopeIdHasBeenSet() const { return m_publicDefaultScopeIdHasBeenSet; }
    inline void SetPublicDefaultScopeId(const Aws::String& value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId = value; }
    inline void SetPublicDefaultScopeId(Aws::String&& value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId = std::move(value); }
    inline void SetPublicDefaultScopeId(const char* value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId.assign(value); }
    inline Ipam& WithPublicDefaultScopeId(const Aws::String& value) { SetPublicDefaultScopeId(value); return *this;}
    inline Ipam& WithPublicDefaultScopeId(Aws::String&& value) { SetPublicDefaultScopeId(std::move(value)); return *this;}
    inline Ipam& WithPublicDefaultScopeId(const char* value) { SetPublicDefaultScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline const Aws::String& GetPrivateDefaultScopeId() const{ return m_privateDefaultScopeId; }
    inline bool PrivateDefaultScopeIdHasBeenSet() const { return m_privateDefaultScopeIdHasBeenSet; }
    inline void SetPrivateDefaultScopeId(const Aws::String& value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId = value; }
    inline void SetPrivateDefaultScopeId(Aws::String&& value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId = std::move(value); }
    inline void SetPrivateDefaultScopeId(const char* value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId.assign(value); }
    inline Ipam& WithPrivateDefaultScopeId(const Aws::String& value) { SetPrivateDefaultScopeId(value); return *this;}
    inline Ipam& WithPrivateDefaultScopeId(Aws::String&& value) { SetPrivateDefaultScopeId(std::move(value)); return *this;}
    inline Ipam& WithPrivateDefaultScopeId(const char* value) { SetPrivateDefaultScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetScopeCount() const{ return m_scopeCount; }
    inline bool ScopeCountHasBeenSet() const { return m_scopeCountHasBeenSet; }
    inline void SetScopeCount(int value) { m_scopeCountHasBeenSet = true; m_scopeCount = value; }
    inline Ipam& WithScopeCount(int value) { SetScopeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the IPAM.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Ipam& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Ipam& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Ipam& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating Regions for an IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<IpamOperatingRegion>& GetOperatingRegions() const{ return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    inline void SetOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = value; }
    inline void SetOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::move(value); }
    inline Ipam& WithOperatingRegions(const Aws::Vector<IpamOperatingRegion>& value) { SetOperatingRegions(value); return *this;}
    inline Ipam& WithOperatingRegions(Aws::Vector<IpamOperatingRegion>&& value) { SetOperatingRegions(std::move(value)); return *this;}
    inline Ipam& AddOperatingRegions(const IpamOperatingRegion& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(value); return *this; }
    inline Ipam& AddOperatingRegions(IpamOperatingRegion&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM.</p>
     */
    inline const IpamState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IpamState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IpamState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Ipam& WithState(const IpamState& value) { SetState(value); return *this;}
    inline Ipam& WithState(IpamState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Ipam& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Ipam& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Ipam& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Ipam& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPAM's default resource discovery ID.</p>
     */
    inline const Aws::String& GetDefaultResourceDiscoveryId() const{ return m_defaultResourceDiscoveryId; }
    inline bool DefaultResourceDiscoveryIdHasBeenSet() const { return m_defaultResourceDiscoveryIdHasBeenSet; }
    inline void SetDefaultResourceDiscoveryId(const Aws::String& value) { m_defaultResourceDiscoveryIdHasBeenSet = true; m_defaultResourceDiscoveryId = value; }
    inline void SetDefaultResourceDiscoveryId(Aws::String&& value) { m_defaultResourceDiscoveryIdHasBeenSet = true; m_defaultResourceDiscoveryId = std::move(value); }
    inline void SetDefaultResourceDiscoveryId(const char* value) { m_defaultResourceDiscoveryIdHasBeenSet = true; m_defaultResourceDiscoveryId.assign(value); }
    inline Ipam& WithDefaultResourceDiscoveryId(const Aws::String& value) { SetDefaultResourceDiscoveryId(value); return *this;}
    inline Ipam& WithDefaultResourceDiscoveryId(Aws::String&& value) { SetDefaultResourceDiscoveryId(std::move(value)); return *this;}
    inline Ipam& WithDefaultResourceDiscoveryId(const char* value) { SetDefaultResourceDiscoveryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM's default resource discovery association ID.</p>
     */
    inline const Aws::String& GetDefaultResourceDiscoveryAssociationId() const{ return m_defaultResourceDiscoveryAssociationId; }
    inline bool DefaultResourceDiscoveryAssociationIdHasBeenSet() const { return m_defaultResourceDiscoveryAssociationIdHasBeenSet; }
    inline void SetDefaultResourceDiscoveryAssociationId(const Aws::String& value) { m_defaultResourceDiscoveryAssociationIdHasBeenSet = true; m_defaultResourceDiscoveryAssociationId = value; }
    inline void SetDefaultResourceDiscoveryAssociationId(Aws::String&& value) { m_defaultResourceDiscoveryAssociationIdHasBeenSet = true; m_defaultResourceDiscoveryAssociationId = std::move(value); }
    inline void SetDefaultResourceDiscoveryAssociationId(const char* value) { m_defaultResourceDiscoveryAssociationIdHasBeenSet = true; m_defaultResourceDiscoveryAssociationId.assign(value); }
    inline Ipam& WithDefaultResourceDiscoveryAssociationId(const Aws::String& value) { SetDefaultResourceDiscoveryAssociationId(value); return *this;}
    inline Ipam& WithDefaultResourceDiscoveryAssociationId(Aws::String&& value) { SetDefaultResourceDiscoveryAssociationId(std::move(value)); return *this;}
    inline Ipam& WithDefaultResourceDiscoveryAssociationId(const char* value) { SetDefaultResourceDiscoveryAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM's resource discovery association count.</p>
     */
    inline int GetResourceDiscoveryAssociationCount() const{ return m_resourceDiscoveryAssociationCount; }
    inline bool ResourceDiscoveryAssociationCountHasBeenSet() const { return m_resourceDiscoveryAssociationCountHasBeenSet; }
    inline void SetResourceDiscoveryAssociationCount(int value) { m_resourceDiscoveryAssociationCountHasBeenSet = true; m_resourceDiscoveryAssociationCount = value; }
    inline Ipam& WithResourceDiscoveryAssociationCount(int value) { SetResourceDiscoveryAssociationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state message.</p>
     */
    inline const Aws::String& GetStateMessage() const{ return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    inline void SetStateMessage(const Aws::String& value) { m_stateMessageHasBeenSet = true; m_stateMessage = value; }
    inline void SetStateMessage(Aws::String&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::move(value); }
    inline void SetStateMessage(const char* value) { m_stateMessageHasBeenSet = true; m_stateMessage.assign(value); }
    inline Ipam& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline Ipam& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline Ipam& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPAM is offered in a Free Tier and an Advanced Tier. For more information
     * about the features available in each tier and the costs associated with the
     * tiers, see <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing &gt;
     * IPAM tab</a>.</p>
     */
    inline const IpamTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const IpamTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(IpamTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline Ipam& WithTier(const IpamTier& value) { SetTier(value); return *this;}
    inline Ipam& WithTier(IpamTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this option to use your own GUA ranges as private IPv6 addresses. This
     * option is disabled by default.</p>
     */
    inline bool GetEnablePrivateGua() const{ return m_enablePrivateGua; }
    inline bool EnablePrivateGuaHasBeenSet() const { return m_enablePrivateGuaHasBeenSet; }
    inline void SetEnablePrivateGua(bool value) { m_enablePrivateGuaHasBeenSet = true; m_enablePrivateGua = value; }
    inline Ipam& WithEnablePrivateGua(bool value) { SetEnablePrivateGua(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    Aws::String m_publicDefaultScopeId;
    bool m_publicDefaultScopeIdHasBeenSet = false;

    Aws::String m_privateDefaultScopeId;
    bool m_privateDefaultScopeIdHasBeenSet = false;

    int m_scopeCount;
    bool m_scopeCountHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    IpamState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_defaultResourceDiscoveryId;
    bool m_defaultResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_defaultResourceDiscoveryAssociationId;
    bool m_defaultResourceDiscoveryAssociationIdHasBeenSet = false;

    int m_resourceDiscoveryAssociationCount;
    bool m_resourceDiscoveryAssociationCountHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    IpamTier m_tier;
    bool m_tierHasBeenSet = false;

    bool m_enablePrivateGua;
    bool m_enablePrivateGuaHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
