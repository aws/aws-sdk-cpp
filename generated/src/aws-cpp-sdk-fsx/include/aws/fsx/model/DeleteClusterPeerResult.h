/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/ClusterPeerLifecycle.h>

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
class DeleteClusterPeerResult {
 public:
  AWS_FSX_API DeleteClusterPeerResult() = default;
  AWS_FSX_API DeleteClusterPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DeleteClusterPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the cluster peer that's being deleted.</p>
   */
  inline const Aws::String& GetClusterPeerId() const { return m_clusterPeerId; }
  template <typename ClusterPeerIdT = Aws::String>
  void SetClusterPeerId(ClusterPeerIdT&& value) {
    m_clusterPeerIdHasBeenSet = true;
    m_clusterPeerId = std::forward<ClusterPeerIdT>(value);
  }
  template <typename ClusterPeerIdT = Aws::String>
  DeleteClusterPeerResult& WithClusterPeerId(ClusterPeerIdT&& value) {
    SetClusterPeerId(std::forward<ClusterPeerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the cluster peer being deleted. If the
   * <code>DeleteClusterPeer</code> operation is successful, this value is
   * <code>DELETING</code>.</p>
   */
  inline ClusterPeerLifecycle GetLifecycle() const { return m_lifecycle; }
  inline void SetLifecycle(ClusterPeerLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline DeleteClusterPeerResult& WithLifecycle(ClusterPeerLifecycle value) {
    SetLifecycle(value);
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
  DeleteClusterPeerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterPeerId;

  ClusterPeerLifecycle m_lifecycle{ClusterPeerLifecycle::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterPeerIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
