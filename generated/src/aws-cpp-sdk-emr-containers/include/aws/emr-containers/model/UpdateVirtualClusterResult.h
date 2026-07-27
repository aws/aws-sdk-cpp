/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/VirtualCluster.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EMRContainers {
namespace Model {
/**
 * <p>Contains the virtual cluster returned after a successful update
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/UpdateVirtualClusterResponse">AWS
 * API Reference</a></p>
 */
class UpdateVirtualClusterResult {
 public:
  AWS_EMRCONTAINERS_API UpdateVirtualClusterResult() = default;
  AWS_EMRCONTAINERS_API UpdateVirtualClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_EMRCONTAINERS_API UpdateVirtualClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated virtual cluster.</p>
   */
  inline const VirtualCluster& GetVirtualCluster() const { return m_virtualCluster; }
  template <typename VirtualClusterT = VirtualCluster>
  void SetVirtualCluster(VirtualClusterT&& value) {
    m_virtualClusterHasBeenSet = true;
    m_virtualCluster = std::forward<VirtualClusterT>(value);
  }
  template <typename VirtualClusterT = VirtualCluster>
  UpdateVirtualClusterResult& WithVirtualCluster(VirtualClusterT&& value) {
    SetVirtualCluster(std::forward<VirtualClusterT>(value));
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
  UpdateVirtualClusterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  VirtualCluster m_virtualCluster;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_virtualClusterHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
