/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AutocommitPeriod.h>
#include <aws/fsx/model/PrivilegedDelete.h>
#include <aws/fsx/model/SnaplockRetentionPeriod.h>
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
   * <p>Updates the SnapLock configuration for an existing FSx for ONTAP volume.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateSnaplockConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateSnaplockConfiguration
  {
  public:
    AWS_FSX_API UpdateSnaplockConfiguration();
    AWS_FSX_API UpdateSnaplockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateSnaplockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables the audit log volume for an FSx for ONTAP SnapLock
     * volume. The default value is <code>false</code>. If you set
     * <code>AuditLogVolume</code> to <code>true</code>, the SnapLock volume is created
     * as an audit log volume. The minimum retention period for an audit log volume is
     * six months. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/how-snaplock-works.html#snaplock-audit-log-volume">
     * SnapLock audit log volumes</a>. </p>
     */
    inline bool GetAuditLogVolume() const{ return m_auditLogVolume; }

    /**
     * <p>Enables or disables the audit log volume for an FSx for ONTAP SnapLock
     * volume. The default value is <code>false</code>. If you set
     * <code>AuditLogVolume</code> to <code>true</code>, the SnapLock volume is created
     * as an audit log volume. The minimum retention period for an audit log volume is
     * six months. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/how-snaplock-works.html#snaplock-audit-log-volume">
     * SnapLock audit log volumes</a>. </p>
     */
    inline bool AuditLogVolumeHasBeenSet() const { return m_auditLogVolumeHasBeenSet; }

    /**
     * <p>Enables or disables the audit log volume for an FSx for ONTAP SnapLock
     * volume. The default value is <code>false</code>. If you set
     * <code>AuditLogVolume</code> to <code>true</code>, the SnapLock volume is created
     * as an audit log volume. The minimum retention period for an audit log volume is
     * six months. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/how-snaplock-works.html#snaplock-audit-log-volume">
     * SnapLock audit log volumes</a>. </p>
     */
    inline void SetAuditLogVolume(bool value) { m_auditLogVolumeHasBeenSet = true; m_auditLogVolume = value; }

    /**
     * <p>Enables or disables the audit log volume for an FSx for ONTAP SnapLock
     * volume. The default value is <code>false</code>. If you set
     * <code>AuditLogVolume</code> to <code>true</code>, the SnapLock volume is created
     * as an audit log volume. The minimum retention period for an audit log volume is
     * six months. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/how-snaplock-works.html#snaplock-audit-log-volume">
     * SnapLock audit log volumes</a>. </p>
     */
    inline UpdateSnaplockConfiguration& WithAuditLogVolume(bool value) { SetAuditLogVolume(value); return *this;}


    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline const AutocommitPeriod& GetAutocommitPeriod() const{ return m_autocommitPeriod; }

    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline bool AutocommitPeriodHasBeenSet() const { return m_autocommitPeriodHasBeenSet; }

    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetAutocommitPeriod(const AutocommitPeriod& value) { m_autocommitPeriodHasBeenSet = true; m_autocommitPeriod = value; }

    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetAutocommitPeriod(AutocommitPeriod&& value) { m_autocommitPeriodHasBeenSet = true; m_autocommitPeriod = std::move(value); }

    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline UpdateSnaplockConfiguration& WithAutocommitPeriod(const AutocommitPeriod& value) { SetAutocommitPeriod(value); return *this;}

    /**
     * <p>The configuration object for setting the autocommit period of files in an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline UpdateSnaplockConfiguration& WithAutocommitPeriod(AutocommitPeriod&& value) { SetAutocommitPeriod(std::move(value)); return *this;}


    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline const PrivilegedDelete& GetPrivilegedDelete() const{ return m_privilegedDelete; }

    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline bool PrivilegedDeleteHasBeenSet() const { return m_privilegedDeleteHasBeenSet; }

    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline void SetPrivilegedDelete(const PrivilegedDelete& value) { m_privilegedDeleteHasBeenSet = true; m_privilegedDelete = value; }

    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline void SetPrivilegedDelete(PrivilegedDelete&& value) { m_privilegedDeleteHasBeenSet = true; m_privilegedDelete = std::move(value); }

    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline UpdateSnaplockConfiguration& WithPrivilegedDelete(const PrivilegedDelete& value) { SetPrivilegedDelete(value); return *this;}

    /**
     * <p>Enables, disables, or permanently disables privileged delete on an FSx for
     * ONTAP SnapLock Enterprise volume. Enabling privileged delete allows SnapLock
     * administrators to delete write once, read many (WORM) files even if they have
     * active retention periods. <code>PERMANENTLY_DISABLED</code> is a terminal state.
     * If privileged delete is permanently disabled on a SnapLock volume, you can't
     * re-enable it. The default value is <code>DISABLED</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-enterprise.html#privileged-delete">Privileged
     * delete</a>. </p>
     */
    inline UpdateSnaplockConfiguration& WithPrivilegedDelete(PrivilegedDelete&& value) { SetPrivilegedDelete(std::move(value)); return *this;}


    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline const SnaplockRetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline void SetRetentionPeriod(const SnaplockRetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline void SetRetentionPeriod(SnaplockRetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline UpdateSnaplockConfiguration& WithRetentionPeriod(const SnaplockRetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. </p>
     */
    inline UpdateSnaplockConfiguration& WithRetentionPeriod(SnaplockRetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>Enables or disables volume-append mode on an FSx for ONTAP SnapLock volume.
     * Volume-append mode allows you to create WORM-appendable files and write data to
     * them incrementally. The default value is <code>false</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-append">Volume-append
     * mode</a>. </p>
     */
    inline bool GetVolumeAppendModeEnabled() const{ return m_volumeAppendModeEnabled; }

    /**
     * <p>Enables or disables volume-append mode on an FSx for ONTAP SnapLock volume.
     * Volume-append mode allows you to create WORM-appendable files and write data to
     * them incrementally. The default value is <code>false</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-append">Volume-append
     * mode</a>. </p>
     */
    inline bool VolumeAppendModeEnabledHasBeenSet() const { return m_volumeAppendModeEnabledHasBeenSet; }

    /**
     * <p>Enables or disables volume-append mode on an FSx for ONTAP SnapLock volume.
     * Volume-append mode allows you to create WORM-appendable files and write data to
     * them incrementally. The default value is <code>false</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-append">Volume-append
     * mode</a>. </p>
     */
    inline void SetVolumeAppendModeEnabled(bool value) { m_volumeAppendModeEnabledHasBeenSet = true; m_volumeAppendModeEnabled = value; }

    /**
     * <p>Enables or disables volume-append mode on an FSx for ONTAP SnapLock volume.
     * Volume-append mode allows you to create WORM-appendable files and write data to
     * them incrementally. The default value is <code>false</code>. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/worm-state.html#worm-state-append">Volume-append
     * mode</a>. </p>
     */
    inline UpdateSnaplockConfiguration& WithVolumeAppendModeEnabled(bool value) { SetVolumeAppendModeEnabled(value); return *this;}

  private:

    bool m_auditLogVolume;
    bool m_auditLogVolumeHasBeenSet = false;

    AutocommitPeriod m_autocommitPeriod;
    bool m_autocommitPeriodHasBeenSet = false;

    PrivilegedDelete m_privilegedDelete;
    bool m_privilegedDeleteHasBeenSet = false;

    SnaplockRetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    bool m_volumeAppendModeEnabled;
    bool m_volumeAppendModeEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
