/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionStepSummary.h>

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
class ListRecoveryPlanExecutionStepsResult {
 public:
  AWS_DRS_API ListRecoveryPlanExecutionStepsResult() = default;
  AWS_DRS_API ListRecoveryPlanExecutionStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API ListRecoveryPlanExecutionStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of execution steps.</p>
   */
  inline const Aws::Vector<RecoveryPlanExecutionStepSummary>& GetRecoveryPlanExecutionSteps() const { return m_recoveryPlanExecutionSteps; }
  template <typename RecoveryPlanExecutionStepsT = Aws::Vector<RecoveryPlanExecutionStepSummary>>
  void SetRecoveryPlanExecutionSteps(RecoveryPlanExecutionStepsT&& value) {
    m_recoveryPlanExecutionStepsHasBeenSet = true;
    m_recoveryPlanExecutionSteps = std::forward<RecoveryPlanExecutionStepsT>(value);
  }
  template <typename RecoveryPlanExecutionStepsT = Aws::Vector<RecoveryPlanExecutionStepSummary>>
  ListRecoveryPlanExecutionStepsResult& WithRecoveryPlanExecutionSteps(RecoveryPlanExecutionStepsT&& value) {
    SetRecoveryPlanExecutionSteps(std::forward<RecoveryPlanExecutionStepsT>(value));
    return *this;
  }
  template <typename RecoveryPlanExecutionStepsT = RecoveryPlanExecutionStepSummary>
  ListRecoveryPlanExecutionStepsResult& AddRecoveryPlanExecutionSteps(RecoveryPlanExecutionStepsT&& value) {
    m_recoveryPlanExecutionStepsHasBeenSet = true;
    m_recoveryPlanExecutionSteps.emplace_back(std::forward<RecoveryPlanExecutionStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecoveryPlanExecutionStepsResult& WithNextToken(NextTokenT&& value) {
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
  ListRecoveryPlanExecutionStepsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RecoveryPlanExecutionStepSummary> m_recoveryPlanExecutionSteps;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanExecutionStepsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
