/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/View.h>
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
namespace Connect {
namespace Model {
class SearchViewsResult {
 public:
  AWS_CONNECT_API SearchViewsResult() = default;
  AWS_CONNECT_API SearchViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of views that match the search criteria.</p>
   */
  inline const Aws::Vector<View>& GetViews() const { return m_views; }
  template <typename ViewsT = Aws::Vector<View>>
  void SetViews(ViewsT&& value) {
    m_viewsHasBeenSet = true;
    m_views = std::forward<ViewsT>(value);
  }
  template <typename ViewsT = Aws::Vector<View>>
  SearchViewsResult& WithViews(ViewsT&& value) {
    SetViews(std::forward<ViewsT>(value));
    return *this;
  }
  template <typename ViewsT = View>
  SearchViewsResult& AddViews(ViewsT&& value) {
    m_viewsHasBeenSet = true;
    m_views.emplace_back(std::forward<ViewsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchViewsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate total number of views that match the search criteria.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchViewsResult& WithApproximateTotalCount(long long value) {
    SetApproximateTotalCount(value);
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
  SearchViewsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<View> m_views;

  Aws::String m_nextToken;

  long long m_approximateTotalCount{0};

  Aws::String m_requestId;
  bool m_viewsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_approximateTotalCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
