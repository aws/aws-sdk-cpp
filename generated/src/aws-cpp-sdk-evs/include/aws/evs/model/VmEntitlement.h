/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/EntitlementStatus.h>
#include <aws/evs/model/EntitlementType.h>
#include <aws/evs/model/ErrorDetail.h>

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
 * <p>An object that represents a Windows Server License entitlement for a virtual
 * machine in an Amazon EVS environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/VmEntitlement">AWS
 * API Reference</a></p>
 */
class VmEntitlement {
 public:
  AWS_EVS_API VmEntitlement() = default;
  AWS_EVS_API VmEntitlement(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API VmEntitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the virtual machine.</p>
   */
  inline const Aws::String& GetVmId() const { return m_vmId; }
  inline bool VmIdHasBeenSet() const { return m_vmIdHasBeenSet; }
  template <typename VmIdT = Aws::String>
  void SetVmId(VmIdT&& value) {
    m_vmIdHasBeenSet = true;
    m_vmId = std::forward<VmIdT>(value);
  }
  template <typename VmIdT = Aws::String>
  VmEntitlement& WithVmId(VmIdT&& value) {
    SetVmId(std::forward<VmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  VmEntitlement& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the connector associated with the entitlement.</p>
   */
  inline const Aws::String& GetConnectorId() const { return m_connectorId; }
  inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
  template <typename ConnectorIdT = Aws::String>
  void SetConnectorId(ConnectorIdT&& value) {
    m_connectorIdHasBeenSet = true;
    m_connectorId = std::forward<ConnectorIdT>(value);
  }
  template <typename ConnectorIdT = Aws::String>
  VmEntitlement& WithConnectorId(ConnectorIdT&& value) {
    SetConnectorId(std::forward<ConnectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the virtual machine.</p>
   */
  inline const Aws::String& GetVmName() const { return m_vmName; }
  inline bool VmNameHasBeenSet() const { return m_vmNameHasBeenSet; }
  template <typename VmNameT = Aws::String>
  void SetVmName(VmNameT&& value) {
    m_vmNameHasBeenSet = true;
    m_vmName = std::forward<VmNameT>(value);
  }
  template <typename VmNameT = Aws::String>
  VmEntitlement& WithVmName(VmNameT&& value) {
    SetVmName(std::forward<VmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entitlement.</p>
   */
  inline EntitlementType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EntitlementType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline VmEntitlement& WithType(EntitlementType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the entitlement.</p>
   */
  inline EntitlementStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EntitlementStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VmEntitlement& WithStatus(EntitlementStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the entitlement was last synced.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSyncedAt() const { return m_lastSyncedAt; }
  inline bool LastSyncedAtHasBeenSet() const { return m_lastSyncedAtHasBeenSet; }
  template <typename LastSyncedAtT = Aws::Utils::DateTime>
  void SetLastSyncedAt(LastSyncedAtT&& value) {
    m_lastSyncedAtHasBeenSet = true;
    m_lastSyncedAt = std::forward<LastSyncedAtT>(value);
  }
  template <typename LastSyncedAtT = Aws::Utils::DateTime>
  VmEntitlement& WithLastSyncedAt(LastSyncedAtT&& value) {
    SetLastSyncedAt(std::forward<LastSyncedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the entitlement started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  VmEntitlement& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the entitlement stopped.</p>
   */
  inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
  inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  void SetStoppedAt(StoppedAtT&& value) {
    m_stoppedAtHasBeenSet = true;
    m_stoppedAt = std::forward<StoppedAtT>(value);
  }
  template <typename StoppedAtT = Aws::Utils::DateTime>
  VmEntitlement& WithStoppedAt(StoppedAtT&& value) {
    SetStoppedAt(std::forward<StoppedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details associated with the entitlement, if applicable.</p>
   */
  inline const ErrorDetail& GetErrorDetail() const { return m_errorDetail; }
  inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
  template <typename ErrorDetailT = ErrorDetail>
  void SetErrorDetail(ErrorDetailT&& value) {
    m_errorDetailHasBeenSet = true;
    m_errorDetail = std::forward<ErrorDetailT>(value);
  }
  template <typename ErrorDetailT = ErrorDetail>
  VmEntitlement& WithErrorDetail(ErrorDetailT&& value) {
    SetErrorDetail(std::forward<ErrorDetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vmId;

  Aws::String m_environmentId;

  Aws::String m_connectorId;

  Aws::String m_vmName;

  EntitlementType m_type{EntitlementType::NOT_SET};

  EntitlementStatus m_status{EntitlementStatus::NOT_SET};

  Aws::Utils::DateTime m_lastSyncedAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_stoppedAt{};

  ErrorDetail m_errorDetail;
  bool m_vmIdHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_connectorIdHasBeenSet = false;
  bool m_vmNameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastSyncedAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_stoppedAtHasBeenSet = false;
  bool m_errorDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
