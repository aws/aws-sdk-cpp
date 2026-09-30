/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BusinessSupportSubscriptionContract.h>
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
/**
 * <p>Contains the list of Business Support subscription contracts that match the
 * request filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListBusinessSupportSubscriptionHistoryResponse">AWS
 * API Reference</a></p>
 */
class ListBusinessSupportSubscriptionHistoryResult {
 public:
  AWS_BILLING_API ListBusinessSupportSubscriptionHistoryResult() = default;
  AWS_BILLING_API ListBusinessSupportSubscriptionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API ListBusinessSupportSubscriptionHistoryResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Business Support subscription contracts.</p>
   */
  inline const Aws::Vector<BusinessSupportSubscriptionContract>& GetSubscriptionContracts() const { return m_subscriptionContracts; }
  template <typename SubscriptionContractsT = Aws::Vector<BusinessSupportSubscriptionContract>>
  void SetSubscriptionContracts(SubscriptionContractsT&& value) {
    m_subscriptionContractsHasBeenSet = true;
    m_subscriptionContracts = std::forward<SubscriptionContractsT>(value);
  }
  template <typename SubscriptionContractsT = Aws::Vector<BusinessSupportSubscriptionContract>>
  ListBusinessSupportSubscriptionHistoryResult& WithSubscriptionContracts(SubscriptionContractsT&& value) {
    SetSubscriptionContracts(std::forward<SubscriptionContractsT>(value));
    return *this;
  }
  template <typename SubscriptionContractsT = BusinessSupportSubscriptionContract>
  ListBusinessSupportSubscriptionHistoryResult& AddSubscriptionContracts(SubscriptionContractsT&& value) {
    m_subscriptionContractsHasBeenSet = true;
    m_subscriptionContracts.emplace_back(std::forward<SubscriptionContractsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBusinessSupportSubscriptionHistoryResult& WithNextToken(NextTokenT&& value) {
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
  ListBusinessSupportSubscriptionHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BusinessSupportSubscriptionContract> m_subscriptionContracts;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriptionContractsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
