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
  class DisassociateTransitGatewayPolicyTableRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisassociateTransitGatewayPolicyTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateTransitGatewayPolicyTable"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline const Aws::String& GetTransitGatewayPolicyTableId() const{ return m_transitGatewayPolicyTableId; }

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline bool TransitGatewayPolicyTableIdHasBeenSet() const { return m_transitGatewayPolicyTableIdHasBeenSet; }

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const Aws::String& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = value; }

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(Aws::String&& value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId = std::move(value); }

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline void SetTransitGatewayPolicyTableId(const char* value) { m_transitGatewayPolicyTableIdHasBeenSet = true; m_transitGatewayPolicyTableId.assign(value); }

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayPolicyTableId(const Aws::String& value) { SetTransitGatewayPolicyTableId(value); return *this;}

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayPolicyTableId(Aws::String&& value) { SetTransitGatewayPolicyTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the disassociated policy table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayPolicyTableId(const char* value) { SetTransitGatewayPolicyTableId(value); return *this;}


    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment to disassociate from the policy
     * table.</p>
     */
    inline DisassociateTransitGatewayPolicyTableRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


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
    inline DisassociateTransitGatewayPolicyTableRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayPolicyTableId;
    bool m_transitGatewayPolicyTableIdHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
