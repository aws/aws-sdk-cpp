/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/TreatmentInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class CreateExperimentDefinitionRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API CreateExperimentDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExperimentDefinition"; }

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
  CreateExperimentDefinitionRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
    SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the experiment definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateExperimentDefinitionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration profile ID or name that stores the feature flag.</p>
   */
  inline const Aws::String& GetConfigurationProfileIdentifier() const { return m_configurationProfileIdentifier; }
  inline bool ConfigurationProfileIdentifierHasBeenSet() const { return m_configurationProfileIdentifierHasBeenSet; }
  template <typename ConfigurationProfileIdentifierT = Aws::String>
  void SetConfigurationProfileIdentifier(ConfigurationProfileIdentifierT&& value) {
    m_configurationProfileIdentifierHasBeenSet = true;
    m_configurationProfileIdentifier = std::forward<ConfigurationProfileIdentifierT>(value);
  }
  template <typename ConfigurationProfileIdentifierT = Aws::String>
  CreateExperimentDefinitionRequest& WithConfigurationProfileIdentifier(ConfigurationProfileIdentifierT&& value) {
    SetConfigurationProfileIdentifier(std::forward<ConfigurationProfileIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment ID or name where the experiment will run.</p>
   */
  inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
  inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
  template <typename EnvironmentIdentifierT = Aws::String>
  void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) {
    m_environmentIdentifierHasBeenSet = true;
    m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value);
  }
  template <typename EnvironmentIdentifierT = Aws::String>
  CreateExperimentDefinitionRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) {
    SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the existing feature flag to use with the experiment.</p>
   */
  inline const Aws::String& GetFlagKey() const { return m_flagKey; }
  inline bool FlagKeyHasBeenSet() const { return m_flagKeyHasBeenSet; }
  template <typename FlagKeyT = Aws::String>
  void SetFlagKey(FlagKeyT&& value) {
    m_flagKeyHasBeenSet = true;
    m_flagKey = std::forward<FlagKeyT>(value);
  }
  template <typename FlagKeyT = Aws::String>
  CreateExperimentDefinitionRequest& WithFlagKey(FlagKeyT&& value) {
    SetFlagKey(std::forward<FlagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of treatments to evaluate during the experiment. Each treatment
   * defines a distinct variation compared to the control.</p>
   */
  inline const Aws::Vector<TreatmentInput>& GetTreatments() const { return m_treatments; }
  inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
  template <typename TreatmentsT = Aws::Vector<TreatmentInput>>
  void SetTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments = std::forward<TreatmentsT>(value);
  }
  template <typename TreatmentsT = Aws::Vector<TreatmentInput>>
  CreateExperimentDefinitionRequest& WithTreatments(TreatmentsT&& value) {
    SetTreatments(std::forward<TreatmentsT>(value));
    return *this;
  }
  template <typename TreatmentsT = TreatmentInput>
  CreateExperimentDefinitionRequest& AddTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments.emplace_back(std::forward<TreatmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control treatment that represents the baseline experience for
   * comparison.</p>
   */
  inline const TreatmentInput& GetControl() const { return m_control; }
  inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
  template <typename ControlT = TreatmentInput>
  void SetControl(ControlT&& value) {
    m_controlHasBeenSet = true;
    m_control = std::forward<ControlT>(value);
  }
  template <typename ControlT = TreatmentInput>
  CreateExperimentDefinitionRequest& WithControl(ControlT&& value) {
    SetControl(std::forward<ControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A rule that defines which users are eligible to be assigned to treatments
   * during the experiment.</p>
   */
  inline const Aws::String& GetAudienceRule() const { return m_audienceRule; }
  inline bool AudienceRuleHasBeenSet() const { return m_audienceRuleHasBeenSet; }
  template <typename AudienceRuleT = Aws::String>
  void SetAudienceRule(AudienceRuleT&& value) {
    m_audienceRuleHasBeenSet = true;
    m_audienceRule = std::forward<AudienceRuleT>(value);
  }
  template <typename AudienceRuleT = Aws::String>
  CreateExperimentDefinitionRequest& WithAudienceRule(AudienceRuleT&& value) {
    SetAudienceRule(std::forward<AudienceRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the goal or hypothesis the experiment is designed to
   * validate.</p>
   */
  inline const Aws::String& GetHypothesis() const { return m_hypothesis; }
  inline bool HypothesisHasBeenSet() const { return m_hypothesisHasBeenSet; }
  template <typename HypothesisT = Aws::String>
  void SetHypothesis(HypothesisT&& value) {
    m_hypothesisHasBeenSet = true;
    m_hypothesis = std::forward<HypothesisT>(value);
  }
  template <typename HypothesisT = Aws::String>
  CreateExperimentDefinitionRequest& WithHypothesis(HypothesisT&& value) {
    SetHypothesis(std::forward<HypothesisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the intended audience for the experiment.</p>
   */
  inline const Aws::String& GetAudienceDescription() const { return m_audienceDescription; }
  inline bool AudienceDescriptionHasBeenSet() const { return m_audienceDescriptionHasBeenSet; }
  template <typename AudienceDescriptionT = Aws::String>
  void SetAudienceDescription(AudienceDescriptionT&& value) {
    m_audienceDescriptionHasBeenSet = true;
    m_audienceDescription = std::forward<AudienceDescriptionT>(value);
  }
  template <typename AudienceDescriptionT = Aws::String>
  CreateExperimentDefinitionRequest& WithAudienceDescription(AudienceDescriptionT&& value) {
    SetAudienceDescription(std::forward<AudienceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the conditions under which you would launch the winning
   * treatment.</p>
   */
  inline const Aws::String& GetLaunchCriteria() const { return m_launchCriteria; }
  inline bool LaunchCriteriaHasBeenSet() const { return m_launchCriteriaHasBeenSet; }
  template <typename LaunchCriteriaT = Aws::String>
  void SetLaunchCriteria(LaunchCriteriaT&& value) {
    m_launchCriteriaHasBeenSet = true;
    m_launchCriteria = std::forward<LaunchCriteriaT>(value);
  }
  template <typename LaunchCriteriaT = Aws::String>
  CreateExperimentDefinitionRequest& WithLaunchCriteria(LaunchCriteriaT&& value) {
    SetLaunchCriteria(std::forward<LaunchCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the experiment definition. Tags help organize and
   * categorize your AppConfig resources.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateExperimentDefinitionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateExperimentDefinitionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_name;

  Aws::String m_configurationProfileIdentifier;

  Aws::String m_environmentIdentifier;

  Aws::String m_flagKey;

  Aws::Vector<TreatmentInput> m_treatments;

  TreatmentInput m_control;

  Aws::String m_audienceRule;

  Aws::String m_hypothesis;

  Aws::String m_audienceDescription;

  Aws::String m_launchCriteria;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configurationProfileIdentifierHasBeenSet = false;
  bool m_environmentIdentifierHasBeenSet = false;
  bool m_flagKeyHasBeenSet = false;
  bool m_treatmentsHasBeenSet = false;
  bool m_controlHasBeenSet = false;
  bool m_audienceRuleHasBeenSet = false;
  bool m_hypothesisHasBeenSet = false;
  bool m_audienceDescriptionHasBeenSet = false;
  bool m_launchCriteriaHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
