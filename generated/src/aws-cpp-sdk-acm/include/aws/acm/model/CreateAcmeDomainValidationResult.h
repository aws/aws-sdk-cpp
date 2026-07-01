/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
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
class CreateAcmeDomainValidationResult {
 public:
  AWS_ACM_API CreateAcmeDomainValidationResult() = default;
  AWS_ACM_API CreateAcmeDomainValidationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API CreateAcmeDomainValidationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created domain validation.</p>
   */
  inline const Aws::String& GetAcmeDomainValidationArn() const { return m_acmeDomainValidationArn; }
  template <typename AcmeDomainValidationArnT = Aws::String>
  void SetAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    m_acmeDomainValidationArnHasBeenSet = true;
    m_acmeDomainValidationArn = std::forward<AcmeDomainValidationArnT>(value);
  }
  template <typename AcmeDomainValidationArnT = Aws::String>
  CreateAcmeDomainValidationResult& WithAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    SetAcmeDomainValidationArn(std::forward<AcmeDomainValidationArnT>(value));
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
  CreateAcmeDomainValidationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_acmeDomainValidationArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeDomainValidationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
