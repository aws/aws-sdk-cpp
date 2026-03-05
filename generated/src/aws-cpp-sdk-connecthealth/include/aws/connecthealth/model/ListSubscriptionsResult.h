/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/SubscriptionDescription.h>
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
namespace ConnectHealth {
namespace Model {
class ListSubscriptionsResult {
 public:
  AWS_CONNECTHEALTH_API ListSubscriptionsResult() = default;
  AWS_CONNECTHEALTH_API ListSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API ListSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of Subscriptions.</p>
   */
  inline const Aws::Vector<SubscriptionDescription>& GetSubscriptions() const { return m_subscriptions; }
  template <typename SubscriptionsT = Aws::Vector<SubscriptionDescription>>
  void SetSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions = std::forward<SubscriptionsT>(value);
  }
  template <typename SubscriptionsT = Aws::Vector<SubscriptionDescription>>
  ListSubscriptionsResult& WithSubscriptions(SubscriptionsT&& value) {
    SetSubscriptions(std::forward<SubscriptionsT>(value));
    return *this;
  }
  template <typename SubscriptionsT = SubscriptionDescription>
  ListSubscriptionsResult& AddSubscriptions(SubscriptionsT&& value) {
    m_subscriptionsHasBeenSet = true;
    m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSubscriptionsResult& WithNextToken(NextTokenT&& value) {
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
  ListSubscriptionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SubscriptionDescription> m_subscriptions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriptionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
