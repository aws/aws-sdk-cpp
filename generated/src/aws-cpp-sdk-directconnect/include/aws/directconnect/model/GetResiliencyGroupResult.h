/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ResiliencyGroup.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {
class GetResiliencyGroupResult {
 public:
  AWS_DIRECTCONNECT_API GetResiliencyGroupResult() = default;
  AWS_DIRECTCONNECT_API GetResiliencyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTCONNECT_API GetResiliencyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the resiliency group.</p>
   */
  inline const ResiliencyGroup& GetResiliencyGroup() const { return m_resiliencyGroup; }
  template <typename ResiliencyGroupT = ResiliencyGroup>
  void SetResiliencyGroup(ResiliencyGroupT&& value) {
    m_resiliencyGroupHasBeenSet = true;
    m_resiliencyGroup = std::forward<ResiliencyGroupT>(value);
  }
  template <typename ResiliencyGroupT = ResiliencyGroup>
  GetResiliencyGroupResult& WithResiliencyGroup(ResiliencyGroupT&& value) {
    SetResiliencyGroup(std::forward<ResiliencyGroupT>(value));
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
  GetResiliencyGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ResiliencyGroup m_resiliencyGroup;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resiliencyGroupHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
