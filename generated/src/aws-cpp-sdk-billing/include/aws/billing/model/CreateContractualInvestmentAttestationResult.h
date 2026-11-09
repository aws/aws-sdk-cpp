/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {
class CreateContractualInvestmentAttestationResult {
 public:
  AWS_BILLING_API CreateContractualInvestmentAttestationResult() = default;
  AWS_BILLING_API CreateContractualInvestmentAttestationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API CreateContractualInvestmentAttestationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the submitted attestation.</p>
   */
  inline const Aws::String& GetAttestationId() const { return m_attestationId; }
  template <typename AttestationIdT = Aws::String>
  void SetAttestationId(AttestationIdT&& value) {
    m_attestationIdHasBeenSet = true;
    m_attestationId = std::forward<AttestationIdT>(value);
  }
  template <typename AttestationIdT = Aws::String>
  CreateContractualInvestmentAttestationResult& WithAttestationId(AttestationIdT&& value) {
    SetAttestationId(std::forward<AttestationIdT>(value));
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
  CreateContractualInvestmentAttestationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_attestationId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attestationIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
