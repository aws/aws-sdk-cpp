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
    AWS_EC2_API IpamPool();
    AWS_EC2_API IpamPool(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpamPool& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline IpamPool& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline IpamPool& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline IpamPool& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }
    inline IpamPool& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}
    inline IpamPool& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}
    inline IpamPool& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source IPAM pool. You can use this option to create an IPAM
     * pool within an existing source pool.</p>
     */
    inline const Aws::String& GetSourceIpamPoolId() const{ return m_sourceIpamPoolId; }
    inline bool SourceIpamPoolIdHasBeenSet() const { return m_sourceIpamPoolIdHasBeenSet; }
    inline void SetSourceIpamPoolId(const Aws::String& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = value; }
    inline void SetSourceIpamPoolId(Aws::String&& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = std::move(value); }
    inline void SetSourceIpamPoolId(const char* value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId.assign(value); }
    inline IpamPool& WithSourceIpamPoolId(const Aws::String& value) { SetSourceIpamPoolId(value); return *this;}
    inline IpamPool& WithSourceIpamPoolId(Aws::String&& value) { SetSourceIpamPoolId(std::move(value)); return *this;}
    inline IpamPool& WithSourceIpamPoolId(const char* value) { SetSourceIpamPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamPoolArn() const{ return m_ipamPoolArn; }
    inline bool IpamPoolArnHasBeenSet() const { return m_ipamPoolArnHasBeenSet; }
    inline void SetIpamPoolArn(const Aws::String& value) { m_ipamPoolArnHasBeenSet = true; m_ipamPoolArn = value; }
    inline void SetIpamPoolArn(Aws::String&& value) { m_ipamPoolArnHasBeenSet = true; m_ipamPoolArn = std::move(value); }
    inline void SetIpamPoolArn(const char* value) { m_ipamPoolArnHasBeenSet = true; m_ipamPoolArn.assign(value); }
    inline IpamPool& WithIpamPoolArn(const Aws::String& value) { SetIpamPoolArn(value); return *this;}
    inline IpamPool& WithIpamPoolArn(Aws::String&& value) { SetIpamPoolArn(std::move(value)); return *this;}
    inline IpamPool& WithIpamPoolArn(const char* value) { SetIpamPoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scope of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamScopeArn() const{ return m_ipamScopeArn; }
    inline bool IpamScopeArnHasBeenSet() const { return m_ipamScopeArnHasBeenSet; }
    inline void SetIpamScopeArn(const Aws::String& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = value; }
    inline void SetIpamScopeArn(Aws::String&& value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn = std::move(value); }
    inline void SetIpamScopeArn(const char* value) { m_ipamScopeArnHasBeenSet = true; m_ipamScopeArn.assign(value); }
    inline IpamPool& WithIpamScopeArn(const Aws::String& value) { SetIpamScopeArn(value); return *this;}
    inline IpamPool& WithIpamScopeArn(Aws::String&& value) { SetIpamScopeArn(std::move(value)); return *this;}
    inline IpamPool& WithIpamScopeArn(const char* value) { SetIpamScopeArn(value); return *this;}
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
    inline const IpamScopeType& GetIpamScopeType() const{ return m_ipamScopeType; }
    inline bool IpamScopeTypeHasBeenSet() const { return m_ipamScopeTypeHasBeenSet; }
    inline void SetIpamScopeType(const IpamScopeType& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = value; }
    inline void SetIpamScopeType(IpamScopeType&& value) { m_ipamScopeTypeHasBeenSet = true; m_ipamScopeType = std::move(value); }
    inline IpamPool& WithIpamScopeType(const IpamScopeType& value) { SetIpamScopeType(value); return *this;}
    inline IpamPool& WithIpamScopeType(IpamScopeType&& value) { SetIpamScopeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IPAM.</p>
     */
    inline const Aws::String& GetIpamArn() const{ return m_ipamArn; }
    inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
    inline void SetIpamArn(const Aws::String& value) { m_ipamArnHasBeenSet = true; m_ipamArn = value; }
    inline void SetIpamArn(Aws::String&& value) { m_ipamArnHasBeenSet = true; m_ipamArn = std::move(value); }
    inline void SetIpamArn(const char* value) { m_ipamArnHasBeenSet = true; m_ipamArn.assign(value); }
    inline IpamPool& WithIpamArn(const Aws::String& value) { SetIpamArn(value); return *this;}
    inline IpamPool& WithIpamArn(Aws::String&& value) { SetIpamArn(std::move(value)); return *this;}
    inline IpamPool& WithIpamArn(const char* value) { SetIpamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamRegion() const{ return m_ipamRegion; }
    inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
    inline void SetIpamRegion(const Aws::String& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = value; }
    inline void SetIpamRegion(Aws::String&& value) { m_ipamRegionHasBeenSet = true; m_ipamRegion = std::move(value); }
    inline void SetIpamRegion(const char* value) { m_ipamRegionHasBeenSet = true; m_ipamRegion.assign(value); }
    inline IpamPool& WithIpamRegion(const Aws::String& value) { SetIpamRegion(value); return *this;}
    inline IpamPool& WithIpamRegion(Aws::String&& value) { SetIpamRegion(std::move(value)); return *this;}
    inline IpamPool& WithIpamRegion(const char* value) { SetIpamRegion(value); return *this;}
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
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline IpamPool& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline IpamPool& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline IpamPool& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The depth of pools in your IPAM pool. The pool depth quota is 10. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas in
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline int GetPoolDepth() const{ return m_poolDepth; }
    inline bool PoolDepthHasBeenSet() const { return m_poolDepthHasBeenSet; }
    inline void SetPoolDepth(int value) { m_poolDepthHasBeenSet = true; m_poolDepth = value; }
    inline IpamPool& WithPoolDepth(int value) { SetPoolDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the IPAM pool.</p>
     */
    inline const IpamPoolState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const IpamPoolState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(IpamPoolState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline IpamPool& WithState(const IpamPoolState& value) { SetState(value); return *this;}
    inline IpamPool& WithState(IpamPoolState&& value) { SetState(std::move(value)); return *this;}
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
    inline IpamPool& WithStateMessage(const Aws::String& value) { SetStateMessage(value); return *this;}
    inline IpamPool& WithStateMessage(Aws::String&& value) { SetStateMessage(std::move(value)); return *this;}
    inline IpamPool& WithStateMessage(const char* value) { SetStateMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IPAM pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline IpamPool& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline IpamPool& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline IpamPool& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline bool GetAutoImport() const{ return m_autoImport; }
    inline bool AutoImportHasBeenSet() const { return m_autoImportHasBeenSet; }
    inline void SetAutoImport(bool value) { m_autoImportHasBeenSet = true; m_autoImport = value; }
    inline IpamPool& WithAutoImport(bool value) { SetAutoImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if a pool is publicly advertisable. This option is not available
     * for pools with AddressFamily set to <code>ipv4</code>.</p>
     */
    inline bool GetPubliclyAdvertisable() const{ return m_publiclyAdvertisable; }
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }
    inline IpamPool& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address family of the pool.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }
    inline IpamPool& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}
    inline IpamPool& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. The minimum netmask length must be less than the maximum netmask
     * length. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetAllocationMinNetmaskLength() const{ return m_allocationMinNetmaskLength; }
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
    inline int GetAllocationMaxNetmaskLength() const{ return m_allocationMaxNetmaskLength; }
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
    inline int GetAllocationDefaultNetmaskLength() const{ return m_allocationDefaultNetmaskLength; }
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
    inline const Aws::Vector<IpamResourceTag>& GetAllocationResourceTags() const{ return m_allocationResourceTags; }
    inline bool AllocationResourceTagsHasBeenSet() const { return m_allocationResourceTagsHasBeenSet; }
    inline void SetAllocationResourceTags(const Aws::Vector<IpamResourceTag>& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = value; }
    inline void SetAllocationResourceTags(Aws::Vector<IpamResourceTag>&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = std::move(value); }
    inline IpamPool& WithAllocationResourceTags(const Aws::Vector<IpamResourceTag>& value) { SetAllocationResourceTags(value); return *this;}
    inline IpamPool& WithAllocationResourceTags(Aws::Vector<IpamResourceTag>&& value) { SetAllocationResourceTags(std::move(value)); return *this;}
    inline IpamPool& AddAllocationResourceTags(const IpamResourceTag& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(value); return *this; }
    inline IpamPool& AddAllocationResourceTags(IpamResourceTag&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(std::move(value)); return *this; }
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
    inline IpamPool& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline IpamPool& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline IpamPool& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline IpamPool& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Limits which service in Amazon Web Services that the pool can be used in.
     * "ec2", for example, allows users to use space for Elastic IP addresses and
     * VPCs.</p>
     */
    inline const IpamPoolAwsService& GetAwsService() const{ return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(const IpamPoolAwsService& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline void SetAwsService(IpamPoolAwsService&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }
    inline IpamPool& WithAwsService(const IpamPoolAwsService& value) { SetAwsService(value); return *this;}
    inline IpamPool& WithAwsService(IpamPoolAwsService&& value) { SetAwsService(std::move(value)); return *this;}
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
    inline const IpamPoolPublicIpSource& GetPublicIpSource() const{ return m_publicIpSource; }
    inline bool PublicIpSourceHasBeenSet() const { return m_publicIpSourceHasBeenSet; }
    inline void SetPublicIpSource(const IpamPoolPublicIpSource& value) { m_publicIpSourceHasBeenSet = true; m_publicIpSource = value; }
    inline void SetPublicIpSource(IpamPoolPublicIpSource&& value) { m_publicIpSourceHasBeenSet = true; m_publicIpSource = std::move(value); }
    inline IpamPool& WithPublicIpSource(const IpamPoolPublicIpSource& value) { SetPublicIpSource(value); return *this;}
    inline IpamPool& WithPublicIpSource(IpamPoolPublicIpSource&& value) { SetPublicIpSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource used to provision CIDRs to a resource planning pool.</p>
     */
    inline const IpamPoolSourceResource& GetSourceResource() const{ return m_sourceResource; }
    inline bool SourceResourceHasBeenSet() const { return m_sourceResourceHasBeenSet; }
    inline void SetSourceResource(const IpamPoolSourceResource& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = value; }
    inline void SetSourceResource(IpamPoolSourceResource&& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = std::move(value); }
    inline IpamPool& WithSourceResource(const IpamPoolSourceResource& value) { SetSourceResource(value); return *this;}
    inline IpamPool& WithSourceResource(IpamPoolSourceResource&& value) { SetSourceResource(std::move(value)); return *this;}
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

    IpamScopeType m_ipamScopeType;
    bool m_ipamScopeTypeHasBeenSet = false;

    Aws::String m_ipamArn;
    bool m_ipamArnHasBeenSet = false;

    Aws::String m_ipamRegion;
    bool m_ipamRegionHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    int m_poolDepth;
    bool m_poolDepthHasBeenSet = false;

    IpamPoolState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateMessage;
    bool m_stateMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoImport;
    bool m_autoImportHasBeenSet = false;

    bool m_publiclyAdvertisable;
    bool m_publiclyAdvertisableHasBeenSet = false;

    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    int m_allocationMinNetmaskLength;
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength;
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength;
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<IpamResourceTag> m_allocationResourceTags;
    bool m_allocationResourceTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IpamPoolAwsService m_awsService;
    bool m_awsServiceHasBeenSet = false;

    IpamPoolPublicIpSource m_publicIpSource;
    bool m_publicIpSourceHasBeenSet = false;

    IpamPoolSourceResource m_sourceResource;
    bool m_sourceResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
