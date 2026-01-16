/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionDataSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {
class GetDeploymentPatternVersionResult {
 public:
  AWS_LAUNCHWIZARD_API GetDeploymentPatternVersionResult() = default;
  AWS_LAUNCHWIZARD_API GetDeploymentPatternVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAUNCHWIZARD_API GetDeploymentPatternVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The deployment pattern version.</p>
   */
  inline const DeploymentPatternVersionDataSummary& GetDeploymentPatternVersion() const { return m_deploymentPatternVersion; }
  template <typename DeploymentPatternVersionT = DeploymentPatternVersionDataSummary>
  void SetDeploymentPatternVersion(DeploymentPatternVersionT&& value) {
    m_deploymentPatternVersionHasBeenSet = true;
    m_deploymentPatternVersion = std::forward<DeploymentPatternVersionT>(value);
  }
  template <typename DeploymentPatternVersionT = DeploymentPatternVersionDataSummary>
  GetDeploymentPatternVersionResult& WithDeploymentPatternVersion(DeploymentPatternVersionT&& value) {
    SetDeploymentPatternVersion(std::forward<DeploymentPatternVersionT>(value));
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
  GetDeploymentPatternVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DeploymentPatternVersionDataSummary m_deploymentPatternVersion;

  Aws::String m_requestId;
  bool m_deploymentPatternVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
