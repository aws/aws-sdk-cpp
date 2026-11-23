/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicyLifecycle.h>

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
class DeleteSnapmirrorPolicyResult {
 public:
  AWS_FSX_API DeleteSnapmirrorPolicyResult() = default;
  AWS_FSX_API DeleteSnapmirrorPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DeleteSnapmirrorPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the SnapMirror policy that's being deleted.</p>
   */
  inline const Aws::String& GetSnapmirrorPolicyId() const { return m_snapmirrorPolicyId; }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  void SetSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    m_snapmirrorPolicyIdHasBeenSet = true;
    m_snapmirrorPolicyId = std::forward<SnapmirrorPolicyIdT>(value);
  }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  DeleteSnapmirrorPolicyResult& WithSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    SetSnapmirrorPolicyId(std::forward<SnapmirrorPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the SnapMirror policy being deleted. If the
   * <code>DeleteSnapmirrorPolicy</code> operation is successful, this value is
   * <code>DELETING</code>.</p>
   */
  inline SnapmirrorPolicyLifecycle GetLifecycle() const { return m_lifecycle; }
  inline void SetLifecycle(SnapmirrorPolicyLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline DeleteSnapmirrorPolicyResult& WithLifecycle(SnapmirrorPolicyLifecycle value) {
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
  DeleteSnapmirrorPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_snapmirrorPolicyId;

  SnapmirrorPolicyLifecycle m_lifecycle{SnapmirrorPolicyLifecycle::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorPolicyIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
