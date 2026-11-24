/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorRelationship.h>

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
class CreateSnapmirrorRelationshipResult {
 public:
  AWS_FSX_API CreateSnapmirrorRelationshipResult() = default;
  AWS_FSX_API CreateSnapmirrorRelationshipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API CreateSnapmirrorRelationshipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the SnapMirror relationship.</p>
   */
  inline const SnapmirrorRelationship& GetSnapmirrorRelationship() const { return m_snapmirrorRelationship; }
  template <typename SnapmirrorRelationshipT = SnapmirrorRelationship>
  void SetSnapmirrorRelationship(SnapmirrorRelationshipT&& value) {
    m_snapmirrorRelationshipHasBeenSet = true;
    m_snapmirrorRelationship = std::forward<SnapmirrorRelationshipT>(value);
  }
  template <typename SnapmirrorRelationshipT = SnapmirrorRelationship>
  CreateSnapmirrorRelationshipResult& WithSnapmirrorRelationship(SnapmirrorRelationshipT&& value) {
    SetSnapmirrorRelationship(std::forward<SnapmirrorRelationshipT>(value));
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
  CreateSnapmirrorRelationshipResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SnapmirrorRelationship m_snapmirrorRelationship;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_snapmirrorRelationshipHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
