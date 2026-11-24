/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicy.h>

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
class UpdateSnapmirrorPolicyResult {
 public:
  AWS_FSX_API UpdateSnapmirrorPolicyResult() = default;
  AWS_FSX_API UpdateSnapmirrorPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API UpdateSnapmirrorPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the SnapMirror policy that was just updated.</p>
   */
  inline const SnapmirrorPolicy& GetSnapmirrorPolicy() const { return m_snapmirrorPolicy; }
  template <typename SnapmirrorPolicyT = SnapmirrorPolicy>
  void SetSnapmirrorPolicy(SnapmirrorPolicyT&& value) {
    m_snapmirrorPolicyHasBeenSet = true;
    m_snapmirrorPolicy = std::forward<SnapmirrorPolicyT>(value);
  }
  template <typename SnapmirrorPolicyT = SnapmirrorPolicy>
  UpdateSnapmirrorPolicyResult& WithSnapmirrorPolicy(SnapmirrorPolicyT&& value) {
    SetSnapmirrorPolicy(std::forward<SnapmirrorPolicyT>(value));
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
  UpdateSnapmirrorPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SnapmirrorPolicy m_snapmirrorPolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
