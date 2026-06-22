/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {
class CreateInvestigationResult {
 public:
  AWS_GUARDDUTY_API CreateInvestigationResult() = default;
  AWS_GUARDDUTY_API CreateInvestigationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API CreateInvestigationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the newly created investigation.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  CreateInvestigationResult& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
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
  CreateInvestigationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_investigationId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_investigationIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
