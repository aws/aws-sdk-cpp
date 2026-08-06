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
 * <p>The configuration for an Amazon EBS-backed persistent volume. The service
 * creates persistent volumes when a session first launches, and the volumes
 * survive instance termination. The volumes persist until you delete the
 * session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EbsVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class EbsVolumeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EbsVolumeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EbsVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EbsVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical name of the volume. Use this name to reference the volume when
   * you mount it into an agent runtime.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EbsVolumeConfiguration& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the volume, in GiB.</p>
   */
  inline int GetSizeGiB() const { return m_sizeGiB; }
  inline bool SizeGiBHasBeenSet() const { return m_sizeGiBHasBeenSet; }
  inline void SetSizeGiB(int value) {
    m_sizeGiBHasBeenSet = true;
    m_sizeGiB = value;
  }
  inline EbsVolumeConfiguration& WithSizeGiB(int value) {
    SetSizeGiB(value);
    return *this;
  }
  ///@}

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
  inline EbsVolumeConfiguration& WithVolumeType(EbsVolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of IOPS to provision. Valid only for <code>gp3</code>,
   * <code>io1</code>, and <code>io2</code> volumes.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline EbsVolumeConfiguration& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput, in MiB/s. Valid only for <code>gp3</code> volumes.</p>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline EbsVolumeConfiguration& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to encrypt the volume. If <code>true</code>, the service
   * encrypts the volume with the KMS key that you specify in <code>kmsKeyId</code>,
   * or the default KMS key for Amazon EBS if you do not specify one. The default is
   * <code>true</code>.</p>
   */
  inline bool GetEncrypted() const { return m_encrypted; }
  inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
  inline void SetEncrypted(bool value) {
    m_encryptedHasBeenSet = true;
    m_encrypted = value;
  }
  inline EbsVolumeConfiguration& WithEncrypted(bool value) {
    SetEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the KMS key to use for encryption.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  EbsVolumeConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional Amazon EBS snapshot ID. If provided, the volume is initialized
   * from this snapshot the first time it is created. On subsequent restarts, the
   * existing volume is used and the snapshot is ignored.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  EbsVolumeConfiguration& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_sizeGiB{0};

  EbsVolumeType m_volumeType{EbsVolumeType::NOT_SET};

  int m_iops{0};

  int m_throughput{0};

  bool m_encrypted{false};

  Aws::String m_kmsKeyId;

  Aws::String m_snapshotId;
  bool m_nameHasBeenSet = false;
  bool m_sizeGiBHasBeenSet = false;
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_snapshotIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
