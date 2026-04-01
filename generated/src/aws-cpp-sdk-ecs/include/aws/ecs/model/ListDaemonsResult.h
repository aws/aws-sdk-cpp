/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
class ListDaemonsResult {
 public:
  AWS_ECS_API ListDaemonsResult() = default;
  AWS_ECS_API ListDaemonsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API ListDaemonsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of daemon summaries.</p>
   */
  inline const Aws::Vector<DaemonSummary>& GetDaemonSummariesList() const { return m_daemonSummariesList; }
  template <typename DaemonSummariesListT = Aws::Vector<DaemonSummary>>
  void SetDaemonSummariesList(DaemonSummariesListT&& value) {
    m_daemonSummariesListHasBeenSet = true;
    m_daemonSummariesList = std::forward<DaemonSummariesListT>(value);
  }
  template <typename DaemonSummariesListT = Aws::Vector<DaemonSummary>>
  ListDaemonsResult& WithDaemonSummariesList(DaemonSummariesListT&& value) {
    SetDaemonSummariesList(std::forward<DaemonSummariesListT>(value));
    return *this;
  }
  template <typename DaemonSummariesListT = DaemonSummary>
  ListDaemonsResult& AddDaemonSummariesList(DaemonSummariesListT&& value) {
    m_daemonSummariesListHasBeenSet = true;
    m_daemonSummariesList.emplace_back(std::forward<DaemonSummariesListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListDaemons</code> request. When the results of a <code>ListDaemons</code>
   * request exceed <code>maxResults</code>, this value can be used to retrieve the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDaemonsResult& WithNextToken(NextTokenT&& value) {
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
  ListDaemonsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DaemonSummary> m_daemonSummariesList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonSummariesListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
