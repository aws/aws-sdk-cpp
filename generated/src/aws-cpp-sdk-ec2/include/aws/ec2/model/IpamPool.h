/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamScopeType.h>
#include <aws/ec2/model/IpamPoolState.h>
#include <aws/ec2/model/AddressFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamPoolAwsService.h>
#include <aws/ec2/model/IpamPoolPublicIpSource.h>
#include <aws/ec2/model/IpamPoolSourceResource.h>
#include <aws/ec2/model/IpamResourceTag.h>
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
   * <p>In IPAM, a pool is a collection of contiguous IP addresses CIDRs. Pools
   * enable you to organize your IP addresses according to your routing and security
   * needs. For example, if you have separate routing and security needs for
   * development and production applications, you can create a pool for
   * each.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPool">AWS API
   * Reference</a></p>
   */
  class IpamPool
  {
  public:
    AWS_EC2_API IpamPool() = default;
    AWS_EC2_API IpamPool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    IpamPool& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    template<typename IpamPoolIdT = Aws::String>
    void SetIpamPoolId(IpamPoolIdT&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::forward<IpamPoolIdT>(value); }
    template<typename IpamPoolIdT = Aws::String>
    IpamPool& WithIpamPoolId(IpamPoolIdT&& value) { SetIpamPoolId(std::forward<IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source IPAM pool. You can use this option to create an IPAM
     * pool within an existing source pool.</p>
     */
    inline const Aws::String& GetSourceIpamPoolId() const { return m_sourceIpamPoolId; }
    inline bool SourceIpamPoolIdHasBeenSet() const { return m_sourceIpamPoolIdHasBeenSet; }
    template<typename SourceIpamPoolIdT = Aws::String>
    void SetSourceIpamPoolId(SourceIpamPoolIdT&& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = std::forward<SourceIpamPoolIdT>(value); }
    template<typename SourceIpamPoolIdT = Aws::String>
    IpamPool& WithSourceIpamPoolId(SourceIpamPoolIdT&& value) { SetSourceIpamPoolId(std::forward<SourceIpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamPoolArn() const { return m_ipamPoolArn; }
    inline bool IpamPoolArnHasBeenSet() const { return m_ipamPoolArnHasBeenSet; }
    template<typename IpamPoolArnT = Aws::String>
    void SetIpamPoolArn(IpamPoolArnT&& value) { m_ipamPoolArnHasBeenSet = true; m_ipamPoolArn = std::forward<IpamPoolArnT>(value); }
    template<typename IpamPoolArnT = Aws::String>
    IpamPool& WithIpamPoolArn(IpamPoolArnT&& value) { SetIpamPoolArn(std::forward<IpamPoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scope of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamScopeArn() const { return m_ipamScopeArn; }
    inline bool IpamScopeArnHasBeenSet() const { return m_ipamScopeArnHasBeenSet; }
    template<typename IpamScopeArnT = Aws::String>
    void SetIpamScopeArn(IpamScopeArnT&& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = std::forward<IpamScopeArnT>(value); }
    template<typename IpamScopeArnT = Aws::String>
    IpamPool& WithIpamScopeArn(IpamScopeArnT&& value) { SetIpamScopeArn(std::forward<IpamScopeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>In IPAM, a scope is the highest-level container within IPAM. An IPAM contains
     * two default scopes. Each scope represents the IP space for a single network. The
     * private scope is intended for all private IP address space. The public scope is
     * intended for all public IP address space. Scopes enable you to reuse IP
     * addresses across multiple unconnected networks without causing IP address
     * overlap or conflict.</p>
     */
    inline IpamScopeType GetIpamScopeType() const { return m_ipamScopeType; }
    inline bool IpamScopeTypeHasBeenSet() const { return m_ipamScopeTypeHasBeenSet; }
    inline void SetIpamScopeType(IpamScopeType value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = value; }
    inline IpamPool& WithIpamScopeType(IpamScopeType value) { SetIpamScopeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    template<typename IpamArnT = Aws::String>
    void SetIpamArn(IpamArnT&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::forward<IpamArnT>(value); }
    template<typename IpamArnT = Aws::String>
    IpamPool& WithIpamArn(IpamArnT&& value) { SetIpamArn(std::forward<IpamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    template<typename IpamRegionT = Aws::String>
    void SetIpamRegion(IpamRegionT&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::forward<IpamRegionT>(value); }
    template<typename IpamRegionT = Aws::String>
    IpamPool& WithIpamRegion(IpamRegionT&& value) { SetIpamRegion(std::forward<IpamRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the IPAM pool.</p> <p>The locale for the pool should be one of
     * the following:</p> <ul> <li> <p>An Amazon Web Services Region where you want
     * this IPAM pool to be available for allocations.</p> </li> <li> <p>The network
     * border group for an Amazon Web Services Local Zone where you want this IPAM pool
     * to be available for allocations (<a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#byoip-zone-avail">supported
     * Local Zones</a>). This option is only available for IPAM IPv4 pools in the
     * public scope.</p> </li> </ul> <p>If you choose an Amazon Web Services Region for
     * locale that has not been configured as an operating Region for the IPAM, you'll
     * get an error.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    IpamPool& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The depth of pools in your IPAM pool. The pool depth quota is 10. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetPoolDepth() const { return m_poolDepth; }
    inline bool PoolDepthHasBeenSet() const { return m_poolDepthHasBeenSet; }
    inline void SetPoolDepth(int value) { m_poolDepthHasBeenSet = true; m_poolDepth = value; }
    inline IpamPool& WithPoolDepth(int value) { SetPoolDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM pool.</p>
     */
    inline IpamPoolState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(IpamPoolState value) { m_stateHasBeenSet = true; m_state = value; }
    inline IpamPool& WithState(IpamPoolState value) { SetState(value); return *this;}
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
    IpamPool& WithStateMessage(StateMessageT&& value) { SetStateMessage(std::forward<StateMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IPAM pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpamPool& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If selected, IPAM will continuously look for resources within the CIDR range
     * of this pool and automatically import them as allocations into your IPAM. The
     * CIDRs that will be allocated for these resources must not already be allocated
     * to other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline bool GetAutoImport() const { return m_autoImport; }
    inline bool AutoImportHasBeenSet() const { return m_autoImportHasBeenSet; }
    inline void SetAutoImport(bool value) { m_autoImportHasBeenSet = true; m_autoImport = value; }
    inline IpamPool& WithAutoImport(bool value) { SetAutoImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if a pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline bool GetPubliclyAdvertisable() const { return m_publiclyAdvertisable; }
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }
    inline IpamPool& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family of the pool.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline IpamPool& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetAllocationMinNetmaskLength() const { return m_allocationMinNetmaskLength; }
    inline bool AllocationMinNetmaskLengthHasBeenSet() const { return m_allocationMinNetmaskLengthHasBeenSet; }
    inline void SetAllocationMinNetmaskLength(int value) { m_allocationMinNetmaskLengthHasBeenSet = true; m_allocationMinNetmaskLength = value; }
    inline IpamPool& WithAllocationMinNetmaskLength(int value) { SetAllocationMinNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. The maximum netmask length must be greater than the minimum
     * netmask length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetAllocationMaxNetmaskLength() const { return m_allocationMaxNetmaskLength; }
    inline bool AllocationMaxNetmaskLengthHasBeenSet() const { return m_allocationMaxNetmaskLengthHasBeenSet; }
    inline void SetAllocationMaxNetmaskLength(int value) { m_allocationMaxNetmaskLengthHasBeenSet = true; m_allocationMaxNetmaskLength = value; }
    inline IpamPool& WithAllocationMaxNetmaskLength(int value) { SetAllocationMaxNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline int GetAllocationDefaultNetmaskLength() const { return m_allocationDefaultNetmaskLength; }
    inline bool AllocationDefaultNetmaskLengthHasBeenSet() const { return m_allocationDefaultNetmaskLengthHasBeenSet; }
    inline void SetAllocationDefaultNetmaskLength(int value) { m_allocationDefaultNetmaskLengthHasBeenSet = true; m_allocationDefaultNetmaskLength = value; }
    inline IpamPool& WithAllocationDefaultNetmaskLength(int value) { SetAllocationDefaultNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline const Aws::Vector<IpamResourceTag>& GetAllocationResourceTags() const { return m_allocationResourceTags; }
    inline bool AllocationResourceTagsHasBeenSet() const { return m_allocationResourceTagsHasBeenSet; }
    template<typename AllocationResourceTagsT = Aws::Vector<IpamResourceTag>>
    void SetAllocationResourceTags(AllocationResourceTagsT&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = std::forward<AllocationResourceTagsT>(value); }
    template<typename AllocationResourceTagsT = Aws::Vector<IpamResourceTag>>
    IpamPool& WithAllocationResourceTags(AllocationResourceTagsT&& value) { SetAllocationResourceTags(std::forward<AllocationResourceTagsT>(value)); return *this;}
    template<typename AllocationResourceTagsT = IpamResourceTag>
    IpamPool& AddAllocationResourceTags(AllocationResourceTagsT&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.emplace_back(std::forward<AllocationResourceTagsT>(value)); return *this; }
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
    IpamPool& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    IpamPool& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline IpamPoolAwsService GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(IpamPoolAwsService value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline IpamPool& WithAwsService(IpamPoolAwsService value) { SetAwsService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address source for pools in the public scope. Only used for
     * provisioning IP address CIDRs to pools in the public scope. Default is
     * <code>BYOIP</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/intro-create-ipv6-pools.html">Create
     * IPv6 pools</a> in the <i>Amazon VPC IPAM User Guide</i>. By default, you can add
     * only one Amazon-provided IPv6 CIDR block to a top-level IPv6 pool. For
     * information on increasing the default limit, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline IpamPoolPublicIpSource GetPublicIpSource() const { return m_publicIpSource; }
    inline bool PublicIpSourceHasBeenSet() const { return m_publicIpSourceHasBeenSet; }
    inline void SetPublicIpSource(IpamPoolPublicIpSource value) { m_publicIpSourceHasBeenSet = true; m_publicIpSource = value; }
    inline IpamPool& WithPublicIpSource(IpamPoolPublicIpSource value) { SetPublicIpSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource used to provision CIDRs to a resource planning pool.</p>
     */
    inline const IpamPoolSourceResource& GetSourceResource() const { return m_sourceResource; }
    inline bool SourceResourceHasBeenSet() const { return m_sourceResourceHasBeenSet; }
    template<typename SourceResourceT = IpamPoolSourceResource>
    void SetSourceResource(SourceResourceT&& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = std::forward<SourceResourceT>(value); }
    template<typename SourceResourceT = IpamPoolSourceResource>
    IpamPool& WithSourceResource(SourceResourceT&& value) { SetSourceResource(std::forward<SourceResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_sourceIpamPoolId;
    bool m_sourceIpamPoolIdHasBeenSet = false;

    Aws::String m_ipamPoolArn;
    bool m_ipamPoolArnHasBeenSet = false;

    Aws::String m_ipamScopeArn;
    bool m_ipamScopeArnHasBeenSet = false;

    IpamScopeType m_ipamScopeType{IpamScopeType::NOT_SET};
    bool m_ipamScopeTypeHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    int m_poolDepth{0};
    bool m_poolDepthHasBeenSet = false;

    IpamPoolState m_state{IpamPoolState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoImport{false};
    bool m_autoImportHasBeenSet = false;

    bool m_publiclyAdvertisable{false};
    bool m_publiclyAdvertisableHasBeenSet = false;

    AddressFamily m_addressFamily{AddressFamily::NOT_SET};
    bool m_addressFamilyHasBeenSet = false;

    int m_allocationMinNetmaskLength{0};
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength{0};
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength{0};
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_allocationResourceTags;
    bool m_allocationResourceTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IpamPoolAwsService m_awsService{IpamPoolAwsService::NOT_SET};
    bool m_awsServiceHasBeenSet = false;

    IpamPoolPublicIpSource m_publicIpSource{IpamPoolPublicIpSource::NOT_SET};
    bool m_publicIpSourceHasBeenSet = false;

    IpamPoolSourceResource m_sourceResource;
    bool m_sourceResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
