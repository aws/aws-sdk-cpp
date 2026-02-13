/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Notification.h>
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
class ListNotificationsResult {
 public:
  AWS_CONNECT_API ListNotificationsResult() = default;
  AWS_CONNECT_API ListNotificationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListNotificationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListNotificationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of notification summaries.</p>
   */
  inline const Aws::Vector<Notification>& GetNotificationSummaryList() const { return m_notificationSummaryList; }
  template <typename NotificationSummaryListT = Aws::Vector<Notification>>
  void SetNotificationSummaryList(NotificationSummaryListT&& value) {
    m_notificationSummaryListHasBeenSet = true;
    m_notificationSummaryList = std::forward<NotificationSummaryListT>(value);
  }
  template <typename NotificationSummaryListT = Aws::Vector<Notification>>
  ListNotificationsResult& WithNotificationSummaryList(NotificationSummaryListT&& value) {
    SetNotificationSummaryList(std::forward<NotificationSummaryListT>(value));
    return *this;
  }
  template <typename NotificationSummaryListT = Notification>
  ListNotificationsResult& AddNotificationSummaryList(NotificationSummaryListT&& value) {
    m_notificationSummaryListHasBeenSet = true;
    m_notificationSummaryList.emplace_back(std::forward<NotificationSummaryListT>(value));
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
  ListNotificationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<Notification> m_notificationSummaryList;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_notificationSummaryListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
