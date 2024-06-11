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
  class ModifyVpcEndpointConnectionNotificationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcEndpointConnectionNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointConnectionNotification"; }

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
    inline ModifyVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const{ return m_connectionNotificationId; }
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }
    inline void SetConnectionNotificationId(const Aws::String& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = value; }
    inline void SetConnectionNotificationId(Aws::String&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::move(value); }
    inline void SetConnectionNotificationId(const char* value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId.assign(value); }
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(const Aws::String& value) { SetConnectionNotificationId(value); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(Aws::String&& value) { SetConnectionNotificationId(std::move(value)); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(const char* value) { SetConnectionNotificationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet = false;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
