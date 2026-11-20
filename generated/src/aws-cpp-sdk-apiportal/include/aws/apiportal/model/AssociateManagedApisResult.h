/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/FailedManagedApiItem.h>
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
namespace APIPortal {
namespace Model {
class AssociateManagedApisResult {
 public:
  AWS_APIPORTAL_API AssociateManagedApisResult() = default;
  AWS_APIPORTAL_API AssociateManagedApisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APIPORTAL_API AssociateManagedApisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Managed APIs that could not be processed. IDs not listed here
   * succeeded.</p>
   */
  inline const Aws::Vector<FailedManagedApiItem>& GetFailedItems() const { return m_failedItems; }
  template <typename FailedItemsT = Aws::Vector<FailedManagedApiItem>>
  void SetFailedItems(FailedItemsT&& value) {
    m_failedItemsHasBeenSet = true;
    m_failedItems = std::forward<FailedItemsT>(value);
  }
  template <typename FailedItemsT = Aws::Vector<FailedManagedApiItem>>
  AssociateManagedApisResult& WithFailedItems(FailedItemsT&& value) {
    SetFailedItems(std::forward<FailedItemsT>(value));
    return *this;
  }
  template <typename FailedItemsT = FailedManagedApiItem>
  AssociateManagedApisResult& AddFailedItems(FailedItemsT&& value) {
    m_failedItemsHasBeenSet = true;
    m_failedItems.emplace_back(std::forward<FailedItemsT>(value));
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
  AssociateManagedApisResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FailedManagedApiItem> m_failedItems;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_failedItemsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
