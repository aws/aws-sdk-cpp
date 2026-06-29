/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/Treatment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>A snapshot of the experiment definition captured at the time an experiment
 * run was started. This preserves the configuration that was active during the
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentDefinitionSnapshot">AWS
 * API Reference</a></p>
 */
class ExperimentDefinitionSnapshot {
 public:
  AWS_APPCONFIG_API ExperimentDefinitionSnapshot() = default;
  AWS_APPCONFIG_API ExperimentDefinitionSnapshot(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API ExperimentDefinitionSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The application ID at the time the run was started.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  ExperimentDefinitionSnapshot& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment definition ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ExperimentDefinitionSnapshot& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the experiment definition at the time the run was started.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ExperimentDefinitionSnapshot& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hypothesis at the time the run was started.</p>
   */
  inline const Aws::String& GetHypothesis() const { return m_hypothesis; }
  inline bool HypothesisHasBeenSet() const { return m_hypothesisHasBeenSet; }
  template <typename HypothesisT = Aws::String>
  void SetHypothesis(HypothesisT&& value) {
    m_hypothesisHasBeenSet = true;
    m_hypothesis = std::forward<HypothesisT>(value);
  }
  template <typename HypothesisT = Aws::String>
  ExperimentDefinitionSnapshot& WithHypothesis(HypothesisT&& value) {
    SetHypothesis(std::forward<HypothesisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration profile ID at the time the run was started.</p>
   */
  inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
  inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
  template <typename ConfigurationProfileIdT = Aws::String>
  void SetConfigurationProfileId(ConfigurationProfileIdT&& value) {
    m_configurationProfileIdHasBeenSet = true;
    m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value);
  }
  template <typename ConfigurationProfileIdT = Aws::String>
  ExperimentDefinitionSnapshot& WithConfigurationProfileId(ConfigurationProfileIdT&& value) {
    SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment ID at the time the run was started.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  ExperimentDefinitionSnapshot& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The feature flag key at the time the run was started.</p>
   */
  inline const Aws::String& GetFlagKey() const { return m_flagKey; }
  inline bool FlagKeyHasBeenSet() const { return m_flagKeyHasBeenSet; }
  template <typename FlagKeyT = Aws::String>
  void SetFlagKey(FlagKeyT&& value) {
    m_flagKeyHasBeenSet = true;
    m_flagKey = std::forward<FlagKeyT>(value);
  }
  template <typename FlagKeyT = Aws::String>
  ExperimentDefinitionSnapshot& WithFlagKey(FlagKeyT&& value) {
    SetFlagKey(std::forward<FlagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audience rule at the time the run was started.</p>
   */
  inline const Aws::String& GetAudienceRule() const { return m_audienceRule; }
  inline bool AudienceRuleHasBeenSet() const { return m_audienceRuleHasBeenSet; }
  template <typename AudienceRuleT = Aws::String>
  void SetAudienceRule(AudienceRuleT&& value) {
    m_audienceRuleHasBeenSet = true;
    m_audienceRule = std::forward<AudienceRuleT>(value);
  }
  template <typename AudienceRuleT = Aws::String>
  ExperimentDefinitionSnapshot& WithAudienceRule(AudienceRuleT&& value) {
    SetAudienceRule(std::forward<AudienceRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audience description at the time the run was started.</p>
   */
  inline const Aws::String& GetAudienceDescription() const { return m_audienceDescription; }
  inline bool AudienceDescriptionHasBeenSet() const { return m_audienceDescriptionHasBeenSet; }
  template <typename AudienceDescriptionT = Aws::String>
  void SetAudienceDescription(AudienceDescriptionT&& value) {
    m_audienceDescriptionHasBeenSet = true;
    m_audienceDescription = std::forward<AudienceDescriptionT>(value);
  }
  template <typename AudienceDescriptionT = Aws::String>
  ExperimentDefinitionSnapshot& WithAudienceDescription(AudienceDescriptionT&& value) {
    SetAudienceDescription(std::forward<AudienceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The launch criteria at the time the run was started.</p>
   */
  inline const Aws::String& GetLaunchCriteria() const { return m_launchCriteria; }
  inline bool LaunchCriteriaHasBeenSet() const { return m_launchCriteriaHasBeenSet; }
  template <typename LaunchCriteriaT = Aws::String>
  void SetLaunchCriteria(LaunchCriteriaT&& value) {
    m_launchCriteriaHasBeenSet = true;
    m_launchCriteria = std::forward<LaunchCriteriaT>(value);
  }
  template <typename LaunchCriteriaT = Aws::String>
  ExperimentDefinitionSnapshot& WithLaunchCriteria(LaunchCriteriaT&& value) {
    SetLaunchCriteria(std::forward<LaunchCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The treatments at the time the run was started.</p>
   */
  inline const Aws::Vector<Treatment>& GetTreatments() const { return m_treatments; }
  inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
  template <typename TreatmentsT = Aws::Vector<Treatment>>
  void SetTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments = std::forward<TreatmentsT>(value);
  }
  template <typename TreatmentsT = Aws::Vector<Treatment>>
  ExperimentDefinitionSnapshot& WithTreatments(TreatmentsT&& value) {
    SetTreatments(std::forward<TreatmentsT>(value));
    return *this;
  }
  template <typename TreatmentsT = Treatment>
  ExperimentDefinitionSnapshot& AddTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments.emplace_back(std::forward<TreatmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control treatment at the time the run was started.</p>
   */
  inline const Treatment& GetControl() const { return m_control; }
  inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
  template <typename ControlT = Treatment>
  void SetControl(ControlT&& value) {
    m_controlHasBeenSet = true;
    m_control = std::forward<ControlT>(value);
  }
  template <typename ControlT = Treatment>
  ExperimentDefinitionSnapshot& WithControl(ControlT&& value) {
    SetControl(std::forward<ControlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_hypothesis;

  Aws::String m_configurationProfileId;

  Aws::String m_environmentId;

  Aws::String m_flagKey;

  Aws::String m_audienceRule;

  Aws::String m_audienceDescription;

  Aws::String m_launchCriteria;

  Aws::Vector<Treatment> m_treatments;

  Treatment m_control;
  bool m_applicationIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_hypothesisHasBeenSet = false;
  bool m_configurationProfileIdHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_flagKeyHasBeenSet = false;
  bool m_audienceRuleHasBeenSet = false;
  bool m_audienceDescriptionHasBeenSet = false;
  bool m_launchCriteriaHasBeenSet = false;
  bool m_treatmentsHasBeenSet = false;
  bool m_controlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
