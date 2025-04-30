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
#include <aws/ec2/model/IpamMeteredAccount.h>
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
    AWS_EC2_API Ipam() = default;
    AWS_EC2_API Ipam(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipam& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Ipam& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    Ipam& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    template<typename IpamArnT = Aws::String>
    void SetIpamArn(IpamArnT&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::forward<IpamArnT>(value); }
    template<typename IpamArnT = Aws::String>
    Ipam& WithIpamArn(IpamArnT&& value) { SetIpamArn(std::forward<IpamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM.</p>
     */
    inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    template<typename IpamRegionT = Aws::String>
    void SetIpamRegion(IpamRegionT&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::forward<IpamRegionT>(value); }
    template<typename IpamRegionT = Aws::String>
    Ipam& WithIpamRegion(IpamRegionT&& value) { SetIpamRegion(std::forward<IpamRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM's default public scope.</p>
     */
    inline const Aws::String& GetPublicDefaultScopeId() const { return m_publicDefaultScopeId; }
    inline bool PublicDefaultScopeIdHasBeenSet() const { return m_publicDefaultScopeIdHasBeenSet; }
    template<typename PublicDefaultScopeIdT = Aws::String>
    void SetPublicDefaultScopeId(PublicDefaultScopeIdT&& value) { m_publicDefaultScopeIdHasBeenSet = true; m_publicDefaultScopeId = std::forward<PublicDefaultScopeIdT>(value); }
    template<typename PublicDefaultScopeIdT = Aws::String>
    Ipam& WithPublicDefaultScopeId(PublicDefaultScopeIdT&& value) { SetPublicDefaultScopeId(std::forward<PublicDefaultScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM's default private scope.</p>
     */
    inline const Aws::String& GetPrivateDefaultScopeId() const { return m_privateDefaultScopeId; }
    inline bool PrivateDefaultScopeIdHasBeenSet() const { return m_privateDefaultScopeIdHasBeenSet; }
    template<typename PrivateDefaultScopeIdT = Aws::String>
    void SetPrivateDefaultScopeId(PrivateDefaultScopeIdT&& value) { m_privateDefaultScopeIdHasBeenSet = true; m_privateDefaultScopeId = std::forward<PrivateDefaultScopeIdT>(value); }
    template<typename PrivateDefaultScopeIdT = Aws::String>
    Ipam& WithPrivateDefaultScopeId(PrivateDefaultScopeIdT&& value) { SetPrivateDefaultScopeId(std::forward<PrivateDefaultScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of scopes in the IPAM. The scope quota is 5. For more information
     * on quotas, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetScopeCount() const { return m_scopeCount; }
    inline bool ScopeCountHasBeenSet() const { return m_scopeCountHasBeenSet; }
    inline void SetScopeCount(int value) { m_scopeCountHasBeenSet = true; m_scopeCount = value; }
    inline Ipam& WithScopeCount(int value) { SetScopeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the IPAM.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Ipam& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::Vector<IpamOperatingRegion>& GetOperatingRegions() const { return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    template<typename OperatingRegionsT = Aws::Vector<IpamOperatingRegion>>
    void SetOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::forward<OperatingRegionsT>(value); }
    template<typename OperatingRegionsT = Aws::Vector<IpamOperatingRegion>>
    Ipam& WithOperatingRegions(OperatingRegionsT&& value) { SetOperatingRegions(std::forward<OperatingRegionsT>(value)); return *this;}
    template<typename OperatingRegionsT = IpamOperatingRegion>
    Ipam& AddOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.emplace_back(std::forward<OperatingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM.</p>
     */
    inline IpamState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Ipam& WithState(IpamState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Ipam& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Ipam& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPAM's default resource discovery ID.</p>
     */
    inline const Aws::String& GetDefaultResourceDiscoveryId() const { return m_defaultResourceDiscoveryId; }
    inline bool DefaultResourceDiscoveryIdHasBeenSet() const { return m_defaultResourceDiscoveryIdHasBeenSet; }
    template<typename DefaultResourceDiscoveryIdT = Aws::String>
    void SetDefaultResourceDiscoveryId(DefaultResourceDiscoveryIdT&& value) { m_defaultResourceDiscoveryIdHasBeenSet = true; m_defaultResourceDiscoveryId = std::forward<DefaultResourceDiscoveryIdT>(value); }
    template<typename DefaultResourceDiscoveryIdT = Aws::String>
    Ipam& WithDefaultResourceDiscoveryId(DefaultResourceDiscoveryIdT&& value) { SetDefaultResourceDiscoveryId(std::forward<DefaultResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM's default resource discovery association ID.</p>
     */
    inline const Aws::String& GetDefaultResourceDiscoveryAssociationId() const { return m_defaultResourceDiscoveryAssociationId; }
    inline bool DefaultResourceDiscoveryAssociationIdHasBeenSet() const { return m_defaultResourceDiscoveryAssociationIdHasBeenSet; }
    template<typename DefaultResourceDiscoveryAssociationIdT = Aws::String>
    void SetDefaultResourceDiscoveryAssociationId(DefaultResourceDiscoveryAssociationIdT&& value) { m_defaultResourceDiscoveryAssociationIdHasBeenSet = true; m_defaultResourceDiscoveryAssociationId = std::forward<DefaultResourceDiscoveryAssociationIdT>(value); }
    template<typename DefaultResourceDiscoveryAssociationIdT = Aws::String>
    Ipam& WithDefaultResourceDiscoveryAssociationId(DefaultResourceDiscoveryAssociationIdT&& value) { SetDefaultResourceDiscoveryAssociationId(std::forward<DefaultResourceDiscoveryAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM's resource discovery association count.</p>
     */
    inline int GetResourceDiscoveryAssociationCount() const { return m_resourceDiscoveryAssociationCount; }
    inline bool ResourceDiscoveryAssociationCountHasBeenSet() const { return m_resourceDiscoveryAssociationCountHasBeenSet; }
    inline void SetResourceDiscoveryAssociationCount(int value) { m_resourceDiscoveryAssociationCountHasBeenSet = true; m_resourceDiscoveryAssociationCount = value; }
    inline Ipam& WithResourceDiscoveryAssociationCount(int value) { SetResourceDiscoveryAssociationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state message.</p>
     */
    inline const Aws::String& GetStateMessage() const { return m_stateMessage; }
    inline bool StateMessageHasBeenSet() const { return m_stateMessageHasBeenSet; }
    template<typename StateMessageT = Aws::String>
    void SetStateMessage(StateMessageT&& value) { m_stateMessageHasBeenSet = true; m_stateMessage = std::forward<StateMessageT>(value); }
    template<typename StateMessageT = Aws::String>
    Ipam& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPAM is offered in a Free Tier and an Advanced Tier. For more information
     * about the features available in each tier and the costs associated with the
     * tiers, see <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing &gt;
     * IPAM tab</a>.</p>
     */
    inline IpamTier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(IpamTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline Ipam& WithTier(IpamTier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this option to use your own GUA ranges as private IPv6 addresses. This
     * option is disabled by default.</p>
     */
    inline bool GetEnablePrivateGua() const { return m_enablePrivateGua; }
    inline bool EnablePrivateGuaHasBeenSet() const { return m_enablePrivateGuaHasBeenSet; }
    inline void SetEnablePrivateGua(bool value) { m_enablePrivateGuaHasBeenSet = true; m_enablePrivateGua = value; }
    inline Ipam& WithEnablePrivateGua(bool value) { SetEnablePrivateGua(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metered account is an Amazon Web Services account that is charged for
     * active IP addresses managed in IPAM. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/ipam-enable-cost-distro.html">Enable
     * cost distribution</a> in the <i>Amazon VPC IPAM User Guide</i>.</p> <p>Possible
     * values:</p> <ul> <li> <p> <code>ipam-owner</code> (default): The Amazon Web
     * Services account which owns the IPAM is charged for all active IP addresses
     * managed in IPAM.</p> </li> <li> <p> <code>resource-owner</code>: The Amazon Web
     * Services account that owns the IP address is charged for the active IP
     * address.</p> </li> </ul>
     */
    inline IpamMeteredAccount GetMeteredAccount() const { return m_meteredAccount; }
    inline bool MeteredAccountHasBeenSet() const { return m_meteredAccountHasBeenSet; }
    inline void SetMeteredAccount(IpamMeteredAccount value) { m_meteredAccountHasBeenSet = true; m_meteredAccount = value; }
    inline Ipam& WithMeteredAccount(IpamMeteredAccount value) { SetMeteredAccount(value); return *this;}
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

    int m_scopeCount{0};
    bool m_scopeCountHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    IpamState m_state{IpamState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_defaultResourceDiscoveryId;
    bool m_defaultResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_defaultResourceDiscoveryAssociationId;
    bool m_defaultResourceDiscoveryAssociationIdHasBeenSet = false;

    int m_resourceDiscoveryAssociationCount{0};
    bool m_resourceDiscoveryAssociationCountHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    IpamTier m_tier{IpamTier::NOT_SET};
    bool m_tierHasBeenSet = false;

    bool m_enablePrivateGua{false};
    bool m_enablePrivateGuaHasBeenSet = false;

    IpamMeteredAccount m_meteredAccount{IpamMeteredAccount::NOT_SET};
    bool m_meteredAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
