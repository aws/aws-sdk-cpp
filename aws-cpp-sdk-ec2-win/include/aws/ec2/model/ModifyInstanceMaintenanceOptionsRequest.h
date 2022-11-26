﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyInstanceMaintenanceOptionsRequest : public EC2Request
  {
  public:
    ModifyInstanceMaintenanceOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceMaintenanceOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline const InstanceAutoRecoveryState& GetAutoRecovery() const{ return m_autoRecovery; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline bool AutoRecoveryHasBeenSet() const { return m_autoRecoveryHasBeenSet; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline void SetAutoRecovery(const InstanceAutoRecoveryState& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = value; }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline void SetAutoRecovery(InstanceAutoRecoveryState&& value) { m_autoRecoveryHasBeenSet = true; m_autoRecovery = std::move(value); }

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline ModifyInstanceMaintenanceOptionsRequest& WithAutoRecovery(const InstanceAutoRecoveryState& value) { SetAutoRecovery(value); return *this;}

    /**
     * <p>Disables the automatic recovery behavior of your instance or sets it to
     * default.</p>
     */
    inline ModifyInstanceMaintenanceOptionsRequest& WithAutoRecovery(InstanceAutoRecoveryState&& value) { SetAutoRecovery(std::move(value)); return *this;}


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
    inline ModifyInstanceMaintenanceOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceAutoRecoveryState m_autoRecovery;
    bool m_autoRecoveryHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
