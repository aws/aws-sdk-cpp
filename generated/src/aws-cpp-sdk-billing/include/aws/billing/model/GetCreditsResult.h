/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/CreditData.h>
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
class GetCreditsResult {
 public:
  AWS_BILLING_API GetCreditsResult() = default;
  AWS_BILLING_API GetCreditsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetCreditsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of credits matching the request. Returns an empty list when no
   * credits exist.</p>
   */
  inline const Aws::Vector<CreditData>& GetCredits() const { return m_credits; }
  template <typename CreditsT = Aws::Vector<CreditData>>
  void SetCredits(CreditsT&& value) {
    m_creditsHasBeenSet = true;
    m_credits = std::forward<CreditsT>(value);
  }
  template <typename CreditsT = Aws::Vector<CreditData>>
  GetCreditsResult& WithCredits(CreditsT&& value) {
    SetCredits(std::forward<CreditsT>(value));
    return *this;
  }
  template <typename CreditsT = CreditData>
  GetCreditsResult& AddCredits(CreditsT&& value) {
    m_creditsHasBeenSet = true;
    m_credits.emplace_back(std::forward<CreditsT>(value));
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
  GetCreditsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CreditData> m_credits;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_creditsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
