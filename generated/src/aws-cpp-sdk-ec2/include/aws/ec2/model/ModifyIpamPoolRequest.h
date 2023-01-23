/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RequestIpamResourceTag.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyIpamPoolRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIpamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPool"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyIpamPoolRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline ModifyIpamPoolRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If true, IPAM will continuously look for resources within the CIDR range of
     * this pool and automatically import them as allocations into your IPAM. The CIDRs
     * that will be allocated for these resources must not already be allocated to
     * other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline bool GetAutoImport() const{ return m_autoImport; }

    /**
     * <p>If true, IPAM will continuously look for resources within the CIDR range of
     * this pool and automatically import them as allocations into your IPAM. The CIDRs
     * that will be allocated for these resources must not already be allocated to
     * other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline bool AutoImportHasBeenSet() const { return m_autoImportHasBeenSet; }

    /**
     * <p>If true, IPAM will continuously look for resources within the CIDR range of
     * this pool and automatically import them as allocations into your IPAM. The CIDRs
     * that will be allocated for these resources must not already be allocated to
     * other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline void SetAutoImport(bool value) { m_autoImportHasBeenSet = true; m_autoImport = value; }

    /**
     * <p>If true, IPAM will continuously look for resources within the CIDR range of
     * this pool and automatically import them as allocations into your IPAM. The CIDRs
     * that will be allocated for these resources must not already be allocated to
     * other resources in order for the import to succeed. IPAM will import a CIDR
     * regardless of its compliance with the pool's allocation rules, so a resource
     * might be imported and subsequently marked as noncompliant. If IPAM discovers
     * multiple CIDRs that overlap, IPAM will import the largest CIDR only. If IPAM
     * discovers multiple CIDRs with matching CIDRs, IPAM will randomly import one of
     * them only. </p> <p>A locale must be set on the pool for this feature to
     * work.</p>
     */
    inline ModifyIpamPoolRequest& WithAutoImport(bool value) { SetAutoImport(value); return *this;}


    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128. The minimum netmask length must
     * be less than the maximum netmask length.</p>
     */
    inline int GetAllocationMinNetmaskLength() const{ return m_allocationMinNetmaskLength; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128. The minimum netmask length must
     * be less than the maximum netmask length.</p>
     */
    inline bool AllocationMinNetmaskLengthHasBeenSet() const { return m_allocationMinNetmaskLengthHasBeenSet; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128. The minimum netmask length must
     * be less than the maximum netmask length.</p>
     */
    inline void SetAllocationMinNetmaskLength(int value) { m_allocationMinNetmaskLengthHasBeenSet = true; m_allocationMinNetmaskLength = value; }

    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128. The minimum netmask length must
     * be less than the maximum netmask length.</p>
     */
    inline ModifyIpamPoolRequest& WithAllocationMinNetmaskLength(int value) { SetAllocationMinNetmaskLength(value); return *this;}


    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.The maximum netmask length must
     * be greater than the minimum netmask length.</p>
     */
    inline int GetAllocationMaxNetmaskLength() const{ return m_allocationMaxNetmaskLength; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.The maximum netmask length must
     * be greater than the minimum netmask length.</p>
     */
    inline bool AllocationMaxNetmaskLengthHasBeenSet() const { return m_allocationMaxNetmaskLengthHasBeenSet; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.The maximum netmask length must
     * be greater than the minimum netmask length.</p>
     */
    inline void SetAllocationMaxNetmaskLength(int value) { m_allocationMaxNetmaskLengthHasBeenSet = true; m_allocationMaxNetmaskLength = value; }

    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.The maximum netmask length must
     * be greater than the minimum netmask length.</p>
     */
    inline ModifyIpamPoolRequest& WithAllocationMaxNetmaskLength(int value) { SetAllocationMaxNetmaskLength(value); return *this;}


    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline int GetAllocationDefaultNetmaskLength() const{ return m_allocationDefaultNetmaskLength; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline bool AllocationDefaultNetmaskLengthHasBeenSet() const { return m_allocationDefaultNetmaskLengthHasBeenSet; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline void SetAllocationDefaultNetmaskLength(int value) { m_allocationDefaultNetmaskLengthHasBeenSet = true; m_allocationDefaultNetmaskLength = value; }

    /**
     * <p>The default netmask length for allocations added to this pool. If, for
     * example, the CIDR assigned to this pool is 10.0.0.0/8 and you enter 16 here, new
     * allocations will default to 10.0.0.0/16.</p>
     */
    inline ModifyIpamPoolRequest& WithAllocationDefaultNetmaskLength(int value) { SetAllocationDefaultNetmaskLength(value); return *this;}


    /**
     * <p>Clear the default netmask length allocation rule for this pool.</p>
     */
    inline bool GetClearAllocationDefaultNetmaskLength() const{ return m_clearAllocationDefaultNetmaskLength; }

    /**
     * <p>Clear the default netmask length allocation rule for this pool.</p>
     */
    inline bool ClearAllocationDefaultNetmaskLengthHasBeenSet() const { return m_clearAllocationDefaultNetmaskLengthHasBeenSet; }

    /**
     * <p>Clear the default netmask length allocation rule for this pool.</p>
     */
    inline void SetClearAllocationDefaultNetmaskLength(bool value) { m_clearAllocationDefaultNetmaskLengthHasBeenSet = true; m_clearAllocationDefaultNetmaskLength = value; }

    /**
     * <p>Clear the default netmask length allocation rule for this pool.</p>
     */
    inline ModifyIpamPoolRequest& WithClearAllocationDefaultNetmaskLength(bool value) { SetClearAllocationDefaultNetmaskLength(value); return *this;}


    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetAddAllocationResourceTags() const{ return m_addAllocationResourceTags; }

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool AddAllocationResourceTagsHasBeenSet() const { return m_addAllocationResourceTagsHasBeenSet; }

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetAddAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags = value; }

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetAddAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags = std::move(value); }

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamPoolRequest& WithAddAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { SetAddAllocationResourceTags(value); return *this;}

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamPoolRequest& WithAddAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { SetAddAllocationResourceTags(std::move(value)); return *this;}

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamPoolRequest& AddAddAllocationResourceTags(const RequestIpamResourceTag& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags.push_back(value); return *this; }

    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamPoolRequest& AddAddAllocationResourceTags(RequestIpamResourceTag&& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetRemoveAllocationResourceTags() const{ return m_removeAllocationResourceTags; }

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline bool RemoveAllocationResourceTagsHasBeenSet() const { return m_removeAllocationResourceTagsHasBeenSet; }

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline void SetRemoveAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags = value; }

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline void SetRemoveAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags = std::move(value); }

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline ModifyIpamPoolRequest& WithRemoveAllocationResourceTags(const Aws::Vector<RequestIpamResourceTag>& value) { SetRemoveAllocationResourceTags(value); return *this;}

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline ModifyIpamPoolRequest& WithRemoveAllocationResourceTags(Aws::Vector<RequestIpamResourceTag>&& value) { SetRemoveAllocationResourceTags(std::move(value)); return *this;}

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline ModifyIpamPoolRequest& AddRemoveAllocationResourceTags(const RequestIpamResourceTag& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags.push_back(value); return *this; }

    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline ModifyIpamPoolRequest& AddRemoveAllocationResourceTags(RequestIpamResourceTag&& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoImport;
    bool m_autoImportHasBeenSet = false;

    int m_allocationMinNetmaskLength;
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength;
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength;
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    bool m_clearAllocationDefaultNetmaskLength;
    bool m_clearAllocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_addAllocationResourceTags;
    bool m_addAllocationResourceTagsHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_removeAllocationResourceTags;
    bool m_removeAllocationResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
