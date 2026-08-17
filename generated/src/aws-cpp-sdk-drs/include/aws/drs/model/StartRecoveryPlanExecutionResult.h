/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanExecution.h>

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
class StartRecoveryPlanExecutionResult {
 public:
  AWS_DRS_API StartRecoveryPlanExecutionResult() = default;
  AWS_DRS_API StartRecoveryPlanExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API StartRecoveryPlanExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The started Recovery Plan execution.</p>
   */
  inline const RecoveryPlanExecution& GetRecoveryPlanExecution() const { return m_recoveryPlanExecution; }
  template <typename RecoveryPlanExecutionT = RecoveryPlanExecution>
  void SetRecoveryPlanExecution(RecoveryPlanExecutionT&& value) {
    m_recoveryPlanExecutionHasBeenSet = true;
    m_recoveryPlanExecution = std::forward<RecoveryPlanExecutionT>(value);
  }
  template <typename RecoveryPlanExecutionT = RecoveryPlanExecution>
  StartRecoveryPlanExecutionResult& WithRecoveryPlanExecution(RecoveryPlanExecutionT&& value) {
    SetRecoveryPlanExecution(std::forward<RecoveryPlanExecutionT>(value));
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
  StartRecoveryPlanExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RecoveryPlanExecution m_recoveryPlanExecution;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanExecutionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
