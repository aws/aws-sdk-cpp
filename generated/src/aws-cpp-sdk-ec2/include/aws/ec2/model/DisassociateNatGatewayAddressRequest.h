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
  class DisassociateNatGatewayAddressRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisassociateNatGatewayAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateNatGatewayAddress"; }

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
    inline DisassociateNatGatewayAddressRequest& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The association IDs of EIPs that have been associated with the NAT
     * gateway.</p>
     */
    inline DisassociateNatGatewayAddressRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }


    /**
     * <p>The maximum amount of time to wait (in seconds) before forcibly releasing the
     * IP addresses if connections are still in progress. Default value is 350
     * seconds.</p>
     */
    inline int GetMaxDrainDurationSeconds() const{ return m_maxDrainDurationSeconds; }

    /**
     * <p>The maximum amount of time to wait (in seconds) before forcibly releasing the
     * IP addresses if connections are still in progress. Default value is 350
     * seconds.</p>
     */
    inline bool MaxDrainDurationSecondsHasBeenSet() const { return m_maxDrainDurationSecondsHasBeenSet; }

    /**
     * <p>The maximum amount of time to wait (in seconds) before forcibly releasing the
     * IP addresses if connections are still in progress. Default value is 350
     * seconds.</p>
     */
    inline void SetMaxDrainDurationSeconds(int value) { m_maxDrainDurationSecondsHasBeenSet = true; m_maxDrainDurationSeconds = value; }

    /**
     * <p>The maximum amount of time to wait (in seconds) before forcibly releasing the
     * IP addresses if connections are still in progress. Default value is 350
     * seconds.</p>
     */
    inline DisassociateNatGatewayAddressRequest& WithMaxDrainDurationSeconds(int value) { SetMaxDrainDurationSeconds(value); return *this;}


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
    inline DisassociateNatGatewayAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet = false;

    int m_maxDrainDurationSeconds;
    bool m_maxDrainDurationSecondsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
