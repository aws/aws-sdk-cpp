/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpamTier.h>
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
  class CreateIpamRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateIpamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpam"; }

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
    inline CreateIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the IPAM.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateIpamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIpamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIpamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating Regions for the IPAM. Operating Regions are Amazon Web Services
     * Regions where the IPAM is allowed to manage IP address CIDRs. IPAM only
     * discovers and monitors resources in the Amazon Web Services Regions you select
     * as operating Regions. </p> <p>For more information about operating Regions, see
     * <a href="https://docs.aws.amazon.com/vpc/latest/ipam/create-ipam.html">Create an
     * IPAM</a> in the <i>Amazon VPC IPAM User Guide</i>. </p>
     */
    inline const Aws::Vector<AddIpamOperatingRegion>& GetOperatingRegions() const{ return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    inline void SetOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = value; }
    inline void SetOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::move(value); }
    inline CreateIpamRequest& WithOperatingRegions(const Aws::Vector<AddIpamOperatingRegion>& value) { SetOperatingRegions(value); return *this;}
    inline CreateIpamRequest& WithOperatingRegions(Aws::Vector<AddIpamOperatingRegion>&& value) { SetOperatingRegions(std::move(value)); return *this;}
    inline CreateIpamRequest& AddOperatingRegions(const AddIpamOperatingRegion& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(value); return *this; }
    inline CreateIpamRequest& AddOperatingRegions(AddIpamOperatingRegion&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.push_back(std::move(value)); return *this; }
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
    inline CreateIpamRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateIpamRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateIpamRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateIpamRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
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
    inline CreateIpamRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateIpamRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateIpamRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPAM is offered in a Free Tier and an Advanced Tier. For more information
     * about the features available in each tier and the costs associated with the
     * tiers, see <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing &gt;
     * IPAM tab</a>.</p>
     */
    inline const IpamTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const IpamTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(IpamTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline CreateIpamRequest& WithTier(const IpamTier& value) { SetTier(value); return *this;}
    inline CreateIpamRequest& WithTier(IpamTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this option to use your own GUA ranges as private IPv6 addresses. This
     * option is disabled by default.</p>
     */
    inline bool GetEnablePrivateGua() const{ return m_enablePrivateGua; }
    inline bool EnablePrivateGuaHasBeenSet() const { return m_enablePrivateGuaHasBeenSet; }
    inline void SetEnablePrivateGua(bool value) { m_enablePrivateGuaHasBeenSet = true; m_enablePrivateGua = value; }
    inline CreateIpamRequest& WithEnablePrivateGua(bool value) { SetEnablePrivateGua(value); return *this;}
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

    IpamTier m_tier;
    bool m_tierHasBeenSet = false;

    bool m_enablePrivateGua;
    bool m_enablePrivateGuaHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
