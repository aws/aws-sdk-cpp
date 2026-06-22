/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatus.h>
#include <aws/lambda-core/model/NetworkConnectorLastUpdateStatusReasonCode.h>
#include <aws/lambda-core/model/NetworkConnectorState.h>
#include <aws/lambda-core/model/NetworkConnectorStateReasonCode.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {
class GetNetworkConnectorResult {
 public:
  AWS_LAMBDACORE_API GetNetworkConnectorResult() = default;
  AWS_LAMBDACORE_API GetNetworkConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API GetNetworkConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the network connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetNetworkConnectorResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the network connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetNetworkConnectorResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetNetworkConnectorResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the connector configuration, incremented on each
   * update.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline GetNetworkConnectorResult& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration of the connector, including VPC subnets and
   * security groups.</p>
   */
  inline const NetworkConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = NetworkConnectorConfiguration>
  GetNetworkConnectorResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that Lambda uses to manage the underlying ENI
   * resources for this connector.</p>
   */
  inline const Aws::String& GetOperatorRole() const { return m_operatorRole; }
  template <typename OperatorRoleT = Aws::String>
  void SetOperatorRole(OperatorRoleT&& value) {
    m_operatorRoleHasBeenSet = true;
    m_operatorRole = std::forward<OperatorRoleT>(value);
  }
  template <typename OperatorRoleT = Aws::String>
  GetNetworkConnectorResult& WithOperatorRole(OperatorRoleT&& value) {
    SetOperatorRole(std::forward<OperatorRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the network connector.</p>
   */
  inline NetworkConnectorState GetState() const { return m_state; }
  inline void SetState(NetworkConnectorState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetNetworkConnectorResult& WithState(NetworkConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the current state, populated when the state
   * is <code>FAILED</code> or <code>DELETE_FAILED</code>.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  GetNetworkConnectorResult& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A machine-readable code indicating the reason for the current state. Use this
   * for programmatic error handling.</p>
   */
  inline NetworkConnectorStateReasonCode GetStateReasonCode() const { return m_stateReasonCode; }
  inline void SetStateReasonCode(NetworkConnectorStateReasonCode value) {
    m_stateReasonCodeHasBeenSet = true;
    m_stateReasonCode = value;
  }
  inline GetNetworkConnectorResult& WithStateReasonCode(NetworkConnectorStateReasonCode value) {
    SetStateReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent update operation (<code>Successful</code>,
   * <code>Failed</code>, or <code>InProgress</code>).</p>
   */
  inline NetworkConnectorLastUpdateStatus GetLastUpdateStatus() const { return m_lastUpdateStatus; }
  inline void SetLastUpdateStatus(NetworkConnectorLastUpdateStatus value) {
    m_lastUpdateStatusHasBeenSet = true;
    m_lastUpdateStatus = value;
  }
  inline GetNetworkConnectorResult& WithLastUpdateStatus(NetworkConnectorLastUpdateStatus value) {
    SetLastUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the last update status.</p>
   */
  inline const Aws::String& GetLastUpdateStatusReason() const { return m_lastUpdateStatusReason; }
  template <typename LastUpdateStatusReasonT = Aws::String>
  void SetLastUpdateStatusReason(LastUpdateStatusReasonT&& value) {
    m_lastUpdateStatusReasonHasBeenSet = true;
    m_lastUpdateStatusReason = std::forward<LastUpdateStatusReasonT>(value);
  }
  template <typename LastUpdateStatusReasonT = Aws::String>
  GetNetworkConnectorResult& WithLastUpdateStatusReason(LastUpdateStatusReasonT&& value) {
    SetLastUpdateStatusReason(std::forward<LastUpdateStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A machine-readable code indicating the reason for the last update status. Use
   * this for programmatic error handling.</p>
   */
  inline NetworkConnectorLastUpdateStatusReasonCode GetLastUpdateStatusReasonCode() const { return m_lastUpdateStatusReasonCode; }
  inline void SetLastUpdateStatusReasonCode(NetworkConnectorLastUpdateStatusReasonCode value) {
    m_lastUpdateStatusReasonCodeHasBeenSet = true;
    m_lastUpdateStatusReasonCode = value;
  }
  inline GetNetworkConnectorResult& WithLastUpdateStatusReasonCode(NetworkConnectorLastUpdateStatusReasonCode value) {
    SetLastUpdateStatusReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the connector configuration was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  GetNetworkConnectorResult& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
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
  GetNetworkConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  long long m_version{0};

  NetworkConnectorConfiguration m_configuration;

  Aws::String m_operatorRole;

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  Aws::String m_stateReason;

  NetworkConnectorStateReasonCode m_stateReasonCode{NetworkConnectorStateReasonCode::NOT_SET};

  NetworkConnectorLastUpdateStatus m_lastUpdateStatus{NetworkConnectorLastUpdateStatus::NOT_SET};

  Aws::String m_lastUpdateStatusReason;

  NetworkConnectorLastUpdateStatusReasonCode m_lastUpdateStatusReasonCode{NetworkConnectorLastUpdateStatusReasonCode::NOT_SET};

  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_operatorRoleHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_stateReasonCodeHasBeenSet = false;
  bool m_lastUpdateStatusHasBeenSet = false;
  bool m_lastUpdateStatusReasonHasBeenSet = false;
  bool m_lastUpdateStatusReasonCodeHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
