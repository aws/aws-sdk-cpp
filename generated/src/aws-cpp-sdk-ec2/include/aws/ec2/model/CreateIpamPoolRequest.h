/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AddressFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamPoolAwsService.h>
#include <aws/ec2/model/IpamPoolPublicIpSource.h>
#include <aws/ec2/model/IpamPoolSourceResourceRequest.h>
#include <aws/ec2/model/RequestIpamResourceTag.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateIpamPoolRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateIpamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpamPool"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateIpamPoolRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scope in which you would like to create the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamScopeId() const{ return m_ipamScopeId; }
    inline bool IpamScopeIdHasBeenSet() const { return m_ipamScopeIdHasBeenSet; }
    inline void SetIpamScopeId(const Aws::String& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = value; }
    inline void SetIpamScopeId(Aws::String&& value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId = std::move(value); }
    inline void SetIpamScopeId(const char* value) { m_ipamScopeIdHasBeenSet = true; m_ipamScopeId.assign(value); }
    inline CreateIpamPoolRequest& WithIpamScopeId(const Aws::String& value) { SetIpamScopeId(value); return *this;}
    inline CreateIpamPoolRequest& WithIpamScopeId(Aws::String&& value) { SetIpamScopeId(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& WithIpamScopeId(const char* value) { SetIpamScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale for the pool should be one of the following:</p> <ul> <li> <p>An
     * Amazon Web Services Region where you want this IPAM pool to be available for
     * allocations.</p> </li> <li> <p>The network border group for an Amazon Web
     * Services Local Zone where you want this IPAM pool to be available for
     * allocations (<a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-byoip.html#byoip-zone-avail">supported
     * Local Zones</a>). This option is only available for IPAM IPv4 pools in the
     * public scope.</p> </li> </ul> <p>Possible values: Any Amazon Web Services Region
     * or supported Amazon Web Services Local Zone. Default is <code>none</code> and
     * means any locale.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline CreateIpamPoolRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline CreateIpamPoolRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source IPAM pool. Use this option to create a pool within an
     * existing pool. Note that the CIDR you provision for the pool within the source
     * pool must be available in the source pool's CIDR range.</p>
     */
    inline const Aws::String& GetSourceIpamPoolId() const{ return m_sourceIpamPoolId; }
    inline bool SourceIpamPoolIdHasBeenSet() const { return m_sourceIpamPoolIdHasBeenSet; }
    inline void SetSourceIpamPoolId(const Aws::String& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = value; }
    inline void SetSourceIpamPoolId(Aws::String&& value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId = std::move(value); }
    inline void SetSourceIpamPoolId(const char* value) { m_sourceIpamPoolIdHasBeenSet = true; m_sourceIpamPoolId.assign(value); }
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(const Aws::String& value) { SetSourceIpamPoolId(value); return *this;}
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(Aws::String&& value) { SetSourceIpamPoolId(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& WithSourceIpamPoolId(const char* value) { SetSourceIpamPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the IPAM pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateIpamPoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIpamPoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol assigned to this IPAM pool. You must choose either IPv4 or
     * IPv6 protocol for a pool.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }
    inline CreateIpamPoolRequest& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}
    inline CreateIpamPoolRequest& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}
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
    inline CreateIpamPoolRequest& WithAutoImport(bool value) { SetAutoImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the pool is publicly advertisable. The request can only contain
     * <code>PubliclyAdvertisable</code> if <code>AddressFamily</code> is
     * <code>ipv6</code> and <code>PublicIpSource</code> is <code>byoip</code>.</p>
     */
    inline bool GetPubliclyAdvertisable() const{ return m_publiclyAdvertisable; }
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }
    inline CreateIpamPoolRequest& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}
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
    inline CreateIpamPoolRequest& WithAllocationMinNetmaskLength(int value) { SetAllocationMinNetmaskLength(value); return *this;}
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
    inline CreateIpamPoolRequest& WithAllocationMaxNetmaskLength(int value) { SetAllocationMaxNetmaskLength(value); return *this;}
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
    inline CreateIpamPoolRequest& WithAllocationDefaultNetmaskLength(int value) { SetAllocationDefaultNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags that are required for resources that use CIDRs from this IPAM pool.
     * Resources that do not have these tags will not be allowed to allocate space from
     * the pool. If the resources have their tags changed after they have allocated
     * space or if the allocation tagging requirements are changed on the pool, the
     * resource may be marked as noncompliant.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetAllocationResourceTags() const{ return m_allocationResourceTags; }
    inline bool AllocationResourceTagsHasBeenSet() const { return m_allocationResourceTagsHasBeenSet; }
    inline void SetAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = value; }
    inline void SetAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags = std::move(value); }
    inline CreateIpamPoolRequest& WithAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { SetAllocationResourceTags(value); return *this;}
    inline CreateIpamPoolRequest& WithAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { SetAllocationResourceTags(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& AddAllocationResourceTags(const RequestIpamResourceTag& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(value); return *this; }
    inline CreateIpamPoolRequest& AddAllocationResourceTags(RequestIpamResourceTag&& value) { m_allocationResourceTagsHasBeenSet = true; m_allocationResourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateIpamPoolRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateIpamPoolRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateIpamPoolRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIpamPoolRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIpamPoolRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIpamPoolRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateIpamPoolRequest& WithAwsService(const IpamPoolAwsService& value) { SetAwsService(value); return *this;}
    inline CreateIpamPoolRequest& WithAwsService(IpamPoolAwsService&& value) { SetAwsService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address source for pools in the public scope. Only used for
     * provisioning IP address CIDRs to pools in the public scope. Default is
     * <code>byoip</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/intro-create-ipv6-pools.html">Create
     * IPv6 pools</a> in the <i>Amazon VPC IPAM User Guide</i>. By default, you can add
     * only one Amazon-provided IPv6 CIDR block to a top-level IPv6 pool if
     * PublicIpSource is <code>amazon</code>. For information on increasing the default
     * limit, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html"> Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const IpamPoolPublicIpSource& GetPublicIpSource() const{ return m_publicIpSource; }
    inline bool PublicIpSourceHasBeenSet() const { return m_publicIpSourceHasBeenSet; }
    inline void SetPublicIpSource(const IpamPoolPublicIpSource& value) { m_publicIpSourceHasBeenSet = true; m_publicIpSource = value; }
    inline void SetPublicIpSource(IpamPoolPublicIpSource&& value) { m_publicIpSourceHasBeenSet = true; m_publicIpSource = std::move(value); }
    inline CreateIpamPoolRequest& WithPublicIpSource(const IpamPoolPublicIpSource& value) { SetPublicIpSource(value); return *this;}
    inline CreateIpamPoolRequest& WithPublicIpSource(IpamPoolPublicIpSource&& value) { SetPublicIpSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource used to provision CIDRs to a resource planning pool.</p>
     */
    inline const IpamPoolSourceResourceRequest& GetSourceResource() const{ return m_sourceResource; }
    inline bool SourceResourceHasBeenSet() const { return m_sourceResourceHasBeenSet; }
    inline void SetSourceResource(const IpamPoolSourceResourceRequest& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = value; }
    inline void SetSourceResource(IpamPoolSourceResourceRequest&& value) { m_sourceResourceHasBeenSet = true; m_sourceResource = std::move(value); }
    inline CreateIpamPoolRequest& WithSourceResource(const IpamPoolSourceResourceRequest& value) { SetSourceResource(value); return *this;}
    inline CreateIpamPoolRequest& WithSourceResource(IpamPoolSourceResourceRequest&& value) { SetSourceResource(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamScopeId;
    bool m_ipamScopeIdHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_sourceIpamPoolId;
    bool m_sourceIpamPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    bool m_autoImport;
    bool m_autoImportHasBeenSet = false;

    bool m_publiclyAdvertisable;
    bool m_publiclyAdvertisableHasBeenSet = false;

    int m_allocationMinNetmaskLength;
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength;
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength;
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_allocationResourceTags;
    bool m_allocationResourceTagsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    IpamPoolAwsService m_awsService;
    bool m_awsServiceHasBeenSet = false;

    IpamPoolPublicIpSource m_publicIpSource;
    bool m_publicIpSourceHasBeenSet = false;

    IpamPoolSourceResourceRequest m_sourceResource;
    bool m_sourceResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
