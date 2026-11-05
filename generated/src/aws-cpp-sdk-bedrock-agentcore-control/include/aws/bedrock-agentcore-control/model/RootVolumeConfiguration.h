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
 * <p>The configuration for the root volume of a capacity provider instance.
 * Specify the amount of free space to guarantee on the root volume. The device
 * name and delete-on-termination settings are fixed and cannot be
 * changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RootVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class RootVolumeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RootVolumeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RootVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RootVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline RootVolumeConfiguration& WithVolumeType(EbsVolumeType value) {
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
  inline RootVolumeConfiguration& WithIops(int value) {
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
  inline RootVolumeConfiguration& WithThroughput(int value) {
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
  inline RootVolumeConfiguration& WithEncrypted(bool value) {
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
  RootVolumeConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The free space guaranteed on the root volume, in GiB. AgentCore adds the
   * operating system overhead on top of this value. The default is 8 GiB.</p>
   */
  inline int GetFreeSpaceGiB() const { return m_freeSpaceGiB; }
  inline bool FreeSpaceGiBHasBeenSet() const { return m_freeSpaceGiBHasBeenSet; }
  inline void SetFreeSpaceGiB(int value) {
    m_freeSpaceGiBHasBeenSet = true;
    m_freeSpaceGiB = value;
  }
  inline RootVolumeConfiguration& WithFreeSpaceGiB(int value) {
    SetFreeSpaceGiB(value);
    return *this;
  }
  ///@}
 private:
  EbsVolumeType m_volumeType{EbsVolumeType::NOT_SET};

  int m_iops{0};

  int m_throughput{0};

  bool m_encrypted{false};

  Aws::String m_kmsKeyId;

  int m_freeSpaceGiB{0};
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputHasBeenSet = false;
  bool m_encryptedHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_freeSpaceGiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
