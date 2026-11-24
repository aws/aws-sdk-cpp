/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
class UpdateClusterPeerResult {
 public:
  AWS_FSX_API UpdateClusterPeerResult() = default;
  AWS_FSX_API UpdateClusterPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API UpdateClusterPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the cluster peer that was just updated.</p>
   */
  inline const ClusterPeer& GetClusterPeer() const { return m_clusterPeer; }
  template <typename ClusterPeerT = ClusterPeer>
  void SetClusterPeer(ClusterPeerT&& value) {
    m_clusterPeerHasBeenSet = true;
    m_clusterPeer = std::forward<ClusterPeerT>(value);
  }
  template <typename ClusterPeerT = ClusterPeer>
  UpdateClusterPeerResult& WithClusterPeer(ClusterPeerT&& value) {
    SetClusterPeer(std::forward<ClusterPeerT>(value));
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
  UpdateClusterPeerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ClusterPeer m_clusterPeer;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterPeerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
