/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AnomalyDetectorConfiguration.h>
#include <aws/amp/model/AnomalyDetectorMissingDataAction.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace PrometheusService {
namespace Model {

/**
 */
class PutAnomalyDetectorRequest : public PrometheusServiceRequest {
 public:
  AWS_PROMETHEUSSERVICE_API PutAnomalyDetectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAnomalyDetector"; }

  AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the workspace containing the anomaly detector to
   * update.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  PutAnomalyDetectorRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the anomaly detector to update.</p>
   */
  inline const Aws::String& GetAnomalyDetectorId() const { return m_anomalyDetectorId; }
  inline bool AnomalyDetectorIdHasBeenSet() const { return m_anomalyDetectorIdHasBeenSet; }
  template <typename AnomalyDetectorIdT = Aws::String>
  void SetAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    m_anomalyDetectorIdHasBeenSet = true;
    m_anomalyDetectorId = std::forward<AnomalyDetectorIdT>(value);
  }
  template <typename AnomalyDetectorIdT = Aws::String>
  PutAnomalyDetectorRequest& WithAnomalyDetectorId(AnomalyDetectorIdT&& value) {
    SetAnomalyDetectorId(std::forward<AnomalyDetectorIdT>(value));
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
  inline PutAnomalyDetectorRequest& WithEvaluationIntervalInSeconds(int value) {
    SetEvaluationIntervalInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the action to take when data is missing during evaluation.</p>
   */
  inline const AnomalyDetectorMissingDataAction& GetMissingDataAction() const { return m_missingDataAction; }
  inline bool MissingDataActionHasBeenSet() const { return m_missingDataActionHasBeenSet; }
  template <typename MissingDataActionT = AnomalyDetectorMissingDataAction>
  void SetMissingDataAction(MissingDataActionT&& value) {
    m_missingDataActionHasBeenSet = true;
    m_missingDataAction = std::forward<MissingDataActionT>(value);
  }
  template <typename MissingDataActionT = AnomalyDetectorMissingDataAction>
  PutAnomalyDetectorRequest& WithMissingDataAction(MissingDataActionT&& value) {
    SetMissingDataAction(std::forward<MissingDataActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The algorithm configuration for the anomaly detector.</p>
   */
  inline const AnomalyDetectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = AnomalyDetectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = AnomalyDetectorConfiguration>
  PutAnomalyDetectorRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Managed Service for Prometheus metric labels to associate with the
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
  PutAnomalyDetectorRequest& WithLabels(LabelsT&& value) {
    SetLabels(std::forward<LabelsT>(value));
    return *this;
  }
  template <typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
  PutAnomalyDetectorRequest& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
    m_labelsHasBeenSet = true;
    m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutAnomalyDetectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;
  bool m_workspaceIdHasBeenSet = false;

  Aws::String m_anomalyDetectorId;
  bool m_anomalyDetectorIdHasBeenSet = false;

  int m_evaluationIntervalInSeconds{0};
  bool m_evaluationIntervalInSecondsHasBeenSet = false;

  AnomalyDetectorMissingDataAction m_missingDataAction;
  bool m_missingDataActionHasBeenSet = false;

  AnomalyDetectorConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_labels;
  bool m_labelsHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
