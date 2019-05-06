/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ModifyVpcEndpointConnectionNotificationRequest : public EC2Request
  {
  public:
    ModifyVpcEndpointConnectionNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointConnectionNotification"; }

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
    inline ModifyVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const{ return m_connectionNotificationId; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const Aws::String& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = value; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(Aws::String&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::move(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const char* value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId.assign(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(const Aws::String& value) { SetConnectionNotificationId(value); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(Aws::String&& value) { SetConnectionNotificationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(const char* value) { SetConnectionNotificationId(value); return *this;}


    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}


    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
