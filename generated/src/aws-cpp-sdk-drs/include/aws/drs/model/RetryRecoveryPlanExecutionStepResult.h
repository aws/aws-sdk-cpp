/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionStep.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {
class RetryRecoveryPlanExecutionStepResult {
 public:
  AWS_DRS_API RetryRecoveryPlanExecutionStepResult() = default;
  AWS_DRS_API RetryRecoveryPlanExecutionStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API RetryRecoveryPlanExecutionStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const RecoveryPlanExecutionStep& GetRecoveryPlanExecutionStep() const { return m_recoveryPlanExecutionStep; }
  template <typename RecoveryPlanExecutionStepT = RecoveryPlanExecutionStep>
  void SetRecoveryPlanExecutionStep(RecoveryPlanExecutionStepT&& value) {
    m_recoveryPlanExecutionStepHasBeenSet = true;
    m_recoveryPlanExecutionStep = std::forward<RecoveryPlanExecutionStepT>(value);
  }
  template <typename RecoveryPlanExecutionStepT = RecoveryPlanExecutionStep>
  RetryRecoveryPlanExecutionStepResult& WithRecoveryPlanExecutionStep(RecoveryPlanExecutionStepT&& value) {
    SetRecoveryPlanExecutionStep(std::forward<RecoveryPlanExecutionStepT>(value));
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
  RetryRecoveryPlanExecutionStepResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RecoveryPlanExecutionStep m_recoveryPlanExecutionStep;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanExecutionStepHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
