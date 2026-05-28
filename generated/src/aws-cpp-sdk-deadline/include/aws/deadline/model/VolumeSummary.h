/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/VolumeState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The summary of a persistent volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/VolumeSummary">AWS
 * API Reference</a></p>
 */
class VolumeSummary {
 public:
  AWS_DEADLINE_API VolumeSummary() = default;
  AWS_DEADLINE_API VolumeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API VolumeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The volume ID.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  VolumeSummary& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The farm ID of the farm that contains the fleet.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  VolumeSummary& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fleet ID of the fleet that contains the volume.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  VolumeSummary& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
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
  inline VolumeSummary& WithState(VolumeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The volume size in GiB.</p>
   */
  inline int GetSizeGiB() const { return m_sizeGiB; }
  inline bool SizeGiBHasBeenSet() const { return m_sizeGiBHasBeenSet; }
  inline void SetSizeGiB(int value) {
    m_sizeGiBHasBeenSet = true;
    m_sizeGiB = value;
  }
  inline VolumeSummary& WithSizeGiB(int value) {
    SetSizeGiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID of the volume.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  VolumeSummary& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker ID of the worker the volume is attached to.</p>
   */
  inline const Aws::String& GetAttachedWorkerId() const { return m_attachedWorkerId; }
  inline bool AttachedWorkerIdHasBeenSet() const { return m_attachedWorkerIdHasBeenSet; }
  template <typename AttachedWorkerIdT = Aws::String>
  void SetAttachedWorkerId(AttachedWorkerIdT&& value) {
    m_attachedWorkerIdHasBeenSet = true;
    m_attachedWorkerId = std::forward<AttachedWorkerIdT>(value);
  }
  template <typename AttachedWorkerIdT = Aws::String>
  VolumeSummary& WithAttachedWorkerId(AttachedWorkerIdT&& value) {
    SetAttachedWorkerId(std::forward<AttachedWorkerIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeId;

  Aws::String m_farmId;

  Aws::String m_fleetId;

  VolumeState m_state{VolumeState::NOT_SET};

  int m_sizeGiB{0};

  Aws::String m_availabilityZoneId;

  Aws::String m_attachedWorkerId;
  bool m_volumeIdHasBeenSet = false;
  bool m_farmIdHasBeenSet = false;
  bool m_fleetIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_sizeGiBHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_attachedWorkerIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
