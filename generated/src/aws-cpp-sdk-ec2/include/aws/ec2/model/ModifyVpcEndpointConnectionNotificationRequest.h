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
    AWS_EC2_API ModifyVpcEndpointConnectionNotificationRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpcEndpointConnectionNotificationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const { return m_connectionNotificationId; }
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }
    template<typename ConnectionNotificationIdT = Aws::String>
    void SetConnectionNotificationId(ConnectionNotificationIdT&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::forward<ConnectionNotificationIdT>(value); }
    template<typename ConnectionNotificationIdT = Aws::String>
    ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationId(ConnectionNotificationIdT&& value) { SetConnectionNotificationId(std::forward<ConnectionNotificationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const { return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    template<typename ConnectionNotificationArnT = Aws::String>
    void SetConnectionNotificationArn(ConnectionNotificationArnT&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::forward<ConnectionNotificationArnT>(value); }
    template<typename ConnectionNotificationArnT = Aws::String>
    ModifyVpcEndpointConnectionNotificationRequest& WithConnectionNotificationArn(ConnectionNotificationArnT&& value) { SetConnectionNotificationArn(std::forward<ConnectionNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events for the endpoint. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const { return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    void SetConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::forward<ConnectionEventsT>(value); }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    ModifyVpcEndpointConnectionNotificationRequest& WithConnectionEvents(ConnectionEventsT&& value) { SetConnectionEvents(std::forward<ConnectionEventsT>(value)); return *this;}
    template<typename ConnectionEventsT = Aws::String>
    ModifyVpcEndpointConnectionNotificationRequest& AddConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.emplace_back(std::forward<ConnectionEventsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
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
