/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

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
class DeleteRecoveryPlanExecutionResult {
 public:
  AWS_DRS_API DeleteRecoveryPlanExecutionResult() = default;
  AWS_DRS_API DeleteRecoveryPlanExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API DeleteRecoveryPlanExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the deleted Recovery Plan execution.</p>
   */
  inline const Aws::String& GetRecoveryPlanExecutionArn() const { return m_recoveryPlanExecutionArn; }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  void SetRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    m_recoveryPlanExecutionArnHasBeenSet = true;
    m_recoveryPlanExecutionArn = std::forward<RecoveryPlanExecutionArnT>(value);
  }
  template <typename RecoveryPlanExecutionArnT = Aws::String>
  DeleteRecoveryPlanExecutionResult& WithRecoveryPlanExecutionArn(RecoveryPlanExecutionArnT&& value) {
    SetRecoveryPlanExecutionArn(std::forward<RecoveryPlanExecutionArnT>(value));
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
  DeleteRecoveryPlanExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recoveryPlanExecutionArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanExecutionArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
