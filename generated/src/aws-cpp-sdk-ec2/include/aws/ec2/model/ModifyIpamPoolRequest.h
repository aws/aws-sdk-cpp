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
    AWS_EC2_API ModifyIpamPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamPool"; }

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyIpamPoolRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool you want to modify.</p>
     */
    inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    template<typename IpamPoolIdT = Aws::String>
    void SetIpamPoolId(IpamPoolIdT&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::forward<IpamPoolIdT>(value); }
    template<typename IpamPoolIdT = Aws::String>
    ModifyIpamPoolRequest& WithIpamPoolId(IpamPoolIdT&& value) { SetIpamPoolId(std::forward<IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IPAM pool you want to modify.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyIpamPoolRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetAutoImport() const { return m_autoImport; }
    inline bool AutoImportHasBeenSet() const { return m_autoImportHasBeenSet; }
    inline void SetAutoImport(bool value) { m_autoImportHasBeenSet = true; m_autoImport = value; }
    inline ModifyIpamPoolRequest& WithAutoImport(bool value) { SetAutoImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum netmask length required for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128. The minimum netmask length must
     * be less than the maximum netmask length.</p>
     */
    inline int GetAllocationMinNetmaskLength() const { return m_allocationMinNetmaskLength; }
    inline bool AllocationMinNetmaskLengthHasBeenSet() const { return m_allocationMinNetmaskLengthHasBeenSet; }
    inline void SetAllocationMinNetmaskLength(int value) { m_allocationMinNetmaskLengthHasBeenSet = true; m_allocationMinNetmaskLength = value; }
    inline ModifyIpamPoolRequest& WithAllocationMinNetmaskLength(int value) { SetAllocationMinNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum netmask length possible for CIDR allocations in this IPAM pool to
     * be compliant. Possible netmask lengths for IPv4 addresses are 0 - 32. Possible
     * netmask lengths for IPv6 addresses are 0 - 128.The maximum netmask length must
     * be greater than the minimum netmask length.</p>
     */
    inline int GetAllocationMaxNetmaskLength() const { return m_allocationMaxNetmaskLength; }
    inline bool AllocationMaxNetmaskLengthHasBeenSet() const { return m_allocationMaxNetmaskLengthHasBeenSet; }
    inline void SetAllocationMaxNetmaskLength(int value) { m_allocationMaxNetmaskLengthHasBeenSet = true; m_allocationMaxNetmaskLength = value; }
    inline ModifyIpamPoolRequest& WithAllocationMaxNetmaskLength(int value) { SetAllocationMaxNetmaskLength(value); return *this;}
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
    inline ModifyIpamPoolRequest& WithAllocationDefaultNetmaskLength(int value) { SetAllocationDefaultNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Clear the default netmask length allocation rule for this pool.</p>
     */
    inline bool GetClearAllocationDefaultNetmaskLength() const { return m_clearAllocationDefaultNetmaskLength; }
    inline bool ClearAllocationDefaultNetmaskLengthHasBeenSet() const { return m_clearAllocationDefaultNetmaskLengthHasBeenSet; }
    inline void SetClearAllocationDefaultNetmaskLength(bool value) { m_clearAllocationDefaultNetmaskLengthHasBeenSet = true; m_clearAllocationDefaultNetmaskLength = value; }
    inline ModifyIpamPoolRequest& WithClearAllocationDefaultNetmaskLength(bool value) { SetClearAllocationDefaultNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add tag allocation rules to a pool. For more information about allocation
     * rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/create-top-ipam.html">Create a
     * top-level pool</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetAddAllocationResourceTags() const { return m_addAllocationResourceTags; }
    inline bool AddAllocationResourceTagsHasBeenSet() const { return m_addAllocationResourceTagsHasBeenSet; }
    template<typename AddAllocationResourceTagsT = Aws::Vector<RequestIpamResourceTag>>
    void SetAddAllocationResourceTags(AddAllocationResourceTagsT&& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags = std::forward<AddAllocationResourceTagsT>(value); }
    template<typename AddAllocationResourceTagsT = Aws::Vector<RequestIpamResourceTag>>
    ModifyIpamPoolRequest& WithAddAllocationResourceTags(AddAllocationResourceTagsT&& value) { SetAddAllocationResourceTags(std::forward<AddAllocationResourceTagsT>(value)); return *this;}
    template<typename AddAllocationResourceTagsT = RequestIpamResourceTag>
    ModifyIpamPoolRequest& AddAddAllocationResourceTags(AddAllocationResourceTagsT&& value) { m_addAllocationResourceTagsHasBeenSet = true; m_addAllocationResourceTags.emplace_back(std::forward<AddAllocationResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove tag allocation rules from a pool.</p>
     */
    inline const Aws::Vector<RequestIpamResourceTag>& GetRemoveAllocationResourceTags() const { return m_removeAllocationResourceTags; }
    inline bool RemoveAllocationResourceTagsHasBeenSet() const { return m_removeAllocationResourceTagsHasBeenSet; }
    template<typename RemoveAllocationResourceTagsT = Aws::Vector<RequestIpamResourceTag>>
    void SetRemoveAllocationResourceTags(RemoveAllocationResourceTagsT&& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags = std::forward<RemoveAllocationResourceTagsT>(value); }
    template<typename RemoveAllocationResourceTagsT = Aws::Vector<RequestIpamResourceTag>>
    ModifyIpamPoolRequest& WithRemoveAllocationResourceTags(RemoveAllocationResourceTagsT&& value) { SetRemoveAllocationResourceTags(std::forward<RemoveAllocationResourceTagsT>(value)); return *this;}
    template<typename RemoveAllocationResourceTagsT = RequestIpamResourceTag>
    ModifyIpamPoolRequest& AddRemoveAllocationResourceTags(RemoveAllocationResourceTagsT&& value) { m_removeAllocationResourceTagsHasBeenSet = true; m_removeAllocationResourceTags.emplace_back(std::forward<RemoveAllocationResourceTagsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoImport{false};
    bool m_autoImportHasBeenSet = false;

    int m_allocationMinNetmaskLength{0};
    bool m_allocationMinNetmaskLengthHasBeenSet = false;

    int m_allocationMaxNetmaskLength{0};
    bool m_allocationMaxNetmaskLengthHasBeenSet = false;

    int m_allocationDefaultNetmaskLength{0};
    bool m_allocationDefaultNetmaskLengthHasBeenSet = false;

    bool m_clearAllocationDefaultNetmaskLength{false};
    bool m_clearAllocationDefaultNetmaskLengthHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_addAllocationResourceTags;
    bool m_addAllocationResourceTagsHasBeenSet = false;

    Aws::Vector<RequestIpamResourceTag> m_removeAllocationResourceTags;
    bool m_removeAllocationResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
