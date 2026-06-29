/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ExperimentDefinitionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary information about an experiment definition.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ExperimentDefinitionSummary">AWS
 * API Reference</a></p>
 */
class ExperimentDefinitionSummary {
 public:
  AWS_APPCONFIG_API ExperimentDefinitionSummary() = default;
  AWS_APPCONFIG_API ExperimentDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API ExperimentDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The application ID.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  ExperimentDefinitionSummary& WithApplicationId(ApplicationIdT&& value) {
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
  ExperimentDefinitionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the experiment definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ExperimentDefinitionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hypothesis that the experiment is designed to validate.</p>
   */
  inline const Aws::String& GetHypothesis() const { return m_hypothesis; }
  inline bool HypothesisHasBeenSet() const { return m_hypothesisHasBeenSet; }
  template <typename HypothesisT = Aws::String>
  void SetHypothesis(HypothesisT&& value) {
    m_hypothesisHasBeenSet = true;
    m_hypothesis = std::forward<HypothesisT>(value);
  }
  template <typename HypothesisT = Aws::String>
  ExperimentDefinitionSummary& WithHypothesis(HypothesisT&& value) {
    SetHypothesis(std::forward<HypothesisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the experiment definition.</p>
   */
  inline ExperimentDefinitionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExperimentDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExperimentDefinitionSummary& WithStatus(ExperimentDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration profile ID associated with the experiment.</p>
   */
  inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
  inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
  template <typename ConfigurationProfileIdT = Aws::String>
  void SetConfigurationProfileId(ConfigurationProfileIdT&& value) {
    m_configurationProfileIdHasBeenSet = true;
    m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value);
  }
  template <typename ConfigurationProfileIdT = Aws::String>
  ExperimentDefinitionSummary& WithConfigurationProfileId(ConfigurationProfileIdT&& value) {
    SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment ID where the experiment runs.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  ExperimentDefinitionSummary& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the feature flag used by the experiment.</p>
   */
  inline const Aws::String& GetFlagKey() const { return m_flagKey; }
  inline bool FlagKeyHasBeenSet() const { return m_flagKeyHasBeenSet; }
  template <typename FlagKeyT = Aws::String>
  void SetFlagKey(FlagKeyT&& value) {
    m_flagKeyHasBeenSet = true;
    m_flagKey = std::forward<FlagKeyT>(value);
  }
  template <typename FlagKeyT = Aws::String>
  ExperimentDefinitionSummary& WithFlagKey(FlagKeyT&& value) {
    SetFlagKey(std::forward<FlagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the experiment definition was created, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ExperimentDefinitionSummary& WithCreatedAt(CreatedAtT&& value) {
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
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ExperimentDefinitionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_hypothesis;

  ExperimentDefinitionStatus m_status{ExperimentDefinitionStatus::NOT_SET};

  Aws::String m_configurationProfileId;

  Aws::String m_environmentId;

  Aws::String m_flagKey;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_applicationIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_hypothesisHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationProfileIdHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_flagKeyHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
