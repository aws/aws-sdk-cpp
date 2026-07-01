/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeAccount.h>
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
class DescribeAcmeAccountResult {
 public:
  AWS_ACM_API DescribeAcmeAccountResult() = default;
  AWS_ACM_API DescribeAcmeAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API DescribeAcmeAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ACME account details.</p>
   */
  inline const AcmeAccount& GetAcmeAccount() const { return m_acmeAccount; }
  template <typename AcmeAccountT = AcmeAccount>
  void SetAcmeAccount(AcmeAccountT&& value) {
    m_acmeAccountHasBeenSet = true;
    m_acmeAccount = std::forward<AcmeAccountT>(value);
  }
  template <typename AcmeAccountT = AcmeAccount>
  DescribeAcmeAccountResult& WithAcmeAccount(AcmeAccountT&& value) {
    SetAcmeAccount(std::forward<AcmeAccountT>(value));
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
  DescribeAcmeAccountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AcmeAccount m_acmeAccount;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeAccountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
