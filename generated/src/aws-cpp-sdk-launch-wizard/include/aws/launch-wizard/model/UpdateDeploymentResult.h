/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentDataSummary.h>

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
class UpdateDeploymentResult {
 public:
  AWS_LAUNCHWIZARD_API UpdateDeploymentResult() = default;
  AWS_LAUNCHWIZARD_API UpdateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAUNCHWIZARD_API UpdateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The deployment.</p>
   */
  inline const DeploymentDataSummary& GetDeployment() const { return m_deployment; }
  template <typename DeploymentT = DeploymentDataSummary>
  void SetDeployment(DeploymentT&& value) {
    m_deploymentHasBeenSet = true;
    m_deployment = std::forward<DeploymentT>(value);
  }
  template <typename DeploymentT = DeploymentDataSummary>
  UpdateDeploymentResult& WithDeployment(DeploymentT&& value) {
    SetDeployment(std::forward<DeploymentT>(value));
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
  UpdateDeploymentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DeploymentDataSummary m_deployment;

  Aws::String m_requestId;
  bool m_deploymentHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
