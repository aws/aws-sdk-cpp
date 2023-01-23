/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AssociateDhcpOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssociateDhcpOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDhcpOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}

    /**
     * <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP
     * options with the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateDhcpOptionsRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


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
    inline AssociateDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
