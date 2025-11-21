/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/OperatorResponse.h>
#include <aws/ec2/model/VolumeState.h>
#include <aws/ec2/model/VolumeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Information about a volume that is currently in the Recycle
 * Bin.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeRecycleBinInfo">AWS
 * API Reference</a></p>
 */
class VolumeRecycleBinInfo {
 public:
  AWS_EC2_API VolumeRecycleBinInfo() = default;
  AWS_EC2_API VolumeRecycleBinInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VolumeRecycleBinInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the volume.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  VolumeRecycleBinInfo& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The volume type.</p>
   */
  inline VolumeType GetVolumeType() const { return m_volumeType; }
  inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
  inline void SetVolumeType(VolumeType value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline VolumeRecycleBinInfo& WithVolumeType(VolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the volume.</p>
   */
  inline VolumeState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(VolumeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline VolumeRecycleBinInfo& WithState(VolumeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the volume, in GiB.</p>
   */
  inline int GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(int value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline VolumeRecycleBinInfo& WithSize(int value) {
    SetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of I/O operations per second (IOPS) for the volume.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline VolumeRecycleBinInfo& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput that the volume supports, in MiB/s.</p>
   */
  inline int GetThroughput() const { return m_throughput; }
  inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
  inline void SetThroughput(int value) {
    m_throughputHasBeenSet = true;
    m_throughput = value;
  }
  inline VolumeRecycleBinInfo& WithThroughput(int value) {
    SetThroughput(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Outpost on which the volume is stored. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/ebs/latest/userguide/ebs-volumes-outposts.html">Amazon
   * EBS volumes on Outposts</a> in the <i>Amazon EBS User Guide</i>.</p>
   */
  inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
  inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
  template <typename OutpostArnT = Aws::String>
  void SetOutpostArn(OutpostArnT&& value) {
    m_outpostArnHasBeenSet = true;
    m_outpostArn = std::forward<OutpostArnT>(value);
  }
  template <typename OutpostArnT = Aws::String>
  VolumeRecycleBinInfo& WithOutpostArn(OutpostArnT&& value) {
    SetOutpostArn(std::forward<OutpostArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone for the volume.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  VolumeRecycleBinInfo& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone for the volume.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  VolumeRecycleBinInfo& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the source volume.</p>
   */
  inline const Aws::String& GetSourceVolumeId() const { return m_sourceVolumeId; }
  inline bool SourceVolumeIdHasBeenSet() const { return m_sourceVolumeIdHasBeenSet; }
  template <typename SourceVolumeIdT = Aws::String>
  void SetSourceVolumeId(SourceVolumeIdT&& value) {
    m_sourceVolumeIdHasBeenSet = true;
    m_sourceVolumeId = std::forward<SourceVolumeIdT>(value);
  }
  template <typename SourceVolumeIdT = Aws::String>
  VolumeRecycleBinInfo& WithSourceVolumeId(SourceVolumeIdT&& value) {
    SetSourceVolumeId(std::forward<SourceVolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot from which the volume was created, if applicable.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  VolumeRecycleBinInfo& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service provider that manages the volume.</p>
   */
  inline const OperatorResponse& GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  template <typename OperatorT = OperatorResponse>
  void SetOperator(OperatorT&& value) {
    m_operatorHasBeenSet = true;
    m_operator = std::forward<OperatorT>(value);
  }
  template <typename OperatorT = OperatorResponse>
  VolumeRecycleBinInfo& WithOperator(OperatorT&& value) {
    SetOperator(std::forward<OperatorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time stamp when volume creation was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  VolumeRecycleBinInfo& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the volume entered the Recycle Bin.</p>
   */
  inline const Aws::Utils::DateTime& GetRecycleBinEnterTime() const { return m_recycleBinEnterTime; }
  inline bool RecycleBinEnterTimeHasBeenSet() const { return m_recycleBinEnterTimeHasBeenSet; }
  template <typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
  void SetRecycleBinEnterTime(RecycleBinEnterTimeT&& value) {
    m_recycleBinEnterTimeHasBeenSet = true;
    m_recycleBinEnterTime = std::forward<RecycleBinEnterTimeT>(value);
  }
  template <typename RecycleBinEnterTimeT = Aws::Utils::DateTime>
  VolumeRecycleBinInfo& WithRecycleBinEnterTime(RecycleBinEnterTimeT&& value) {
    SetRecycleBinEnterTime(std::forward<RecycleBinEnterTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the volume is to be permanently deleted from the
   * Recycle Bin.</p>
   */
  inline const Aws::Utils::DateTime& GetRecycleBinExitTime() const { return m_recycleBinExitTime; }
  inline bool RecycleBinExitTimeHasBeenSet() const { return m_recycleBinExitTimeHasBeenSet; }
  template <typename RecycleBinExitTimeT = Aws::Utils::DateTime>
  void SetRecycleBinExitTime(RecycleBinExitTimeT&& value) {
    m_recycleBinExitTimeHasBeenSet = true;
    m_recycleBinExitTime = std::forward<RecycleBinExitTimeT>(value);
  }
  template <typename RecycleBinExitTimeT = Aws::Utils::DateTime>
  VolumeRecycleBinInfo& WithRecycleBinExitTime(RecycleBinExitTimeT&& value) {
    SetRecycleBinExitTime(std::forward<RecycleBinExitTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeId;
  bool m_volumeIdHasBeenSet = false;

  VolumeType m_volumeType{VolumeType::NOT_SET};
  bool m_volumeTypeHasBeenSet = false;

  VolumeState m_state{VolumeState::NOT_SET};
  bool m_stateHasBeenSet = false;

  int m_size{0};
  bool m_sizeHasBeenSet = false;

  int m_iops{0};
  bool m_iopsHasBeenSet = false;

  int m_throughput{0};
  bool m_throughputHasBeenSet = false;

  Aws::String m_outpostArn;
  bool m_outpostArnHasBeenSet = false;

  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  Aws::String m_availabilityZoneId;
  bool m_availabilityZoneIdHasBeenSet = false;

  Aws::String m_sourceVolumeId;
  bool m_sourceVolumeIdHasBeenSet = false;

  Aws::String m_snapshotId;
  bool m_snapshotIdHasBeenSet = false;

  OperatorResponse m_operator;
  bool m_operatorHasBeenSet = false;

  Aws::Utils::DateTime m_createTime{};
  bool m_createTimeHasBeenSet = false;

  Aws::Utils::DateTime m_recycleBinEnterTime{};
  bool m_recycleBinEnterTimeHasBeenSet = false;

  Aws::Utils::DateTime m_recycleBinExitTime{};
  bool m_recycleBinExitTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
