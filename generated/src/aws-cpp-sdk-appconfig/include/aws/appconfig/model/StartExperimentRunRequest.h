/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/DeploymentParameters.h>
#include <aws/appconfig/model/TreatmentOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class StartExperimentRunRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API StartExperimentRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartExperimentRun"; }

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
  StartExperimentRunRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
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
  StartExperimentRunRequest& WithExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    SetExperimentDefinitionIdentifier(std::forward<ExperimentDefinitionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of this experiment run.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StartExperimentRunRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of the target audience to expose to treatments. Set to 0 to
   * validate the experiment before exposing production users.</p>
   */
  inline double GetExposurePercentage() const { return m_exposurePercentage; }
  inline bool ExposurePercentageHasBeenSet() const { return m_exposurePercentageHasBeenSet; }
  inline void SetExposurePercentage(double value) {
    m_exposurePercentageHasBeenSet = true;
    m_exposurePercentage = value;
  }
  inline StartExperimentRunRequest& WithExposurePercentage(double value) {
    SetExposurePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Treatment assignment overrides that assign specific entity IDs to treatments
   * directly, bypassing random assignment.</p>
   */
  inline const TreatmentOverrides& GetTreatmentOverrides() const { return m_treatmentOverrides; }
  inline bool TreatmentOverridesHasBeenSet() const { return m_treatmentOverridesHasBeenSet; }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  void SetTreatmentOverrides(TreatmentOverridesT&& value) {
    m_treatmentOverridesHasBeenSet = true;
    m_treatmentOverrides = std::forward<TreatmentOverridesT>(value);
  }
  template <typename TreatmentOverridesT = TreatmentOverrides>
  StartExperimentRunRequest& WithTreatmentOverrides(TreatmentOverridesT&& value) {
    SetTreatmentOverrides(std::forward<TreatmentOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the experiment run.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartExperimentRunRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartExperimentRunRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment parameters for the experiment run, including a KMS key
   * identifier for encryption.</p>
   */
  inline const DeploymentParameters& GetDeploymentParameters() const { return m_deploymentParameters; }
  inline bool DeploymentParametersHasBeenSet() const { return m_deploymentParametersHasBeenSet; }
  template <typename DeploymentParametersT = DeploymentParameters>
  void SetDeploymentParameters(DeploymentParametersT&& value) {
    m_deploymentParametersHasBeenSet = true;
    m_deploymentParameters = std::forward<DeploymentParametersT>(value);
  }
  template <typename DeploymentParametersT = DeploymentParameters>
  StartExperimentRunRequest& WithDeploymentParameters(DeploymentParametersT&& value) {
    SetDeploymentParameters(std::forward<DeploymentParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_experimentDefinitionIdentifier;

  Aws::String m_description;

  double m_exposurePercentage{0.0};

  TreatmentOverrides m_treatmentOverrides;

  Aws::Map<Aws::String, Aws::String> m_tags;

  DeploymentParameters m_deploymentParameters;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_experimentDefinitionIdentifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_exposurePercentageHasBeenSet = false;
  bool m_treatmentOverridesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_deploymentParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
