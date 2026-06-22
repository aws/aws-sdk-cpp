/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class ListMicrovmImageVersionsResult {
 public:
  AWS_LAMBDAMICROVMS_API ListMicrovmImageVersionsResult() = default;
  AWS_LAMBDAMICROVMS_API ListMicrovmImageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API ListMicrovmImageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The pagination token to use in a subsequent request to retrieve the next page
   * of results. This value is null when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMicrovmImageVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of MicroVM image versions.</p>
   */
  inline const Aws::Vector<MicrovmImageVersionSummary>& GetItems() const { return m_items; }
  template <typename ItemsT = Aws::Vector<MicrovmImageVersionSummary>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<MicrovmImageVersionSummary>>
  ListMicrovmImageVersionsResult& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = MicrovmImageVersionSummary>
  ListMicrovmImageVersionsResult& AddItems(ItemsT&& value) {
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
  ListMicrovmImageVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<MicrovmImageVersionSummary> m_items;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
