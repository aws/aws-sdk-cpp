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
   * <p>Configures your DataSync task settings. These options include how DataSync
   * handles files, objects, and their associated metadata. You also can specify how
   * DataSync verifies data integrity, set bandwidth limits for your task, among
   * other options.</p> <p>Each task setting has a default value. Unless you need to,
   * you don't have to configure any of these <code>Options</code> before starting
   * your task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Options">AWS
   * API Reference</a></p>
   */
  class Options
  {
  public:
    AWS_DATASYNC_API Options();
    AWS_DATASYNC_API Options(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Options& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline const VerifyMode& GetVerifyMode() const{ return m_verifyMode; }

    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline bool VerifyModeHasBeenSet() const { return m_verifyModeHasBeenSet; }

    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline void SetVerifyMode(const VerifyMode& value) { m_verifyModeHasBeenSet = true; m_verifyMode = value; }

    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline void SetVerifyMode(VerifyMode&& value) { m_verifyModeHasBeenSet = true; m_verifyMode = std::move(value); }

    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline Options& WithVerifyMode(const VerifyMode& value) { SetVerifyMode(value); return *this;}

    /**
     * <p>Specifies how and when DataSync checks the integrity of your data during a
     * transfer. </p> <p>Default value: <code>POINT_IN_TIME_CONSISTENT</code> </p> <p>
     * <code>ONLY_FILES_TRANSFERRED</code> (recommended): DataSync calculates the
     * checksum of transferred files and metadata at the source location. At the end of
     * the transfer, DataSync then compares this checksum to the checksum calculated on
     * those files at the destination.</p> <p>We recommend this option when
     * transferring to S3 Glacier Flexible Retrieval or S3 Glacier Deep Archive storage
     * classes. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p>
     * <code>POINT_IN_TIME_CONSISTENT</code>: At the end of the transfer, DataSync
     * scans the entire source and destination to verify that both locations are fully
     * synchronized.</p> <p>You can't use this option when transferring to S3 Glacier
     * Flexible Retrieval or S3 Glacier Deep Archive storage classes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 locations</a>.</p> <p> <code>NONE</code>:
     * DataSync doesn't run additional verification at the end of the transfer. All
     * data transmissions are still integrity-checked with checksum verification during
     * the transfer.</p>
     */
    inline Options& WithVerifyMode(VerifyMode&& value) { SetVerifyMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline const OverwriteMode& GetOverwriteMode() const{ return m_overwriteMode; }

    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline bool OverwriteModeHasBeenSet() const { return m_overwriteModeHasBeenSet; }

    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline void SetOverwriteMode(const OverwriteMode& value) { m_overwriteModeHasBeenSet = true; m_overwriteMode = value; }

    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline void SetOverwriteMode(OverwriteMode&& value) { m_overwriteModeHasBeenSet = true; m_overwriteMode = std::move(value); }

    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline Options& WithOverwriteMode(const OverwriteMode& value) { SetOverwriteMode(value); return *this;}

    /**
     * <p>Specifies whether data at the destination location should be overwritten or
     * preserved. If set to <code>NEVER</code>, a destination file for example will not
     * be replaced by a source file (even if the destination file differs from the
     * source file). If you modify files in the destination and you sync the files, you
     * can use this value to protect against overwriting those changes. </p> <p>Some
     * storage classes have specific behaviors that can affect your Amazon S3 storage
     * cost. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p>
     */
    inline Options& WithOverwriteMode(OverwriteMode&& value) { SetOverwriteMode(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline const Atime& GetAtime() const{ return m_atime; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline bool AtimeHasBeenSet() const { return m_atimeHasBeenSet; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline void SetAtime(const Atime& value) { m_atimeHasBeenSet = true; m_atime = value; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline void SetAtime(Atime&& value) { m_atimeHasBeenSet = true; m_atime = std::move(value); }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline Options& WithAtime(const Atime& value) { SetAtime(value); return *this;}

    /**
     * <p>Specifies whether to preserve metadata indicating the last time a file was
     * read or written to. If you set <code>Atime</code> to <code>BEST_EFFORT</code>,
     * DataSync attempts to preserve the original <code>Atime</code> attribute on all
     * source files (that is, the version before the <code>PREPARING</code> phase of
     * the task execution).</p>  <p>The behavior of <code>Atime</code> isn't
     * fully standard across platforms, so DataSync can only do this on a best-effort
     * basis.</p>  <p>Default value: <code>BEST_EFFORT</code> </p> <p>
     * <code>BEST_EFFORT</code>: Attempt to preserve the per-file <code>Atime</code>
     * value (recommended).</p> <p> <code>NONE</code>: Ignore <code>Atime</code>.</p>
     *  <p>If <code>Atime</code> is set to <code>BEST_EFFORT</code>,
     * <code>Mtime</code> must be set to <code>PRESERVE</code>. </p> <p>If
     * <code>Atime</code> is set to <code>NONE</code>, <code>Mtime</code> must also be
     * <code>NONE</code>. </p> 
     */
    inline Options& WithAtime(Atime&& value) { SetAtime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline const Mtime& GetMtime() const{ return m_mtime; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline bool MtimeHasBeenSet() const { return m_mtimeHasBeenSet; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline void SetMtime(const Mtime& value) { m_mtimeHasBeenSet = true; m_mtime = value; }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline void SetMtime(Mtime&& value) { m_mtimeHasBeenSet = true; m_mtime = std::move(value); }

    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline Options& WithMtime(const Mtime& value) { SetMtime(value); return *this;}

    /**
     * <p>Specifies whether to preserve metadata indicating the last time that a file
     * was written to before the <code>PREPARING</code> phase of your task execution.
     * This option is required when you need to run the a task more than once.</p>
     * <p>Default Value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Preserve
     * original <code>Mtime</code> (recommended)</p> <p> <code>NONE</code>: Ignore
     * <code>Mtime</code>. </p>  <p>If <code>Mtime</code> is set to
     * <code>PRESERVE</code>, <code>Atime</code> must be set to
     * <code>BEST_EFFORT</code>.</p> <p>If <code>Mtime</code> is set to
     * <code>NONE</code>, <code>Atime</code> must also be set to <code>NONE</code>.
     * </p> 
     */
    inline Options& WithMtime(Mtime&& value) { SetMtime(std::move(value)); return *this;}


    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline const Uid& GetUid() const{ return m_uid; }

    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }

    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline void SetUid(const Uid& value) { m_uidHasBeenSet = true; m_uid = value; }

    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline void SetUid(Uid&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }

    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline Options& WithUid(const Uid& value) { SetUid(value); return *this;}

    /**
     * <p>Specifies the POSIX user ID (UID) of the file's owner.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of UID and group ID (GID) (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID. </p>
     */
    inline Options& WithUid(Uid&& value) { SetUid(std::move(value)); return *this;}


    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline const Gid& GetGid() const{ return m_gid; }

    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline bool GidHasBeenSet() const { return m_gidHasBeenSet; }

    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline void SetGid(const Gid& value) { m_gidHasBeenSet = true; m_gid = value; }

    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline void SetGid(Gid&& value) { m_gidHasBeenSet = true; m_gid = std::move(value); }

    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline Options& WithGid(const Gid& value) { SetGid(value); return *this;}

    /**
     * <p>Specifies the POSIX group ID (GID) of the file's owners.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>INT_VALUE</code>. This
     * preserves the integer value of the ID.</p> <p> <code>INT_VALUE</code>: Preserve
     * the integer value of user ID (UID) and GID (recommended).</p> <p>
     * <code>NONE</code>: Ignore UID and GID.</p>
     */
    inline Options& WithGid(Gid&& value) { SetGid(std::move(value)); return *this;}


    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline const PreserveDeletedFiles& GetPreserveDeletedFiles() const{ return m_preserveDeletedFiles; }

    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline bool PreserveDeletedFilesHasBeenSet() const { return m_preserveDeletedFilesHasBeenSet; }

    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline void SetPreserveDeletedFiles(const PreserveDeletedFiles& value) { m_preserveDeletedFilesHasBeenSet = true; m_preserveDeletedFiles = value; }

    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline void SetPreserveDeletedFiles(PreserveDeletedFiles&& value) { m_preserveDeletedFilesHasBeenSet = true; m_preserveDeletedFiles = std::move(value); }

    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline Options& WithPreserveDeletedFiles(const PreserveDeletedFiles& value) { SetPreserveDeletedFiles(value); return *this;}

    /**
     * <p>Specifies whether files in the destination location that don't exist in the
     * source should be preserved. This option can affect your Amazon S3 storage cost.
     * If your task deletes objects, you might incur minimum storage duration charges
     * for certain storage classes. For detailed information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Considerations
     * when working with Amazon S3 storage classes in DataSync </a>.</p> <p>Default
     * value: <code>PRESERVE</code> </p> <p> <code>PRESERVE</code>: Ignore such
     * destination files (recommended). </p> <p> <code>REMOVE</code>: Delete
     * destination files that aren’t present in the source.</p>
     */
    inline Options& WithPreserveDeletedFiles(PreserveDeletedFiles&& value) { SetPreserveDeletedFiles(std::move(value)); return *this;}


    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline const PreserveDevices& GetPreserveDevices() const{ return m_preserveDevices; }

    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline bool PreserveDevicesHasBeenSet() const { return m_preserveDevicesHasBeenSet; }

    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline void SetPreserveDevices(const PreserveDevices& value) { m_preserveDevicesHasBeenSet = true; m_preserveDevices = value; }

    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline void SetPreserveDevices(PreserveDevices&& value) { m_preserveDevicesHasBeenSet = true; m_preserveDevices = std::move(value); }

    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline Options& WithPreserveDevices(const PreserveDevices& value) { SetPreserveDevices(value); return *this;}

    /**
     * <p>Specifies whether DataSync should preserve the metadata of block and
     * character devices in the source location and recreate the files with that device
     * name and metadata on the destination. DataSync copies only the name and metadata
     * of such devices.</p>  <p>DataSync can't copy the actual contents of these
     * devices because they're nonterminal and don't return an end-of-file (EOF)
     * marker.</p>  <p>Default value: <code>NONE</code> </p> <p>
     * <code>NONE</code>: Ignore special devices (recommended). </p> <p>
     * <code>PRESERVE</code>: Preserve character and block device metadata. This option
     * currently isn't supported for Amazon EFS. </p>
     */
    inline Options& WithPreserveDevices(PreserveDevices&& value) { SetPreserveDevices(std::move(value)); return *this;}


    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline const PosixPermissions& GetPosixPermissions() const{ return m_posixPermissions; }

    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline bool PosixPermissionsHasBeenSet() const { return m_posixPermissionsHasBeenSet; }

    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline void SetPosixPermissions(const PosixPermissions& value) { m_posixPermissionsHasBeenSet = true; m_posixPermissions = value; }

    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline void SetPosixPermissions(PosixPermissions&& value) { m_posixPermissionsHasBeenSet = true; m_posixPermissions = std::move(value); }

    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline Options& WithPosixPermissions(const PosixPermissions& value) { SetPosixPermissions(value); return *this;}

    /**
     * <p>Specifies which users or groups can access a file for a specific purpose such
     * as reading, writing, or execution of the file.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html#metadata-copied">Metadata
     * copied by DataSync</a>.</p> <p>Default value: <code>PRESERVE</code> </p> <p>
     * <code>PRESERVE</code>: Preserve POSIX-style permissions (recommended).</p> <p>
     * <code>NONE</code>: Ignore permissions. </p>  <p>DataSync can preserve
     * extant permissions of a source location.</p> 
     */
    inline Options& WithPosixPermissions(PosixPermissions&& value) { SetPosixPermissions(std::move(value)); return *this;}


    /**
     * <p>Limits the bandwidth used by a DataSync task. For example, if you want
     * DataSync to use a maximum of 1 MB, set this value to <code>1048576</code>
     * (<code>=1024*1024</code>).</p>
     */
    inline long long GetBytesPerSecond() const{ return m_bytesPerSecond; }

    /**
     * <p>Limits the bandwidth used by a DataSync task. For example, if you want
     * DataSync to use a maximum of 1 MB, set this value to <code>1048576</code>
     * (<code>=1024*1024</code>).</p>
     */
    inline bool BytesPerSecondHasBeenSet() const { return m_bytesPerSecondHasBeenSet; }

    /**
     * <p>Limits the bandwidth used by a DataSync task. For example, if you want
     * DataSync to use a maximum of 1 MB, set this value to <code>1048576</code>
     * (<code>=1024*1024</code>).</p>
     */
    inline void SetBytesPerSecond(long long value) { m_bytesPerSecondHasBeenSet = true; m_bytesPerSecond = value; }

    /**
     * <p>Limits the bandwidth used by a DataSync task. For example, if you want
     * DataSync to use a maximum of 1 MB, set this value to <code>1048576</code>
     * (<code>=1024*1024</code>).</p>
     */
    inline Options& WithBytesPerSecond(long long value) { SetBytesPerSecond(value); return *this;}


    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline const TaskQueueing& GetTaskQueueing() const{ return m_taskQueueing; }

    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline bool TaskQueueingHasBeenSet() const { return m_taskQueueingHasBeenSet; }

    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline void SetTaskQueueing(const TaskQueueing& value) { m_taskQueueingHasBeenSet = true; m_taskQueueing = value; }

    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline void SetTaskQueueing(TaskQueueing&& value) { m_taskQueueingHasBeenSet = true; m_taskQueueing = std::move(value); }

    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline Options& WithTaskQueueing(const TaskQueueing& value) { SetTaskQueueing(value); return *this;}

    /**
     * <p>Specifies whether tasks should be queued before executing the tasks. The
     * default is <code>ENABLED</code>, which means the tasks will be queued.</p> <p>If
     * you use the same agent to run multiple tasks, you can enable the tasks to run in
     * series. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/run-task.html#queue-task-execution">Queueing
     * task executions</a>.</p>
     */
    inline Options& WithTaskQueueing(TaskQueueing&& value) { SetTaskQueueing(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline Options& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Specifies the type of logs that DataSync publishes to a Amazon CloudWatch
     * Logs log group. To specify the log group, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateTask.html#DataSync-CreateTask-request-CloudWatchLogGroupArn">CloudWatchLogGroupArn</a>.</p>
     * <p>If you set <code>LogLevel</code> to <code>OFF</code>, no logs are published.
     * <code>BASIC</code> publishes logs on errors for individual files transferred.
     * <code>TRANSFER</code> publishes logs for every file or object that is
     * transferred and integrity checked.</p>
     */
    inline Options& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline const TransferMode& GetTransferMode() const{ return m_transferMode; }

    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline bool TransferModeHasBeenSet() const { return m_transferModeHasBeenSet; }

    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline void SetTransferMode(const TransferMode& value) { m_transferModeHasBeenSet = true; m_transferMode = value; }

    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline void SetTransferMode(TransferMode&& value) { m_transferModeHasBeenSet = true; m_transferMode = std::move(value); }

    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline Options& WithTransferMode(const TransferMode& value) { SetTransferMode(value); return *this;}

    /**
     * <p>Determines whether DataSync transfers only the data and metadata that differ
     * between the source and the destination location or transfers all the content
     * from the source (without comparing what's in the destination).</p> <p>
     * <code>CHANGED</code>: DataSync copies only data or metadata that is new or
     * different content from the source location to the destination location.</p> <p>
     * <code>ALL</code>: DataSync copies all source location content to the destination
     * (without comparing what's in the destination).</p>
     */
    inline Options& WithTransferMode(TransferMode&& value) { SetTransferMode(std::move(value)); return *this;}


    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline const SmbSecurityDescriptorCopyFlags& GetSecurityDescriptorCopyFlags() const{ return m_securityDescriptorCopyFlags; }

    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline bool SecurityDescriptorCopyFlagsHasBeenSet() const { return m_securityDescriptorCopyFlagsHasBeenSet; }

    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline void SetSecurityDescriptorCopyFlags(const SmbSecurityDescriptorCopyFlags& value) { m_securityDescriptorCopyFlagsHasBeenSet = true; m_securityDescriptorCopyFlags = value; }

    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline void SetSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags&& value) { m_securityDescriptorCopyFlagsHasBeenSet = true; m_securityDescriptorCopyFlags = std::move(value); }

    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline Options& WithSecurityDescriptorCopyFlags(const SmbSecurityDescriptorCopyFlags& value) { SetSecurityDescriptorCopyFlags(value); return *this;}

    /**
     * <p>Specifies which components of the SMB security descriptor are copied from
     * source to destination objects. </p> <p>This value is only used for transfers
     * between SMB and Amazon FSx for Windows File Server locations or between two FSx
     * for Windows File Server locations. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/special-files.html">how
     * DataSync handles metadata</a>.</p> <p>Default value: <code>OWNER_DACL</code>
     * </p> <p> <code>OWNER_DACL</code>: For each copied object, DataSync copies the
     * following metadata:</p> <ul> <li> <p>The object owner.</p> </li> <li> <p>NTFS
     * discretionary access control lists (DACLs), which determine whether to grant
     * access to an object.</p> <p>DataSync won't copy NTFS system access control lists
     * (SACLs) with this option.</p> </li> </ul> <p> <code>OWNER_DACL_SACL</code>: For
     * each copied object, DataSync copies the following metadata:</p> <ul> <li> <p>The
     * object owner.</p> </li> <li> <p>NTFS discretionary access control lists (DACLs),
     * which determine whether to grant access to an object.</p> </li> <li> <p>SACLs,
     * which are used by administrators to log attempts to access a secured object.</p>
     * <p>Copying SACLs requires granting additional permissions to the Windows user
     * that DataSync uses to access your SMB location. For information about choosing a
     * user that ensures sufficient permissions to files, folders, and metadata, see <a
     * href="create-smb-location.html#SMBuser">user</a>.</p> </li> </ul> <p>
     * <code>NONE</code>: None of the SMB security descriptor components are copied.
     * Destination objects are owned by the user that was provided for accessing the
     * destination location. DACLs and SACLs are set based on the destination server’s
     * configuration. </p>
     */
    inline Options& WithSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags&& value) { SetSecurityDescriptorCopyFlags(std::move(value)); return *this;}


    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline const ObjectTags& GetObjectTags() const{ return m_objectTags; }

    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline bool ObjectTagsHasBeenSet() const { return m_objectTagsHasBeenSet; }

    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline void SetObjectTags(const ObjectTags& value) { m_objectTagsHasBeenSet = true; m_objectTags = value; }

    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline void SetObjectTags(ObjectTags&& value) { m_objectTagsHasBeenSet = true; m_objectTags = std::move(value); }

    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline Options& WithObjectTags(const ObjectTags& value) { SetObjectTags(value); return *this;}

    /**
     * <p>Specifies whether object tags are preserved when transferring between object
     * storage systems. If you want your DataSync task to ignore object tags, specify
     * the <code>NONE</code> value.</p> <p>Default Value: <code>PRESERVE</code> </p>
     */
    inline Options& WithObjectTags(ObjectTags&& value) { SetObjectTags(std::move(value)); return *this;}

  private:

    VerifyMode m_verifyMode;
    bool m_verifyModeHasBeenSet = false;

    OverwriteMode m_overwriteMode;
    bool m_overwriteModeHasBeenSet = false;

    Atime m_atime;
    bool m_atimeHasBeenSet = false;

    Mtime m_mtime;
    bool m_mtimeHasBeenSet = false;

    Uid m_uid;
    bool m_uidHasBeenSet = false;

    Gid m_gid;
    bool m_gidHasBeenSet = false;

    PreserveDeletedFiles m_preserveDeletedFiles;
    bool m_preserveDeletedFilesHasBeenSet = false;

    PreserveDevices m_preserveDevices;
    bool m_preserveDevicesHasBeenSet = false;

    PosixPermissions m_posixPermissions;
    bool m_posixPermissionsHasBeenSet = false;

    long long m_bytesPerSecond;
    bool m_bytesPerSecondHasBeenSet = false;

    TaskQueueing m_taskQueueing;
    bool m_taskQueueingHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    TransferMode m_transferMode;
    bool m_transferModeHasBeenSet = false;

    SmbSecurityDescriptorCopyFlags m_securityDescriptorCopyFlags;
    bool m_securityDescriptorCopyFlagsHasBeenSet = false;

    ObjectTags m_objectTags;
    bool m_objectTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
