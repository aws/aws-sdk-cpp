/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/FeedSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class ListFeedsResult {
 public:
  AWS_ELEMENTALINFERENCE_API ListFeedsResult() = default;
  AWS_ELEMENTALINFERENCE_API ListFeedsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API ListFeedsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of feed summaries.</p>
   */
  inline const Aws::Vector<FeedSummary>& GetFeeds() const { return m_feeds; }
  template <typename FeedsT = Aws::Vector<FeedSummary>>
  void SetFeeds(FeedsT&& value) {
    m_feedsHasBeenSet = true;
    m_feeds = std::forward<FeedsT>(value);
  }
  template <typename FeedsT = Aws::Vector<FeedSummary>>
  ListFeedsResult& WithFeeds(FeedsT&& value) {
    SetFeeds(std::forward<FeedsT>(value));
    return *this;
  }
  template <typename FeedsT = FeedSummary>
  ListFeedsResult& AddFeeds(FeedsT&& value) {
    m_feedsHasBeenSet = true;
    m_feeds.emplace_back(std::forward<FeedsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that identifies the batch of results that you want to see. For
   * example, you submit a list request with MaxResults set at 5. The service returns
   * the first batch of results (up to 5) and a NextToken value. To see the next
   * batch of results, you can submit the list request a second time and specify the
   * NextToken value.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFeedsResult& WithNextToken(NextTokenT&& value) {
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
  ListFeedsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FeedSummary> m_feeds;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_feedsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
