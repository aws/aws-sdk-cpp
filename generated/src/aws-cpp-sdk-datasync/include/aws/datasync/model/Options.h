/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/VerifyMode.h>
#include <aws/datasync/model/OverwriteMode.h>
#include <aws/datasync/model/Atime.h>
#include <aws/datasync/model/Mtime.h>
#include <aws/datasync/model/Uid.h>
#include <aws/datasync/model/Gid.h>
#include <aws/datasync/model/PreserveDeletedFiles.h>
#include <aws/datasync/model/PreserveDevices.h>
#include <aws/datasync/model/PosixPermissions.h>
#include <aws/datasync/model/TaskQueueing.h>
#include <aws/datasync/model/LogLevel.h>
#include <aws/datasync/model/TransferMode.h>
#include <aws/datasync/model/SmbSecurityDescriptorCopyFlags.h>
#include <aws/datasync/model/ObjectTags.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>Indicates how your transfer task is configured. These options include how
   * DataSync handles files, objects, and their associated metadata during your
   * transfer. You also can specify how to verify data integrity, set bandwidth
   * limits for your task, among other options.</p> <p>Each option has a default
   * value. Unless you need to, you don't have to configure any option before calling
   * <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_StartTaskExecution.html">StartTaskExecution</a>.</p>
   * <p>You also can override your task options for each task execution. For example,
   * you might want to adjust the <code>LogLevel</code> for an individual
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Options">AWS
   * API Reference</a></p>
   */
  class Options
  {
  public:
    AWS_DATASYNC_API Options() = default;
    AWS_DATASYNC_API Options(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Options& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies if and how DataSync checks the integrity of your data at the end of
     * your transfer.</p> <ul> <li> <p> <code>ONLY_FILES_TRANSFERRED</code>
     * (recommended) - DataSync calculates the checksum of transferred data (including
     * metadata) at the source location. At the end of the transfer, DataSync then
     * compares this checksum to the checksum calculated on that data at the
     * destination.</p>  <p>This is the default option for <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
     * mode tasks</a>.</p>  <p>We recommend this option when transferring to S3
     * Glacier Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> </li> <li> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code> - At the end of the transfer, DataSync
     * checks the entire source and destination to verify that both locations are fully
     * synchronized.</p>  <p>The is the default option for <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Basic
     * mode tasks</a> and isn't currently supported with Enhanced mode tasks.</p>
     *  <p>If you use a <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/transferring-with-manifest.html">manifest</a>,
     * DataSync only scans and verifies what's listed in the manifest.</p> <p>You can't
     * use this option when transferring to S3 Glacier Flexible Retrieval or S3 Glacier
     * Deep Archive storage classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> </li> <li> <p>
     * <code>NONE</code> - DataSync performs data integrity checks only during your
     * transfer. Unlike other options, there's no additional verification at the end of
     * your transfer.</p> </li> </ul>
     */
    inline VerifyMode GetVerifyMode() const { return m_verifyMode; }
    inline bool VerifyModeHasBeenSet() const { return m_verifyModeHasBeenSet; }
    inline void SetVerifyMode(VerifyMode value) { m_verifyModeHasBeenSet = true; m_verifyMode = value; }
    inline Options& WithVerifyMode(VerifyMode value) { SetVerifyMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether DataSync should modify or preserve data at the destination
     * location.</p> <ul> <li> <p> <code>ALWAYS</code> (default) - DataSync modifies
     * data in the destination location when source data (including metadata) has
     * changed.</p> <p>If DataSync overwrites objects, you might incur additional
     * charges for certain Amazon S3 storage classes (for example, for retrieval or
     * early deletion). For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p> </li> <li> <p>
     * <code>NEVER</code> - DataSync doesn't overwrite data in the destination location
     * even if the source data has changed. You can use this option to protect against
     * overwriting changes made to files or objects in the destination.</p> </li> </ul>
     */
    inline OverwriteMode GetOverwriteMode() const { return m_overwriteMode; }
    inline bool OverwriteModeHasBeenSet() const { return m_overwriteModeHasBeenSet; }
    inline void SetOverwriteMode(OverwriteMode value) { m_overwriteModeHasBeenSet = true; m_overwriteMode = value; }
    inline Options& WithOverwriteMode(OverwriteMode value) { SetOverwriteMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to.</p>  <p>The behavior of <code>Atime</code> isn't fully
     * standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <ul> <li> <p> <code>BEST_EFFORT</code> (default) - DataSync
     * attempts to preserve the original <code>Atime</code> attribute on all source
     * files (that is, the version before the <code>PREPARING</code> steps of the task
     * execution). This option is recommended.</p> </li> <li> <p> <code>NONE</code> -
     * Ignores <code>Atime</code>.</p> </li> </ul>  <p>If <code>Atime</code> is
     * set to <code>BEST_EFFORT</code>, <code>Mtime</code> must be set to
     * <code>PRESERVE</code>. </p> <p>If <code>Atime</code> is set to
     * <code>NONE</code>, <code>Mtime</code> must also be <code>NONE</code>. </p>
     * 
     */
    inline Atime GetAtime() const { return m_atime; }
    inline bool AtimeHasBeenSet() const { return m_atimeHasBeenSet; }
    inline void SetAtime(Atime value) { m_atimeHasBeenSet = true; m_atime = value; }
    inline Options& WithAtime(Atime value) { SetAtime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> step of your task execution.
     * This option is required when you need to run the a task more than once.</p> <ul>
     * <li> <p> <code>PRESERVE</code> (default) - Preserves original
     * <code>Mtime</code>, which is recommended.</p> </li> <li> <p> <code>NONE</code> -
     * Ignores <code>Mtime</code>.</p> </li> </ul>  <p>If <code>Mtime</code> is
     * set to <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline Mtime GetMtime() const { return m_mtime; }
    inline bool MtimeHasBeenSet() const { return m_mtimeHasBeenSet; }
    inline void SetMtime(Mtime value) { m_mtimeHasBeenSet = true; m_mtime = value; }
    inline Options& WithMtime(Mtime value) { SetMtime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <ul> <li> <p>
     * <code>INT_VALUE</code> (default) - Preserves the integer value of UID and group
     * ID (GID), which is recommended.</p> </li> <li> <p> <code>NONE</code> - Ignores
     * UID and GID. </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p>
     */
    inline Uid GetUid() const { return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(Uid value) { m_uidHasBeenSet = true; m_uid = value; }
    inline Options& WithUid(Uid value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <ul> <li> <p>
     * <code>INT_VALUE</code> (default) - Preserves the integer value of user ID (UID)
     * and GID, which is recommended.</p> </li> <li> <p> <code>NONE</code> - Ignores
     * UID and GID.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/metadata-copied.html">Understanding
     * how DataSync handles file and object metadata</a>.</p>
     */
    inline Gid GetGid() const { return m_gid; }
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }
    inline void SetGid(Gid value) { m_gidHasBeenSet = true; m_gid = value; }
    inline Options& WithGid(Gid value) { SetGid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync</a>.</p> <ul> <li> <p>
     * <code>PRESERVE</code> (default) - Ignores such destination files, which is
     * recommended. </p> </li> <li> <p> <code>REMOVE</code> - Deletes destination files
     * that aren’t present in the source.</p> </li> </ul>  <p>If you set this
     * parameter to <code>REMOVE</code>, you can't set <code>TransferMode</code> to
     * <code>ALL</code>. When you transfer all data, DataSync doesn't scan your
     * destination location and doesn't know what to delete.</p> 
     */
    inline PreserveDeletedFiles GetPreserveDeletedFiles() const { return m_preserveDeletedFiles; }
    inline bool PreserveDeletedFilesHasBeenSet() const { return m_preserveDeletedFilesHasBeenSet; }
    inline void SetPreserveDeletedFiles(PreserveDeletedFiles value) { m_preserveDeletedFilesHasBeenSet = true; m_preserveDeletedFiles = value; }
    inline Options& WithPreserveDeletedFiles(PreserveDeletedFiles value) { SetPreserveDeletedFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <ul> <li> <p> <code>NONE</code> (default) - Ignores special
     * devices (recommended).</p> </li> <li> <p> <code>PRESERVE</code> - Preserves
     * character and block device metadata. This option currently isn't supported for
     * Amazon EFS.</p> </li> </ul>
     */
    inline PreserveDevices GetPreserveDevices() const { return m_preserveDevices; }
    inline bool PreserveDevicesHasBeenSet() const { return m_preserveDevicesHasBeenSet; }
    inline void SetPreserveDevices(PreserveDevices value) { m_preserveDevicesHasBeenSet = true; m_preserveDevices = value; }
    inline Options& WithPreserveDevices(PreserveDevices value) { SetPreserveDevices(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/metadata-copied.html">Understanding
     * how DataSync handles file and object metadata</a>.</p> <ul> <li> <p>
     * <code>PRESERVE</code> (default) - Preserves POSIX-style permissions, which is
     * recommended.</p> </li> <li> <p> <code>NONE</code> - Ignores POSIX-style
     * permissions. </p> </li> </ul>  <p>DataSync can preserve extant permissions
     * of a source location.</p> 
     */
    inline PosixPermissions GetPosixPermissions() const { return m_posixPermissions; }
    inline bool PosixPermissionsHasBeenSet() const { return m_posixPermissionsHasBeenSet; }
    inline void SetPosixPermissions(PosixPermissions value) { m_posixPermissionsHasBeenSet = true; m_posixPermissions = value; }
    inline Options& WithPosixPermissions(PosixPermissions value) { SetPosixPermissions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the bandwidth used by a DataSync task. For example, if you want
     * DataSync to use a maximum of 1 MB, set this value to <code>1048576</code>
     * (<code>=1024*1024</code>).</p>  <p>Not applicable to <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/choosing-task-mode.html">Enhanced
     * mode tasks</a>.</p> 
     */
    inline long long GetBytesPerSecond() const { return m_bytesPerSecond; }
    inline bool BytesPerSecondHasBeenSet() const { return m_bytesPerSecondHasBeenSet; }
    inline void SetBytesPerSecond(long long value) { m_bytesPerSecondHasBeenSet = true; m_bytesPerSecond = value; }
    inline Options& WithBytesPerSecond(long long value) { SetBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether your transfer tasks should be put into a queue during
     * certain scenarios when <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#running-multiple-tasks">running
     * multiple tasks</a>. This is <code>ENABLED</code> by default.</p>
     */
    inline TaskQueueing GetTaskQueueing() const { return m_taskQueueing; }
    inline bool TaskQueueingHasBeenSet() const { return m_taskQueueingHasBeenSet; }
    inline void SetTaskQueueing(TaskQueueing value) { m_taskQueueingHasBeenSet = true; m_taskQueueing = value; }
    inline Options& WithTaskQueueing(TaskQueueing value) { SetTaskQueueing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <ul> <li> <p> <code>BASIC</code> - Publishes logs with only basic information
     * (such as transfer errors).</p> </li> <li> <p> <code>TRANSFER</code> - Publishes
     * logs for all files or objects that your DataSync task transfers and performs
     * data-integrity checks on.</p> </li> <li> <p> <code>OFF</code> - No logs are
     * published.</p> </li> </ul>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline Options& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether DataSync transfers only the data (including metadata) that
     * differs between locations following an initial copy or transfers all data every
     * time you run the task. If you're planning on recurring transfers, you might only
     * want to transfer what's changed since your previous task execution.</p> <ul>
     * <li> <p> <code>CHANGED</code> (default) - After your initial full transfer,
     * DataSync copies only the data and metadata that differs between the source and
     * destination location.</p> </li> <li> <p> <code>ALL</code> - DataSync copies
     * everything in the source to the destination without comparing differences
     * between the locations.</p> </li> </ul>
     */
    inline TransferMode GetTransferMode() const { return m_transferMode; }
    inline bool TransferModeHasBeenSet() const { return m_transferModeHasBeenSet; }
    inline void SetTransferMode(TransferMode value) { m_transferModeHasBeenSet = true; m_transferMode = value; }
    inline Options& WithTransferMode(TransferMode value) { SetTransferMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/metadata-copied.html">Understanding
     * how DataSync handles file and object metadata</a>.</p> <ul> <li> <p>
     * <code>OWNER_DACL</code> (default) - For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> </li> <li> <p>
     * <code>OWNER_DACL_SACL</code> - For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> </li> <li> <p>SACLs, which are used by administrators
     * to log attempts to access a secured object.</p> <p>Copying SACLs requires
     * granting additional permissions to the Windows user that DataSync uses to access
     * your SMB location. For information about choosing a user with the right
     * permissions, see required permissions for <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">SMB</a>,
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-fsx-location.html#create-fsx-windows-location-permissions">FSx
     * for Windows File Server</a>, or <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-ontap-location.html#create-ontap-location-smb">FSx
     * for ONTAP</a> (depending on the type of location in your transfer).</p> </li>
     * </ul> </li> <li> <p> <code>NONE</code> - None of the SMB security descriptor
     * components are copied. Destination objects are owned by the user that was
     * provided for accessing the destination location. DACLs and SACLs are set based
     * on the destination server’s configuration. </p> </li> </ul>
     */
    inline SmbSecurityDescriptorCopyFlags GetSecurityDescriptorCopyFlags() const { return m_securityDescriptorCopyFlags; }
    inline bool SecurityDescriptorCopyFlagsHasBeenSet() const { return m_securityDescriptorCopyFlagsHasBeenSet; }
    inline void SetSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags value) { m_securityDescriptorCopyFlagsHasBeenSet = true; m_securityDescriptorCopyFlags = value; }
    inline Options& WithSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags value) { SetSecurityDescriptorCopyFlags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want DataSync to <code>PRESERVE</code> object tags
     * (default behavior) when transferring between object storage systems. If you want
     * your DataSync task to ignore object tags, specify the <code>NONE</code>
     * value.</p>
     */
    inline ObjectTags GetObjectTags() const { return m_objectTags; }
    inline bool ObjectTagsHasBeenSet() const { return m_objectTagsHasBeenSet; }
    inline void SetObjectTags(ObjectTags value) { m_objectTagsHasBeenSet = true; m_objectTags = value; }
    inline Options& WithObjectTags(ObjectTags value) { SetObjectTags(value); return *this;}
    ///@}
  private:

    VerifyMode m_verifyMode{VerifyMode::NOT_SET};
    bool m_verifyModeHasBeenSet = false;

    OverwriteMode m_overwriteMode{OverwriteMode::NOT_SET};
    bool m_overwriteModeHasBeenSet = false;

    Atime m_atime{Atime::NOT_SET};
    bool m_atimeHasBeenSet = false;

    Mtime m_mtime{Mtime::NOT_SET};
    bool m_mtimeHasBeenSet = false;

    Uid m_uid{Uid::NOT_SET};
    bool m_uidHasBeenSet = false;

    Gid m_gid{Gid::NOT_SET};
    bool m_gidHasBeenSet = false;

    PreserveDeletedFiles m_preserveDeletedFiles{PreserveDeletedFiles::NOT_SET};
    bool m_preserveDeletedFilesHasBeenSet = false;

    PreserveDevices m_preserveDevices{PreserveDevices::NOT_SET};
    bool m_preserveDevicesHasBeenSet = false;

    PosixPermissions m_posixPermissions{PosixPermissions::NOT_SET};
    bool m_posixPermissionsHasBeenSet = false;

    long long m_bytesPerSecond{0};
    bool m_bytesPerSecondHasBeenSet = false;

    TaskQueueing m_taskQueueing{TaskQueueing::NOT_SET};
    bool m_taskQueueingHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    TransferMode m_transferMode{TransferMode::NOT_SET};
    bool m_transferModeHasBeenSet = false;

    SmbSecurityDescriptorCopyFlags m_securityDescriptorCopyFlags{SmbSecurityDescriptorCopyFlags::NOT_SET};
    bool m_securityDescriptorCopyFlagsHasBeenSet = false;

    ObjectTags m_objectTags{ObjectTags::NOT_SET};
    bool m_objectTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
