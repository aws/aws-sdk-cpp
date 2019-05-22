/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
  class AWS_EFS_API FileSystemDescription
  {
  public:
    FileSystemDescription();
    FileSystemDescription(Aws::Utils::Json::JsonView jsonValue);
    FileSystemDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline FileSystemDescription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline FileSystemDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account that created the file system. If the file system was created
     * by an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline FileSystemDescription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline bool CreationTokenHasBeenSet() const { return m_creationTokenHasBeenSet; }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::move(value); }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline FileSystemDescription& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline FileSystemDescription& WithCreationToken(Aws::String&& value) { SetCreationToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline FileSystemDescription& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}


    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline FileSystemDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline FileSystemDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline FileSystemDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline FileSystemDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline FileSystemDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = std::move(value); }

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline FileSystemDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline FileSystemDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}


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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline FileSystemDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline FileSystemDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline FileSystemDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline int GetNumberOfMountTargets() const{ return m_numberOfMountTargets; }

    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline bool NumberOfMountTargetsHasBeenSet() const { return m_numberOfMountTargetsHasBeenSet; }

    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline void SetNumberOfMountTargets(int value) { m_numberOfMountTargetsHasBeenSet = true; m_numberOfMountTargets = value; }

    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline FileSystemDescription& WithNumberOfMountTargets(int value) { SetNumberOfMountTargets(value); return *this;}


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
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }

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
    inline void SetSizeInBytes(const FileSystemSize& value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }

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
    inline void SetSizeInBytes(FileSystemSize&& value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = std::move(value); }

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
    inline FileSystemDescription& WithSizeInBytes(const FileSystemSize& value) { SetSizeInBytes(value); return *this;}

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
    inline FileSystemDescription& WithSizeInBytes(FileSystemSize&& value) { SetSizeInBytes(std::move(value)); return *this;}


    /**
     * <p>The performance mode of the file system.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline bool PerformanceModeHasBeenSet() const { return m_performanceModeHasBeenSet; }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceModeHasBeenSet = true; m_performanceMode = std::move(value); }

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline FileSystemDescription& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The performance mode of the file system.</p>
     */
    inline FileSystemDescription& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline FileSystemDescription& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline FileSystemDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline FileSystemDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of an AWS Key Management Service (AWS KMS) customer master key (CMK)
     * that was used to protect the encrypted file system.</p>
     */
    inline FileSystemDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline FileSystemDescription& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>The throughput mode for a file system. There are two throughput modes to
     * choose from for your file system: <code>bursting</code> and
     * <code>provisioned</code>. If you set <code>ThroughputMode</code> to
     * <code>provisioned</code>, you must also set a value for
     * <code>ProvisionedThroughPutInMibps</code>. You can decrease your file system's
     * throughput in Provisioned Throughput mode or change between the throughput modes
     * as long as it’s been more than 24 hours since the last decrease or throughput
     * mode change. </p>
     */
    inline FileSystemDescription& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system. Valid values are 1-1024. Required if <code>ThroughputMode</code> is set
     * to <code>provisioned</code>. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system. Valid values are 1-1024. Required if <code>ThroughputMode</code> is set
     * to <code>provisioned</code>. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline bool ProvisionedThroughputInMibpsHasBeenSet() const { return m_provisionedThroughputInMibpsHasBeenSet; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system. Valid values are 1-1024. Required if <code>ThroughputMode</code> is set
     * to <code>provisioned</code>. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }

    /**
     * <p>The throughput, measured in MiB/s, that you want to provision for a file
     * system. Valid values are 1-1024. Required if <code>ThroughputMode</code> is set
     * to <code>provisioned</code>. The limit on throughput is 1024 MiB/s. You can get
     * these limits increased by contacting AWS Support. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS Limits That You Can Increase</a> in the <i>Amazon EFS User Guide.</i> </p>
     */
    inline FileSystemDescription& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}


    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline FileSystemDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline FileSystemDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline FileSystemDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline FileSystemDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    LifeCycleState m_lifeCycleState;
    bool m_lifeCycleStateHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_numberOfMountTargets;
    bool m_numberOfMountTargetsHasBeenSet;

    FileSystemSize m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet;

    PerformanceMode m_performanceMode;
    bool m_performanceModeHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet;

    double m_provisionedThroughputInMibps;
    bool m_provisionedThroughputInMibpsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
