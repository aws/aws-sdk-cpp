/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicy.h>

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
class UpdateSnapshotPolicyResult {
 public:
  AWS_FSX_API UpdateSnapshotPolicyResult() = default;
  AWS_FSX_API UpdateSnapshotPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API UpdateSnapshotPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the snapshot policy that was just updated.</p>
   */
  inline const SnapshotPolicy& GetSnapshotPolicy() const { return m_snapshotPolicy; }
  template <typename SnapshotPolicyT = SnapshotPolicy>
  void SetSnapshotPolicy(SnapshotPolicyT&& value) {
    m_snapshotPolicyHasBeenSet = true;
    m_snapshotPolicy = std::forward<SnapshotPolicyT>(value);
  }
  template <typename SnapshotPolicyT = SnapshotPolicy>
  UpdateSnapshotPolicyResult& WithSnapshotPolicy(SnapshotPolicyT&& value) {
    SetSnapshotPolicy(std::forward<SnapshotPolicyT>(value));
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
  UpdateSnapshotPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SnapshotPolicy m_snapshotPolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapshotPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
