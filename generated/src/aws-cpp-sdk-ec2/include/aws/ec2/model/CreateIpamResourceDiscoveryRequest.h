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
  class CreateIpamResourceDiscoveryRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateIpamResourceDiscoveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpamResourceDiscovery"; }

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
    inline CreateIpamResourceDiscoveryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the IPAM resource discovery.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateIpamResourceDiscoveryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating Regions for the IPAM resource discovery. Operating Regions are
     * Amazon Web Services Regions where the IPAM is allowed to manage IP address
     * CIDRs. IPAM only discovers and monitors resources in the Amazon Web Services
     * Regions you select as operating Regions.</p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetOperatingRegions() const{ return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    inline void SetOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = value; }
    inline void SetOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::move(value); }
    inline CreateIpamResourceDiscoveryRequest& WithOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { SetOperatingRegions(value); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { SetOperatingRegions(std::move(value)); return *this;}
    inline CreateIpamResourceDiscoveryRequest& AddOperatingRegions(const AddIpamOperatingRegion& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(value); return *this; }
    inline CreateIpamResourceDiscoveryRequest& AddOperatingRegions(AddIpamOperatingRegion&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tag specifications for the IPAM resource discovery.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateIpamResourceDiscoveryRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateIpamResourceDiscoveryRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateIpamResourceDiscoveryRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A client token for the IPAM resource discovery.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateIpamResourceDiscoveryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIpamResourceDiscoveryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AddIpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
