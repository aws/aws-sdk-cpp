/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentDefinitionStatus.h>
#include <aws/appconfig/model/Treatment.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {
/**
 * <p>Describes an experiment definition, including the target audience, feature
 * flag, treatments, and current status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentDefinition">AWS
 * API Reference</a></p>
 */
class GetExperimentDefinitionResult {
 public:
  AWS_APPCONFIG_API GetExperimentDefinitionResult() = default;
  AWS_APPCONFIG_API GetExperimentDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPCONFIG_API GetExperimentDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The application ID.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetExperimentDefinitionResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The experiment definition ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetExperimentDefinitionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the experiment definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetExperimentDefinitionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hypothesis that the experiment is designed to validate.</p>
   */
  inline const Aws::String& GetHypothesis() const { return m_hypothesis; }
  template <typename HypothesisT = Aws::String>
  void SetHypothesis(HypothesisT&& value) {
    m_hypothesisHasBeenSet = true;
    m_hypothesis = std::forward<HypothesisT>(value);
  }
  template <typename HypothesisT = Aws::String>
  GetExperimentDefinitionResult& WithHypothesis(HypothesisT&& value) {
    SetHypothesis(std::forward<HypothesisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the experiment definition. Valid values:
   * <code>ACTIVE</code>, <code>IDLE</code>, <code>ARCHIVED</code>.</p>
   */
  inline ExperimentDefinitionStatus GetStatus() const { return m_status; }
  inline void SetStatus(ExperimentDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetExperimentDefinitionResult& WithStatus(ExperimentDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration profile ID associated with the experiment.</p>
   */
  inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
  template <typename ConfigurationProfileIdT = Aws::String>
  void SetConfigurationProfileId(ConfigurationProfileIdT&& value) {
    m_configurationProfileIdHasBeenSet = true;
    m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value);
  }
  template <typename ConfigurationProfileIdT = Aws::String>
  GetExperimentDefinitionResult& WithConfigurationProfileId(ConfigurationProfileIdT&& value) {
    SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment ID where the experiment runs.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetExperimentDefinitionResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the feature flag used by the experiment.</p>
   */
  inline const Aws::String& GetFlagKey() const { return m_flagKey; }
  template <typename FlagKeyT = Aws::String>
  void SetFlagKey(FlagKeyT&& value) {
    m_flagKeyHasBeenSet = true;
    m_flagKey = std::forward<FlagKeyT>(value);
  }
  template <typename FlagKeyT = Aws::String>
  GetExperimentDefinitionResult& WithFlagKey(FlagKeyT&& value) {
    SetFlagKey(std::forward<FlagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule that defines which users are eligible to be assigned to
   * treatments.</p>
   */
  inline const Aws::String& GetAudienceRule() const { return m_audienceRule; }
  template <typename AudienceRuleT = Aws::String>
  void SetAudienceRule(AudienceRuleT&& value) {
    m_audienceRuleHasBeenSet = true;
    m_audienceRule = std::forward<AudienceRuleT>(value);
  }
  template <typename AudienceRuleT = Aws::String>
  GetExperimentDefinitionResult& WithAudienceRule(AudienceRuleT&& value) {
    SetAudienceRule(std::forward<AudienceRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the intended audience for the experiment.</p>
   */
  inline const Aws::String& GetAudienceDescription() const { return m_audienceDescription; }
  template <typename AudienceDescriptionT = Aws::String>
  void SetAudienceDescription(AudienceDescriptionT&& value) {
    m_audienceDescriptionHasBeenSet = true;
    m_audienceDescription = std::forward<AudienceDescriptionT>(value);
  }
  template <typename AudienceDescriptionT = Aws::String>
  GetExperimentDefinitionResult& WithAudienceDescription(AudienceDescriptionT&& value) {
    SetAudienceDescription(std::forward<AudienceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conditions under which the winning treatment should be launched.</p>
   */
  inline const Aws::String& GetLaunchCriteria() const { return m_launchCriteria; }
  template <typename LaunchCriteriaT = Aws::String>
  void SetLaunchCriteria(LaunchCriteriaT&& value) {
    m_launchCriteriaHasBeenSet = true;
    m_launchCriteria = std::forward<LaunchCriteriaT>(value);
  }
  template <typename LaunchCriteriaT = Aws::String>
  GetExperimentDefinitionResult& WithLaunchCriteria(LaunchCriteriaT&& value) {
    SetLaunchCriteria(std::forward<LaunchCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of treatments defined for the experiment.</p>
   */
  inline const Aws::Vector<Treatment>& GetTreatments() const { return m_treatments; }
  template <typename TreatmentsT = Aws::Vector<Treatment>>
  void SetTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments = std::forward<TreatmentsT>(value);
  }
  template <typename TreatmentsT = Aws::Vector<Treatment>>
  GetExperimentDefinitionResult& WithTreatments(TreatmentsT&& value) {
    SetTreatments(std::forward<TreatmentsT>(value));
    return *this;
  }
  template <typename TreatmentsT = Treatment>
  GetExperimentDefinitionResult& AddTreatments(TreatmentsT&& value) {
    m_treatmentsHasBeenSet = true;
    m_treatments.emplace_back(std::forward<TreatmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The control treatment used as the baseline for comparison.</p>
   */
  inline const Treatment& GetControl() const { return m_control; }
  template <typename ControlT = Treatment>
  void SetControl(ControlT&& value) {
    m_controlHasBeenSet = true;
    m_control = std::forward<ControlT>(value);
  }
  template <typename ControlT = Treatment>
  GetExperimentDefinitionResult& WithControl(ControlT&& value) {
    SetControl(std::forward<ControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment definition was created, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetExperimentDefinitionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment definition was last updated, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetExperimentDefinitionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt experiment
   * data.</p>
   */
  inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
  template <typename KmsKeyIdentifierT = Aws::String>
  void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    m_kmsKeyIdentifierHasBeenSet = true;
    m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value);
  }
  template <typename KmsKeyIdentifierT = Aws::String>
  GetExperimentDefinitionResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value));
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
  GetExperimentDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationId;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_hypothesis;

  ExperimentDefinitionStatus m_status{ExperimentDefinitionStatus::NOT_SET};

  Aws::String m_configurationProfileId;

  Aws::String m_environmentId;

  Aws::String m_flagKey;

  Aws::String m_audienceRule;

  Aws::String m_audienceDescription;

  Aws::String m_launchCriteria;

  Aws::Vector<Treatment> m_treatments;

  Treatment m_control;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_kmsKeyIdentifier;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_hypothesisHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationProfileIdHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_flagKeyHasBeenSet = false;
  bool m_audienceRuleHasBeenSet = false;
  bool m_audienceDescriptionHasBeenSet = false;
  bool m_launchCriteriaHasBeenSet = false;
  bool m_treatmentsHasBeenSet = false;
  bool m_controlHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_kmsKeyIdentifierHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
