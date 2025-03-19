/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AddIpamOperatingRegion.h>
#include <aws/ec2/model/RemoveIpamOperatingRegion.h>
#include <aws/ec2/model/AddIpamOrganizationalUnitExclusion.h>
#include <aws/ec2/model/RemoveIpamOrganizationalUnitExclusion.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyIpamResourceDiscoveryRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIpamResourceDiscoveryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamResourceDiscovery"; }

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
    inline ModifyIpamResourceDiscoveryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const { return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    void SetIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::forward<IpamResourceDiscoveryIdT>(value); }
    template<typename IpamResourceDiscoveryIdT = Aws::String>
    ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(IpamResourceDiscoveryIdT&& value) { SetIpamResourceDiscoveryId(std::forward<IpamResourceDiscoveryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource discovery description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyIpamResourceDiscoveryRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetAddOperatingRegions() const { return m_addOperatingRegions; }
    inline bool AddOperatingRegionsHasBeenSet() const { return m_addOperatingRegionsHasBeenSet; }
    template<typename AddOperatingRegionsT = Aws::Vector<AddIpamOperatingRegion>>
    void SetAddOperatingRegions(AddOperatingRegionsT&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = std::forward<AddOperatingRegionsT>(value); }
    template<typename AddOperatingRegionsT = Aws::Vector<AddIpamOperatingRegion>>
    ModifyIpamResourceDiscoveryRequest& WithAddOperatingRegions(AddOperatingRegionsT&& value) { SetAddOperatingRegions(std::forward<AddOperatingRegionsT>(value)); return *this;}
    template<typename AddOperatingRegionsT = AddIpamOperatingRegion>
    ModifyIpamResourceDiscoveryRequest& AddAddOperatingRegions(AddOperatingRegionsT&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.emplace_back(std::forward<AddOperatingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove operating Regions.</p>
     */
    inline const Aws::Vector<RemoveIpamOperatingRegion>& GetRemoveOperatingRegions() const { return m_removeOperatingRegions; }
    inline bool RemoveOperatingRegionsHasBeenSet() const { return m_removeOperatingRegionsHasBeenSet; }
    template<typename RemoveOperatingRegionsT = Aws::Vector<RemoveIpamOperatingRegion>>
    void SetRemoveOperatingRegions(RemoveOperatingRegionsT&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = std::forward<RemoveOperatingRegionsT>(value); }
    template<typename RemoveOperatingRegionsT = Aws::Vector<RemoveIpamOperatingRegion>>
    ModifyIpamResourceDiscoveryRequest& WithRemoveOperatingRegions(RemoveOperatingRegionsT&& value) { SetRemoveOperatingRegions(std::forward<RemoveOperatingRegionsT>(value)); return *this;}
    template<typename RemoveOperatingRegionsT = RemoveIpamOperatingRegion>
    ModifyIpamResourceDiscoveryRequest& AddRemoveOperatingRegions(RemoveOperatingRegionsT&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.emplace_back(std::forward<RemoveOperatingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Add an Organizational Unit (OU) exclusion to your IPAM. If your IPAM is
     * integrated with Amazon Web Services Organizations and you add an organizational
     * unit (OU) exclusion, IPAM will not manage the IP addresses in accounts in that
     * OU exclusion. There is a limit on the number of exclusions you can create. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>  <p>The
     * resulting set of exclusions must not result in "overlap", meaning two or more OU
     * exclusions must not exclude the same OU. For more information and examples, see
     * the Amazon Web Services CLI request process in <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/exclude-ous.html#exclude-ous-create-delete">Add
     * or remove OU exclusions </a> in the <i>Amazon VPC User Guide</i>.</p> 
     */
    inline const Aws::Vector<AddIpamOrganizationalUnitExclusion>& GetAddOrganizationalUnitExclusions() const { return m_addOrganizationalUnitExclusions; }
    inline bool AddOrganizationalUnitExclusionsHasBeenSet() const { return m_addOrganizationalUnitExclusionsHasBeenSet; }
    template<typename AddOrganizationalUnitExclusionsT = Aws::Vector<AddIpamOrganizationalUnitExclusion>>
    void SetAddOrganizationalUnitExclusions(AddOrganizationalUnitExclusionsT&& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions = std::forward<AddOrganizationalUnitExclusionsT>(value); }
    template<typename AddOrganizationalUnitExclusionsT = Aws::Vector<AddIpamOrganizationalUnitExclusion>>
    ModifyIpamResourceDiscoveryRequest& WithAddOrganizationalUnitExclusions(AddOrganizationalUnitExclusionsT&& value) { SetAddOrganizationalUnitExclusions(std::forward<AddOrganizationalUnitExclusionsT>(value)); return *this;}
    template<typename AddOrganizationalUnitExclusionsT = AddIpamOrganizationalUnitExclusion>
    ModifyIpamResourceDiscoveryRequest& AddAddOrganizationalUnitExclusions(AddOrganizationalUnitExclusionsT&& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions.emplace_back(std::forward<AddOrganizationalUnitExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove an Organizational Unit (OU) exclusion to your IPAM. If your IPAM is
     * integrated with Amazon Web Services Organizations and you add an organizational
     * unit (OU) exclusion, IPAM will not manage the IP addresses in accounts in that
     * OU exclusion. There is a limit on the number of exclusions you can create. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>  <p>The
     * resulting set of exclusions must not result in "overlap", meaning two or more OU
     * exclusions must not exclude the same OU. For more information and examples, see
     * the Amazon Web Services CLI request process in <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/exclude-ous.html#exclude-ous-create-delete">Add
     * or remove OU exclusions </a> in the <i>Amazon VPC User Guide</i>.</p> 
     */
    inline const Aws::Vector<RemoveIpamOrganizationalUnitExclusion>& GetRemoveOrganizationalUnitExclusions() const { return m_removeOrganizationalUnitExclusions; }
    inline bool RemoveOrganizationalUnitExclusionsHasBeenSet() const { return m_removeOrganizationalUnitExclusionsHasBeenSet; }
    template<typename RemoveOrganizationalUnitExclusionsT = Aws::Vector<RemoveIpamOrganizationalUnitExclusion>>
    void SetRemoveOrganizationalUnitExclusions(RemoveOrganizationalUnitExclusionsT&& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions = std::forward<RemoveOrganizationalUnitExclusionsT>(value); }
    template<typename RemoveOrganizationalUnitExclusionsT = Aws::Vector<RemoveIpamOrganizationalUnitExclusion>>
    ModifyIpamResourceDiscoveryRequest& WithRemoveOrganizationalUnitExclusions(RemoveOrganizationalUnitExclusionsT&& value) { SetRemoveOrganizationalUnitExclusions(std::forward<RemoveOrganizationalUnitExclusionsT>(value)); return *this;}
    template<typename RemoveOrganizationalUnitExclusionsT = RemoveIpamOrganizationalUnitExclusion>
    ModifyIpamResourceDiscoveryRequest& AddRemoveOrganizationalUnitExclusions(RemoveOrganizationalUnitExclusionsT&& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions.emplace_back(std::forward<RemoveOrganizationalUnitExclusionsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryId;
    bool m_ipamResourceDiscoveryIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AddIpamOperatingRegion> m_addOperatingRegions;
    bool m_addOperatingRegionsHasBeenSet = false;

    Aws::Vector<RemoveIpamOperatingRegion> m_removeOperatingRegions;
    bool m_removeOperatingRegionsHasBeenSet = false;

    Aws::Vector<AddIpamOrganizationalUnitExclusion> m_addOrganizationalUnitExclusions;
    bool m_addOrganizationalUnitExclusionsHasBeenSet = false;

    Aws::Vector<RemoveIpamOrganizationalUnitExclusion> m_removeOrganizationalUnitExclusions;
    bool m_removeOrganizationalUnitExclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
