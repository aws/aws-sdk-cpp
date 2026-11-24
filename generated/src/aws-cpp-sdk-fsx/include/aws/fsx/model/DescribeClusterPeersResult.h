/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/ClusterPeer.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {
class DescribeClusterPeersResult {
 public:
  AWS_FSX_API DescribeClusterPeersResult() = default;
  AWS_FSX_API DescribeClusterPeersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DescribeClusterPeersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Describes each cluster peer returned by the <code>DescribeClusterPeers</code>
   * operation.</p>
   */
  inline const Aws::Vector<ClusterPeer>& GetClusterPeers() const { return m_clusterPeers; }
  template <typename ClusterPeersT = Aws::Vector<ClusterPeer>>
  void SetClusterPeers(ClusterPeersT&& value) {
    m_clusterPeersHasBeenSet = true;
    m_clusterPeers = std::forward<ClusterPeersT>(value);
  }
  template <typename ClusterPeersT = Aws::Vector<ClusterPeer>>
  DescribeClusterPeersResult& WithClusterPeers(ClusterPeersT&& value) {
    SetClusterPeers(std::forward<ClusterPeersT>(value));
    return *this;
  }
  template <typename ClusterPeersT = ClusterPeer>
  DescribeClusterPeersResult& AddClusterPeers(ClusterPeersT&& value) {
    m_clusterPeersHasBeenSet = true;
    m_clusterPeers.emplace_back(std::forward<ClusterPeersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeClusterPeersResult& WithNextToken(NextTokenT&& value) {
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
  DescribeClusterPeersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ClusterPeer> m_clusterPeers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterPeersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
