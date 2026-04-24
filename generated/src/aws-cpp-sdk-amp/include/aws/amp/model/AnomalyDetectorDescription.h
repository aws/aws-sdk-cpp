/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AnomalyDetectorConfiguration.h>
#include <aws/amp/model/AnomalyDetectorMissingDataAction.h>
#include <aws/amp/model/AnomalyDetectorStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PrometheusService {
namespace Model {

/**
 * <p>Detailed information about an anomaly detector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AnomalyDetectorDescription">AWS
 * API Reference</a></p>
 */
class AnomalyDetectorDescription {
 public:
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorDescription() = default;
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API AnomalyDetectorDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the anomaly detector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AnomalyDetectorDescription& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the anomaly detector.</p>
   */
  inline const Aws::String& GetAnomalyDetectorId() const { return m_anomalyDetectorId; }
  inline bool AnomalyDetectorIdHasBeenSet() const { return m_anomalyDetectorIdHasBeenSet; }
  template <typename AnomalyDetectorIdT = Aws::String>
  void SetAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    m_anomalyDetectorIdHasBeenSet = true;
    m_anomalyDetectorId = std::forward<AnomalyDetectorIdT>(value);
  }
  template <typename AnomalyDetectorIdT = Aws::String>
  AnomalyDetectorDescription& WithAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    SetAnomalyDetectorId(std::forward<AnomalyDetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name of the anomaly detector.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  AnomalyDetectorDescription& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency, in seconds, at which the anomaly detector evaluates
   * metrics.</p>
   */
  inline int GetEvaluationIntervalInSeconds() const { return m_evaluationIntervalInSeconds; }
  inline bool EvaluationIntervalInSecondsHasBeenSet() const { return m_evaluationIntervalInSecondsHasBeenSet; }
  inline void SetEvaluationIntervalInSeconds(int value) {
    m_evaluationIntervalInSecondsHasBeenSet = true;
    m_evaluationIntervalInSeconds = value;
  }
  inline AnomalyDetectorDescription& WithEvaluationIntervalInSeconds(int value) {
    SetEvaluationIntervalInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action taken when data is missing during evaluation.</p>
   */
  inline const AnomalyDetectorMissingDataAction& GetMissingDataAction() const { return m_missingDataAction; }
  inline bool MissingDataActionHasBeenSet() const { return m_missingDataActionHasBeenSet; }
  template <typename MissingDataActionT = AnomalyDetectorMissingDataAction>
  void SetMissingDataAction(MissingDataActionT&& value) {
    m_missingDataActionHasBeenSet = true;
    m_missingDataAction = std::forward<MissingDataActionT>(value);
  }
  template <typename MissingDataActionT = AnomalyDetectorMissingDataAction>
  AnomalyDetectorDescription& WithMissingDataAction(MissingDataActionT&& value) {
    SetMissingDataAction(std::forward<MissingDataActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The algorithm configuration of the anomaly detector.</p>
   */
  inline const AnomalyDetectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = AnomalyDetectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = AnomalyDetectorConfiguration>
  AnomalyDetectorDescription& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Managed Service for Prometheus metric labels associated with the
   * anomaly detector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
  inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
  template <typename LabelsT = Aws::Map<Aws::String, Aws::String>>
  void SetLabels(LabelsT&& value) {
    m_labelsHasBeenSet = true;
    m_labels = std::forward<LabelsT>(value);
  }
  template <typename LabelsT = Aws::Map<Aws::String, Aws::String>>
  AnomalyDetectorDescription& WithLabels(LabelsT&& value) {
    SetLabels(std::forward<LabelsT>(value));
    return *this;
  }
  template <typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
  AnomalyDetectorDescription& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
    m_labelsHasBeenSet = true;
    m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the anomaly detector.</p>
   */
  inline const AnomalyDetectorStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = AnomalyDetectorStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = AnomalyDetectorStatus>
  AnomalyDetectorDescription& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the anomaly detector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AnomalyDetectorDescription& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the anomaly detector was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  AnomalyDetectorDescription& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags applied to the anomaly detector.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  AnomalyDetectorDescription& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  AnomalyDetectorDescription& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_anomalyDetectorId;

  Aws::String m_alias;

  int m_evaluationIntervalInSeconds{0};

  AnomalyDetectorMissingDataAction m_missingDataAction;

  AnomalyDetectorConfiguration m_configuration;

  Aws::Map<Aws::String, Aws::String> m_labels;

  AnomalyDetectorStatus m_status;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_arnHasBeenSet = false;
  bool m_anomalyDetectorIdHasBeenSet = false;
  bool m_aliasHasBeenSet = false;
  bool m_evaluationIntervalInSecondsHasBeenSet = false;
  bool m_missingDataActionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_labelsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
