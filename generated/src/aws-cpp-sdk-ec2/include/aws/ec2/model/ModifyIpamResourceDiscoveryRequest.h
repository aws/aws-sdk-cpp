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
    AWS_EC2_API ModifyIpamResourceDiscoveryRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyIpamResourceDiscoveryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource discovery description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetAddOperatingRegions() const{ return m_addOperatingRegions; }
    inline bool AddOperatingRegionsHasBeenSet() const { return m_addOperatingRegionsHasBeenSet; }
    inline void SetAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = value; }
    inline void SetAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = std::move(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { SetAddOperatingRegions(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { SetAddOperatingRegions(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& AddAddOperatingRegions(const AddIpamOperatingRegion& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(value); return *this; }
    inline ModifyIpamResourceDiscoveryRequest& AddAddOperatingRegions(AddIpamOperatingRegion&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove operating Regions.</p>
     */
    inline const Aws::Vector<RemoveIpamOperatingRegion>& GetRemoveOperatingRegions() const{ return m_removeOperatingRegions; }
    inline bool RemoveOperatingRegionsHasBeenSet() const { return m_removeOperatingRegionsHasBeenSet; }
    inline void SetRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = value; }
    inline void SetRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = std::move(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { SetRemoveOperatingRegions(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { SetRemoveOperatingRegions(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOperatingRegions(const RemoveIpamOperatingRegion& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(value); return *this; }
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOperatingRegions(RemoveIpamOperatingRegion&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Add an Organizational Unit (OU) exclusion to your IPAM. If your IPAM is
     * integrated with Amazon Web Services Organizations and you add an organizational
     * unit (OU) exclusion, IPAM will not manage the IP addresses in accounts in that
     * OU exclusion. There is a limit on the number of exclusions you can create. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<AddIpamOrganizationalUnitExclusion>& GetAddOrganizationalUnitExclusions() const{ return m_addOrganizationalUnitExclusions; }
    inline bool AddOrganizationalUnitExclusionsHasBeenSet() const { return m_addOrganizationalUnitExclusionsHasBeenSet; }
    inline void SetAddOrganizationalUnitExclusions(const Aws::Vector<AddIpamOrganizationalUnitExclusion>& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions = value; }
    inline void SetAddOrganizationalUnitExclusions(Aws::Vector<AddIpamOrganizationalUnitExclusion>&& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions = std::move(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithAddOrganizationalUnitExclusions(const Aws::Vector<AddIpamOrganizationalUnitExclusion>& value) { SetAddOrganizationalUnitExclusions(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithAddOrganizationalUnitExclusions(Aws::Vector<AddIpamOrganizationalUnitExclusion>&& value) { SetAddOrganizationalUnitExclusions(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& AddAddOrganizationalUnitExclusions(const AddIpamOrganizationalUnitExclusion& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions.push_back(value); return *this; }
    inline ModifyIpamResourceDiscoveryRequest& AddAddOrganizationalUnitExclusions(AddIpamOrganizationalUnitExclusion&& value) { m_addOrganizationalUnitExclusionsHasBeenSet = true; m_addOrganizationalUnitExclusions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Remove an Organizational Unit (OU) exclusion to your IPAM. If your IPAM is
     * integrated with Amazon Web Services Organizations and you add an organizational
     * unit (OU) exclusion, IPAM will not manage the IP addresses in accounts in that
     * OU exclusion. There is a limit on the number of exclusions you can create. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/quotas-ipam.html">Quotas for
     * your IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<RemoveIpamOrganizationalUnitExclusion>& GetRemoveOrganizationalUnitExclusions() const{ return m_removeOrganizationalUnitExclusions; }
    inline bool RemoveOrganizationalUnitExclusionsHasBeenSet() const { return m_removeOrganizationalUnitExclusionsHasBeenSet; }
    inline void SetRemoveOrganizationalUnitExclusions(const Aws::Vector<RemoveIpamOrganizationalUnitExclusion>& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions = value; }
    inline void SetRemoveOrganizationalUnitExclusions(Aws::Vector<RemoveIpamOrganizationalUnitExclusion>&& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions = std::move(value); }
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOrganizationalUnitExclusions(const Aws::Vector<RemoveIpamOrganizationalUnitExclusion>& value) { SetRemoveOrganizationalUnitExclusions(value); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOrganizationalUnitExclusions(Aws::Vector<RemoveIpamOrganizationalUnitExclusion>&& value) { SetRemoveOrganizationalUnitExclusions(std::move(value)); return *this;}
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOrganizationalUnitExclusions(const RemoveIpamOrganizationalUnitExclusion& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions.push_back(value); return *this; }
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOrganizationalUnitExclusions(RemoveIpamOrganizationalUnitExclusion&& value) { m_removeOrganizationalUnitExclusionsHasBeenSet = true; m_removeOrganizationalUnitExclusions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_dryRun;
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
