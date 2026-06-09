/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EbsVolumeType.h>
#include <aws/deadline/model/VolumeState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {
/**
 * <p>Mixin that adds an optional ARN field to response structures. Apply to
 * SummaryMixins (flows into Get, Summary, and BatchGet) and Create
 * outputs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetVolumeResponse">AWS
 * API Reference</a></p>
 */
class GetVolumeResult {
 public:
  AWS_DEADLINE_API GetVolumeResult() = default;
  AWS_DEADLINE_API GetVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEADLINE_API GetVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The volume ID.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  GetVolumeResult& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The farm ID of the farm that contains the fleet.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  GetVolumeResult& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fleet ID of the fleet that contains the volume.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  GetVolumeResult& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the volume.</p>
   */
  inline VolumeState GetState() const { return m_state; }
  inline void SetState(VolumeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetVolumeResult& WithState(VolumeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The volume size in GiB.</p>
   */
  inline int GetSizeGiB() const { return m_sizeGiB; }
  inline void SetSizeGiB(int value) {
    m_sizeGiBHasBeenSet = true;
    m_sizeGiB = value;
  }
  inline GetVolumeResult& WithSizeGiB(int value) {
    SetSizeGiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID of the volume.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  GetVolumeResult& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker ID of the worker the volume is attached to.</p>
   */
  inline const Aws::String& GetAttachedWorkerId() const { return m_attachedWorkerId; }
  template <typename AttachedWorkerIdT = Aws::String>
  void SetAttachedWorkerId(AttachedWorkerIdT&& value) {
    m_attachedWorkerIdHasBeenSet = true;
    m_attachedWorkerId = std::forward<AttachedWorkerIdT>(value);
  }
  template <typename AttachedWorkerIdT = Aws::String>
  GetVolumeResult& WithAttachedWorkerId(AttachedWorkerIdT&& value) {
    SetAttachedWorkerId(std::forward<AttachedWorkerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The EBS volume type.</p>
   */
  inline EbsVolumeType GetVolumeType() const { return m_volumeType; }
  inline void SetVolumeType(EbsVolumeType value) {
    m_volumeTypeHasBeenSet = true;
    m_volumeType = value;
  }
  inline GetVolumeResult& WithVolumeType(EbsVolumeType value) {
    SetVolumeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IOPS of the volume.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline GetVolumeResult& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The throughput of the volume in MiB.</p>
   */
  inline int GetThroughputMiB() const { return m_throughputMiB; }
  inline void SetThroughputMiB(int value) {
    m_throughputMiBHasBeenSet = true;
    m_throughputMiB = value;
  }
  inline GetVolumeResult& WithThroughputMiB(int value) {
    SetThroughputMiB(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetVolumeResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the volume was last assigned to a worker.</p>
   */
  inline const Aws::Utils::DateTime& GetLastAssignedAt() const { return m_lastAssignedAt; }
  template <typename LastAssignedAtT = Aws::Utils::DateTime>
  void SetLastAssignedAt(LastAssignedAtT&& value) {
    m_lastAssignedAtHasBeenSet = true;
    m_lastAssignedAt = std::forward<LastAssignedAtT>(value);
  }
  template <typename LastAssignedAtT = Aws::Utils::DateTime>
  GetVolumeResult& WithLastAssignedAt(LastAssignedAtT&& value) {
    SetLastAssignedAt(std::forward<LastAssignedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the volume was last released from a worker.</p>
   */
  inline const Aws::Utils::DateTime& GetLastReleasedAt() const { return m_lastReleasedAt; }
  template <typename LastReleasedAtT = Aws::Utils::DateTime>
  void SetLastReleasedAt(LastReleasedAtT&& value) {
    m_lastReleasedAtHasBeenSet = true;
    m_lastReleasedAt = std::forward<LastReleasedAtT>(value);
  }
  template <typename LastReleasedAtT = Aws::Utils::DateTime>
  GetVolumeResult& WithLastReleasedAt(LastReleasedAtT&& value) {
    SetLastReleasedAt(std::forward<LastReleasedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the volume expires and will be deleted.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetVolumeResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetVolumeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_volumeId;

  Aws::String m_farmId;

  Aws::String m_fleetId;

  VolumeState m_state{VolumeState::NOT_SET};

  int m_sizeGiB{0};

  Aws::String m_availabilityZoneId;

  Aws::String m_attachedWorkerId;

  EbsVolumeType m_volumeType{EbsVolumeType::NOT_SET};

  int m_iops{0};

  int m_throughputMiB{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastAssignedAt{};

  Aws::Utils::DateTime m_lastReleasedAt{};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_volumeIdHasBeenSet = false;
  bool m_farmIdHasBeenSet = false;
  bool m_fleetIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_sizeGiBHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_attachedWorkerIdHasBeenSet = false;
  bool m_volumeTypeHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
  bool m_throughputMiBHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastAssignedAtHasBeenSet = false;
  bool m_lastReleasedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
