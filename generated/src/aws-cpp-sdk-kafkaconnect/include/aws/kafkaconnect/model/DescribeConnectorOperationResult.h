/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ConnectorOperationState.h>
#include <aws/kafkaconnect/model/ConnectorOperationStep.h>
#include <aws/kafkaconnect/model/ConnectorOperationType.h>
#include <aws/kafkaconnect/model/StateDescription.h>
#include <aws/kafkaconnect/model/WorkerSetting.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KafkaConnect {
namespace Model {
class DescribeConnectorOperationResult {
 public:
  AWS_KAFKACONNECT_API DescribeConnectorOperationResult() = default;
  AWS_KAFKACONNECT_API DescribeConnectorOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKACONNECT_API DescribeConnectorOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
  template <typename ConnectorArnT = Aws::String>
  void SetConnectorArn(ConnectorArnT&& value) {
    m_connectorArnHasBeenSet = true;
    m_connectorArn = std::forward<ConnectorArnT>(value);
  }
  template <typename ConnectorArnT = Aws::String>
  DescribeConnectorOperationResult& WithConnectorArn(ConnectorArnT&& value) {
    SetConnectorArn(std::forward<ConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
   */
  inline const Aws::String& GetConnectorOperationArn() const { return m_connectorOperationArn; }
  template <typename ConnectorOperationArnT = Aws::String>
  void SetConnectorOperationArn(ConnectorOperationArnT&& value) {
    m_connectorOperationArnHasBeenSet = true;
    m_connectorOperationArn = std::forward<ConnectorOperationArnT>(value);
  }
  template <typename ConnectorOperationArnT = Aws::String>
  DescribeConnectorOperationResult& WithConnectorOperationArn(ConnectorOperationArnT&& value) {
    SetConnectorOperationArn(std::forward<ConnectorOperationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the connector operation.</p>
   */
  inline ConnectorOperationState GetConnectorOperationState() const { return m_connectorOperationState; }
  inline void SetConnectorOperationState(ConnectorOperationState value) {
    m_connectorOperationStateHasBeenSet = true;
    m_connectorOperationState = value;
  }
  inline DescribeConnectorOperationResult& WithConnectorOperationState(ConnectorOperationState value) {
    SetConnectorOperationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connector operation performed.</p>
   */
  inline ConnectorOperationType GetConnectorOperationType() const { return m_connectorOperationType; }
  inline void SetConnectorOperationType(ConnectorOperationType value) {
    m_connectorOperationTypeHasBeenSet = true;
    m_connectorOperationType = value;
  }
  inline DescribeConnectorOperationResult& WithConnectorOperationType(ConnectorOperationType value) {
    SetConnectorOperationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The array of operation steps taken.</p>
   */
  inline const Aws::Vector<ConnectorOperationStep>& GetOperationSteps() const { return m_operationSteps; }
  template <typename OperationStepsT = Aws::Vector<ConnectorOperationStep>>
  void SetOperationSteps(OperationStepsT&& value) {
    m_operationStepsHasBeenSet = true;
    m_operationSteps = std::forward<OperationStepsT>(value);
  }
  template <typename OperationStepsT = Aws::Vector<ConnectorOperationStep>>
  DescribeConnectorOperationResult& WithOperationSteps(OperationStepsT&& value) {
    SetOperationSteps(std::forward<OperationStepsT>(value));
    return *this;
  }
  template <typename OperationStepsT = ConnectorOperationStep>
  DescribeConnectorOperationResult& AddOperationSteps(OperationStepsT&& value) {
    m_operationStepsHasBeenSet = true;
    m_operationSteps.emplace_back(std::forward<OperationStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origin worker setting.</p>
   */
  inline const WorkerSetting& GetOriginWorkerSetting() const { return m_originWorkerSetting; }
  template <typename OriginWorkerSettingT = WorkerSetting>
  void SetOriginWorkerSetting(OriginWorkerSettingT&& value) {
    m_originWorkerSettingHasBeenSet = true;
    m_originWorkerSetting = std::forward<OriginWorkerSettingT>(value);
  }
  template <typename OriginWorkerSettingT = WorkerSetting>
  DescribeConnectorOperationResult& WithOriginWorkerSetting(OriginWorkerSettingT&& value) {
    SetOriginWorkerSetting(std::forward<OriginWorkerSettingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origin connector configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOriginConnectorConfiguration() const { return m_originConnectorConfiguration; }
  template <typename OriginConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  void SetOriginConnectorConfiguration(OriginConnectorConfigurationT&& value) {
    m_originConnectorConfigurationHasBeenSet = true;
    m_originConnectorConfiguration = std::forward<OriginConnectorConfigurationT>(value);
  }
  template <typename OriginConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  DescribeConnectorOperationResult& WithOriginConnectorConfiguration(OriginConnectorConfigurationT&& value) {
    SetOriginConnectorConfiguration(std::forward<OriginConnectorConfigurationT>(value));
    return *this;
  }
  template <typename OriginConnectorConfigurationKeyT = Aws::String, typename OriginConnectorConfigurationValueT = Aws::String>
  DescribeConnectorOperationResult& AddOriginConnectorConfiguration(OriginConnectorConfigurationKeyT&& key,
                                                                    OriginConnectorConfigurationValueT&& value) {
    m_originConnectorConfigurationHasBeenSet = true;
    m_originConnectorConfiguration.emplace(std::forward<OriginConnectorConfigurationKeyT>(key),
                                           std::forward<OriginConnectorConfigurationValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target worker setting.</p>
   */
  inline const WorkerSetting& GetTargetWorkerSetting() const { return m_targetWorkerSetting; }
  template <typename TargetWorkerSettingT = WorkerSetting>
  void SetTargetWorkerSetting(TargetWorkerSettingT&& value) {
    m_targetWorkerSettingHasBeenSet = true;
    m_targetWorkerSetting = std::forward<TargetWorkerSettingT>(value);
  }
  template <typename TargetWorkerSettingT = WorkerSetting>
  DescribeConnectorOperationResult& WithTargetWorkerSetting(TargetWorkerSettingT&& value) {
    SetTargetWorkerSetting(std::forward<TargetWorkerSettingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target connector configuration.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTargetConnectorConfiguration() const { return m_targetConnectorConfiguration; }
  template <typename TargetConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  void SetTargetConnectorConfiguration(TargetConnectorConfigurationT&& value) {
    m_targetConnectorConfigurationHasBeenSet = true;
    m_targetConnectorConfiguration = std::forward<TargetConnectorConfigurationT>(value);
  }
  template <typename TargetConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
  DescribeConnectorOperationResult& WithTargetConnectorConfiguration(TargetConnectorConfigurationT&& value) {
    SetTargetConnectorConfiguration(std::forward<TargetConnectorConfigurationT>(value));
    return *this;
  }
  template <typename TargetConnectorConfigurationKeyT = Aws::String, typename TargetConnectorConfigurationValueT = Aws::String>
  DescribeConnectorOperationResult& AddTargetConnectorConfiguration(TargetConnectorConfigurationKeyT&& key,
                                                                    TargetConnectorConfigurationValueT&& value) {
    m_targetConnectorConfigurationHasBeenSet = true;
    m_targetConnectorConfiguration.emplace(std::forward<TargetConnectorConfigurationKeyT>(key),
                                           std::forward<TargetConnectorConfigurationValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StateDescription& GetErrorInfo() const { return m_errorInfo; }
  template <typename ErrorInfoT = StateDescription>
  void SetErrorInfo(ErrorInfoT&& value) {
    m_errorInfoHasBeenSet = true;
    m_errorInfo = std::forward<ErrorInfoT>(value);
  }
  template <typename ErrorInfoT = StateDescription>
  DescribeConnectorOperationResult& WithErrorInfo(ErrorInfoT&& value) {
    SetErrorInfo(std::forward<ErrorInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the operation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeConnectorOperationResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the operation ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  DescribeConnectorOperationResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
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
  DescribeConnectorOperationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorArn;

  Aws::String m_connectorOperationArn;

  ConnectorOperationState m_connectorOperationState{ConnectorOperationState::NOT_SET};

  ConnectorOperationType m_connectorOperationType{ConnectorOperationType::NOT_SET};

  Aws::Vector<ConnectorOperationStep> m_operationSteps;

  WorkerSetting m_originWorkerSetting;

  Aws::Map<Aws::String, Aws::String> m_originConnectorConfiguration;

  WorkerSetting m_targetWorkerSetting;

  Aws::Map<Aws::String, Aws::String> m_targetConnectorConfiguration;

  StateDescription m_errorInfo;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_requestId;
  bool m_connectorArnHasBeenSet = false;
  bool m_connectorOperationArnHasBeenSet = false;
  bool m_connectorOperationStateHasBeenSet = false;
  bool m_connectorOperationTypeHasBeenSet = false;
  bool m_operationStepsHasBeenSet = false;
  bool m_originWorkerSettingHasBeenSet = false;
  bool m_originConnectorConfigurationHasBeenSet = false;
  bool m_targetWorkerSettingHasBeenSet = false;
  bool m_targetConnectorConfigurationHasBeenSet = false;
  bool m_errorInfoHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KafkaConnect
}  // namespace Aws
