/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/CellInformation.h>
#include <aws/datazone/model/ComputeConfig.h>
#include <aws/datazone/model/EnvironmentConfig.h>
#include <aws/datazone/model/NetworkConfig.h>
#include <aws/datazone/model/NotebookRunError.h>
#include <aws/datazone/model/NotebookRunStatus.h>
#include <aws/datazone/model/StorageConfig.h>
#include <aws/datazone/model/TimeoutConfig.h>
#include <aws/datazone/model/TriggerSource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class StartNotebookRunResult {
 public:
  AWS_DATAZONE_API StartNotebookRunResult() = default;
  AWS_DATAZONE_API StartNotebookRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API StartNotebookRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the notebook run.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartNotebookRunResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  StartNotebookRunResult& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook run.</p>
   */
  inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
  template <typename OwningProjectIdT = Aws::String>
  void SetOwningProjectId(OwningProjectIdT&& value) {
    m_owningProjectIdHasBeenSet = true;
    m_owningProjectId = std::forward<OwningProjectIdT>(value);
  }
  template <typename OwningProjectIdT = Aws::String>
  StartNotebookRunResult& WithOwningProjectId(OwningProjectIdT&& value) {
    SetOwningProjectId(std::forward<OwningProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook.</p>
   */
  inline const Aws::String& GetNotebookId() const { return m_notebookId; }
  template <typename NotebookIdT = Aws::String>
  void SetNotebookId(NotebookIdT&& value) {
    m_notebookIdHasBeenSet = true;
    m_notebookId = std::forward<NotebookIdT>(value);
  }
  template <typename NotebookIdT = Aws::String>
  StartNotebookRunResult& WithNotebookId(NotebookIdT&& value) {
    SetNotebookId(std::forward<NotebookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the schedule associated with the notebook run.</p>
   */
  inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
  template <typename ScheduleIdT = Aws::String>
  void SetScheduleId(ScheduleIdT&& value) {
    m_scheduleIdHasBeenSet = true;
    m_scheduleId = std::forward<ScheduleIdT>(value);
  }
  template <typename ScheduleIdT = Aws::String>
  StartNotebookRunResult& WithScheduleId(ScheduleIdT&& value) {
    SetScheduleId(std::forward<ScheduleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the notebook run.</p>
   */
  inline NotebookRunStatus GetStatus() const { return m_status; }
  inline void SetStatus(NotebookRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartNotebookRunResult& WithStatus(NotebookRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ordered list of cells in the notebook run.</p>
   */
  inline const Aws::Vector<CellInformation>& GetCellOrder() const { return m_cellOrder; }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  void SetCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder = std::forward<CellOrderT>(value);
  }
  template <typename CellOrderT = Aws::Vector<CellInformation>>
  StartNotebookRunResult& WithCellOrder(CellOrderT&& value) {
    SetCellOrder(std::forward<CellOrderT>(value));
    return *this;
  }
  template <typename CellOrderT = CellInformation>
  StartNotebookRunResult& AddCellOrder(CellOrderT&& value) {
    m_cellOrderHasBeenSet = true;
    m_cellOrder.emplace_back(std::forward<CellOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata of the notebook run.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  StartNotebookRunResult& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  StartNotebookRunResult& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sensitive parameters of the notebook run.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  StartNotebookRunResult& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  StartNotebookRunResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute configuration of the notebook run.</p>
   */
  inline const ComputeConfig& GetComputeConfiguration() const { return m_computeConfiguration; }
  template <typename ComputeConfigurationT = ComputeConfig>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = ComputeConfig>
  StartNotebookRunResult& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration of the notebook run.</p>
   */
  inline const NetworkConfig& GetNetworkConfiguration() const { return m_networkConfiguration; }
  template <typename NetworkConfigurationT = NetworkConfig>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfig>
  StartNotebookRunResult& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout configuration of the notebook run.</p>
   */
  inline const TimeoutConfig& GetTimeoutConfiguration() const { return m_timeoutConfiguration; }
  template <typename TimeoutConfigurationT = TimeoutConfig>
  void SetTimeoutConfiguration(TimeoutConfigurationT&& value) {
    m_timeoutConfigurationHasBeenSet = true;
    m_timeoutConfiguration = std::forward<TimeoutConfigurationT>(value);
  }
  template <typename TimeoutConfigurationT = TimeoutConfig>
  StartNotebookRunResult& WithTimeoutConfiguration(TimeoutConfigurationT&& value) {
    SetTimeoutConfiguration(std::forward<TimeoutConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment configuration of the notebook run, including image version
   * and package settings.</p>
   */
  inline const EnvironmentConfig& GetEnvironmentConfiguration() const { return m_environmentConfiguration; }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  void SetEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    m_environmentConfigurationHasBeenSet = true;
    m_environmentConfiguration = std::forward<EnvironmentConfigurationT>(value);
  }
  template <typename EnvironmentConfigurationT = EnvironmentConfig>
  StartNotebookRunResult& WithEnvironmentConfiguration(EnvironmentConfigurationT&& value) {
    SetEnvironmentConfiguration(std::forward<EnvironmentConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage configuration of the notebook run, including the Amazon Simple
   * Storage Service path and KMS key ARN.</p>
   */
  inline const StorageConfig& GetStorageConfiguration() const { return m_storageConfiguration; }
  template <typename StorageConfigurationT = StorageConfig>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = StorageConfig>
  StartNotebookRunResult& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that triggered the notebook run.</p>
   */
  inline const TriggerSource& GetTriggerSource() const { return m_triggerSource; }
  template <typename TriggerSourceT = TriggerSource>
  void SetTriggerSource(TriggerSourceT&& value) {
    m_triggerSourceHasBeenSet = true;
    m_triggerSource = std::forward<TriggerSourceT>(value);
  }
  template <typename TriggerSourceT = TriggerSource>
  StartNotebookRunResult& WithTriggerSource(TriggerSourceT&& value) {
    SetTriggerSource(std::forward<TriggerSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details if the notebook run failed.</p>
   */
  inline const NotebookRunError& GetError() const { return m_error; }
  template <typename ErrorT = NotebookRunError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = NotebookRunError>
  StartNotebookRunResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StartNotebookRunResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who created the notebook run.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  StartNotebookRunResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  StartNotebookRunResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who last updated the notebook run.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  StartNotebookRunResult& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run started executing.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  StartNotebookRunResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the notebook run completed.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  StartNotebookRunResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
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
  StartNotebookRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_domainId;

  Aws::String m_owningProjectId;

  Aws::String m_notebookId;

  Aws::String m_scheduleId;

  NotebookRunStatus m_status{NotebookRunStatus::NOT_SET};

  Aws::Vector<CellInformation> m_cellOrder;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  ComputeConfig m_computeConfiguration;

  NetworkConfig m_networkConfiguration;

  TimeoutConfig m_timeoutConfiguration;

  EnvironmentConfig m_environmentConfiguration;

  StorageConfig m_storageConfiguration;

  TriggerSource m_triggerSource;

  NotebookRunError m_error;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_owningProjectIdHasBeenSet = false;
  bool m_notebookIdHasBeenSet = false;
  bool m_scheduleIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_cellOrderHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_timeoutConfigurationHasBeenSet = false;
  bool m_environmentConfigurationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_triggerSourceHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
