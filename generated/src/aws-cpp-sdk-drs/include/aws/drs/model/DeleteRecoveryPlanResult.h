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
class DeleteRecoveryPlanResult {
 public:
  AWS_DRS_API DeleteRecoveryPlanResult() = default;
  AWS_DRS_API DeleteRecoveryPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API DeleteRecoveryPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the deleted Recovery Plan.</p>
   */
  inline const Aws::String& GetRecoveryPlanArn() const { return m_recoveryPlanArn; }
  template <typename RecoveryPlanArnT = Aws::String>
  void SetRecoveryPlanArn(RecoveryPlanArnT&& value) {
    m_recoveryPlanArnHasBeenSet = true;
    m_recoveryPlanArn = std::forward<RecoveryPlanArnT>(value);
  }
  template <typename RecoveryPlanArnT = Aws::String>
  DeleteRecoveryPlanResult& WithRecoveryPlanArn(RecoveryPlanArnT&& value) {
    SetRecoveryPlanArn(std::forward<RecoveryPlanArnT>(value));
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
  DeleteRecoveryPlanResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_recoveryPlanArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
