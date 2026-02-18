/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/LocaleCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateNotificationContentRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateNotificationContentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNotificationContent"; }

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
  UpdateNotificationContentRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the notification to update.</p>
   */
  inline const Aws::String& GetNotificationId() const { return m_notificationId; }
  inline bool NotificationIdHasBeenSet() const { return m_notificationIdHasBeenSet; }
  template <typename NotificationIdT = Aws::String>
  void SetNotificationId(NotificationIdT&& value) {
    m_notificationIdHasBeenSet = true;
    m_notificationId = std::forward<NotificationIdT>(value);
  }
  template <typename NotificationIdT = Aws::String>
  UpdateNotificationContentRequest& WithNotificationId(NotificationIdT&& value) {
    SetNotificationId(std::forward<NotificationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated localized content of the notification. A map of locale codes and
   * values. Maximum 500 characters per locale.</p>
   */
  inline const Aws::Map<LocaleCode, Aws::String>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Map<LocaleCode, Aws::String>>
  UpdateNotificationContentRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  inline UpdateNotificationContentRequest& AddContent(LocaleCode key, Aws::String value) {
    m_contentHasBeenSet = true;
    m_content.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_notificationId;

  Aws::Map<LocaleCode, Aws::String> m_content;
  bool m_instanceIdHasBeenSet = false;
  bool m_notificationIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
