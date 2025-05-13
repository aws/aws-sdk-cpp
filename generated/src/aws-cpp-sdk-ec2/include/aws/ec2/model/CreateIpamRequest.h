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
#include <aws/ec2/model/IpamMeteredAccount.h>
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
    AWS_EC2_API CreateIpamRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the IPAM.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIpamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline const Aws::Vector<AddIpamOperatingRegion>& GetOperatingRegions() const { return m_operatingRegions; }
    inline bool OperatingRegionsHasBeenSet() const { return m_operatingRegionsHasBeenSet; }
    template<typename OperatingRegionsT = Aws::Vector<AddIpamOperatingRegion>>
    void SetOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions = std::forward<OperatingRegionsT>(value); }
    template<typename OperatingRegionsT = Aws::Vector<AddIpamOperatingRegion>>
    CreateIpamRequest& WithOperatingRegions(OperatingRegionsT&& value) { SetOperatingRegions(std::forward<OperatingRegionsT>(value)); return *this;}
    template<typename OperatingRegionsT = AddIpamOperatingRegion>
    CreateIpamRequest& AddOperatingRegions(OperatingRegionsT&& value) { m_operatingRegionsHasBeenSet = true; m_operatingRegions.emplace_back(std::forward<OperatingRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key/value combination of a tag assigned to the resource. Use the tag key
     * in the filter name and the tag value as the filter value. For example, to find
     * all resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateIpamRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateIpamRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateIpamRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPAM is offered in a Free Tier and an Advanced Tier. For more information
     * about the features available in each tier and the costs associated with the
     * tiers, see <a href="http://aws.amazon.com/vpc/pricing/">Amazon VPC pricing &gt;
     * IPAM tab</a>.</p>
     */
    inline IpamTier GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(IpamTier value) { m_tierHasBeenSet = true; m_tier = value; }
    inline CreateIpamRequest& WithTier(IpamTier value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable this option to use your own GUA ranges as private IPv6 addresses. This
     * option is disabled by default.</p>
     */
    inline bool GetEnablePrivateGua() const { return m_enablePrivateGua; }
    inline bool EnablePrivateGuaHasBeenSet() const { return m_enablePrivateGuaHasBeenSet; }
    inline void SetEnablePrivateGua(bool value) { m_enablePrivateGuaHasBeenSet = true; m_enablePrivateGua = value; }
    inline CreateIpamRequest& WithEnablePrivateGua(bool value) { SetEnablePrivateGua(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metered account is an Amazon Web Services account that is charged for
     * active IP addresses managed in IPAM. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/ipam/ipam-enable-cost-distro.html">Enable
     * cost distribution</a> in the <i>Amazon VPC IPAM User Guide</i>.</p> <p>Possible
     * values:</p> <ul> <li> <p> <code>ipam-owner</code> (default): The Amazon Web
     * Services account which owns the IPAM is charged for all active IP addresses
     * managed in IPAM.</p> </li> <li> <p> <code>resource-owner</code>: The Amazon Web
     * Services account that owns the IP address is charged for the active IP
     * address.</p> </li> </ul>
     */
    inline IpamMeteredAccount GetMeteredAccount() const { return m_meteredAccount; }
    inline bool MeteredAccountHasBeenSet() const { return m_meteredAccountHasBeenSet; }
    inline void SetMeteredAccount(IpamMeteredAccount value) { m_meteredAccountHasBeenSet = true; m_meteredAccount = value; }
    inline CreateIpamRequest& WithMeteredAccount(IpamMeteredAccount value) { SetMeteredAccount(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AddIpamOperatingRegion> m_operatingRegions;
    bool m_operatingRegionsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    IpamTier m_tier{IpamTier::NOT_SET};
    bool m_tierHasBeenSet = false;

    bool m_enablePrivateGua{false};
    bool m_enablePrivateGuaHasBeenSet = false;

    IpamMeteredAccount m_meteredAccount{IpamMeteredAccount::NOT_SET};
    bool m_meteredAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
