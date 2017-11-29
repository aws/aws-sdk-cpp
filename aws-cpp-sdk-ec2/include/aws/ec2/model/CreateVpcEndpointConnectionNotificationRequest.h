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
  class AWS_EC2_API CreateVpcEndpointConnectionNotificationRequest : public EC2Request
  {
  public:
    CreateVpcEndpointConnectionNotificationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpointConnectionNotification"; }

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The ID of the endpoint. </p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint. </p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}


    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more endpoint events for which to receive notifications. Valid values
     * are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
