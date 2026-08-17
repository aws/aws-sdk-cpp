/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlan.h>

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
class UpdateRecoveryPlanResult {
 public:
  AWS_DRS_API UpdateRecoveryPlanResult() = default;
  AWS_DRS_API UpdateRecoveryPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API UpdateRecoveryPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const RecoveryPlan& GetRecoveryPlan() const { return m_recoveryPlan; }
  template <typename RecoveryPlanT = RecoveryPlan>
  void SetRecoveryPlan(RecoveryPlanT&& value) {
    m_recoveryPlanHasBeenSet = true;
    m_recoveryPlan = std::forward<RecoveryPlanT>(value);
  }
  template <typename RecoveryPlanT = RecoveryPlan>
  UpdateRecoveryPlanResult& WithRecoveryPlan(RecoveryPlanT&& value) {
    SetRecoveryPlan(std::forward<RecoveryPlanT>(value));
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
  UpdateRecoveryPlanResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RecoveryPlan m_recoveryPlan;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlanHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
