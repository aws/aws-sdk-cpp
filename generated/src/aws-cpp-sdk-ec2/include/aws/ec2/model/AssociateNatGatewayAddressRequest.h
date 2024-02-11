/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AssociateNatGatewayAddressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssociateNatGatewayAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateNatGatewayAddress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllocationIds() const{ return m_allocationIds; }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline void SetAllocationIds(const Aws::Vector<Aws::String>& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = value; }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline void SetAllocationIds(Aws::Vector<Aws::String>&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = std::move(value); }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithAllocationIds(const Aws::Vector<Aws::String>& value) { SetAllocationIds(value); return *this;}

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithAllocationIds(Aws::Vector<Aws::String>&& value) { SetAllocationIds(std::move(value)); return *this;}

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddAllocationIds(const Aws::String& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddAllocationIds(Aws::String&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The allocation IDs of EIPs that you want to associate with your NAT
     * gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddAllocationIds(const char* value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }


    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
     */
    inline AssociateNatGatewayAddressRequest& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }


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
    inline AssociateNatGatewayAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_allocationIds;
    bool m_allocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
