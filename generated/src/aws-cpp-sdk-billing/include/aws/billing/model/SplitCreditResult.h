/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ChildCredit.h>
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
class SplitCreditResult {
 public:
  AWS_BILLING_API SplitCreditResult() = default;
  AWS_BILLING_API SplitCreditResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API SplitCreditResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the credit that was split.</p>
   */
  inline const Aws::String& GetParentCreditId() const { return m_parentCreditId; }
  template <typename ParentCreditIdT = Aws::String>
  void SetParentCreditId(ParentCreditIdT&& value) {
    m_parentCreditIdHasBeenSet = true;
    m_parentCreditId = std::forward<ParentCreditIdT>(value);
  }
  template <typename ParentCreditIdT = Aws::String>
  SplitCreditResult& WithParentCreditId(ParentCreditIdT&& value) {
    SetParentCreditId(std::forward<ParentCreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new credits, in the order of the requested portions.</p>
   */
  inline const Aws::Vector<ChildCredit>& GetChildCredits() const { return m_childCredits; }
  template <typename ChildCreditsT = Aws::Vector<ChildCredit>>
  void SetChildCredits(ChildCreditsT&& value) {
    m_childCreditsHasBeenSet = true;
    m_childCredits = std::forward<ChildCreditsT>(value);
  }
  template <typename ChildCreditsT = Aws::Vector<ChildCredit>>
  SplitCreditResult& WithChildCredits(ChildCreditsT&& value) {
    SetChildCredits(std::forward<ChildCreditsT>(value));
    return *this;
  }
  template <typename ChildCreditsT = ChildCredit>
  SplitCreditResult& AddChildCredits(ChildCreditsT&& value) {
    m_childCreditsHasBeenSet = true;
    m_childCredits.emplace_back(std::forward<ChildCreditsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the request was a dry run. If <code>true</code>, the
   * operation didn't change any credit.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline SplitCreditResult& WithDryRun(bool value) {
    SetDryRun(value);
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
  SplitCreditResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_parentCreditId;

  Aws::Vector<ChildCredit> m_childCredits;

  bool m_dryRun{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_parentCreditIdHasBeenSet = false;
  bool m_childCreditsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
