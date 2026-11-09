/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CollectorSummary.h>
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
namespace Continuum {
namespace Model {
/**
 * <p>Contains summaries of the caller account's Collectors.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListCollectorsOutput">AWS
 * API Reference</a></p>
 */
class ListCollectorsResult {
 public:
  AWS_CONTINUUM_API ListCollectorsResult() = default;
  AWS_CONTINUUM_API ListCollectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API ListCollectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Collectors owned by the authenticated caller's account. At most one
   * result is currently returned, so no result ordering applies.</p>
   */
  inline const Aws::Vector<CollectorSummary>& GetItems() const { return m_items; }
  template <typename ItemsT = Aws::Vector<CollectorSummary>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<CollectorSummary>>
  ListCollectorsResult& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = CollectorSummary>
  ListCollectorsResult& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
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
  ListCollectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CollectorSummary> m_items;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_itemsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
