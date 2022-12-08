/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceEventWindowDisassociationRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DisassociateInstanceEventWindowRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisassociateInstanceEventWindowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateInstanceEventWindow"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DisassociateInstanceEventWindowRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const{ return m_instanceEventWindowId; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const Aws::String& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = value; }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(Aws::String&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::move(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline void SetInstanceEventWindowId(const char* value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId.assign(value); }

    /**
     * <p>The ID of the event window.</p>
     */
    inline DisassociateInstanceEventWindowRequest& WithInstanceEventWindowId(const Aws::String& value) { SetInstanceEventWindowId(value); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline DisassociateInstanceEventWindowRequest& WithInstanceEventWindowId(Aws::String&& value) { SetInstanceEventWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event window.</p>
     */
    inline DisassociateInstanceEventWindowRequest& WithInstanceEventWindowId(const char* value) { SetInstanceEventWindowId(value); return *this;}


    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline const InstanceEventWindowDisassociationRequest& GetAssociationTarget() const{ return m_associationTarget; }

    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline bool AssociationTargetHasBeenSet() const { return m_associationTargetHasBeenSet; }

    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline void SetAssociationTarget(const InstanceEventWindowDisassociationRequest& value) { m_associationTargetHasBeenSet = true; m_associationTarget = value; }

    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline void SetAssociationTarget(InstanceEventWindowDisassociationRequest&& value) { m_associationTargetHasBeenSet = true; m_associationTarget = std::move(value); }

    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline DisassociateInstanceEventWindowRequest& WithAssociationTarget(const InstanceEventWindowDisassociationRequest& value) { SetAssociationTarget(value); return *this;}

    /**
     * <p>One or more targets to disassociate from the specified event window.</p>
     */
    inline DisassociateInstanceEventWindowRequest& WithAssociationTarget(InstanceEventWindowDisassociationRequest&& value) { SetAssociationTarget(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceEventWindowId;
    bool m_instanceEventWindowIdHasBeenSet = false;

    InstanceEventWindowDisassociationRequest m_associationTarget;
    bool m_associationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
