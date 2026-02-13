/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UserNotificationSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class ListUserNotificationsResult {
 public:
  AWS_CONNECT_API ListUserNotificationsResult() = default;
  AWS_CONNECT_API ListUserNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListUserNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of notifications sent to the specified user.</p>
   */
  inline const Aws::Vector<UserNotificationSummary>& GetUserNotifications() const { return m_userNotifications; }
  template <typename UserNotificationsT = Aws::Vector<UserNotificationSummary>>
  void SetUserNotifications(UserNotificationsT&& value) {
    m_userNotificationsHasBeenSet = true;
    m_userNotifications = std::forward<UserNotificationsT>(value);
  }
  template <typename UserNotificationsT = Aws::Vector<UserNotificationSummary>>
  ListUserNotificationsResult& WithUserNotifications(UserNotificationsT&& value) {
    SetUserNotifications(std::forward<UserNotificationsT>(value));
    return *this;
  }
  template <typename UserNotificationsT = UserNotificationSummary>
  ListUserNotificationsResult& AddUserNotifications(UserNotificationsT&& value) {
    m_userNotificationsHasBeenSet = true;
    m_userNotifications.emplace_back(std::forward<UserNotificationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. If present, there are more results
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUserNotificationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListUserNotificationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UserNotificationSummary> m_userNotifications;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_userNotificationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
