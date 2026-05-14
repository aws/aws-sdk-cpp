/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ComputeConfig.h>
#include <aws/datazone/model/NetworkConfig.h>
#include <aws/datazone/model/TimeoutConfig.h>
#include <aws/datazone/model/TriggerSource.h>

#include <utility>

namespace Aws {
namespace DataZone {
namespace Model {

/**
 */
class StartNotebookRunRequest : public DataZoneRequest {
 public:
  AWS_DATAZONE_API StartNotebookRunRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartNotebookRun"; }

  AWS_DATAZONE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon SageMaker Unified Studio domain in which the
   * notebook run is started.</p>
   */
  inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
  inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
  template <typename DomainIdentifierT = Aws::String>
  void SetDomainIdentifier(DomainIdentifierT&& value) {
    m_domainIdentifierHasBeenSet = true;
    m_domainIdentifier = std::forward<DomainIdentifierT>(value);
  }
  template <typename DomainIdentifierT = Aws::String>
  StartNotebookRunRequest& WithDomainIdentifier(DomainIdentifierT&& value) {
    SetDomainIdentifier(std::forward<DomainIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project that owns the notebook run.</p>
   */
  inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
  inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
  template <typename OwningProjectIdentifierT = Aws::String>
  void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    m_owningProjectIdentifierHasBeenSet = true;
    m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value);
  }
  template <typename OwningProjectIdentifierT = Aws::String>
  StartNotebookRunRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) {
    SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the notebook to run.</p>
   */
  inline const Aws::String& GetNotebookIdentifier() const { return m_notebookIdentifier; }
  inline bool NotebookIdentifierHasBeenSet() const { return m_notebookIdentifierHasBeenSet; }
  template <typename NotebookIdentifierT = Aws::String>
  void SetNotebookIdentifier(NotebookIdentifierT&& value) {
    m_notebookIdentifierHasBeenSet = true;
    m_notebookIdentifier = std::forward<NotebookIdentifierT>(value);
  }
  template <typename NotebookIdentifierT = Aws::String>
  StartNotebookRunRequest& WithNotebookIdentifier(NotebookIdentifierT&& value) {
    SetNotebookIdentifier(std::forward<NotebookIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the schedule associated with the notebook run.</p>
   */
  inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
  inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
  template <typename ScheduleIdentifierT = Aws::String>
  void SetScheduleIdentifier(ScheduleIdentifierT&& value) {
    m_scheduleIdentifierHasBeenSet = true;
    m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value);
  }
  template <typename ScheduleIdentifierT = Aws::String>
  StartNotebookRunRequest& WithScheduleIdentifier(ScheduleIdentifierT&& value) {
    SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute configuration for the notebook run, including instance type and
   * environment version.</p>
   */
  inline const ComputeConfig& GetComputeConfiguration() const { return m_computeConfiguration; }
  inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
  template <typename ComputeConfigurationT = ComputeConfig>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = ComputeConfig>
  StartNotebookRunRequest& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the notebook run, including network access type
   * and optional VPC settings.</p>
   */
  inline const NetworkConfig& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfig>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfig>
  StartNotebookRunRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout configuration for the notebook run. The default timeout is 720
   * minutes (12 hours) and the maximum is 1440 minutes (24 hours).</p>
   */
  inline const TimeoutConfig& GetTimeoutConfiguration() const { return m_timeoutConfiguration; }
  inline bool TimeoutConfigurationHasBeenSet() const { return m_timeoutConfigurationHasBeenSet; }
  template <typename TimeoutConfigurationT = TimeoutConfig>
  void SetTimeoutConfiguration(TimeoutConfigurationT&& value) {
    m_timeoutConfigurationHasBeenSet = true;
    m_timeoutConfiguration = std::forward<TimeoutConfigurationT>(value);
  }
  template <typename TimeoutConfigurationT = TimeoutConfig>
  StartNotebookRunRequest& WithTimeoutConfiguration(TimeoutConfigurationT&& value) {
    SetTimeoutConfiguration(std::forward<TimeoutConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that triggered the notebook run.</p>
   */
  inline const TriggerSource& GetTriggerSource() const { return m_triggerSource; }
  inline bool TriggerSourceHasBeenSet() const { return m_triggerSourceHasBeenSet; }
  template <typename TriggerSourceT = TriggerSource>
  void SetTriggerSource(TriggerSourceT&& value) {
    m_triggerSourceHasBeenSet = true;
    m_triggerSource = std::forward<TriggerSourceT>(value);
  }
  template <typename TriggerSourceT = TriggerSource>
  StartNotebookRunRequest& WithTriggerSource(TriggerSourceT&& value) {
    SetTriggerSource(std::forward<TriggerSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata for the notebook run, specified as key-value pairs. You can
   * specify up to 50 entries, with keys up to 128 characters and values up to 1024
   * characters.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  StartNotebookRunRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  StartNotebookRunRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sensitive parameters for the notebook run, specified as key-value pairs.
   * You can specify up to 50 entries, with keys up to 128 characters and values up
   * to 1024 characters.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  StartNotebookRunRequest& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  StartNotebookRunRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
   * This field is automatically populated if not provided.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartNotebookRunRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainIdentifier;

  Aws::String m_owningProjectIdentifier;

  Aws::String m_notebookIdentifier;

  Aws::String m_scheduleIdentifier;

  ComputeConfig m_computeConfiguration;

  NetworkConfig m_networkConfiguration;

  TimeoutConfig m_timeoutConfiguration;

  TriggerSource m_triggerSource;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdentifierHasBeenSet = false;
  bool m_owningProjectIdentifierHasBeenSet = false;
  bool m_notebookIdentifierHasBeenSet = false;
  bool m_scheduleIdentifierHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_timeoutConfigurationHasBeenSet = false;
  bool m_triggerSourceHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
