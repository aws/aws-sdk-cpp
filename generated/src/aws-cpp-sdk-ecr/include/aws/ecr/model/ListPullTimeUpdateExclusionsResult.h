/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {
class ListPullTimeUpdateExclusionsResult {
 public:
  AWS_ECR_API ListPullTimeUpdateExclusionsResult() = default;
  AWS_ECR_API ListPullTimeUpdateExclusionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API ListPullTimeUpdateExclusionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of IAM principal ARNs that are excluded from having their image pull
   * times recorded.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPullTimeUpdateExclusions() const { return m_pullTimeUpdateExclusions; }
  template <typename PullTimeUpdateExclusionsT = Aws::Vector<Aws::String>>
  void SetPullTimeUpdateExclusions(PullTimeUpdateExclusionsT&& value) {
    m_pullTimeUpdateExclusionsHasBeenSet = true;
    m_pullTimeUpdateExclusions = std::forward<PullTimeUpdateExclusionsT>(value);
  }
  template <typename PullTimeUpdateExclusionsT = Aws::Vector<Aws::String>>
  ListPullTimeUpdateExclusionsResult& WithPullTimeUpdateExclusions(PullTimeUpdateExclusionsT&& value) {
    SetPullTimeUpdateExclusions(std::forward<PullTimeUpdateExclusionsT>(value));
    return *this;
  }
  template <typename PullTimeUpdateExclusionsT = Aws::String>
  ListPullTimeUpdateExclusionsResult& AddPullTimeUpdateExclusions(PullTimeUpdateExclusionsT&& value) {
    m_pullTimeUpdateExclusionsHasBeenSet = true;
    m_pullTimeUpdateExclusions.emplace_back(std::forward<PullTimeUpdateExclusionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListPullTimeUpdateExclusions</code> request. When the results of a
   * <code>ListPullTimeUpdateExclusions</code> request exceed
   * <code>maxResults</code>, this value can be used to retrieve the next page of
   * results. This value is <code>null</code> when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPullTimeUpdateExclusionsResult& WithNextToken(NextTokenT&& value) {
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
  ListPullTimeUpdateExclusionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_pullTimeUpdateExclusions;
  bool m_pullTimeUpdateExclusionsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
