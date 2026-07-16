/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/TreatmentInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AppConfig {
namespace Model {

/**
 */
class UpdateExperimentDefinitionRequest : public AppConfigRequest {
 public:
  AWS_APPCONFIG_API UpdateExperimentDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExperimentDefinition"; }

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
  UpdateExperimentDefinitionRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) {
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
  UpdateExperimentDefinitionRequest& WithExperimentDefinitionIdentifier(ExperimentDefinitionIdentifierT&& value) {
    SetExperimentDefinitionIdentifier(std::forward<ExperimentDefinitionIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of treatments to evaluate during the experiment. Each
   * treatment defines a distinct variation compared to the control.</p>
   */
  inline const Aws::Vector<TreatmentInput>& GetTreatments() const { return m_treatments; }
  inline bool TreatmentsHasBeenSet() const { return m_treatmentsHasBeenSet; }
  template <typename TreatmentsT = Aws::Vector<TreatmentInput>>
  void SetTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments = std::forward<TreatmentsT>(value);
  }
  template <typename TreatmentsT = Aws::Vector<TreatmentInput>>
  UpdateExperimentDefinitionRequest& WithTreatments(TreatmentsT&& value) {
    SetTreatments(std::forward<TreatmentsT>(value));
    return *this;
  }
  template <typename TreatmentsT = TreatmentInput>
  UpdateExperimentDefinitionRequest& AddTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments.emplace_back(std::forward<TreatmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated control treatment.</p>
   */
  inline const TreatmentInput& GetControl() const { return m_control; }
  inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
  template <typename ControlT = TreatmentInput>
  void SetControl(ControlT&& value) {
    m_controlHasBeenSet = true;
    m_control = std::forward<ControlT>(value);
  }
  template <typename ControlT = TreatmentInput>
  UpdateExperimentDefinitionRequest& WithControl(ControlT&& value) {
    SetControl(std::forward<ControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated hypothesis.</p>
   */
  inline const Aws::String& GetHypothesis() const { return m_hypothesis; }
  inline bool HypothesisHasBeenSet() const { return m_hypothesisHasBeenSet; }
  template <typename HypothesisT = Aws::String>
  void SetHypothesis(HypothesisT&& value) {
    m_hypothesisHasBeenSet = true;
    m_hypothesis = std::forward<HypothesisT>(value);
  }
  template <typename HypothesisT = Aws::String>
  UpdateExperimentDefinitionRequest& WithHypothesis(HypothesisT&& value) {
    SetHypothesis(std::forward<HypothesisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated audience rule.</p>
   */
  inline const Aws::String& GetAudienceRule() const { return m_audienceRule; }
  inline bool AudienceRuleHasBeenSet() const { return m_audienceRuleHasBeenSet; }
  template <typename AudienceRuleT = Aws::String>
  void SetAudienceRule(AudienceRuleT&& value) {
    m_audienceRuleHasBeenSet = true;
    m_audienceRule = std::forward<AudienceRuleT>(value);
  }
  template <typename AudienceRuleT = Aws::String>
  UpdateExperimentDefinitionRequest& WithAudienceRule(AudienceRuleT&& value) {
    SetAudienceRule(std::forward<AudienceRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated audience description.</p>
   */
  inline const Aws::String& GetAudienceDescription() const { return m_audienceDescription; }
  inline bool AudienceDescriptionHasBeenSet() const { return m_audienceDescriptionHasBeenSet; }
  template <typename AudienceDescriptionT = Aws::String>
  void SetAudienceDescription(AudienceDescriptionT&& value) {
    m_audienceDescriptionHasBeenSet = true;
    m_audienceDescription = std::forward<AudienceDescriptionT>(value);
  }
  template <typename AudienceDescriptionT = Aws::String>
  UpdateExperimentDefinitionRequest& WithAudienceDescription(AudienceDescriptionT&& value) {
    SetAudienceDescription(std::forward<AudienceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated launch criteria.</p>
   */
  inline const Aws::String& GetLaunchCriteria() const { return m_launchCriteria; }
  inline bool LaunchCriteriaHasBeenSet() const { return m_launchCriteriaHasBeenSet; }
  template <typename LaunchCriteriaT = Aws::String>
  void SetLaunchCriteria(LaunchCriteriaT&& value) {
    m_launchCriteriaHasBeenSet = true;
    m_launchCriteria = std::forward<LaunchCriteriaT>(value);
  }
  template <typename LaunchCriteriaT = Aws::String>
  UpdateExperimentDefinitionRequest& WithLaunchCriteria(LaunchCriteriaT&& value) {
    SetLaunchCriteria(std::forward<LaunchCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationIdentifier;

  Aws::String m_experimentDefinitionIdentifier;

  Aws::Vector<TreatmentInput> m_treatments;

  TreatmentInput m_control;

  Aws::String m_hypothesis;

  Aws::String m_audienceRule;

  Aws::String m_audienceDescription;

  Aws::String m_launchCriteria;
  bool m_applicationIdentifierHasBeenSet = false;
  bool m_experimentDefinitionIdentifierHasBeenSet = false;
  bool m_treatmentsHasBeenSet = false;
  bool m_controlHasBeenSet = false;
  bool m_hypothesisHasBeenSet = false;
  bool m_audienceRuleHasBeenSet = false;
  bool m_audienceDescriptionHasBeenSet = false;
  bool m_launchCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
