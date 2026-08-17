/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanSummary.h>

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
class ListRecoveryPlansResult {
 public:
  AWS_DRS_API ListRecoveryPlansResult() = default;
  AWS_DRS_API ListRecoveryPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DRS_API ListRecoveryPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Recovery Plans.</p>
   */
  inline const Aws::Vector<RecoveryPlanSummary>& GetRecoveryPlans() const { return m_recoveryPlans; }
  template <typename RecoveryPlansT = Aws::Vector<RecoveryPlanSummary>>
  void SetRecoveryPlans(RecoveryPlansT&& value) {
    m_recoveryPlansHasBeenSet = true;
    m_recoveryPlans = std::forward<RecoveryPlansT>(value);
  }
  template <typename RecoveryPlansT = Aws::Vector<RecoveryPlanSummary>>
  ListRecoveryPlansResult& WithRecoveryPlans(RecoveryPlansT&& value) {
    SetRecoveryPlans(std::forward<RecoveryPlansT>(value));
    return *this;
  }
  template <typename RecoveryPlansT = RecoveryPlanSummary>
  ListRecoveryPlansResult& AddRecoveryPlans(RecoveryPlansT&& value) {
    m_recoveryPlansHasBeenSet = true;
    m_recoveryPlans.emplace_back(std::forward<RecoveryPlansT>(value));
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
  ListRecoveryPlansResult& WithNextToken(NextTokenT&& value) {
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
  ListRecoveryPlansResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RecoveryPlanSummary> m_recoveryPlans;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recoveryPlansHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
