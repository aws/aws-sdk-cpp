﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EC2_API DeleteVpcEndpointConnectionNotificationsRequest : public EC2Request
  {
  public:
    DeleteVpcEndpointConnectionNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcEndpointConnectionNotifications"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more notification IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionNotificationIds() const{ return m_connectionNotificationIds; }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline bool ConnectionNotificationIdsHasBeenSet() const { return m_connectionNotificationIdsHasBeenSet; }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline void SetConnectionNotificationIds(const Aws::Vector<Aws::String>& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds = value; }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline void SetConnectionNotificationIds(Aws::Vector<Aws::String>&& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds = std::move(value); }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationIds(const Aws::Vector<Aws::String>& value) { SetConnectionNotificationIds(value); return *this;}

    /**
     * <p>One or more notification IDs.</p>
     */
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationIds(Aws::Vector<Aws::String>&& value) { SetConnectionNotificationIds(std::move(value)); return *this;}

    /**
     * <p>One or more notification IDs.</p>
     */
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(const Aws::String& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(value); return *this; }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(Aws::String&& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more notification IDs.</p>
     */
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(const char* value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_connectionNotificationIds;
    bool m_connectionNotificationIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
