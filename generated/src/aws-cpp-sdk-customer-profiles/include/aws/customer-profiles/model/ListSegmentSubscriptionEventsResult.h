/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SubscriptionEventItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class ListSegmentSubscriptionEventsResult {
 public:
  AWS_CUSTOMERPROFILES_API ListSegmentSubscriptionEventsResult() = default;
  AWS_CUSTOMERPROFILES_API ListSegmentSubscriptionEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API ListSegmentSubscriptionEventsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of segment membership events. </p>
   */
  inline const Aws::Vector<SubscriptionEventItem>& GetEvents() const { return m_events; }
  template <typename EventsT = Aws::Vector<SubscriptionEventItem>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<SubscriptionEventItem>>
  ListSegmentSubscriptionEventsResult& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = SubscriptionEventItem>
  ListSegmentSubscriptionEventsResult& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to retrieve the next page of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSegmentSubscriptionEventsResult& WithNextToken(NextTokenT&& value) {
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
  ListSegmentSubscriptionEventsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SubscriptionEventItem> m_events;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
