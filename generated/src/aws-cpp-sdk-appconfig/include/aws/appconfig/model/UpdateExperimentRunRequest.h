/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeploymentParameters.h>
#include <aws/appconfig/model/TreatmentOverrides.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class UpdateExperimentRunRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API UpdateExperimentRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExperimentRun"; }

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
  UpdateExperimentRunRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
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
  UpdateExperimentRunRequest& WithExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    SetExperimentDefinitionIdentifier(std::forward<ExperimentDefinitionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run number to update.</p>
   */
  inline int GetRun() const { return m_run; }
  inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
  inline void SetRun(int value) {
    m_runHasBeenSet = true;
    m_run = value;
  }
  inline UpdateExperimentRunRequest& WithRun(int value) {
    SetRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated description for the experiment run.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateExperimentRunRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new exposure percentage. This value can only be increased from the
   * current setting.</p>
   */
  inline double GetExposurePercentage() const { return m_exposurePercentage; }
  inline bool ExposurePercentageHasBeenSet() const { return m_exposurePercentageHasBeenSet; }
  inline void SetExposurePercentage(double value) {
    m_exposurePercentageHasBeenSet = true;
    m_exposurePercentage = value;
  }
  inline UpdateExperimentRunRequest& WithExposurePercentage(double value) {
    SetExposurePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated treatment assignment overrides that assign specific entity IDs to
   * treatments, bypassing random assignment.</p>
   */
  inline const TreatmentOverrides& GetTreatmentOverrides() const { return m_treatmentOverrides; }
  inline bool TreatmentOverridesHasBeenSet() const { return m_treatmentOverridesHasBeenSet; }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  void SetTreatmentOverrides(TreatmentOverridesT&& value) {
    m_treatmentOverridesHasBeenSet = true;
    m_treatmentOverrides = std::forward<TreatmentOverridesT>(value);
  }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  UpdateExperimentRunRequest& WithTreatmentOverrides(TreatmentOverridesT&& value) {
    SetTreatmentOverrides(std::forward<TreatmentOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated deployment parameters for the experiment run.</p>
   */
  inline const DeploymentParameters& GetDeploymentParameters() const { return m_deploymentParameters; }
  inline bool DeploymentParametersHasBeenSet() const { return m_deploymentParametersHasBeenSet; }
  template <typename DeploymentParametersT = DeploymentParameters>
  void SetDeploymentParameters(DeploymentParametersT&& value) {
    m_deploymentParametersHasBeenSet = true;
    m_deploymentParameters = std::forward<DeploymentParametersT>(value);
  }
  template <typename DeploymentParametersT = DeploymentParameters>
  UpdateExperimentRunRequest& WithDeploymentParameters(DeploymentParametersT&& value) {
    SetDeploymentParameters(std::forward<DeploymentParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_experimentDefinitionIdentifier;

  int m_run{0};

  Aws::String m_description;

  double m_exposurePercentage{0.0};

  TreatmentOverrides m_treatmentOverrides;

  DeploymentParameters m_deploymentParameters;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_experimentDefinitionIdentifierHasBeenSet = false;
  bool m_runHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_exposurePercentageHasBeenSet = false;
  bool m_treatmentOverridesHasBeenSet = false;
  bool m_deploymentParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
