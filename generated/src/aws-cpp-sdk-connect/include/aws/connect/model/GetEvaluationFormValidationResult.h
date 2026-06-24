/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormValidationFinding.h>
#include <aws/connect/model/EvaluationFormValidationStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
class GetEvaluationFormValidationResult {
 public:
  AWS_CONNECT_API GetEvaluationFormValidationResult() = default;
  AWS_CONNECT_API GetEvaluationFormValidationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API GetEvaluationFormValidationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the validation process. Valid values:
   * <code>IN_PROGRESS</code>, <code>COMPLETED</code>, <code>FAILED</code>.</p>
   */
  inline EvaluationFormValidationStatus GetStatus() const { return m_status; }
  inline void SetStatus(EvaluationFormValidationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetEvaluationFormValidationResult& WithStatus(EvaluationFormValidationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the validation failed. This field is populated only when the
   * status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetEvaluationFormValidationResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the evaluation form.</p>
   */
  inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
  template <typename EvaluationFormIdT = Aws::String>
  void SetEvaluationFormId(EvaluationFormIdT&& value) {
    m_evaluationFormIdHasBeenSet = true;
    m_evaluationFormId = std::forward<EvaluationFormIdT>(value);
  }
  template <typename EvaluationFormIdT = Aws::String>
  GetEvaluationFormValidationResult& WithEvaluationFormId(EvaluationFormIdT&& value) {
    SetEvaluationFormId(std::forward<EvaluationFormIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A version of the evaluation form.</p>
   */
  inline int GetEvaluationFormVersion() const { return m_evaluationFormVersion; }
  inline void SetEvaluationFormVersion(int value) {
    m_evaluationFormVersionHasBeenSet = true;
    m_evaluationFormVersion = value;
  }
  inline GetEvaluationFormValidationResult& WithEvaluationFormVersion(int value) {
    SetEvaluationFormVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the validation process was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedTime() const { return m_startedTime; }
  template <typename StartedTimeT = Aws::Utils::DateTime>
  void SetStartedTime(StartedTimeT&& value) {
    m_startedTimeHasBeenSet = true;
    m_startedTime = std::forward<StartedTimeT>(value);
  }
  template <typename StartedTimeT = Aws::Utils::DateTime>
  GetEvaluationFormValidationResult& WithStartedTime(StartedTimeT&& value) {
    SetStartedTime(std::forward<StartedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of findings from the validation process. Each finding identifies a
   * structural issue or quality improvement for the evaluation form, and may include
   * a suggested fix. This field is populated when the status is
   * <code>COMPLETED</code>.</p>
   */
  inline const Aws::Vector<EvaluationFormValidationFinding>& GetFindings() const { return m_findings; }
  template <typename FindingsT = Aws::Vector<EvaluationFormValidationFinding>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<EvaluationFormValidationFinding>>
  GetEvaluationFormValidationResult& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = EvaluationFormValidationFinding>
  GetEvaluationFormValidationResult& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
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
  GetEvaluationFormValidationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  EvaluationFormValidationStatus m_status{EvaluationFormValidationStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::String m_evaluationFormId;

  int m_evaluationFormVersion{0};

  Aws::Utils::DateTime m_startedTime{};

  Aws::Vector<EvaluationFormValidationFinding> m_findings;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_evaluationFormIdHasBeenSet = false;
  bool m_evaluationFormVersionHasBeenSet = false;
  bool m_startedTimeHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
