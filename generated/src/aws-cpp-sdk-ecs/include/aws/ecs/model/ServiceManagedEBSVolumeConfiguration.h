/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TaskFilesystemType.h>
#include <aws/ecs/model/EBSTagSpecification.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The configuration for the Amazon EBS volume that Amazon ECS creates and
   * manages on your behalf. These settings are used to create each Amazon EBS
   * volume, with one volume created for each task in the service. For information
   * about the supported launch types and operating systems, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-volumes.html#ebs-volumes-configuration">Supported
   * operating systems and launch types</a> in the<i> Amazon Elastic Container
   * Service Developer Guide</i>.</p> <p>Many of these parameters map 1:1 with the
   * Amazon EBS <code>CreateVolume</code> API request parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceManagedEBSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceManagedEBSVolumeConfiguration
  {
  public:
    AWS_ECS_API ServiceManagedEBSVolumeConfiguration() = default;
    AWS_ECS_API ServiceManagedEBSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceManagedEBSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the volume should be encrypted. If you turn on Region-level
     * Amazon EBS encryption by default but set this value as <code>false</code>, the
     * setting is overridden and the volume is encrypted with the KMS key specified for
     * Amazon EBS encryption by default. This parameter maps 1:1 with the
     * <code>Encrypted</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) identifier of the Amazon Web Services Key
     * Management Service key to use for Amazon EBS encryption. When a key is specified
     * using this parameter, it overrides Amazon EBS default encryption or any KMS key
     * that you specified for cluster-level managed storage encryption. This parameter
     * maps 1:1 with the <code>KmsKeyId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information about
     * encrypting Amazon EBS volumes attached to tasks, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ebs-kms-encryption.html">Encrypt
     * data stored in Amazon EBS volumes attached to Amazon ECS tasks</a>.</p>
     *  <p>Amazon Web Services authenticates the Amazon Web Services Key
     * Management Service key asynchronously. Therefore, if you specify an ID, alias,
     * or ARN that is invalid, the action can appear to complete, but eventually
     * fails.</p> 
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ServiceManagedEBSVolumeConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. This parameter maps 1:1 with the <code>VolumeType</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-volume-types.html">Amazon
     * EBS volume types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>The following
     * are the supported volume types.</p> <ul> <li> <p>General Purpose SSD:
     * <code>gp2</code>|<code>gp3</code> </p> </li> <li> <p>Provisioned IOPS SSD:
     * <code>io1</code>|<code>io2</code> </p> </li> <li> <p>Throughput Optimized HDD:
     * <code>st1</code> </p> </li> <li> <p>Cold HDD: <code>sc1</code> </p> </li> <li>
     * <p>Magnetic: <code>standard</code> </p>  <p>The magnetic volume type is
     * not supported on Fargate.</p>  </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    ServiceManagedEBSVolumeConfiguration& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume in GiB. You must specify either a volume size or a
     * snapshot ID. If you specify a snapshot ID, the snapshot size is used for the
     * volume size by default. You can optionally specify a volume size greater than or
     * equal to the snapshot size. This parameter maps 1:1 with the <code>Size</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p> <p>The following are the
     * supported volume size values for each volume type.</p> <ul> <li> <p>
     * <code>gp2</code> and <code>gp3</code>: 1-16,384</p> </li> <li> <p>
     * <code>io1</code> and <code>io2</code>: 4-16,384</p> </li> <li> <p>
     * <code>st1</code> and <code>sc1</code>: 125-16,384</p> </li> <li> <p>
     * <code>standard</code>: 1-1,024</p> </li> </ul>
     */
    inline int GetSizeInGiB() const { return m_sizeInGiB; }
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot that Amazon ECS uses to create volumes for attachment to tasks
     * maintained by the service. You must specify either <code>snapshotId</code> or
     * <code>sizeInGiB</code> in your volume configuration. This parameter maps 1:1
     * with the <code>SnapshotId</code> parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    ServiceManagedEBSVolumeConfiguration& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate, in MiB/s, at which data is fetched from a snapshot of an existing
     * EBS volume to create new volumes for attachment to the tasks maintained by the
     * service. This property can be specified only if you specify a
     * <code>snapshotId</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/initalize-volume.html">Initialize
     * Amazon EBS volumes</a> in the <i>Amazon EBS User Guide</i>.</p>
     */
    inline int GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
    inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
    inline void SetVolumeInitializationRate(int value) { m_volumeInitializationRateHasBeenSet = true; m_volumeInitializationRate = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithVolumeInitializationRate(int value) { SetVolumeInitializationRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of I/O operations per second (IOPS). For <code>gp3</code>,
     * <code>io1</code>, and <code>io2</code> volumes, this represents the number of
     * IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this
     * represents the baseline performance of the volume and the rate at which the
     * volume accumulates I/O credits for bursting.</p> <p>The following are the
     * supported values for each volume type.</p> <ul> <li> <p> <code>gp3</code>: 3,000
     * - 16,000 IOPS</p> </li> <li> <p> <code>io1</code>: 100 - 64,000 IOPS</p> </li>
     * <li> <p> <code>io2</code>: 100 - 256,000 IOPS</p> </li> </ul> <p>This parameter
     * is required for <code>io1</code> and <code>io2</code> volume types. The default
     * for <code>gp3</code> volumes is <code>3,000 IOPS</code>. This parameter is not
     * supported for <code>st1</code>, <code>sc1</code>, or <code>standard</code>
     * volume types.</p> <p>This parameter maps 1:1 with the <code>Iops</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput to provision for a volume, in MiB/s, with a maximum of 1,000
     * MiB/s. This parameter maps 1:1 with the <code>Throughput</code> parameter of the
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>  <p>This
     * parameter is only supported for the <code>gp3</code> volume type.</p>
     * 
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the volume. Amazon ECS applies service-managed tags by
     * default. This parameter maps 1:1 with the <code>TagSpecifications.N</code>
     * parameter of the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateVolume.html">CreateVolume
     * API</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::Vector<EBSTagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<EBSTagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<EBSTagSpecification>>
    ServiceManagedEBSVolumeConfiguration& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = EBSTagSpecification>
    ServiceManagedEBSVolumeConfiguration& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role to associate with this volume. This is the Amazon ECS
     * infrastructure IAM role that is used to manage your Amazon Web Services
     * infrastructure. We recommend using the Amazon ECS-managed
     * <code>AmazonECSInfrastructureRolePolicyForVolumes</code> IAM policy with this
     * role. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/infrastructure_IAM_role.html">Amazon
     * ECS infrastructure IAM role</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ServiceManagedEBSVolumeConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filesystem type for the volume. For volumes created from a snapshot, you
     * must specify the same filesystem type that the volume was using when the
     * snapshot was created. If there is a filesystem type mismatch, the tasks will
     * fail to start.</p> <p>The available Linux filesystem types are&#x2028;
     * <code>ext3</code>, <code>ext4</code>, and <code>xfs</code>. If no value is
     * specified, the <code>xfs</code> filesystem type is used by default.</p> <p>The
     * available Windows filesystem types are <code>NTFS</code>.</p>
     */
    inline TaskFilesystemType GetFilesystemType() const { return m_filesystemType; }
    inline bool FilesystemTypeHasBeenSet() const { return m_filesystemTypeHasBeenSet; }
    inline void SetFilesystemType(TaskFilesystemType value) { m_filesystemTypeHasBeenSet = true; m_filesystemType = value; }
    inline ServiceManagedEBSVolumeConfiguration& WithFilesystemType(TaskFilesystemType value) { SetFilesystemType(value); return *this;}
    ///@}
  private:

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    int m_sizeInGiB{0};
    bool m_sizeInGiBHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeInitializationRate{0};
    bool m_volumeInitializationRateHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;

    Aws::Vector<EBSTagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TaskFilesystemType m_filesystemType{TaskFilesystemType::NOT_SET};
    bool m_filesystemTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
