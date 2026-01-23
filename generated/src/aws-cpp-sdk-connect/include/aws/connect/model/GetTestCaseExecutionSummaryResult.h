/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ObservationSummary.h>
#include <aws/connect/model/TestCaseExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
class GetTestCaseExecutionSummaryResult {
 public:
  AWS_CONNECT_API GetTestCaseExecutionSummaryResult() = default;
  AWS_CONNECT_API GetTestCaseExecutionSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API GetTestCaseExecutionSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The timestamp when the test case execution started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetTestCaseExecutionSummaryResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test case execution ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetTestCaseExecutionSummaryResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the test case execution.</p>
   */
  inline TestCaseExecutionStatus GetStatus() const { return m_status; }
  inline void SetStatus(TestCaseExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTestCaseExecutionSummaryResult& WithStatus(TestCaseExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary statistics for the test case execution.</p>
   */
  inline const ObservationSummary& GetObservationSummary() const { return m_observationSummary; }
  template <typename ObservationSummaryT = ObservationSummary>
  void SetObservationSummary(ObservationSummaryT&& value) {
    m_observationSummaryHasBeenSet = true;
    m_observationSummary = std::forward<ObservationSummaryT>(value);
  }
  template <typename ObservationSummaryT = ObservationSummary>
  GetTestCaseExecutionSummaryResult& WithObservationSummary(ObservationSummaryT&& value) {
    SetObservationSummary(std::forward<ObservationSummaryT>(value));
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
  GetTestCaseExecutionSummaryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  TestCaseExecutionStatus m_status{TestCaseExecutionStatus::NOT_SET};

  ObservationSummary m_observationSummary;

  Aws::String m_requestId;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_observationSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
