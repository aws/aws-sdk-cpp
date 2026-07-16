/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeploymentParameters.h>
#include <aws/appconfig/model/ExperimentRunResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class StopExperimentRunRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API StopExperimentRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopExperimentRun"; }

  AWS_APPCONFIG_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The application ID or name.</p>
   */
  inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
  inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
  template <typename ApplicationIdentifierT = Aws::String>
  void SetApplicationIdentifier(ApplicationIdentifierT&& value) {
    m_applicationIdentifierHasBeenSet = true;
    m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value);
  }
  template <typename ApplicationIdentifierT = Aws::String>
  StopExperimentRunRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
    SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment definition ID or name.</p>
   */
  inline const Aws::String& GetExperimentDefinitionIdentifier() const { return m_experimentDefinitionIdentifier; }
  inline bool ExperimentDefinitionIdentifierHasBeenSet() const { return m_experimentDefinitionIdentifierHasBeenSet; }
  template <typename ExperimentDefinitionIdentifierT = Aws::String>
  void SetExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    m_experimentDefinitionIdentifierHasBeenSet = true;
    m_experimentDefinitionIdentifier = std::forward<ExperimentDefinitionIdentifierT>(value);
  }
  template <typename ExperimentDefinitionIdentifierT = Aws::String>
  StopExperimentRunRequest& WithExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    SetExperimentDefinitionIdentifier(std::forward<ExperimentDefinitionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run number to stop.</p>
   */
  inline int GetRun() const { return m_run; }
  inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
  inline void SetRun(int value) {
    m_runHasBeenSet = true;
    m_run = value;
  }
  inline StopExperimentRunRequest& WithRun(int value) {
    SetRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of the experiment run, including an executive summary and reasons
   * for or against launching.</p>
   */
  inline const ExperimentRunResult& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = ExperimentRunResult>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = ExperimentRunResult>
  StopExperimentRunRequest& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment parameters for the stop operation.</p>
   */
  inline const DeploymentParameters& GetDeploymentParameters() const { return m_deploymentParameters; }
  inline bool DeploymentParametersHasBeenSet() const { return m_deploymentParametersHasBeenSet; }
  template <typename DeploymentParametersT = DeploymentParameters>
  void SetDeploymentParameters(DeploymentParametersT&& value) {
    m_deploymentParametersHasBeenSet = true;
    m_deploymentParameters = std::forward<DeploymentParametersT>(value);
  }
  template <typename DeploymentParametersT = DeploymentParameters>
  StopExperimentRunRequest& WithDeploymentParameters(DeploymentParametersT&& value) {
    SetDeploymentParameters(std::forward<DeploymentParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_experimentDefinitionIdentifier;

  int m_run{0};

  ExperimentRunResult m_result;

  DeploymentParameters m_deploymentParameters;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_experimentDefinitionIdentifierHasBeenSet = false;
  bool m_runHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_deploymentParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
