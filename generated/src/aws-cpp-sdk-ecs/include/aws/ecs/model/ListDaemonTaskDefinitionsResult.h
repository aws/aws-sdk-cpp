/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonTaskDefinitionSummary.h>

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
class ListDaemonTaskDefinitionsResult {
 public:
  AWS_ECS_API ListDaemonTaskDefinitionsResult() = default;
  AWS_ECS_API ListDaemonTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API ListDaemonTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of daemon task definition summaries.</p>
   */
  inline const Aws::Vector<DaemonTaskDefinitionSummary>& GetDaemonTaskDefinitions() const { return m_daemonTaskDefinitions; }
  template <typename DaemonTaskDefinitionsT = Aws::Vector<DaemonTaskDefinitionSummary>>
  void SetDaemonTaskDefinitions(DaemonTaskDefinitionsT&& value) {
    m_daemonTaskDefinitionsHasBeenSet = true;
    m_daemonTaskDefinitions = std::forward<DaemonTaskDefinitionsT>(value);
  }
  template <typename DaemonTaskDefinitionsT = Aws::Vector<DaemonTaskDefinitionSummary>>
  ListDaemonTaskDefinitionsResult& WithDaemonTaskDefinitions(DaemonTaskDefinitionsT&& value) {
    SetDaemonTaskDefinitions(std::forward<DaemonTaskDefinitionsT>(value));
    return *this;
  }
  template <typename DaemonTaskDefinitionsT = DaemonTaskDefinitionSummary>
  ListDaemonTaskDefinitionsResult& AddDaemonTaskDefinitions(DaemonTaskDefinitionsT&& value) {
    m_daemonTaskDefinitionsHasBeenSet = true;
    m_daemonTaskDefinitions.emplace_back(std::forward<DaemonTaskDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>ListDaemonTaskDefinitions</code> request. When the results of a
   * <code>ListDaemonTaskDefinitions</code> request exceed <code>maxResults</code>,
   * this value can be used to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDaemonTaskDefinitionsResult& WithNextToken(NextTokenT&& value) {
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
  ListDaemonTaskDefinitionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DaemonTaskDefinitionSummary> m_daemonTaskDefinitions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_daemonTaskDefinitionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
