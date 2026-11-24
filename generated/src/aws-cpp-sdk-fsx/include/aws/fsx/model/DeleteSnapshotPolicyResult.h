/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicyLifecycle.h>

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
class DeleteSnapshotPolicyResult {
 public:
  AWS_FSX_API DeleteSnapshotPolicyResult() = default;
  AWS_FSX_API DeleteSnapshotPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DeleteSnapshotPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the snapshot policy that's being deleted.</p>
   */
  inline const Aws::String& GetSnapshotPolicyId() const { return m_snapshotPolicyId; }
  template <typename SnapshotPolicyIdT = Aws::String>
  void SetSnapshotPolicyId(SnapshotPolicyIdT&& value) {
    m_snapshotPolicyIdHasBeenSet = true;
    m_snapshotPolicyId = std::forward<SnapshotPolicyIdT>(value);
  }
  template <typename SnapshotPolicyIdT = Aws::String>
  DeleteSnapshotPolicyResult& WithSnapshotPolicyId(SnapshotPolicyIdT&& value) {
    SetSnapshotPolicyId(std::forward<SnapshotPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the snapshot policy being deleted. If the
   * <code>DeleteSnapshotPolicy</code> operation is successful, this value is
   * <code>DELETING</code>.</p>
   */
  inline SnapshotPolicyLifecycle GetLifecycle() const { return m_lifecycle; }
  inline void SetLifecycle(SnapshotPolicyLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline DeleteSnapshotPolicyResult& WithLifecycle(SnapshotPolicyLifecycle value) {
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
  DeleteSnapshotPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_snapshotPolicyId;

  SnapshotPolicyLifecycle m_lifecycle{SnapshotPolicyLifecycle::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotPolicyIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
