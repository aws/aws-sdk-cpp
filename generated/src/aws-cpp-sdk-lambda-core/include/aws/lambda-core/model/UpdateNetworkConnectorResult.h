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
#include <aws/lambda-core/model/NetworkConnectorState.h>

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
class UpdateNetworkConnectorResult {
 public:
  AWS_LAMBDACORE_API UpdateNetworkConnectorResult() = default;
  AWS_LAMBDACORE_API UpdateNetworkConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API UpdateNetworkConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  UpdateNetworkConnectorResult& WithArn(ArnT&& value) {
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
  UpdateNetworkConnectorResult& WithName(NameT&& value) {
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
  UpdateNetworkConnectorResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  UpdateNetworkConnectorResult& WithOperatorRole(OperatorRoleT&& value) {
    SetOperatorRole(std::forward<OperatorRoleT>(value));
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
  UpdateNetworkConnectorResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  inline UpdateNetworkConnectorResult& WithState(NetworkConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of this update operation (typically <code>InProgress</code>
   * immediately after the call).</p>
   */
  inline NetworkConnectorLastUpdateStatus GetLastUpdateStatus() const { return m_lastUpdateStatus; }
  inline void SetLastUpdateStatus(NetworkConnectorLastUpdateStatus value) {
    m_lastUpdateStatusHasBeenSet = true;
    m_lastUpdateStatus = value;
  }
  inline UpdateNetworkConnectorResult& WithLastUpdateStatus(NetworkConnectorLastUpdateStatus value) {
    SetLastUpdateStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the update status.</p>
   */
  inline const Aws::String& GetLastUpdateStatusReason() const { return m_lastUpdateStatusReason; }
  template <typename LastUpdateStatusReasonT = Aws::String>
  void SetLastUpdateStatusReason(LastUpdateStatusReasonT&& value) {
    m_lastUpdateStatusReasonHasBeenSet = true;
    m_lastUpdateStatusReason = std::forward<LastUpdateStatusReasonT>(value);
  }
  template <typename LastUpdateStatusReasonT = Aws::String>
  UpdateNetworkConnectorResult& WithLastUpdateStatusReason(LastUpdateStatusReasonT&& value) {
    SetLastUpdateStatusReason(std::forward<LastUpdateStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of this update.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  UpdateNetworkConnectorResult& WithLastModified(LastModifiedT&& value) {
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
  UpdateNetworkConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  Aws::String m_operatorRole;

  NetworkConnectorConfiguration m_configuration;

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  NetworkConnectorLastUpdateStatus m_lastUpdateStatus{NetworkConnectorLastUpdateStatus::NOT_SET};

  Aws::String m_lastUpdateStatusReason;

  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_operatorRoleHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastUpdateStatusHasBeenSet = false;
  bool m_lastUpdateStatusReasonHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
