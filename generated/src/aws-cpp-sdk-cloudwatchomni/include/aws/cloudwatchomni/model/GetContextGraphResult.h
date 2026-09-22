/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/Node.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
/**
 * <p>The response containing the requested slice of the context
 * graph.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetContextGraphOutput">AWS
 * API Reference</a></p>
 */
class GetContextGraphResult {
 public:
  AWS_CLOUDWATCHOMNI_API GetContextGraphResult() = default;
  AWS_CLOUDWATCHOMNI_API GetContextGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API GetContextGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The page of nodes matching the request. This is the paginated collection.</p>
   */
  inline const Aws::Vector<Node>& GetNodes() const { return m_nodes; }
  template <typename NodesT = Aws::Vector<Node>>
  void SetNodes(NodesT&& value) {
    m_nodesHasBeenSet = true;
    m_nodes = std::forward<NodesT>(value);
  }
  template <typename NodesT = Aws::Vector<Node>>
  GetContextGraphResult& WithNodes(NodesT&& value) {
    SetNodes(std::forward<NodesT>(value));
    return *this;
  }
  template <typename NodesT = Node>
  GetContextGraphResult& AddNodes(NodesT&& value) {
    m_nodesHasBeenSet = true;
    m_nodes.emplace_back(std::forward<NodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for the next page; absent when there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetContextGraphResult& WithNextToken(NextTokenT&& value) {
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
  GetContextGraphResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Node> m_nodes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nodesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
