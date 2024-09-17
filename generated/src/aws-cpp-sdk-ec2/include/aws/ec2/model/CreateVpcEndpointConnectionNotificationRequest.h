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
  class CreateVpcEndpointConnectionNotificationRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpcEndpointConnectionNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpointConnectionNotification"; }

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
    inline CreateVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint events for which to receive notifications. Valid values are
     * <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVpcEndpointConnectionNotificationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
