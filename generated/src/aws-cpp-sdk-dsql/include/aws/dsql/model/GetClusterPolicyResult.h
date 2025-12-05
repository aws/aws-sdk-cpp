/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {
class GetClusterPolicyResult {
 public:
  AWS_DSQL_API GetClusterPolicyResult() = default;
  AWS_DSQL_API GetClusterPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DSQL_API GetClusterPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The resource-based policy document attached to the cluster, returned as a
   * JSON string.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  GetClusterPolicyResult& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the policy document. This version number is incremented each
   * time the policy is updated.</p>
   */
  inline const Aws::String& GetPolicyVersion() const { return m_policyVersion; }
  template <typename PolicyVersionT = Aws::String>
  void SetPolicyVersion(PolicyVersionT&& value) {
    m_policyVersionHasBeenSet = true;
    m_policyVersion = std::forward<PolicyVersionT>(value);
  }
  template <typename PolicyVersionT = Aws::String>
  GetClusterPolicyResult& WithPolicyVersion(PolicyVersionT&& value) {
    SetPolicyVersion(std::forward<PolicyVersionT>(value));
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
  GetClusterPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policy;

  Aws::String m_policyVersion;

  Aws::String m_requestId;
  bool m_policyHasBeenSet = false;
  bool m_policyVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
