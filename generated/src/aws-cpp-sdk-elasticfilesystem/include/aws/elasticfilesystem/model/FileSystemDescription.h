/**
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
#include <aws/elasticfilesystem/model/FileSystemProtectionDescription.h>
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
  class FileSystemDescription
  {
  public:
    AWS_EFS_API FileSystemDescription();
    AWS_EFS_API FileSystemDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API FileSystemDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline FileSystemDescription& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline FileSystemDescription& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline FileSystemDescription& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }
    inline bool CreationTokenHasBeenSet() const { return m_creationTokenHasBeenSet; }
    inline void SetCreationToken(const Aws::String& value) { m_creationTokenHasBeenSet = true; m_creationToken = value; }
    inline void SetCreationToken(Aws::String&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::move(value); }
    inline void SetCreationToken(const char* value) { m_creationTokenHasBeenSet = true; m_creationToken.assign(value); }
    inline FileSystemDescription& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}
    inline FileSystemDescription& WithCreationToken(Aws::String&& value) { SetCreationToken(std::move(value)); return *this;}
    inline FileSystemDescription& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline FileSystemDescription& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline FileSystemDescription& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline FileSystemDescription& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline const Aws::String& GetFileSystemArn() const{ return m_fileSystemArn; }
    inline bool FileSystemArnHasBeenSet() const { return m_fileSystemArnHasBeenSet; }
    inline void SetFileSystemArn(const Aws::String& value) { m_fileSystemArnHasBeenSet = true; m_fileSystemArn = value; }
    inline void SetFileSystemArn(Aws::String&& value) { m_fileSystemArnHasBeenSet = true; m_fileSystemArn = std::move(value); }
    inline void SetFileSystemArn(const char* value) { m_fileSystemArnHasBeenSet = true; m_fileSystemArn.assign(value); }
    inline FileSystemDescription& WithFileSystemArn(const Aws::String& value) { SetFileSystemArn(value); return *this;}
    inline FileSystemDescription& WithFileSystemArn(Aws::String&& value) { SetFileSystemArn(std::move(value)); return *this;}
    inline FileSystemDescription& WithFileSystemArn(const char* value) { SetFileSystemArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FileSystemDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FileSystemDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }
    inline bool LifeCycleStateHasBeenSet() const { return m_lifeCycleStateHasBeenSet; }
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = std::move(value); }
    inline FileSystemDescription& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}
    inline FileSystemDescription& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FileSystemDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FileSystemDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FileSystemDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline int GetNumberOfMountTargets() const{ return m_numberOfMountTargets; }
    inline bool NumberOfMountTargetsHasBeenSet() const { return m_numberOfMountTargetsHasBeenSet; }
    inline void SetNumberOfMountTargets(int value) { m_numberOfMountTargetsHasBeenSet = true; m_numberOfMountTargets = value; }
    inline FileSystemDescription& WithNumberOfMountTargets(int value) { SetNumberOfMountTargets(value); return *this;}
    ///@}

    ///@{
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
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
    inline void SetSizeInBytes(const FileSystemSize& value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline void SetSizeInBytes(FileSystemSize&& value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = std::move(value); }
    inline FileSystemDescription& WithSizeInBytes(const FileSystemSize& value) { SetSizeInBytes(value); return *this;}
    inline FileSystemDescription& WithSizeInBytes(FileSystemSize&& value) { SetSizeInBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance mode of the file system.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }
    inline bool PerformanceModeHasBeenSet() const { return m_performanceModeHasBeenSet; }
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceModeHasBeenSet = true; m_performanceMode = std::move(value); }
    inline FileSystemDescription& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}
    inline FileSystemDescription& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline FileSystemDescription& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline FileSystemDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline FileSystemDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline FileSystemDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }
    inline FileSystemDescription& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}
    inline FileSystemDescription& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned throughput, measured in MiBps, for the file system.
     * Valid for file systems using <code>ThroughputMode</code> set to
     * <code>provisioned</code>.</p>
     */
    inline double GetProvisionedThroughputInMibps() const{ return m_provisionedThroughputInMibps; }
    inline bool ProvisionedThroughputInMibpsHasBeenSet() const { return m_provisionedThroughputInMibpsHasBeenSet; }
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }
    inline FileSystemDescription& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for One Zone file systems. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }
    inline FileSystemDescription& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}
    inline FileSystemDescription& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}
    inline FileSystemDescription& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system is located, and is valid only for One Zone file systems. For
     * example, <code>use1-az1</code> is an Availability Zone ID for the us-east-1
     * Amazon Web Services Region, and it has the same location in every Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline FileSystemDescription& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline FileSystemDescription& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline FileSystemDescription& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FileSystemDescription& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline FileSystemDescription& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline FileSystemDescription& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline FileSystemDescription& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the protection on the file system. </p>
     */
    inline const FileSystemProtectionDescription& GetFileSystemProtection() const{ return m_fileSystemProtection; }
    inline bool FileSystemProtectionHasBeenSet() const { return m_fileSystemProtectionHasBeenSet; }
    inline void SetFileSystemProtection(const FileSystemProtectionDescription& value) { m_fileSystemProtectionHasBeenSet = true; m_fileSystemProtection = value; }
    inline void SetFileSystemProtection(FileSystemProtectionDescription&& value) { m_fileSystemProtectionHasBeenSet = true; m_fileSystemProtection = std::move(value); }
    inline FileSystemDescription& WithFileSystemProtection(const FileSystemProtectionDescription& value) { SetFileSystemProtection(value); return *this;}
    inline FileSystemDescription& WithFileSystemProtection(FileSystemProtectionDescription&& value) { SetFileSystemProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline FileSystemDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FileSystemDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FileSystemDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_creationToken;
    bool m_creationTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_fileSystemArn;
    bool m_fileSystemArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    LifeCycleState m_lifeCycleState;
    bool m_lifeCycleStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_numberOfMountTargets;
    bool m_numberOfMountTargetsHasBeenSet = false;

    FileSystemSize m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet = false;

    PerformanceMode m_performanceMode;
    bool m_performanceModeHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet = false;

    double m_provisionedThroughputInMibps;
    bool m_provisionedThroughputInMibpsHasBeenSet = false;

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    FileSystemProtectionDescription m_fileSystemProtection;
    bool m_fileSystemProtectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
