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
class DeleteClusterPolicyResult {
 public:
  AWS_DSQL_API DeleteClusterPolicyResult() = default;
  AWS_DSQL_API DeleteClusterPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DSQL_API DeleteClusterPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The version of the policy that was deleted.</p>
   */
  inline const Aws::String& GetPolicyVersion() const { return m_policyVersion; }
  template <typename PolicyVersionT = Aws::String>
  void SetPolicyVersion(PolicyVersionT&& value) {
    m_policyVersionHasBeenSet = true;
    m_policyVersion = std::forward<PolicyVersionT>(value);
  }
  template <typename PolicyVersionT = Aws::String>
  DeleteClusterPolicyResult& WithPolicyVersion(PolicyVersionT&& value) {
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
  DeleteClusterPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyVersion;

  Aws::String m_requestId;
  bool m_policyVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
