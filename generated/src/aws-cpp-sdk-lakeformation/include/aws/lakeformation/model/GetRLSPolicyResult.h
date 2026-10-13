/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/RLSPolicy.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {
class GetRLSPolicyResult {
 public:
  AWS_LAKEFORMATION_API GetRLSPolicyResult() = default;
  AWS_LAKEFORMATION_API GetRLSPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAKEFORMATION_API GetRLSPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An <code>RLSPolicy</code> structure containing the definition of the
   * requested row-level security policy.</p>
   */
  inline const RLSPolicy& GetRLSPolicy() const { return m_rLSPolicy; }
  template <typename RLSPolicyT = RLSPolicy>
  void SetRLSPolicy(RLSPolicyT&& value) {
    m_rLSPolicyHasBeenSet = true;
    m_rLSPolicy = std::forward<RLSPolicyT>(value);
  }
  template <typename RLSPolicyT = RLSPolicy>
  GetRLSPolicyResult& WithRLSPolicy(RLSPolicyT&& value) {
    SetRLSPolicy(std::forward<RLSPolicyT>(value));
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
  GetRLSPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RLSPolicy m_rLSPolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rLSPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
