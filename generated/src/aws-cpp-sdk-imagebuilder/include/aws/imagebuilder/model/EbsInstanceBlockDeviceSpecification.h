/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/EbsVolumeType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Amazon EBS-specific block device mapping specifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/EbsInstanceBlockDeviceSpecification">AWS
   * API Reference</a></p>
   */
  class EbsInstanceBlockDeviceSpecification
  {
  public:
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification() = default;
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API EbsInstanceBlockDeviceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use to configure device encryption.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline EbsInstanceBlockDeviceSpecification& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to configure delete on termination of the associated device.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline EbsInstanceBlockDeviceSpecification& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to configure device IOPS.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline EbsInstanceBlockDeviceSpecification& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to configure the KMS key to use when encrypting the device.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EbsInstanceBlockDeviceSpecification& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot that defines the device contents.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    EbsInstanceBlockDeviceSpecification& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to override the device's volume size.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline EbsInstanceBlockDeviceSpecification& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to override the device's volume type.</p>
     */
    inline EbsVolumeType GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(EbsVolumeType value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline EbsInstanceBlockDeviceSpecification& WithVolumeType(EbsVolumeType value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>For GP3 volumes only</b> – The throughput in MiB/s that the volume
     * supports.</p>
     */
    inline int GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(int value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline EbsInstanceBlockDeviceSpecification& WithThroughput(int value) { SetThroughput(value); return *this;}
    ///@}
  private:

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    EbsVolumeType m_volumeType{EbsVolumeType::NOT_SET};
    bool m_volumeTypeHasBeenSet = false;

    int m_throughput{0};
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
