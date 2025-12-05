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
class RollbackAutomationEventResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RollbackAutomationEventResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RollbackAutomationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RollbackAutomationEventResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The ID of the automation event being rolled back. </p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  RollbackAutomationEventResult& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the rollback operation. </p>
   */
  inline EventStatus GetEventStatus() const { return m_eventStatus; }
  inline void SetEventStatus(EventStatus value) {
    m_eventStatusHasBeenSet = true;
    m_eventStatus = value;
  }
  inline RollbackAutomationEventResult& WithEventStatus(EventStatus value) {
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
  RollbackAutomationEventResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  EventStatus m_eventStatus{EventStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_eventIdHasBeenSet = false;
  bool m_eventStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
