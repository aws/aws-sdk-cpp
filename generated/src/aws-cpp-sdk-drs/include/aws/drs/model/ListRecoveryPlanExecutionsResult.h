/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecutionSummary.h>

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
class ListRecoveryPlanExecutionsResult {
 public:
  AWS_DRS_API ListRecoveryPlanExecutionsResult() = default;
  AWS_DRS_API ListRecoveryPlanExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API ListRecoveryPlanExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Recovery Plan executions.</p>
   */
  inline const Aws::Vector<RecoveryPlanExecutionSummary>& GetRecoveryPlanExecutions() const { return m_recoveryPlanExecutions; }
  template <typename RecoveryPlanExecutionsT = Aws::Vector<RecoveryPlanExecutionSummary>>
  void SetRecoveryPlanExecutions(RecoveryPlanExecutionsT&& value) {
    m_recoveryPlanExecutionsHasBeenSet = true;
    m_recoveryPlanExecutions = std::forward<RecoveryPlanExecutionsT>(value);
  }
  template <typename RecoveryPlanExecutionsT = Aws::Vector<RecoveryPlanExecutionSummary>>
  ListRecoveryPlanExecutionsResult& WithRecoveryPlanExecutions(RecoveryPlanExecutionsT&& value) {
    SetRecoveryPlanExecutions(std::forward<RecoveryPlanExecutionsT>(value));
    return *this;
  }
  template <typename RecoveryPlanExecutionsT = RecoveryPlanExecutionSummary>
  ListRecoveryPlanExecutionsResult& AddRecoveryPlanExecutions(RecoveryPlanExecutionsT&& value) {
    m_recoveryPlanExecutionsHasBeenSet = true;
    m_recoveryPlanExecutions.emplace_back(std::forward<RecoveryPlanExecutionsT>(value));
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
  ListRecoveryPlanExecutionsResult& WithNextToken(NextTokenT&& value) {
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
  ListRecoveryPlanExecutionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RecoveryPlanExecutionSummary> m_recoveryPlanExecutions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanExecutionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
