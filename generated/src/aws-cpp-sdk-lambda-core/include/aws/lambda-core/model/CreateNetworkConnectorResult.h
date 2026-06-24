/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorConfiguration.h>
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
class CreateNetworkConnectorResult {
 public:
  AWS_LAMBDACORE_API CreateNetworkConnectorResult() = default;
  AWS_LAMBDACORE_API CreateNetworkConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDACORE_API CreateNetworkConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  CreateNetworkConnectorResult& WithArn(ArnT&& value) {
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
  CreateNetworkConnectorResult& WithName(NameT&& value) {
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
  CreateNetworkConnectorResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
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
  CreateNetworkConnectorResult& WithConfiguration(ConfigurationT&& value) {
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
  CreateNetworkConnectorResult& WithOperatorRole(OperatorRoleT&& value) {
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
  inline CreateNetworkConnectorResult& WithState(NetworkConnectorState value) {
    SetState(value);
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
  CreateNetworkConnectorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  NetworkConnectorConfiguration m_configuration;

  Aws::String m_operatorRole;

  NetworkConnectorState m_state{NetworkConnectorState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_operatorRoleHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
