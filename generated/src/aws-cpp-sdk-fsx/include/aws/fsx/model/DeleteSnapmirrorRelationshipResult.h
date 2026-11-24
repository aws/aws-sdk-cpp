/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorRelationshipLifecycle.h>

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
class DeleteSnapmirrorRelationshipResult {
 public:
  AWS_FSX_API DeleteSnapmirrorRelationshipResult() = default;
  AWS_FSX_API DeleteSnapmirrorRelationshipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DeleteSnapmirrorRelationshipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the SnapMirror relationship that's being deleted.</p>
   */
  inline const Aws::String& GetSnapmirrorRelationshipId() const { return m_snapmirrorRelationshipId; }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  void SetSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    m_snapmirrorRelationshipIdHasBeenSet = true;
    m_snapmirrorRelationshipId = std::forward<SnapmirrorRelationshipIdT>(value);
  }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  DeleteSnapmirrorRelationshipResult& WithSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    SetSnapmirrorRelationshipId(std::forward<SnapmirrorRelationshipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the SnapMirror relationship being deleted. If the
   * <code>DeleteSnapmirrorRelationship</code> operation is successful, this value is
   * <code>DELETING</code>.</p>
   */
  inline SnapmirrorRelationshipLifecycle GetLifecycle() const { return m_lifecycle; }
  inline void SetLifecycle(SnapmirrorRelationshipLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline DeleteSnapmirrorRelationshipResult& WithLifecycle(SnapmirrorRelationshipLifecycle value) {
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
  DeleteSnapmirrorRelationshipResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_snapmirrorRelationshipId;

  SnapmirrorRelationshipLifecycle m_lifecycle{SnapmirrorRelationshipLifecycle::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorRelationshipIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
