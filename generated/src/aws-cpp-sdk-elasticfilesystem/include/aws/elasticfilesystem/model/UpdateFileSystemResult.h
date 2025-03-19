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
    AWS_EFS_API UpdateFileSystemResult() = default;
    AWS_EFS_API UpdateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API UpdateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account that created the file system.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    UpdateFileSystemResult& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opaque string specified in the request.</p>
     */
    inline const Aws::String& GetCreationToken() const { return m_creationToken; }
    template<typename CreationTokenT = Aws::String>
    void SetCreationToken(CreationTokenT&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::forward<CreationTokenT>(value); }
    template<typename CreationTokenT = Aws::String>
    UpdateFileSystemResult& WithCreationToken(CreationTokenT&& value) { SetCreationToken(std::forward<CreationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    UpdateFileSystemResult& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the EFS file system, in the format
     * <code>arn:aws:elasticfilesystem:<i>region</i>:<i>account-id</i>:file-system/<i>file-system-id</i>
     * </code>. Example with sample data:
     * <code>arn:aws:elasticfilesystem:us-west-2:1111333322228888:file-system/fs-01234567</code>
     * </p>
     */
    inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
    template<typename FileSystemArnT = Aws::String>
    void SetFileSystemArn(FileSystemArnT&& value) { m_fileSystemArnHasBeenSet = true; m_fileSystemArn = std::forward<FileSystemArnT>(value); }
    template<typename FileSystemArnT = Aws::String>
    UpdateFileSystemResult& WithFileSystemArn(FileSystemArnT&& value) { SetFileSystemArn(std::forward<FileSystemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    UpdateFileSystemResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle phase of the file system.</p>
     */
    inline LifeCycleState GetLifeCycleState() const { return m_lifeCycleState; }
    inline void SetLifeCycleState(LifeCycleState value) { m_lifeCycleStateHasBeenSet = true; m_lifeCycleState = value; }
    inline UpdateFileSystemResult& WithLifeCycleState(LifeCycleState value) { SetLifeCycleState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateFileSystem</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFileSystemResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline int GetNumberOfMountTargets() const { return m_numberOfMountTargets; }
    inline void SetNumberOfMountTargets(int value) { m_numberOfMountTargetsHasBeenSet = true; m_numberOfMountTargets = value; }
    inline UpdateFileSystemResult& WithNumberOfMountTargets(int value) { SetNumberOfMountTargets(value); return *this;}
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
    inline const FileSystemSize& GetSizeInBytes() const { return m_sizeInBytes; }
    template<typename SizeInBytesT = FileSystemSize>
    void SetSizeInBytes(SizeInBytesT&& value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = std::forward<SizeInBytesT>(value); }
    template<typename SizeInBytesT = FileSystemSize>
    UpdateFileSystemResult& WithSizeInBytes(SizeInBytesT&& value) { SetSizeInBytes(std::forward<SizeInBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance mode of the file system.</p>
     */
    inline PerformanceMode GetPerformanceMode() const { return m_performanceMode; }
    inline void SetPerformanceMode(PerformanceMode value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }
    inline UpdateFileSystemResult& WithPerformanceMode(PerformanceMode value) { SetPerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that, if true, indicates that the file system is
     * encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline UpdateFileSystemResult& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an KMS key used to protect the encrypted file system.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateFileSystemResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the file system's throughput mode. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#throughput-modes">Throughput
     * modes</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline ThroughputMode GetThroughputMode() const { return m_throughputMode; }
    inline void SetThroughputMode(ThroughputMode value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }
    inline UpdateFileSystemResult& WithThroughputMode(ThroughputMode value) { SetThroughputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of provisioned throughput, measured in MiBps, for the file system.
     * Valid for file systems using <code>ThroughputMode</code> set to
     * <code>provisioned</code>.</p>
     */
    inline double GetProvisionedThroughputInMibps() const { return m_provisionedThroughputInMibps; }
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }
    inline UpdateFileSystemResult& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon Web Services Availability Zone in which the file system
     * is located, and is valid only for One Zone file systems. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html">Using EFS
     * storage classes</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
    template<typename AvailabilityZoneNameT = Aws::String>
    void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value); }
    template<typename AvailabilityZoneNameT = Aws::String>
    UpdateFileSystemResult& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) { SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique and consistent identifier of the Availability Zone in which the
     * file system is located, and is valid only for One Zone file systems. For
     * example, <code>use1-az1</code> is an Availability Zone ID for the us-east-1
     * Amazon Web Services Region, and it has the same location in every Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    UpdateFileSystemResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the file system, presented as an array of
     * <code>Tag</code> objects.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateFileSystemResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateFileSystemResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the protection on the file system. </p>
     */
    inline const FileSystemProtectionDescription& GetFileSystemProtection() const { return m_fileSystemProtection; }
    template<typename FileSystemProtectionT = FileSystemProtectionDescription>
    void SetFileSystemProtection(FileSystemProtectionT&& value) { m_fileSystemProtectionHasBeenSet = true; m_fileSystemProtection = std::forward<FileSystemProtectionT>(value); }
    template<typename FileSystemProtectionT = FileSystemProtectionDescription>
    UpdateFileSystemResult& WithFileSystemProtection(FileSystemProtectionT&& value) { SetFileSystemProtection(std::forward<FileSystemProtectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFileSystemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    LifeCycleState m_lifeCycleState{LifeCycleState::NOT_SET};
    bool m_lifeCycleStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_numberOfMountTargets{0};
    bool m_numberOfMountTargetsHasBeenSet = false;

    FileSystemSize m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet = false;

    PerformanceMode m_performanceMode{PerformanceMode::NOT_SET};
    bool m_performanceModeHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ThroughputMode m_throughputMode{ThroughputMode::NOT_SET};
    bool m_throughputModeHasBeenSet = false;

    double m_provisionedThroughputInMibps{0.0};
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
