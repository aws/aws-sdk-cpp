﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NewDhcpConfiguration.h>
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
  class AWS_EC2_API CreateDhcpOptionsRequest : public EC2Request
  {
  public:
    CreateDhcpOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDhcpOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline const Aws::Vector<NewDhcpConfiguration>& GetDhcpConfigurations() const{ return m_dhcpConfigurations; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline bool DhcpConfigurationsHasBeenSet() const { return m_dhcpConfigurationsHasBeenSet; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = value; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline void SetDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations = std::move(value); }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(const Aws::Vector<NewDhcpConfiguration>& value) { SetDhcpConfigurations(value); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& WithDhcpConfigurations(Aws::Vector<NewDhcpConfiguration>&& value) { SetDhcpConfigurations(std::move(value)); return *this;}

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(const NewDhcpConfiguration& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(value); return *this; }

    /**
     * <p>A DHCP configuration option.</p>
     */
    inline CreateDhcpOptionsRequest& AddDhcpConfigurations(NewDhcpConfiguration&& value) { m_dhcpConfigurationsHasBeenSet = true; m_dhcpConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline CreateDhcpOptionsRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline CreateDhcpOptionsRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline CreateDhcpOptionsRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the DHCP option.</p>
     */
    inline CreateDhcpOptionsRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<NewDhcpConfiguration> m_dhcpConfigurations;
    bool m_dhcpConfigurationsHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
