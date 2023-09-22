﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/elasticfilesystem/model/FileSystemSize.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{
  /**
   * <p>A description of the file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/FileSystemDescription">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemResult
  {
  public:
    AWS_EFS_API UpdateFileSystemResult();
    AWS_EFS_API UpdateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API UpdateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline UpdateFileSystemResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline UpdateFileSystemResult& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline UpdateFileSystemResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationToken = value; }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationToken = std::move(value); }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationToken.assign(value); }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline UpdateFileSystemResult& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline UpdateFileSystemResult& WithCreationToken(Aws::String&& value) { SetCreationToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline UpdateFileSystemResult& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}


    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline UpdateFileSystemResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline UpdateFileSystemResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline UpdateFileSystemResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline const Aws::String& GetFileSystemArn() const{ return m_fileSystemArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline void SetFileSystemArn(const Aws::String& value) { m_fileSystemArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline void SetFileSystemArn(Aws::String&& value) { m_fileSystemArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline void SetFileSystemArn(const char* value) { m_fileSystemArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline UpdateFileSystemResult& WithFileSystemArn(const Aws::String& value) { SetFileSystemArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline UpdateFileSystemResult& WithFileSystemArn(Aws::String&& value) { SetFileSystemArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline UpdateFileSystemResult& WithFileSystemArn(const char* value) { SetFileSystemArn(value); return *this;}


    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline UpdateFileSystemResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline UpdateFileSystemResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = std::move(value); }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline UpdateFileSystemResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline UpdateFileSystemResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}


    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline UpdateFileSystemResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline UpdateFileSystemResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline UpdateFileSystemResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline int GetNumberOfMountTargets() const{ return m_numberOfMountTargets; }

    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline void SetNumberOfMountTargets(int value) { m_numberOfMountTargets = value; }

    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline UpdateFileSystemResult& WithNumberOfMountTargets(int value) { SetNumberOfMountTargets(value); return *this;}


    /**
     * <p>The latest known metered size (in bytes) of data stored in the file system,
     * in its <code>Value</code> field, and the time at which that size was determined
     * in its <code>Timestamp</code> field. The <code>Timestamp</code> value is the
     * integer number of seconds since 1970-01-01T00:00:00Z. The
     * <code>SizeInBytes</code> value doesn't represent the size of a consistent
     * snapshot of the file system, but it is eventually consistent when there are no
     * writes to the file system. That is, <code>SizeInBytes</code> represents actual
     * size only if the file system is not modified for a period longer than a couple
     * of hours. Otherwise, the value is not the exact size that the file system was at
     * any point in time. </p>
     */
    inline const FileSystemSize& GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>The latest known metered size (in bytes) of data stored in the file system,
     * in its <code>Value</code> field, and the time at which that size was determined
     * in its <code>Timestamp</code> field. The <code>Timestamp</code> value is the
     * integer number of seconds since 1970-01-01T00:00:00Z. The
     * <code>SizeInBytes</code> value doesn't represent the size of a consistent
     * snapshot of the file system, but it is eventually consistent when there are no
     * writes to the file system. That is, <code>SizeInBytes</code> represents actual
     * size only if the file system is not modified for a period longer than a couple
     * of hours. Otherwise, the value is not the exact size that the file system was at
     * any point in time. </p>
     */
    inline void SetSizeInBytes(const FileSystemSize& value) { m_sizeInBytes = value; }

    /**
     * <p>The latest known metered size (in bytes) of data stored in the file system,
     * in its <code>Value</code> field, and the time at which that size was determined
     * in its <code>Timestamp</code> field. The <code>Timestamp</code> value is the
     * integer number of seconds since 1970-01-01T00:00:00Z. The
     * <code>SizeInBytes</code> value doesn't represent the size of a consistent
     * snapshot of the file system, but it is eventually consistent when there are no
     * writes to the file system. That is, <code>SizeInBytes</code> represents actual
     * size only if the file system is not modified for a period longer than a couple
     * of hours. Otherwise, the value is not the exact size that the file system was at
     * any point in time. </p>
     */
    inline void SetSizeInBytes(FileSystemSize&& value) { m_sizeInBytes = std::move(value); }

    /**
     * <p>The latest known metered size (in bytes) of data stored in the file system,
     * in its <code>Value</code> field, and the time at which that size was determined
     * in its <code>Timestamp</code> field. The <code>Timestamp</code> value is the
     * integer number of seconds since 1970-01-01T00:00:00Z. The
     * <code>SizeInBytes</code> value doesn't represent the size of a consistent
     * snapshot of the file system, but it is eventually consistent when there are no
     * writes to the file system. That is, <code>SizeInBytes</code> represents actual
     * size only if the file system is not modified for a period longer than a couple
     * of hours. Otherwise, the value is not the exact size that the file system was at
     * any point in time. </p>
     */
    inline UpdateFileSystemResult& WithSizeInBytes(const FileSystemSize& value) { SetSizeInBytes(value); return *this;}

    /**
     * <p>The latest known metered size (in bytes) of data stored in the file system,
     * in its <code>Value</code> field, and the time at which that size was determined
     * in its <code>Timestamp</code> field. The <code>Timestamp</code> value is the
     * integer number of seconds since 1970-01-01T00:00:00Z. The
     * <code>SizeInBytes</code> value doesn't represent the size of a consistent
     * snapshot of the file system, but it is eventually consistent when there are no
     * writes to the file system. That is, <code>SizeInBytes</code> represents actual
     * size only if the file system is not modified for a period longer than a couple
     * of hours. Otherwise, the value is not the exact size that the file system was at
     * any point in time. </p>
     */
    inline UpdateFileSystemResult& WithSizeInBytes(FileSystemSize&& value) { SetSizeInBytes(std::move(value)); return *this;}


    /**
     * <p>The performance mode of the file system.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceMode = value; }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceMode = std::move(value); }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline UpdateFileSystemResult& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline UpdateFileSystemResult& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encrypted = value; }

    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline UpdateFileSystemResult& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline UpdateFileSystemResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline UpdateFileSystemResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline UpdateFileSystemResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputMode = value; }

    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputMode = std::move(value); }

    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline UpdateFileSystemResult& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline UpdateFileSystemResult& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>The amount of provisioned throughput, measured in MiBps, for the file system.
     * Valid for file systems using <code>ThroughputMode</code> set to
     * <code>provisioned</code>.</p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }

    /**
     * <p>The amount of provisioned throughput, measured in MiBps, for the file system.
     * Valid for file systems using <code>ThroughputMode</code> set to
     * <code>provisioned</code>.</p>
     */
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibps = value; }

    /**
     * <p>The amount of provisioned throughput, measured in MiBps, for the file system.
     * Valid for file systems using <code>ThroughputMode</code> set to
     * <code>provisioned</code>.</p>
     */
    inline UpdateFileSystemResult& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}


    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneName = value; }

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneName = std::move(value); }

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneName.assign(value); }

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for file systems using One Zone storage classes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}


    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneId = value; }

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneId = std::move(value); }

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneId.assign(value); }

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system's One Zone storage classes exist. For example, <code>use1-az1</code>
     * is an Availability Zone ID for the us-east-1 Amazon Web Services Region, and it
     * has the same location in every Amazon Web Services account.</p>
     */
    inline UpdateFileSystemResult& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline UpdateFileSystemResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline UpdateFileSystemResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline UpdateFileSystemResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline UpdateFileSystemResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFileSystemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFileSystemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFileSystemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_ownerId;

    Aws::String m_creationToken;

    Aws::String m_fileSystemId;

    Aws::String m_fileSystemArn;

    Aws::Utils::DateTime m_creationTime;

    LifeCycleState m_lifeCycleState;

    Aws::String m_name;

    int m_numberOfMountTargets;

    FileSystemSize m_sizeInBytes;

    PerformanceMode m_performanceMode;

    bool m_encrypted;

    Aws::String m_kmsKeyId;

    ThroughputMode m_throughputMode;

    double m_provisionedThroughputInMibps;

    Aws::String m_availabilityZoneName;

    Aws::String m_availabilityZoneId;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
