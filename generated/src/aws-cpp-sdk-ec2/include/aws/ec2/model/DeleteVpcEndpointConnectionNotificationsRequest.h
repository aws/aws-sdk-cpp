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
  class DeleteVpcEndpointConnectionNotificationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteVpcEndpointConnectionNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcEndpointConnectionNotifications"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the notifications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionNotificationIds() const{ return m_connectionNotificationIds; }
    inline bool ConnectionNotificationIdsHasBeenSet() const { return m_connectionNotificationIdsHasBeenSet; }
    inline void SetConnectionNotificationIds(const Aws::Vector<Aws::String>& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds = value; }
    inline void SetConnectionNotificationIds(Aws::Vector<Aws::String>&& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds = std::move(value); }
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationIds(const Aws::Vector<Aws::String>& value) { SetConnectionNotificationIds(value); return *this;}
    inline DeleteVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationIds(Aws::Vector<Aws::String>&& value) { SetConnectionNotificationIds(std::move(value)); return *this;}
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(const Aws::String& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(value); return *this; }
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(Aws::String&& value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(std::move(value)); return *this; }
    inline DeleteVpcEndpointConnectionNotificationsRequest& AddConnectionNotificationIds(const char* value) { m_connectionNotificationIdsHasBeenSet = true; m_connectionNotificationIds.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionNotificationIds;
    bool m_connectionNotificationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
