/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingPreferenceSummary.h>
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
namespace Billing {
namespace Model {
class GetBillingPreferencesResult {
 public:
  AWS_BILLING_API GetBillingPreferencesResult() = default;
  AWS_BILLING_API GetBillingPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetBillingPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of preference entries matching the request.</p>
   */
  inline const Aws::Vector<BillingPreferenceSummary>& GetBillingPreferences() const { return m_billingPreferences; }
  template <typename BillingPreferencesT = Aws::Vector<BillingPreferenceSummary>>
  void SetBillingPreferences(BillingPreferencesT&& value) {
    m_billingPreferencesHasBeenSet = true;
    m_billingPreferences = std::forward<BillingPreferencesT>(value);
  }
  template <typename BillingPreferencesT = Aws::Vector<BillingPreferenceSummary>>
  GetBillingPreferencesResult& WithBillingPreferences(BillingPreferencesT&& value) {
    SetBillingPreferences(std::forward<BillingPreferencesT>(value));
    return *this;
  }
  template <typename BillingPreferencesT = BillingPreferenceSummary>
  GetBillingPreferencesResult& AddBillingPreferences(BillingPreferencesT&& value) {
    m_billingPreferencesHasBeenSet = true;
    m_billingPreferences.emplace_back(std::forward<BillingPreferencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token. Present when more pages are available; <code>null</code>
   * when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetBillingPreferencesResult& WithNextToken(NextTokenT&& value) {
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
  GetBillingPreferencesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BillingPreferenceSummary> m_billingPreferences;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_billingPreferencesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
