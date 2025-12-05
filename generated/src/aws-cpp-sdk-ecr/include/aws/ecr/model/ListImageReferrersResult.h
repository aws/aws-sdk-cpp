/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageReferrer.h>

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
class ListImageReferrersResult {
 public:
  AWS_ECR_API ListImageReferrersResult() = default;
  AWS_ECR_API ListImageReferrersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API ListImageReferrersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of artifacts associated with the subject image.</p>
   */
  inline const Aws::Vector<ImageReferrer>& GetReferrers() const { return m_referrers; }
  template <typename ReferrersT = Aws::Vector<ImageReferrer>>
  void SetReferrers(ReferrersT&& value) {
    m_referrersHasBeenSet = true;
    m_referrers = std::forward<ReferrersT>(value);
  }
  template <typename ReferrersT = Aws::Vector<ImageReferrer>>
  ListImageReferrersResult& WithReferrers(ReferrersT&& value) {
    SetReferrers(std::forward<ReferrersT>(value));
    return *this;
  }
  template <typename ReferrersT = ImageReferrer>
  ListImageReferrersResult& AddReferrers(ReferrersT&& value) {
    m_referrersHasBeenSet = true;
    m_referrers.emplace_back(std::forward<ReferrersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListImageReferrers</code> request. When the results of a
   * <code>ListImageReferrers</code> request exceed <code>maxResults</code>, this
   * value can be used to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListImageReferrersResult& WithNextToken(NextTokenT&& value) {
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
  ListImageReferrersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ImageReferrer> m_referrers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_referrersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
