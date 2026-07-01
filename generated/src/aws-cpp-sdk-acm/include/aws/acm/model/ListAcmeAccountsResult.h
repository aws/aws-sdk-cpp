/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeAccountSummary.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class ListAcmeAccountsResult {
 public:
  AWS_ACM_API ListAcmeAccountsResult() = default;
  AWS_ACM_API ListAcmeAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API ListAcmeAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of ACME accounts.</p>
   */
  inline const Aws::Vector<AcmeAccountSummary>& GetAcmeAccounts() const { return m_acmeAccounts; }
  template <typename AcmeAccountsT = Aws::Vector<AcmeAccountSummary>>
  void SetAcmeAccounts(AcmeAccountsT&& value) {
    m_acmeAccountsHasBeenSet = true;
    m_acmeAccounts = std::forward<AcmeAccountsT>(value);
  }
  template <typename AcmeAccountsT = Aws::Vector<AcmeAccountSummary>>
  ListAcmeAccountsResult& WithAcmeAccounts(AcmeAccountsT&& value) {
    SetAcmeAccounts(std::forward<AcmeAccountsT>(value));
    return *this;
  }
  template <typename AcmeAccountsT = AcmeAccountSummary>
  ListAcmeAccountsResult& AddAcmeAccounts(AcmeAccountsT&& value) {
    m_acmeAccountsHasBeenSet = true;
    m_acmeAccounts.emplace_back(std::forward<AcmeAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token for pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAcmeAccountsResult& WithNextToken(NextTokenT&& value) {
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
  ListAcmeAccountsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AcmeAccountSummary> m_acmeAccounts;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_acmeAccountsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
