/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EbsVolumeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The shared Amazon EBS performance and encryption properties for a volume.
 * These properties are common across the different volume configurations for a
 * capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EphemeralEBSVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class EphemeralEBSVolumeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralEBSVolumeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralEBSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EphemeralEBSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon EBS volume type. If you do not specify a type, the default is
   * <code>gp3</code>.</p>
   */
  inline EbsVolumeType GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(EbsVolumeType value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithVolumeType(EbsVolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of IOPS to provision. For <code>gp3</code>, <code>io1</code>, and
   * <code>io2</code> volumes, this is the number of IOPS provisioned for the volume.
   * For <code>gp2</code> volumes, this sets the baseline IOPS performance. It also
   * controls the rate at which the volume accumulates I/O credits for bursting.
   * Supported values: <code>gp3</code>, 3,000–80,000; <code>io1</code>, 100–64,000;
   * <code>io2</code>, 100–256,000.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput to provision, in MiB/s. Valid only for <code>gp3</code>
   * volumes. Valid range: 125–2,000 MiB/s.</p>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to encrypt the volume. Encrypted volumes can be attached
   * only to instances that support Amazon EBS encryption. If you create a volume
   * from a snapshot, you cannot specify an encryption value.</p>
   */
  inline bool GetEncrypted() const { return m_encrypted; }
  inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
  inline void SetEncrypted(bool value) {
    m_encryptedHasBeenSet = true;
    m_encrypted = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithEncrypted(bool value) {
    SetEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier (key ID, key alias, key ARN, or alias ARN) of the customer
   * managed KMS key to use for Amazon EBS encryption.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  EphemeralEBSVolumeConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the snapshot.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  EphemeralEBSVolumeConfiguration& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the volume, in GiB. You must specify either a snapshot ID or a
   * volume size. Supported sizes: <code>gp2</code>, 1–16,384; <code>gp3</code>,
   * 1–65,536; <code>io1</code>, 4–16,384; <code>io2</code>, 4–65,536.</p>
   */
  inline int GetVolumeSize() const { return m_volumeSize; }
  inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
  inline void SetVolumeSize(int value) {
    m_volumeSizeHasBeenSet = true;
    m_volumeSize = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithVolumeSize(int value) {
    SetVolumeSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rate at which the volume is initialized after creation, in MiB/s.
   * Supported only for volumes created from snapshots. Valid range: 100–300
   * MiB/s.</p>
   */
  inline int GetVolumeInitializationRate() const { return m_volumeInitializationRate; }
  inline bool VolumeInitializationRateHasBeenSet() const { return m_volumeInitializationRateHasBeenSet; }
  inline void SetVolumeInitializationRate(int value) {
    m_volumeInitializationRateHasBeenSet = true;
    m_volumeInitializationRate = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithVolumeInitializationRate(int value) {
    SetVolumeInitializationRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the Amazon EBS card. Applies to instances with multiple Amazon
   * EBS cards.</p>
   */
  inline int GetEbsCardIndex() const { return m_ebsCardIndex; }
  inline bool EbsCardIndexHasBeenSet() const { return m_ebsCardIndexHasBeenSet; }
  inline void SetEbsCardIndex(int value) {
    m_ebsCardIndexHasBeenSet = true;
    m_ebsCardIndex = value;
  }
  inline EphemeralEBSVolumeConfiguration& WithEbsCardIndex(int value) {
    SetEbsCardIndex(value);
    return *this;
  }
  ///@}
 private:
  EbsVolumeType m_volumeType{EbsVolumeType::NOT_SET};

  int m_iops{0};

  int m_throughput{0};

  bool m_encrypted{false};

  Aws::String m_kmsKeyId;

  Aws::String m_snapshotId;

  int m_volumeSize{0};

  int m_volumeInitializationRate{0};

  int m_ebsCardIndex{0};
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_snapshotIdHasBeenSet = false;
  bool m_volumeSizeHasBeenSet = false;
  bool m_volumeInitializationRateHasBeenSet = false;
  bool m_ebsCardIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
