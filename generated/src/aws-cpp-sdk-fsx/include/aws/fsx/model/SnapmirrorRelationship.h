/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/SnapmirrorDestination.h>
#include <aws/fsx/model/SnapmirrorExportedSnapshot.h>
#include <aws/fsx/model/SnapmirrorRelationshipLifecycle.h>
#include <aws/fsx/model/SnapmirrorRelationshipPolicy.h>
#include <aws/fsx/model/SnapmirrorRelationshipState.h>
#include <aws/fsx/model/SnapmirrorSource.h>
#include <aws/fsx/model/SnapmirrorTransferState.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes an Amazon FSx for NetApp ONTAP SnapMirror
 * relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorRelationship">AWS
 * API Reference</a></p>
 */
class SnapmirrorRelationship {
 public:
  AWS_FSX_API SnapmirrorRelationship() = default;
  AWS_FSX_API SnapmirrorRelationship(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorRelationship& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
  inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
  template <typename ResourceARNT = Aws::String>
  void SetResourceARN(ResourceARNT&& value) {
    m_resourceARNHasBeenSet = true;
    m_resourceARN = std::forward<ResourceARNT>(value);
  }
  template <typename ResourceARNT = Aws::String>
  SnapmirrorRelationship& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system-generated, unique ID of the SnapMirror relationship.</p>
   */
  inline const Aws::String& GetSnapmirrorRelationshipId() const { return m_snapmirrorRelationshipId; }
  inline bool SnapmirrorRelationshipIdHasBeenSet() const { return m_snapmirrorRelationshipIdHasBeenSet; }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  void SetSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    m_snapmirrorRelationshipIdHasBeenSet = true;
    m_snapmirrorRelationshipId = std::forward<SnapmirrorRelationshipIdT>(value);
  }
  template <typename SnapmirrorRelationshipIdT = Aws::String>
  SnapmirrorRelationship& WithSnapmirrorRelationshipId(SnapmirrorRelationshipIdT&& value) {
    SetSnapmirrorRelationshipId(std::forward<SnapmirrorRelationshipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The globally unique ID of the file system that the destination volume is on,
   * assigned by Amazon FSx.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  SnapmirrorRelationship& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the SnapMirror relationship can be one of the
   * following:</p> <ul> <li> <p> <code>CREATED</code> – The SnapMirror relationship
   * is fully available for use.</p> </li> <li> <p> <code>CREATING</code> – Amazon
   * FSx is creating the SnapMirror relationship.</p> </li> <li> <p>
   * <code>DELETING</code> – Amazon FSx is deleting the SnapMirror relationship.</p>
   * </li> <li> <p> <code>FAILED</code> – Amazon FSx was unable to create the
   * SnapMirror relationship.</p> </li> </ul>
   */
  inline SnapmirrorRelationshipLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(SnapmirrorRelationshipLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline SnapmirrorRelationship& WithLifecycle(SnapmirrorRelationshipLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the SnapMirror relationship lifecycle status changed.</p>
   */
  inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
  inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    m_lifecycleTransitionReasonHasBeenSet = true;
    m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value);
  }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  SnapmirrorRelationship& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  SnapmirrorRelationship& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SnapmirrorRelationship& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source endpoint of the SnapMirror relationship.</p>
   */
  inline const SnapmirrorSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = SnapmirrorSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = SnapmirrorSource>
  SnapmirrorRelationship& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination endpoint of the SnapMirror relationship.</p>
   */
  inline const SnapmirrorDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = SnapmirrorDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = SnapmirrorDestination>
  SnapmirrorRelationship& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SnapMirror policy that the SnapMirror relationship uses.</p>
   */
  inline const SnapmirrorRelationshipPolicy& GetSnapmirrorPolicy() const { return m_snapmirrorPolicy; }
  inline bool SnapmirrorPolicyHasBeenSet() const { return m_snapmirrorPolicyHasBeenSet; }
  template <typename SnapmirrorPolicyT = SnapmirrorRelationshipPolicy>
  void SetSnapmirrorPolicy(SnapmirrorPolicyT&& value) {
    m_snapmirrorPolicyHasBeenSet = true;
    m_snapmirrorPolicy = std::forward<SnapmirrorPolicyT>(value);
  }
  template <typename SnapmirrorPolicyT = SnapmirrorRelationshipPolicy>
  SnapmirrorRelationship& WithSnapmirrorPolicy(SnapmirrorPolicyT&& value) {
    SetSnapmirrorPolicy(std::forward<SnapmirrorPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ONTAP schedule that determines when SnapMirror transfers data
   * for the relationship. This schedule overrides the transfer schedule of the
   * SnapMirror policy.</p>
   */
  inline const Aws::String& GetTransferSchedule() const { return m_transferSchedule; }
  inline bool TransferScheduleHasBeenSet() const { return m_transferScheduleHasBeenSet; }
  template <typename TransferScheduleT = Aws::String>
  void SetTransferSchedule(TransferScheduleT&& value) {
    m_transferScheduleHasBeenSet = true;
    m_transferSchedule = std::forward<TransferScheduleT>(value);
  }
  template <typename TransferScheduleT = Aws::String>
  SnapmirrorRelationship& WithTransferSchedule(TransferScheduleT&& value) {
    SetTransferSchedule(std::forward<TransferScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bandwidth, in kilobytes per second (KBps), that SnapMirror uses
   * to transfer data for the relationship. A value of <code>0</code> means that the
   * bandwidth is unlimited. This value overrides the throttle of the SnapMirror
   * policy.</p>
   */
  inline long long GetThrottleInKbps() const { return m_throttleInKbps; }
  inline bool ThrottleInKbpsHasBeenSet() const { return m_throttleInKbpsHasBeenSet; }
  inline void SetThrottleInKbps(long long value) {
    m_throttleInKbpsHasBeenSet = true;
    m_throttleInKbps = value;
  }
  inline SnapmirrorRelationship& WithThrottleInKbps(long long value) {
    SetThrottleInKbps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the SnapMirror relationship in ONTAP can be one of the
   * following:</p> <ul> <li> <p> <code>UNINITIALIZED</code> – SnapMirror hasn't
   * transferred the baseline copy of the source volume to the destination
   * volume.</p> </li> <li> <p> <code>TRANSFERRING</code> – SnapMirror is
   * transferring data to the destination volume.</p> </li> <li> <p>
   * <code>SNAPMIRRORED</code> – SnapMirror transferred the baseline copy, and the
   * destination volume receives updates from the source volume.</p> </li> <li> <p>
   * <code>PAUSED</code> – SnapMirror transfers for the relationship are paused.</p>
   * </li> <li> <p> <code>BROKEN_OFF</code> – The relationship is broken off, and the
   * destination volume is writable. SnapMirror doesn't transfer data to the
   * destination volume.</p> </li> </ul>
   */
  inline SnapmirrorRelationshipState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SnapmirrorRelationshipState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline SnapmirrorRelationship& WithState(SnapmirrorRelationshipState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether ONTAP reports the SnapMirror relationship as healthy.</p>
   */
  inline bool GetHealthy() const { return m_healthy; }
  inline bool HealthyHasBeenSet() const { return m_healthyHasBeenSet; }
  inline void SetHealthy(bool value) {
    m_healthyHasBeenSet = true;
    m_healthy = value;
  }
  inline SnapmirrorRelationship& WithHealthy(bool value) {
    SetHealthy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that ONTAP reports for why the SnapMirror relationship is
   * unhealthy, if <code>Healthy</code> is <code>false</code>.</p>
   */
  inline const Aws::String& GetUnhealthyReason() const { return m_unhealthyReason; }
  inline bool UnhealthyReasonHasBeenSet() const { return m_unhealthyReasonHasBeenSet; }
  template <typename UnhealthyReasonT = Aws::String>
  void SetUnhealthyReason(UnhealthyReasonT&& value) {
    m_unhealthyReasonHasBeenSet = true;
    m_unhealthyReason = std::forward<UnhealthyReasonT>(value);
  }
  template <typename UnhealthyReasonT = Aws::String>
  SnapmirrorRelationship& WithUnhealthyReason(UnhealthyReasonT&& value) {
    SetUnhealthyReason(std::forward<UnhealthyReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in minutes, since ONTAP created the latest snapshot that SnapMirror
   * transferred to the destination volume.</p>
   */
  inline long long GetLagTimeInMinutes() const { return m_lagTimeInMinutes; }
  inline bool LagTimeInMinutesHasBeenSet() const { return m_lagTimeInMinutesHasBeenSet; }
  inline void SetLagTimeInMinutes(long long value) {
    m_lagTimeInMinutesHasBeenSet = true;
    m_lagTimeInMinutes = value;
  }
  inline SnapmirrorRelationship& WithLagTimeInMinutes(long long value) {
    SetLagTimeInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest snapshot that SnapMirror transferred to the destination
   * volume.</p>
   */
  inline const SnapmirrorExportedSnapshot& GetExportedSnapshot() const { return m_exportedSnapshot; }
  inline bool ExportedSnapshotHasBeenSet() const { return m_exportedSnapshotHasBeenSet; }
  template <typename ExportedSnapshotT = SnapmirrorExportedSnapshot>
  void SetExportedSnapshot(ExportedSnapshotT&& value) {
    m_exportedSnapshotHasBeenSet = true;
    m_exportedSnapshot = std::forward<ExportedSnapshotT>(value);
  }
  template <typename ExportedSnapshotT = SnapmirrorExportedSnapshot>
  SnapmirrorRelationship& WithExportedSnapshot(ExportedSnapshotT&& value) {
    SetExportedSnapshot(std::forward<ExportedSnapshotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest SnapMirror transfer for the relationship. If a transfer is in
   * progress, this is the in-progress transfer. Otherwise, it's the most recently
   * completed transfer.</p>
   */
  inline const SnapmirrorTransferState& GetTransferState() const { return m_transferState; }
  inline bool TransferStateHasBeenSet() const { return m_transferStateHasBeenSet; }
  template <typename TransferStateT = SnapmirrorTransferState>
  void SetTransferState(TransferStateT&& value) {
    m_transferStateHasBeenSet = true;
    m_transferState = std::forward<TransferStateT>(value);
  }
  template <typename TransferStateT = SnapmirrorTransferState>
  SnapmirrorRelationship& WithTransferState(TransferStateT&& value) {
    SetTransferState(std::forward<TransferStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SnapMirror relationship's universally unique identifier (UUID).</p>
   */
  inline const Aws::String& GetUUID() const { return m_uUID; }
  inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
  template <typename UUIDT = Aws::String>
  void SetUUID(UUIDT&& value) {
    m_uUIDHasBeenSet = true;
    m_uUID = std::forward<UUIDT>(value);
  }
  template <typename UUIDT = Aws::String>
  SnapmirrorRelationship& WithUUID(UUIDT&& value) {
    SetUUID(std::forward<UUIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceARN;

  Aws::String m_snapmirrorRelationshipId;

  Aws::String m_fileSystemId;

  SnapmirrorRelationshipLifecycle m_lifecycle{SnapmirrorRelationshipLifecycle::NOT_SET};

  LifecycleTransitionReason m_lifecycleTransitionReason;

  Aws::Vector<Tag> m_tags;

  SnapmirrorSource m_source;

  SnapmirrorDestination m_destination;

  SnapmirrorRelationshipPolicy m_snapmirrorPolicy;

  Aws::String m_transferSchedule;

  long long m_throttleInKbps{0};

  SnapmirrorRelationshipState m_state{SnapmirrorRelationshipState::NOT_SET};

  bool m_healthy{false};

  Aws::String m_unhealthyReason;

  long long m_lagTimeInMinutes{0};

  SnapmirrorExportedSnapshot m_exportedSnapshot;

  SnapmirrorTransferState m_transferState;

  Aws::String m_uUID;
  bool m_resourceARNHasBeenSet = false;
  bool m_snapmirrorRelationshipIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_lifecycleTransitionReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_snapmirrorPolicyHasBeenSet = false;
  bool m_transferScheduleHasBeenSet = false;
  bool m_throttleInKbpsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_healthyHasBeenSet = false;
  bool m_unhealthyReasonHasBeenSet = false;
  bool m_lagTimeInMinutesHasBeenSet = false;
  bool m_exportedSnapshotHasBeenSet = false;
  bool m_transferStateHasBeenSet = false;
  bool m_uUIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
