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
    AWS_EC2_API CreateVpcEndpointConnectionNotificationRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    CreateVpcEndpointConnectionNotificationRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    CreateVpcEndpointConnectionNotificationRequest& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic for the notifications.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const { return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    template<typename ConnectionNotificationArnT = Aws::String>
    void SetConnectionNotificationArn(ConnectionNotificationArnT&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::forward<ConnectionNotificationArnT>(value); }
    template<typename ConnectionNotificationArnT = Aws::String>
    CreateVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(ConnectionNotificationArnT&& value) { SetConnectionNotificationArn(std::forward<ConnectionNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint events for which to receive notifications. Valid values are
     * <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and
     * <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const { return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    void SetConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::forward<ConnectionEventsT>(value); }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointConnectionNotificationRequest& WithConnectionEvents(ConnectionEventsT&& value) { SetConnectionEvents(std::forward<ConnectionEventsT>(value)); return *this;}
    template<typename ConnectionEventsT = Aws::String>
    CreateVpcEndpointConnectionNotificationRequest& AddConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.emplace_back(std::forward<ConnectionEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVpcEndpointConnectionNotificationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
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
