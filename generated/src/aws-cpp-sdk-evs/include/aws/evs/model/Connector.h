/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/ConnectorCheck.h>
#include <aws/evs/model/ConnectorState.h>
#include <aws/evs/model/ConnectorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {

/**
 * <p>An object that represents a connector for an Amazon EVS environment. A
 * connector establishes a vCenter connection using the credentials stored in
 * Amazon Web Services Secrets Manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Connector">AWS API
 * Reference</a></p>
 */
class Connector {
 public:
  AWS_EVS_API Connector() = default;
  AWS_EVS_API Connector(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the environment that the connector belongs to.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  Connector& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the connector.</p>
   */
  inline const Aws::String& GetConnectorId() const { return m_connectorId; }
  inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
  template <typename ConnectorIdT = Aws::String>
  void SetConnectorId(ConnectorIdT&& value) {
    m_connectorIdHasBeenSet = true;
    m_connectorId = std::forward<ConnectorIdT>(value);
  }
  template <typename ConnectorIdT = Aws::String>
  Connector& WithConnectorId(ConnectorIdT&& value) {
    SetConnectorId(std::forward<ConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the connector.</p>
   */
  inline ConnectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ConnectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Connector& WithType(ConnectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified domain name (FQDN) of the VCF appliance that the
   * connector connects to.</p>
   */
  inline const Aws::String& GetApplianceFqdn() const { return m_applianceFqdn; }
  inline bool ApplianceFqdnHasBeenSet() const { return m_applianceFqdnHasBeenSet; }
  template <typename ApplianceFqdnT = Aws::String>
  void SetApplianceFqdn(ApplianceFqdnT&& value) {
    m_applianceFqdnHasBeenSet = true;
    m_applianceFqdn = std::forward<ApplianceFqdnT>(value);
  }
  template <typename ApplianceFqdnT = Aws::String>
  Connector& WithApplianceFqdn(ApplianceFqdnT&& value) {
    SetApplianceFqdn(std::forward<ApplianceFqdnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
   * secret that stores the credentials for the VCF appliance.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  Connector& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the connector.</p>
   */
  inline ConnectorState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ConnectorState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline Connector& WithState(ConnectorState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the connector state.</p>
   */
  inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
  inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
  template <typename StateDetailsT = Aws::String>
  void SetStateDetails(StateDetailsT&& value) {
    m_stateDetailsHasBeenSet = true;
    m_stateDetails = std::forward<StateDetailsT>(value);
  }
  template <typename StateDetailsT = Aws::String>
  Connector& WithStateDetails(StateDetailsT&& value) {
    SetStateDetails(std::forward<StateDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the connector.</p>
   */
  inline CheckResult GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CheckResult value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Connector& WithStatus(CheckResult value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of checks that are run on the connector.</p>
   */
  inline const Aws::Vector<ConnectorCheck>& GetChecks() const { return m_checks; }
  inline bool ChecksHasBeenSet() const { return m_checksHasBeenSet; }
  template <typename ChecksT = Aws::Vector<ConnectorCheck>>
  void SetChecks(ChecksT&& value) {
    m_checksHasBeenSet = true;
    m_checks = std::forward<ChecksT>(value);
  }
  template <typename ChecksT = Aws::Vector<ConnectorCheck>>
  Connector& WithChecks(ChecksT&& value) {
    SetChecks(std::forward<ChecksT>(value));
    return *this;
  }
  template <typename ChecksT = ConnectorCheck>
  Connector& AddChecks(ChecksT&& value) {
    m_checksHasBeenSet = true;
    m_checks.emplace_back(std::forward<ChecksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Connector& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the connector was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  Connector& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_connectorId;

  ConnectorType m_type{ConnectorType::NOT_SET};

  Aws::String m_applianceFqdn;

  Aws::String m_secretArn;

  ConnectorState m_state{ConnectorState::NOT_SET};

  Aws::String m_stateDetails;

  CheckResult m_status{CheckResult::NOT_SET};

  Aws::Vector<ConnectorCheck> m_checks;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};
  bool m_environmentIdHasBeenSet = false;
  bool m_connectorIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_applianceFqdnHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateDetailsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_checksHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
