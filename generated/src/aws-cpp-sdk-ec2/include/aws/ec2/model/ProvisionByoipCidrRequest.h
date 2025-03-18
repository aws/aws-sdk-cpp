/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CidrAuthorizationContext.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ProvisionByoipCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API ProvisionByoipCidrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionByoipCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 address range
     * that you can bring is /48 for CIDRs that are publicly advertisable and /56 for
     * CIDRs that are not publicly advertisable. The address range cannot overlap with
     * another address range that you've brought to this or another Region.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    ProvisionByoipCidrRequest& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline const CidrAuthorizationContext& GetCidrAuthorizationContext() const { return m_cidrAuthorizationContext; }
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }
    template<typename CidrAuthorizationContextT = CidrAuthorizationContext>
    void SetCidrAuthorizationContext(CidrAuthorizationContextT&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::forward<CidrAuthorizationContextT>(value); }
    template<typename CidrAuthorizationContextT = CidrAuthorizationContext>
    ProvisionByoipCidrRequest& WithCidrAuthorizationContext(CidrAuthorizationContextT&& value) { SetCidrAuthorizationContext(std::forward<CidrAuthorizationContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline bool GetPubliclyAdvertisable() const { return m_publiclyAdvertisable; }
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }
    inline ProvisionByoipCidrRequest& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ProvisionByoipCidrRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ProvisionByoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetPoolTagSpecifications() const { return m_poolTagSpecifications; }
    inline bool PoolTagSpecificationsHasBeenSet() const { return m_poolTagSpecificationsHasBeenSet; }
    template<typename PoolTagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetPoolTagSpecifications(PoolTagSpecificationsT&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications = std::forward<PoolTagSpecificationsT>(value); }
    template<typename PoolTagSpecificationsT = Aws::Vector<TagSpecification>>
    ProvisionByoipCidrRequest& WithPoolTagSpecifications(PoolTagSpecificationsT&& value) { SetPoolTagSpecifications(std::forward<PoolTagSpecificationsT>(value)); return *this;}
    template<typename PoolTagSpecificationsT = TagSpecification>
    ProvisionByoipCidrRequest& AddPoolTagSpecifications(PoolTagSpecificationsT&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications.emplace_back(std::forward<PoolTagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline bool GetMultiRegion() const { return m_multiRegion; }
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }
    inline ProvisionByoipCidrRequest& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    ProvisionByoipCidrRequest& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    CidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet = false;

    bool m_publiclyAdvertisable{false};
    bool m_publiclyAdvertisableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_poolTagSpecifications;
    bool m_poolTagSpecificationsHasBeenSet = false;

    bool m_multiRegion{false};
    bool m_multiRegionHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
