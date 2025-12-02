/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/Event.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
/**
 * <p>The response from the GetDurableExecutionHistory operation, containing the
 * execution history and events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetDurableExecutionHistoryResponse">AWS
 * API Reference</a></p>
 */
class GetDurableExecutionHistoryResult {
 public:
  AWS_LAMBDA_API GetDurableExecutionHistoryResult() = default;
  AWS_LAMBDA_API GetDurableExecutionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API GetDurableExecutionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of execution history events, ordered chronologically unless
   * <code>ReverseOrder</code> is set to <code>true</code>. Each event represents a
   * significant occurrence during the execution, such as step completion or callback
   * resolution.</p>
   */
  inline const Aws::Vector<Event>& GetEvents() const { return m_events; }
  template <typename EventsT = Aws::Vector<Event>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<Event>>
  GetDurableExecutionHistoryResult& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = Event>
  GetDurableExecutionHistoryResult& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If present, indicates that more history events are available. Use this value
   * as the <code>Marker</code> parameter in a subsequent request to retrieve the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  GetDurableExecutionHistoryResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  GetDurableExecutionHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Event> m_events;
  bool m_eventsHasBeenSet = false;

  Aws::String m_nextMarker;
  bool m_nextMarkerHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
