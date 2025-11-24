/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EventStatus.h>
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
namespace ComputeOptimizerAutomation {
namespace Model {
class StartAutomationEventResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API StartAutomationEventResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API StartAutomationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API StartAutomationEventResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the recommended action being automated.</p>
   */
  inline const Aws::String& GetRecommendedActionId() const { return m_recommendedActionId; }
  template <typename RecommendedActionIdT = Aws::String>
  void SetRecommendedActionId(RecommendedActionIdT&& value) {
    m_recommendedActionIdHasBeenSet = true;
    m_recommendedActionId = std::forward<RecommendedActionIdT>(value);
  }
  template <typename RecommendedActionIdT = Aws::String>
  StartAutomationEventResult& WithRecommendedActionId(RecommendedActionIdT&& value) {
    SetRecommendedActionId(std::forward<RecommendedActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the automation event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  StartAutomationEventResult& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the automation event.</p>
   */
  inline EventStatus GetEventStatus() const { return m_eventStatus; }
  inline void SetEventStatus(EventStatus value) {
    m_eventStatusHasBeenSet = true;
    m_eventStatus = value;
  }
  inline StartAutomationEventResult& WithEventStatus(EventStatus value) {
    SetEventStatus(value);
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
  StartAutomationEventResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedActionId;
  bool m_recommendedActionIdHasBeenSet = false;

  Aws::String m_eventId;
  bool m_eventIdHasBeenSet = false;

  EventStatus m_eventStatus{EventStatus::NOT_SET};
  bool m_eventStatusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
