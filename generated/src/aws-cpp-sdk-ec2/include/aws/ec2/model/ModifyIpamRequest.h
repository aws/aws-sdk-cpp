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
  class ModifyIpamRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyIpamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpam"; }

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
    inline ModifyIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}


    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the IPAM you want to modify.</p>
     */
    inline ModifyIpamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetAddOperatingRegions() const{ return m_addOperatingRegions; }

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline bool AddOperatingRegionsHasBeenSet() const { return m_addOperatingRegionsHasBeenSet; }

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = value; }

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline void SetAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions = std::move(value); }

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamRequest& WithAddOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { SetAddOperatingRegions(value); return *this;}

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamRequest& WithAddOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { SetAddOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamRequest& AddAddOperatingRegions(const AddIpamOperatingRegion& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(value); return *this; }

    /**
     * <p>Choose the operating Regions for the IPAM. Operating Regions are Amazon Web
     * Services Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions.</p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>.</p>
     */
    inline ModifyIpamRequest& AddAddOperatingRegions(AddIpamOperatingRegion&& value) { m_addOperatingRegionsHasBeenSet = true; m_addOperatingRegions.push_back(std::move(value)); return *this; }


    /**
     * <p>The operating Regions to remove.</p>
     */
    inline const Aws::Vector<RemoveIpamOperatingRegion>& GetRemoveOperatingRegions() const{ return m_removeOperatingRegions; }

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline bool RemoveOperatingRegionsHasBeenSet() const { return m_removeOperatingRegionsHasBeenSet; }

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline void SetRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = value; }

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline void SetRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions = std::move(value); }

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline ModifyIpamRequest& WithRemoveOperatingRegions(const Aws::Vector<RemoveIpamOperatingRegion>& value) { SetRemoveOperatingRegions(value); return *this;}

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline ModifyIpamRequest& WithRemoveOperatingRegions(Aws::Vector<RemoveIpamOperatingRegion>&& value) { SetRemoveOperatingRegions(std::move(value)); return *this;}

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline ModifyIpamRequest& AddRemoveOperatingRegions(const RemoveIpamOperatingRegion& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(value); return *this; }

    /**
     * <p>The operating Regions to remove.</p>
     */
    inline ModifyIpamRequest& AddRemoveOperatingRegions(RemoveIpamOperatingRegion&& value) { m_removeOperatingRegionsHasBeenSet = true; m_removeOperatingRegions.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

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
