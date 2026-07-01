/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeDomainValidation.h>
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
namespace ACM {
namespace Model {
class DescribeAcmeDomainValidationResult {
 public:
  AWS_ACM_API DescribeAcmeDomainValidationResult() = default;
  AWS_ACM_API DescribeAcmeDomainValidationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API DescribeAcmeDomainValidationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ACME domain validation details.</p>
   */
  inline const AcmeDomainValidation& GetAcmeDomainValidation() const { return m_acmeDomainValidation; }
  template <typename AcmeDomainValidationT = AcmeDomainValidation>
  void SetAcmeDomainValidation(AcmeDomainValidationT&& value) {
    m_acmeDomainValidationHasBeenSet = true;
    m_acmeDomainValidation = std::forward<AcmeDomainValidationT>(value);
  }
  template <typename AcmeDomainValidationT = AcmeDomainValidation>
  DescribeAcmeDomainValidationResult& WithAcmeDomainValidation(AcmeDomainValidationT&& value) {
    SetAcmeDomainValidation(std::forward<AcmeDomainValidationT>(value));
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
  DescribeAcmeDomainValidationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AcmeDomainValidation m_acmeDomainValidation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeDomainValidationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
