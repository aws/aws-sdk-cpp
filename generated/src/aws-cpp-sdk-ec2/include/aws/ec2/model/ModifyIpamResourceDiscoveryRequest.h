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
    inline ModifyIpamResourceDiscoveryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A resource discovery ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryId() const{ return m_ipamResourceDiscoveryId; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline bool IpamResourceDiscoveryIdHasBeenSet() const { return m_ipamResourceDiscoveryIdHasBeenSet; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const Aws::String& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = value; }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(Aws::String&& value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId = std::move(value); }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline void SetIpamResourceDiscoveryId(const char* value) { m_ipamResourceDiscoveryIdHasBeenSet = true; m_ipamResourceDiscoveryId.assign(value); }

    /**
     * <p>A resource discovery ID.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(const Aws::String& value) { SetIpamResourceDiscoveryId(value); return *this;}

    /**
     * <p>A resource discovery ID.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(Aws::String&& value) { SetIpamResourceDiscoveryId(std::move(value)); return *this;}

    /**
     * <p>A resource discovery ID.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryId(const char* value) { SetIpamResourceDiscoveryId(value); return *this;}


    /**
     * <p>A resource discovery description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A resource discovery description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A resource discovery description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A resource discovery description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A resource discovery description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A resource discovery description.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A resource discovery description.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A resource discovery description.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetAddOperatingRegions() const{ return m_addOperatingRegions; }

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline bool AddOperatingRegionsHasBeenSet() const { return m_addOperatingRegionsHasBeenSet; }

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline void SetAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = value; }

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline void SetAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = std::move(value); }

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { SetAddOperatingRegions(value); return *this;}

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { SetAddOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& AddAddOperatingRegions(const AddIpamOperatingRegion& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(value); return *this; }

    /**
     * <p>Add operating Regions to the resource discovery. Operating Regions are Amazon
     * Web Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM
     * only discovers and monitors resources in the Amazon Web Services Regions you
     * select as operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& AddAddOperatingRegions(AddIpamOperatingRegion&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>Remove operating Regions.</p>
     */
    inline const Aws::Vector<RemoveIpamOperatingRegion>& GetRemoveOperatingRegions() const{ return m_removeOperatingRegions; }

    /**
     * <p>Remove operating Regions.</p>
     */
    inline bool RemoveOperatingRegionsHasBeenSet() const { return m_removeOperatingRegionsHasBeenSet; }

    /**
     * <p>Remove operating Regions.</p>
     */
    inline void SetRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = value; }

    /**
     * <p>Remove operating Regions.</p>
     */
    inline void SetRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = std::move(value); }

    /**
     * <p>Remove operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { SetRemoveOperatingRegions(value); return *this;}

    /**
     * <p>Remove operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& WithRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { SetRemoveOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>Remove operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOperatingRegions(const RemoveIpamOperatingRegion& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(value); return *this; }

    /**
     * <p>Remove operating Regions.</p>
     */
    inline ModifyIpamResourceDiscoveryRequest& AddRemoveOperatingRegions(RemoveIpamOperatingRegion&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
