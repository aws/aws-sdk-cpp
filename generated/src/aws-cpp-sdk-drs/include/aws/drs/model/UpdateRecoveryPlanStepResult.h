/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanStep.h>

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
class UpdateRecoveryPlanStepResult {
 public:
  AWS_DRS_API UpdateRecoveryPlanStepResult() = default;
  AWS_DRS_API UpdateRecoveryPlanStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API UpdateRecoveryPlanStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const RecoveryPlanStep& GetRecoveryPlanStep() const { return m_recoveryPlanStep; }
  template <typename RecoveryPlanStepT = RecoveryPlanStep>
  void SetRecoveryPlanStep(RecoveryPlanStepT&& value) {
    m_recoveryPlanStepHasBeenSet = true;
    m_recoveryPlanStep = std::forward<RecoveryPlanStepT>(value);
  }
  template <typename RecoveryPlanStepT = RecoveryPlanStep>
  UpdateRecoveryPlanStepResult& WithRecoveryPlanStep(RecoveryPlanStepT&& value) {
    SetRecoveryPlanStep(std::forward<RecoveryPlanStepT>(value));
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
  UpdateRecoveryPlanStepResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RecoveryPlanStep m_recoveryPlanStep;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanStepHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
