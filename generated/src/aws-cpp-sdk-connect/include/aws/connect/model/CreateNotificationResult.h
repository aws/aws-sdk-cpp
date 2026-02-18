/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class CreateNotificationResult {
 public:
  AWS_CONNECT_API CreateNotificationResult() = default;
  AWS_CONNECT_API CreateNotificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateNotificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the created notification.</p>
   */
  inline const Aws::String& GetNotificationId() const { return m_notificationId; }
  template <typename NotificationIdT = Aws::String>
  void SetNotificationId(NotificationIdT&& value) {
    m_notificationIdHasBeenSet = true;
    m_notificationId = std::forward<NotificationIdT>(value);
  }
  template <typename NotificationIdT = Aws::String>
  CreateNotificationResult& WithNotificationId(NotificationIdT&& value) {
    SetNotificationId(std::forward<NotificationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created notification.</p>
   */
  inline const Aws::String& GetNotificationArn() const { return m_notificationArn; }
  template <typename NotificationArnT = Aws::String>
  void SetNotificationArn(NotificationArnT&& value) {
    m_notificationArnHasBeenSet = true;
    m_notificationArn = std::forward<NotificationArnT>(value);
  }
  template <typename NotificationArnT = Aws::String>
  CreateNotificationResult& WithNotificationArn(NotificationArnT&& value) {
    SetNotificationArn(std::forward<NotificationArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateNotificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notificationId;

  Aws::String m_notificationArn;

  Aws::String m_requestId;
  bool m_notificationIdHasBeenSet = false;
  bool m_notificationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
