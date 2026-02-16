/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DeleteNotificationRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DeleteNotificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteNotification"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  DeleteNotificationRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the notification to delete.</p>
   */
  inline const Aws::String& GetNotificationId() const { return m_notificationId; }
  inline bool NotificationIdHasBeenSet() const { return m_notificationIdHasBeenSet; }
  template <typename NotificationIdT = Aws::String>
  void SetNotificationId(NotificationIdT&& value) {
    m_notificationIdHasBeenSet = true;
    m_notificationId = std::forward<NotificationIdT>(value);
  }
  template <typename NotificationIdT = Aws::String>
  DeleteNotificationRequest& WithNotificationId(NotificationIdT&& value) {
    SetNotificationId(std::forward<NotificationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_notificationId;
  bool m_instanceIdHasBeenSet = false;
  bool m_notificationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
