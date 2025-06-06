﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AutocommitPeriod.h>
#include <aws/fsx/model/PrivilegedDelete.h>
#include <aws/fsx/model/SnaplockRetentionPeriod.h>
#include <aws/fsx/model/SnaplockType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>Defines the SnapLock configuration when creating an FSx for ONTAP SnapLock
   * volume. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateSnaplockConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateSnaplockConfiguration
  {
  public:
    AWS_FSX_API CreateSnaplockConfiguration() = default;
    AWS_FSX_API CreateSnaplockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateSnaplockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables the audit log volume for an FSx for ONTAP SnapLock
     * volume. The default value is <code>false</code>. If you set
     * <code>AuditLogVolume</code> to <code>true</code>, the SnapLock volume is created
     * as an audit log volume. The minimum retention period for an audit log volume is
     * six months. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/how-snaplock-works.html#snaplock-audit-log-volume">
     * SnapLock audit log volumes</a>. </p>
     */
    inline bool GetAuditLogVolume() const { return m_auditLogVolume; }
    inline bool AuditLogVolumeHasBeenSet() const { return m_auditLogVolumeHasBeenSet; }
    inline void SetAuditLogVolume(bool value) { m_auditLogVolumeHasBeenSet = true; m_auditLogVolume = value; }
    inline CreateSnaplockConfiguration& WithAuditLogVolume(bool value) { SetAuditLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline const AutocommitPeriod& GetAutocommitPeriod() const { return m_autocommitPeriod; }
    inline bool AutocommitPeriodHasBeenSet() const { return m_autocommitPeriodHasBeenSet; }
    template<typename AutocommitPeriodT = AutocommitPeriod>
    void SetAutocommitPeriod(AutocommitPeriodT&& value) { m_autocommitPeriodHasBeenSet = true; m_autocommitPeriod = std::forward<AutocommitPeriodT>(value); }
    template<typename AutocommitPeriodT = AutocommitPeriod>
    CreateSnaplockConfiguration& WithAutocommitPeriod(AutocommitPeriodT&& value) { SetAutocommitPeriod(std::forward<AutocommitPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete WORM files even if they have active retention periods.
     * <code>PERMANENTLY_DISABLED</code> is a terminal state. If privileged delete is
     * permanently disabled on a SnapLock volume, you can't re-enable it. The default
     * value is <code>DISABLED</code>. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline PrivilegedDelete GetPrivilegedDelete() const { return m_privilegedDelete; }
    inline bool PrivilegedDeleteHasBeenSet() const { return m_privilegedDeleteHasBeenSet; }
    inline void SetPrivilegedDelete(PrivilegedDelete value) { m_privilegedDeleteHasBeenSet = true; m_privilegedDelete = value; }
    inline CreateSnaplockConfiguration& WithPrivilegedDelete(PrivilegedDelete value) { SetPrivilegedDelete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline const SnaplockRetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    template<typename RetentionPeriodT = SnaplockRetentionPeriod>
    void SetRetentionPeriod(RetentionPeriodT&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::forward<RetentionPeriodT>(value); }
    template<typename RetentionPeriodT = SnaplockRetentionPeriod>
    CreateSnaplockConfiguration& WithRetentionPeriod(RetentionPeriodT&& value) { SetRetentionPeriod(std::forward<RetentionPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the retention mode of an FSx for ONTAP SnapLock volume. After it is
     * set, it can't be changed. You can choose one of the following retention modes:
     * </p> <ul> <li> <p> <code>COMPLIANCE</code>: Files transitioned to write once,
     * read many (WORM) on a Compliance volume can't be deleted until their retention
     * periods expire. This retention mode is used to address government or
     * industry-specific mandates or to protect against ransomware attacks. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-compliance.html">SnapLock
     * Compliance</a>. </p> </li> <li> <p> <code>ENTERPRISE</code>: Files transitioned
     * to WORM on an Enterprise volume can be deleted by authorized users before their
     * retention periods expire using privileged delete. This retention mode is used to
     * advance an organization's data integrity and internal compliance or to test
     * retention settings before using SnapLock Compliance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html">SnapLock
     * Enterprise</a>. </p> </li> </ul>
     */
    inline SnaplockType GetSnaplockType() const { return m_snaplockType; }
    inline bool SnaplockTypeHasBeenSet() const { return m_snaplockTypeHasBeenSet; }
    inline void SetSnaplockType(SnaplockType value) { m_snaplockTypeHasBeenSet = true; m_snaplockType = value; }
    inline CreateSnaplockConfiguration& WithSnaplockType(SnaplockType value) { SetSnaplockType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables volume-append mode on an FSx for ONTAP SnapLock volume.
     * Volume-append mode allows you to create WORM-appendable files and write data to
     * them incrementally. The default value is <code>false</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-append">Volume-append
     * mode</a>. </p>
     */
    inline bool GetVolumeAppendModeEnabled() const { return m_volumeAppendModeEnabled; }
    inline bool VolumeAppendModeEnabledHasBeenSet() const { return m_volumeAppendModeEnabledHasBeenSet; }
    inline void SetVolumeAppendModeEnabled(bool value) { m_volumeAppendModeEnabledHasBeenSet = true; m_volumeAppendModeEnabled = value; }
    inline CreateSnaplockConfiguration& WithVolumeAppendModeEnabled(bool value) { SetVolumeAppendModeEnabled(value); return *this;}
    ///@}
  private:

    bool m_auditLogVolume{false};
    bool m_auditLogVolumeHasBeenSet = false;

    AutocommitPeriod m_autocommitPeriod;
    bool m_autocommitPeriodHasBeenSet = false;

    PrivilegedDelete m_privilegedDelete{PrivilegedDelete::NOT_SET};
    bool m_privilegedDeleteHasBeenSet = false;

    SnaplockRetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    SnaplockType m_snaplockType{SnaplockType::NOT_SET};
    bool m_snaplockTypeHasBeenSet = false;

    bool m_volumeAppendModeEnabled{false};
    bool m_volumeAppendModeEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
