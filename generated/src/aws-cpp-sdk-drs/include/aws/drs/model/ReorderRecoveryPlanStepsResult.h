/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class ReorderRecoveryPlanStepsResult {
 public:
  AWS_DRS_API ReorderRecoveryPlanStepsResult() = default;
  AWS_DRS_API ReorderRecoveryPlanStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API ReorderRecoveryPlanStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The steps with updated order.</p>
   */
  inline const Aws::Vector<RecoveryPlanStep>& GetRecoveryPlanSteps() const { return m_recoveryPlanSteps; }
  template <typename RecoveryPlanStepsT = Aws::Vector<RecoveryPlanStep>>
  void SetRecoveryPlanSteps(RecoveryPlanStepsT&& value) {
    m_recoveryPlanStepsHasBeenSet = true;
    m_recoveryPlanSteps = std::forward<RecoveryPlanStepsT>(value);
  }
  template <typename RecoveryPlanStepsT = Aws::Vector<RecoveryPlanStep>>
  ReorderRecoveryPlanStepsResult& WithRecoveryPlanSteps(RecoveryPlanStepsT&& value) {
    SetRecoveryPlanSteps(std::forward<RecoveryPlanStepsT>(value));
    return *this;
  }
  template <typename RecoveryPlanStepsT = RecoveryPlanStep>
  ReorderRecoveryPlanStepsResult& AddRecoveryPlanSteps(RecoveryPlanStepsT&& value) {
    m_recoveryPlanStepsHasBeenSet = true;
    m_recoveryPlanSteps.emplace_back(std::forward<RecoveryPlanStepsT>(value));
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
  ReorderRecoveryPlanStepsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RecoveryPlanStep> m_recoveryPlanSteps;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanStepsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
