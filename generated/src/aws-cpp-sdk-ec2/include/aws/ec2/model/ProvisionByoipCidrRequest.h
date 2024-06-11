﻿/**
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
    AWS_EC2_API ProvisionByoipCidrRequest();

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
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline ProvisionByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline ProvisionByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline ProvisionByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline const CidrAuthorizationContext& GetCidrAuthorizationContext() const{ return m_cidrAuthorizationContext; }
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }
    inline void SetCidrAuthorizationContext(const CidrAuthorizationContext& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = value; }
    inline void SetCidrAuthorizationContext(CidrAuthorizationContext&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::move(value); }
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(const CidrAuthorizationContext& value) { SetCidrAuthorizationContext(value); return *this;}
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(CidrAuthorizationContext&& value) { SetCidrAuthorizationContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline bool GetPubliclyAdvertisable() const{ return m_publiclyAdvertisable; }
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }
    inline ProvisionByoipCidrRequest& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ProvisionByoipCidrRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ProvisionByoipCidrRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ProvisionByoipCidrRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ProvisionByoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetPoolTagSpecifications() const{ return m_poolTagSpecifications; }
    inline bool PoolTagSpecificationsHasBeenSet() const { return m_poolTagSpecificationsHasBeenSet; }
    inline void SetPoolTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications = value; }
    inline void SetPoolTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications = std::move(value); }
    inline ProvisionByoipCidrRequest& WithPoolTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetPoolTagSpecifications(value); return *this;}
    inline ProvisionByoipCidrRequest& WithPoolTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetPoolTagSpecifications(std::move(value)); return *this;}
    inline ProvisionByoipCidrRequest& AddPoolTagSpecifications(const TagSpecification& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications.push_back(value); return *this; }
    inline ProvisionByoipCidrRequest& AddPoolTagSpecifications(TagSpecification&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline bool GetMultiRegion() const{ return m_multiRegion; }
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
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline ProvisionByoipCidrRequest& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline ProvisionByoipCidrRequest& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline ProvisionByoipCidrRequest& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    CidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet = false;

    bool m_publiclyAdvertisable;
    bool m_publiclyAdvertisableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<TagSpecification> m_poolTagSpecifications;
    bool m_poolTagSpecificationsHasBeenSet = false;

    bool m_multiRegion;
    bool m_multiRegionHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
