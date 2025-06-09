/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticfilesystem/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class CreateFileSystemRequest : public EFSRequest
  {
  public:
    AWS_EFS_API CreateFileSystemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A string of up to 64 ASCII characters. Amazon EFS uses this to ensure
     * idempotent creation.</p>
     */
    inline const Aws::String& GetCreationToken() const { return m_creationToken; }
    inline bool CreationTokenHasBeenSet() const { return m_creationTokenHasBeenSet; }
    template<typename CreationTokenT = Aws::String>
    void SetCreationToken(CreationTokenT&& value) { m_creationTokenHasBeenSet = true; m_creationToken = std::forward<CreationTokenT>(value); }
    template<typename CreationTokenT = Aws::String>
    CreateFileSystemRequest& WithCreationToken(CreationTokenT&& value) { SetCreationToken(std::forward<CreationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The performance mode of the file system. We recommend
     * <code>generalPurpose</code> performance mode for all file systems. File systems
     * using the <code>maxIO</code> performance mode can scale to higher levels of
     * aggregate throughput and operations per second with a tradeoff of slightly
     * higher latencies for most file operations. The performance mode can't be changed
     * after the file system has been created. The <code>maxIO</code> mode is not
     * supported on One Zone file systems.</p>  <p>Due to the higher
     * per-operation latencies with Max I/O, we recommend using General Purpose
     * performance mode for all file systems.</p>  <p>Default is
     * <code>generalPurpose</code>.</p>
     */
    inline PerformanceMode GetPerformanceMode() const { return m_performanceMode; }
    inline bool PerformanceModeHasBeenSet() const { return m_performanceModeHasBeenSet; }
    inline void SetPerformanceMode(PerformanceMode value) { m_performanceModeHasBeenSet = true; m_performanceMode = value; }
    inline CreateFileSystemRequest& WithPerformanceMode(PerformanceMode value) { SetPerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that, if true, creates an encrypted file system. When
     * creating an encrypted file system, you have the option of specifying an existing
     * Key Management Service key (KMS key). If you don't specify a KMS key, then the
     * default KMS key for Amazon EFS, <code>/aws/elasticfilesystem</code>, is used to
     * protect the encrypted file system. </p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline CreateFileSystemRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key that you want to use to protect the encrypted file
     * system. This parameter is required only if you want to use a non-default KMS
     * key. If this parameter is not specified, the default KMS key for Amazon EFS is
     * used. You can specify a KMS key ID using the following formats:</p> <ul> <li>
     * <p>Key ID - A unique identifier of the key, for example
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p> </li> <li> <p>ARN - An
     * Amazon Resource Name (ARN) for the key, for example
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     * </li> <li> <p>Key alias - A previously created display name for a key, for
     * example <code>alias/projectKey1</code>.</p> </li> <li> <p>Key alias ARN - An ARN
     * for a key alias, for example
     * <code>arn:aws:kms:us-west-2:444455556666:alias/projectKey1</code>.</p> </li>
     * </ul> <p>If you use <code>KmsKeyId</code>, you must set the
     * <a>CreateFileSystemRequest$Encrypted</a> parameter to true.</p> 
     * <p>EFS accepts only symmetric KMS keys. You cannot use asymmetric KMS keys with
     * Amazon EFS file systems.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateFileSystemRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throughput mode for the file system. The mode can be
     * <code>bursting</code>, <code>provisioned</code>, or <code>elastic</code>. If you
     * set <code>ThroughputMode</code> to <code>provisioned</code>, you must also set a
     * value for <code>ProvisionedThroughputInMibps</code>. After you create the file
     * system, you can decrease your file system's Provisioned throughput or change
     * between the throughput modes, with certain time restrictions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#provisioned-throughput">Specifying
     * throughput with provisioned mode</a> in the <i>Amazon EFS User Guide</i>. </p>
     * <p>Default is <code>bursting</code>.</p>
     */
    inline ThroughputMode GetThroughputMode() const { return m_throughputMode; }
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }
    inline void SetThroughputMode(ThroughputMode value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }
    inline CreateFileSystemRequest& WithThroughputMode(ThroughputMode value) { SetThroughputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput, measured in mebibytes per second (MiBps), that you want to
     * provision for a file system that you're creating. Required if
     * <code>ThroughputMode</code> is set to <code>provisioned</code>. Valid values are
     * 1-3414 MiBps, with the upper limit depending on Region. To increase this limit,
     * contact Amazon Web ServicesSupport. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/limits.html#soft-limits">Amazon
     * EFS quotas that you can increase</a> in the <i>Amazon EFS User Guide</i>.</p>
     */
    inline double GetProvisionedThroughputInMibps() const { return m_provisionedThroughputInMibps; }
    inline bool ProvisionedThroughputInMibpsHasBeenSet() const { return m_provisionedThroughputInMibpsHasBeenSet; }
    inline void SetProvisionedThroughputInMibps(double value) { m_provisionedThroughputInMibpsHasBeenSet = true; m_provisionedThroughputInMibps = value; }
    inline CreateFileSystemRequest& WithProvisionedThroughputInMibps(double value) { SetProvisionedThroughputInMibps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For One Zone file systems, specify the Amazon Web Services Availability Zone
     * in which to create the file system. Use the format <code>us-east-1a</code> to
     * specify the Availability Zone. For more information about One Zone file systems,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/availability-durability.html#file-system-type">EFS
     * file system types</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>One
     * Zone file systems are not available in all Availability Zones in Amazon Web
     * Services Regions where Amazon EFS is available.</p> 
     */
    inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
    template<typename AvailabilityZoneNameT = Aws::String>
    void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value); }
    template<typename AvailabilityZoneNameT = Aws::String>
    CreateFileSystemRequest& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) { SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether automatic backups are enabled on the file system that you
     * are creating. Set the value to <code>true</code> to enable automatic backups. If
     * you are creating a One Zone file system, automatic backups are enabled by
     * default. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
     * backups</a> in the <i>Amazon EFS User Guide</i>.</p> <p>Default is
     * <code>false</code>. However, if you specify an
     * <code>AvailabilityZoneName</code>, the default is <code>true</code>.</p> 
     * <p>Backup is not available in all Amazon Web Services Regions where Amazon EFS
     * is available.</p> 
     */
    inline bool GetBackup() const { return m_backup; }
    inline bool BackupHasBeenSet() const { return m_backupHasBeenSet; }
    inline void SetBackup(bool value) { m_backupHasBeenSet = true; m_backup = value; }
    inline CreateFileSystemRequest& WithBackup(bool value) { SetBackup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to create one or more tags associated with the file system. Each tag is a
     * user-defined key-value pair. Name your file system on creation by including a
     * <code>"Key":"Name","Value":"{value}"</code> key-value pair. Each key must be
     * unique. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFileSystemRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFileSystemRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_creationToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creationTokenHasBeenSet = true;

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

    bool m_backup{false};
    bool m_backupHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
