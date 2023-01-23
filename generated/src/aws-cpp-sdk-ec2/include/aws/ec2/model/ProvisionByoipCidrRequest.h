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

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The public IPv4 or IPv6 address range, in CIDR notation. The most specific
     * IPv4 prefix that you can specify is /24. The most specific IPv6 prefix you can
     * specify is /56. The address range cannot overlap with another address range that
     * you've brought to this or another Region.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline const CidrAuthorizationContext& GetCidrAuthorizationContext() const{ return m_cidrAuthorizationContext; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline void SetCidrAuthorizationContext(const CidrAuthorizationContext& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = value; }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline void SetCidrAuthorizationContext(CidrAuthorizationContext&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::move(value); }

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(const CidrAuthorizationContext& value) { SetCidrAuthorizationContext(value); return *this;}

    /**
     * <p>A signed document that proves that you are authorized to bring the specified
     * IP address range to Amazon using BYOIP.</p>
     */
    inline ProvisionByoipCidrRequest& WithCidrAuthorizationContext(CidrAuthorizationContext&& value) { SetCidrAuthorizationContext(std::move(value)); return *this;}


    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline bool GetPubliclyAdvertisable() const{ return m_publiclyAdvertisable; }

    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline bool PubliclyAdvertisableHasBeenSet() const { return m_publiclyAdvertisableHasBeenSet; }

    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline void SetPubliclyAdvertisable(bool value) { m_publiclyAdvertisableHasBeenSet = true; m_publiclyAdvertisable = value; }

    /**
     * <p>(IPv6 only) Indicate whether the address range will be publicly advertised to
     * the internet.</p> <p>Default: true</p>
     */
    inline ProvisionByoipCidrRequest& WithPubliclyAdvertisable(bool value) { SetPubliclyAdvertisable(value); return *this;}


    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the address range and the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ProvisionByoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetPoolTagSpecifications() const{ return m_poolTagSpecifications; }

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline bool PoolTagSpecificationsHasBeenSet() const { return m_poolTagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline void SetPoolTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications = value; }

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline void SetPoolTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& WithPoolTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetPoolTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& WithPoolTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetPoolTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& AddPoolTagSpecifications(const TagSpecification& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the address pool.</p>
     */
    inline ProvisionByoipCidrRequest& AddPoolTagSpecifications(TagSpecification&& value) { m_poolTagSpecificationsHasBeenSet = true; m_poolTagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Reserved.</p>
     */
    inline bool GetMultiRegion() const{ return m_multiRegion; }

    /**
     * <p>Reserved.</p>
     */
    inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetMultiRegion(bool value) { m_multiRegionHasBeenSet = true; m_multiRegion = value; }

    /**
     * <p>Reserved.</p>
     */
    inline ProvisionByoipCidrRequest& WithMultiRegion(bool value) { SetMultiRegion(value); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
