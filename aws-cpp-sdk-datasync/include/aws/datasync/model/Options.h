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
   * <p>Represents the options that are available to control the behavior of a
   * <a>StartTaskExecution</a> operation. Behavior includes preserving metadata such
   * as user ID (UID), group ID (GID), and file permissions, and also overwriting
   * files in the destination, data integrity verification, and so on.</p> <p>A task
   * has a set of default options associated with it. If you don't specify an option
   * in <a>StartTaskExecution</a>, the default value is used. You can override the
   * defaults options on each task execution by specifying an overriding
   * <code>Options</code> value to <a>StartTaskExecution</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Options">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API Options
  {
  public:
    Options();
    Options(Aws::Utils::Json::JsonView jsonValue);
    Options& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline const VerifyMode& GetVerifyMode() const{ return m_verifyMode; }

    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline bool VerifyModeHasBeenSet() const { return m_verifyModeHasBeenSet; }

    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline void SetVerifyMode(const VerifyMode& value) { m_verifyModeHasBeenSet = true; m_verifyMode = value; }

    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline void SetVerifyMode(VerifyMode&& value) { m_verifyModeHasBeenSet = true; m_verifyMode = std::move(value); }

    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline Options& WithVerifyMode(const VerifyMode& value) { SetVerifyMode(value); return *this;}

    /**
     * <p>A value that determines whether a data integrity verification should be
     * performed at the end of a task execution after all data and metadata have been
     * transferred. For more information, see <a>create-task</a> </p> <p>Default value:
     * POINT_IN_TIME_CONSISTENT.</p> <p>ONLY_FILES_TRANSFERRED (recommended): Perform
     * verification only on files that were transferred. </p>
     * <p>POINT_IN_TIME_CONSISTENT: Scan the entire source and entire destination at
     * the end of the transfer to verify that source and destination are fully
     * synchronized. This option isn't supported when transferring to S3 Glacier or S3
     * Glacier Deep Archive storage classes.</p> <p>NONE: No additional verification is
     * done at the end of the transfer, but all data transmissions are
     * integrity-checked with checksum verification during the transfer.</p>
     */
    inline Options& WithVerifyMode(VerifyMode&& value) { SetVerifyMode(std::move(value)); return *this;}


    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline const OverwriteMode& GetOverwriteMode() const{ return m_overwriteMode; }

    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline bool OverwriteModeHasBeenSet() const { return m_overwriteModeHasBeenSet; }

    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline void SetOverwriteMode(const OverwriteMode& value) { m_overwriteModeHasBeenSet = true; m_overwriteMode = value; }

    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline void SetOverwriteMode(OverwriteMode&& value) { m_overwriteModeHasBeenSet = true; m_overwriteMode = std::move(value); }

    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline Options& WithOverwriteMode(const OverwriteMode& value) { SetOverwriteMode(value); return *this;}

    /**
     * <p>A value that determines whether files at the destination should be
     * overwritten or preserved when copying files. If set to <code>NEVER</code> a
     * destination file will not be replaced by a source file, even if the destination
     * file differs from the source file. If you modify files in the destination and
     * you sync the files, you can use this value to protect against overwriting those
     * changes. </p> <p>Some storage classes have specific behaviors that can affect
     * your S3 storage cost. For detailed information, see <a>using-storage-classes</a>
     * in the <i>AWS DataSync User Guide</i>.</p>
     */
    inline Options& WithOverwriteMode(OverwriteMode&& value) { SetOverwriteMode(std::move(value)); return *this;}


    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline const Atime& GetAtime() const{ return m_atime; }

    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline bool AtimeHasBeenSet() const { return m_atimeHasBeenSet; }

    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline void SetAtime(const Atime& value) { m_atimeHasBeenSet = true; m_atime = value; }

    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline void SetAtime(Atime&& value) { m_atimeHasBeenSet = true; m_atime = std::move(value); }

    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline Options& WithAtime(const Atime& value) { SetAtime(value); return *this;}

    /**
     * <p>A file metadata value that shows the last time a file was accessed (that is,
     * when the file was read or written to). If you set <code>Atime</code> to
     * BEST_EFFORT, DataSync attempts to preserve the original <code>Atime</code>
     * attribute on all source files (that is, the version before the PREPARING phase).
     * However, <code>Atime</code>'s behavior is not fully standard across platforms,
     * so AWS DataSync can only do this on a best-effort basis. </p> <p>Default value:
     * BEST_EFFORT.</p> <p>BEST_EFFORT: Attempt to preserve the per-file
     * <code>Atime</code> value (recommended).</p> <p>NONE: Ignore
     * <code>Atime</code>.</p>  <p>If <code>Atime</code> is set to BEST_EFFORT,
     * <code>Mtime</code> must be set to PRESERVE. </p> <p>If <code>Atime</code> is set
     * to NONE, <code>Mtime</code> must also be NONE. </p> 
     */
    inline Options& WithAtime(Atime&& value) { SetAtime(std::move(value)); return *this;}


    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline const Mtime& GetMtime() const{ return m_mtime; }

    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline bool MtimeHasBeenSet() const { return m_mtimeHasBeenSet; }

    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline void SetMtime(const Mtime& value) { m_mtimeHasBeenSet = true; m_mtime = value; }

    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline void SetMtime(Mtime&& value) { m_mtimeHasBeenSet = true; m_mtime = std::move(value); }

    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline Options& WithMtime(const Mtime& value) { SetMtime(value); return *this;}

    /**
     * <p>A value that indicates the last time that a file was modified (that is, a
     * file was written to) before the PREPARING phase. </p> <p>Default value:
     * PRESERVE. </p> <p>PRESERVE: Preserve original <code>Mtime</code>
     * (recommended)</p> <p> NONE: Ignore <code>Mtime</code>. </p>  <p>If
     * <code>Mtime</code> is set to PRESERVE, <code>Atime</code> must be set to
     * BEST_EFFORT.</p> <p>If <code>Mtime</code> is set to NONE, <code>Atime</code>
     * must also be set to NONE. </p> 
     */
    inline Options& WithMtime(Mtime&& value) { SetMtime(std::move(value)); return *this;}


    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline const Uid& GetUid() const{ return m_uid; }

    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline void SetUid(const Uid& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline void SetUid(Uid&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline Options& WithUid(const Uid& value) { SetUid(value); return *this;}

    /**
     * <p>The user ID (UID) of the file's owner. </p> <p>Default value: INT_VALUE. This
     * preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the integer
     * value of UID and group ID (GID) (recommended).</p> <p>NONE: Ignore UID and GID.
     * </p>
     */
    inline Options& WithUid(Uid&& value) { SetUid(std::move(value)); return *this;}


    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline const Gid& GetGid() const{ return m_gid; }

    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline void SetGid(const Gid& value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline void SetGid(Gid&& value) { m_gidHasBeenSet = true; m_gid = std::move(value); }

    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline Options& WithGid(const Gid& value) { SetGid(value); return *this;}

    /**
     * <p>The group ID (GID) of the file's owners. </p> <p>Default value: INT_VALUE.
     * This preserves the integer value of the ID.</p> <p>INT_VALUE: Preserve the
     * integer value of user ID (UID) and GID (recommended).</p> <p>NONE: Ignore UID
     * and GID. </p>
     */
    inline Options& WithGid(Gid&& value) { SetGid(std::move(value)); return *this;}


    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline const PreserveDeletedFiles& GetPreserveDeletedFiles() const{ return m_preserveDeletedFiles; }

    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline bool PreserveDeletedFilesHasBeenSet() const { return m_preserveDeletedFilesHasBeenSet; }

    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline void SetPreserveDeletedFiles(const PreserveDeletedFiles& value) { m_preserveDeletedFilesHasBeenSet = true; m_preserveDeletedFiles = value; }

    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline void SetPreserveDeletedFiles(PreserveDeletedFiles&& value) { m_preserveDeletedFilesHasBeenSet = true; m_preserveDeletedFiles = std::move(value); }

    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline Options& WithPreserveDeletedFiles(const PreserveDeletedFiles& value) { SetPreserveDeletedFiles(value); return *this;}

    /**
     * <p>A value that specifies whether files in the destination that don't exist in
     * the source file system should be preserved. This option can affect your storage
     * cost. If your task deletes objects, you might incur minimum storage duration
     * charges for certain storage classes. For detailed information, see
     * <a>using-storage-classes</a> in the <i>AWS DataSync User Guide</i>.</p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Ignore such destination files
     * (recommended). </p> <p>REMOVE: Delete destination files that aren’t present in
     * the source.</p>
     */
    inline Options& WithPreserveDeletedFiles(PreserveDeletedFiles&& value) { SetPreserveDeletedFiles(std::move(value)); return *this;}


    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline const PreserveDevices& GetPreserveDevices() const{ return m_preserveDevices; }

    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline bool PreserveDevicesHasBeenSet() const { return m_preserveDevicesHasBeenSet; }

    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline void SetPreserveDevices(const PreserveDevices& value) { m_preserveDevicesHasBeenSet = true; m_preserveDevices = value; }

    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline void SetPreserveDevices(PreserveDevices&& value) { m_preserveDevicesHasBeenSet = true; m_preserveDevices = std::move(value); }

    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline Options& WithPreserveDevices(const PreserveDevices& value) { SetPreserveDevices(value); return *this;}

    /**
     * <p>A value that determines whether AWS DataSync should preserve the metadata of
     * block and character devices in the source file system, and recreate the files
     * with that device name and metadata on the destination.</p>  <p>AWS
     * DataSync can't sync the actual contents of such devices, because they are
     * nonterminal and don't return an end-of-file (EOF) marker.</p>  <p>Default
     * value: NONE.</p> <p>NONE: Ignore special devices (recommended). </p>
     * <p>PRESERVE: Preserve character and block device metadata. This option isn't
     * currently supported for Amazon EFS. </p>
     */
    inline Options& WithPreserveDevices(PreserveDevices&& value) { SetPreserveDevices(std::move(value)); return *this;}


    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline const PosixPermissions& GetPosixPermissions() const{ return m_posixPermissions; }

    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline bool PosixPermissionsHasBeenSet() const { return m_posixPermissionsHasBeenSet; }

    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline void SetPosixPermissions(const PosixPermissions& value) { m_posixPermissionsHasBeenSet = true; m_posixPermissions = value; }

    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline void SetPosixPermissions(PosixPermissions&& value) { m_posixPermissionsHasBeenSet = true; m_posixPermissions = std::move(value); }

    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline Options& WithPosixPermissions(const PosixPermissions& value) { SetPosixPermissions(value); return *this;}

    /**
     * <p>A value that determines which users or groups can access a file for a
     * specific purpose such as reading, writing, or execution of the file. </p>
     * <p>Default value: PRESERVE.</p> <p>PRESERVE: Preserve POSIX-style permissions
     * (recommended).</p> <p>NONE: Ignore permissions. </p>  <p>AWS DataSync can
     * preserve extant permissions of a source location.</p> 
     */
    inline Options& WithPosixPermissions(PosixPermissions&& value) { SetPosixPermissions(std::move(value)); return *this;}


    /**
     * <p>A value that limits the bandwidth used by AWS DataSync. For example, if you
     * want AWS DataSync to use a maximum of 1 MB, set this value to
     * <code>1048576</code> (<code>=1024*1024</code>).</p>
     */
    inline long long GetBytesPerSecond() const{ return m_bytesPerSecond; }

    /**
     * <p>A value that limits the bandwidth used by AWS DataSync. For example, if you
     * want AWS DataSync to use a maximum of 1 MB, set this value to
     * <code>1048576</code> (<code>=1024*1024</code>).</p>
     */
    inline bool BytesPerSecondHasBeenSet() const { return m_bytesPerSecondHasBeenSet; }

    /**
     * <p>A value that limits the bandwidth used by AWS DataSync. For example, if you
     * want AWS DataSync to use a maximum of 1 MB, set this value to
     * <code>1048576</code> (<code>=1024*1024</code>).</p>
     */
    inline void SetBytesPerSecond(long long value) { m_bytesPerSecondHasBeenSet = true; m_bytesPerSecond = value; }

    /**
     * <p>A value that limits the bandwidth used by AWS DataSync. For example, if you
     * want AWS DataSync to use a maximum of 1 MB, set this value to
     * <code>1048576</code> (<code>=1024*1024</code>).</p>
     */
    inline Options& WithBytesPerSecond(long long value) { SetBytesPerSecond(value); return *this;}


    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline const TaskQueueing& GetTaskQueueing() const{ return m_taskQueueing; }

    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline bool TaskQueueingHasBeenSet() const { return m_taskQueueingHasBeenSet; }

    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline void SetTaskQueueing(const TaskQueueing& value) { m_taskQueueingHasBeenSet = true; m_taskQueueing = value; }

    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline void SetTaskQueueing(TaskQueueing&& value) { m_taskQueueingHasBeenSet = true; m_taskQueueing = std::move(value); }

    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline Options& WithTaskQueueing(const TaskQueueing& value) { SetTaskQueueing(value); return *this;}

    /**
     * <p>A value that determines whether tasks should be queued before executing the
     * tasks. If set to <code>ENABLED</code>, the tasks will be queued. The default is
     * <code>ENABLED</code>.</p> <p>If you use the same agent to run multiple tasks,
     * you can enable the tasks to run in series. For more information, see
     * <a>queue-task-execution</a>.</p>
     */
    inline Options& WithTaskQueueing(TaskQueueing&& value) { SetTaskQueueing(std::move(value)); return *this;}


    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline Options& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>A value that determines the type of logs that DataSync publishes to a log
     * stream in the Amazon CloudWatch log group that you provide. For more information
     * about providing a log group for DataSync, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.
     * If set to <code>OFF</code>, no logs are published. <code>BASIC</code> publishes
     * logs on errors for individual files transferred, and <code>TRANSFER</code>
     * publishes logs for every file or object that is transferred and integrity
     * checked.</p>
     */
    inline Options& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline const TransferMode& GetTransferMode() const{ return m_transferMode; }

    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline bool TransferModeHasBeenSet() const { return m_transferModeHasBeenSet; }

    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline void SetTransferMode(const TransferMode& value) { m_transferModeHasBeenSet = true; m_transferMode = value; }

    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline void SetTransferMode(TransferMode&& value) { m_transferModeHasBeenSet = true; m_transferMode = std::move(value); }

    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline Options& WithTransferMode(const TransferMode& value) { SetTransferMode(value); return *this;}

    /**
     * <p>A value that determines whether DataSync transfers only the data and metadata
     * that differ between the source and the destination location, or whether DataSync
     * transfers all the content from the source, without comparing to the destination
     * location. </p> <p>CHANGED: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p>
     * <p>ALL: DataSync copies all source location content to the destination, without
     * comparing to existing content on the destination.</p>
     */
    inline Options& WithTransferMode(TransferMode&& value) { SetTransferMode(std::move(value)); return *this;}

  private:

    VerifyMode m_verifyMode;
    bool m_verifyModeHasBeenSet;

    OverwriteMode m_overwriteMode;
    bool m_overwriteModeHasBeenSet;

    Atime m_atime;
    bool m_atimeHasBeenSet;

    Mtime m_mtime;
    bool m_mtimeHasBeenSet;

    Uid m_uid;
    bool m_uidHasBeenSet;

    Gid m_gid;
    bool m_gidHasBeenSet;

    PreserveDeletedFiles m_preserveDeletedFiles;
    bool m_preserveDeletedFilesHasBeenSet;

    PreserveDevices m_preserveDevices;
    bool m_preserveDevicesHasBeenSet;

    PosixPermissions m_posixPermissions;
    bool m_posixPermissionsHasBeenSet;

    long long m_bytesPerSecond;
    bool m_bytesPerSecondHasBeenSet;

    TaskQueueing m_taskQueueing;
    bool m_taskQueueingHasBeenSet;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet;

    TransferMode m_transferMode;
    bool m_transferModeHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
