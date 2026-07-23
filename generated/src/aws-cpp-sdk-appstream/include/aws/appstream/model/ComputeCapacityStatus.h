/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes the capacity status for a fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ComputeCapacityStatus">AWS
 * API Reference</a></p>
 */
class ComputeCapacityStatus {
 public:
  AWS_APPSTREAM_API ComputeCapacityStatus() = default;
  AWS_APPSTREAM_API ComputeCapacityStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API ComputeCapacityStatus& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The desired number of streaming instances.</p>
   */
  inline int64_t GetDesired() const { return m_desired; }
  inline bool DesiredHasBeenSet() const { return m_desiredHasBeenSet; }
  inline void SetDesired(int64_t value) {
    m_desiredHasBeenSet = true;
    m_desired = value;
  }
  inline ComputeCapacityStatus& WithDesired(int64_t value) {
    SetDesired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of simultaneous streaming instances that are running.</p>
   */
  inline int64_t GetRunning() const { return m_running; }
  inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }
  inline void SetRunning(int64_t value) {
    m_runningHasBeenSet = true;
    m_running = value;
  }
  inline ComputeCapacityStatus& WithRunning(int64_t value) {
    SetRunning(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in use for streaming.</p>
   */
  inline int64_t GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  inline void SetInUse(int64_t value) {
    m_inUseHasBeenSet = true;
    m_inUse = value;
  }
  inline ComputeCapacityStatus& WithInUse(int64_t value) {
    SetInUse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of currently available instances that can be used to stream
   * sessions.</p>
   */
  inline int64_t GetAvailable() const { return m_available; }
  inline bool AvailableHasBeenSet() const { return m_availableHasBeenSet; }
  inline void SetAvailable(int64_t value) {
    m_availableHasBeenSet = true;
    m_available = value;
  }
  inline ComputeCapacityStatus& WithAvailable(int64_t value) {
    SetAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of sessions slots that are either running or pending. This
   * represents the total number of concurrent streaming sessions your fleet can
   * support in a steady state.</p> <p>DesiredUserSessionCapacity =
   * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
   * to multi-session fleets.</p>
   */
  inline int64_t GetDesiredUserSessions() const { return m_desiredUserSessions; }
  inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }
  inline void SetDesiredUserSessions(int64_t value) {
    m_desiredUserSessionsHasBeenSet = true;
    m_desiredUserSessions = value;
  }
  inline ComputeCapacityStatus& WithDesiredUserSessions(int64_t value) {
    SetDesiredUserSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of idle session slots currently available for user sessions.</p>
   * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
   * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
   */
  inline int64_t GetAvailableUserSessions() const { return m_availableUserSessions; }
  inline bool AvailableUserSessionsHasBeenSet() const { return m_availableUserSessionsHasBeenSet; }
  inline void SetAvailableUserSessions(int64_t value) {
    m_availableUserSessionsHasBeenSet = true;
    m_availableUserSessions = value;
  }
  inline ComputeCapacityStatus& WithAvailableUserSessions(int64_t value) {
    SetAvailableUserSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of user sessions currently being used for streaming sessions. This
   * only applies to multi-session fleets.</p>
   */
  inline int64_t GetActiveUserSessions() const { return m_activeUserSessions; }
  inline bool ActiveUserSessionsHasBeenSet() const { return m_activeUserSessionsHasBeenSet; }
  inline void SetActiveUserSessions(int64_t value) {
    m_activeUserSessionsHasBeenSet = true;
    m_activeUserSessions = value;
  }
  inline ComputeCapacityStatus& WithActiveUserSessions(int64_t value) {
    SetActiveUserSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of session slots that are available for streaming or are
   * currently streaming.</p> <p>ActualUserSessionCapacity =
   * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
   * multi-session fleets.</p>
   */
  inline int64_t GetActualUserSessions() const { return m_actualUserSessions; }
  inline bool ActualUserSessionsHasBeenSet() const { return m_actualUserSessionsHasBeenSet; }
  inline void SetActualUserSessions(int64_t value) {
    m_actualUserSessionsHasBeenSet = true;
    m_actualUserSessions = value;
  }
  inline ComputeCapacityStatus& WithActualUserSessions(int64_t value) {
    SetActualUserSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in drain mode. This only applies to multi-session
   * fleets.</p>
   */
  inline int64_t GetDraining() const { return m_draining; }
  inline bool DrainingHasBeenSet() const { return m_drainingHasBeenSet; }
  inline void SetDraining(int64_t value) {
    m_drainingHasBeenSet = true;
    m_draining = value;
  }
  inline ComputeCapacityStatus& WithDraining(int64_t value) {
    SetDraining(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of active user sessions on instances in drain mode. This only
   * applies to multi-session fleets.</p>
   */
  inline int64_t GetDrainModeActiveUserSessions() const { return m_drainModeActiveUserSessions; }
  inline bool DrainModeActiveUserSessionsHasBeenSet() const { return m_drainModeActiveUserSessionsHasBeenSet; }
  inline void SetDrainModeActiveUserSessions(int64_t value) {
    m_drainModeActiveUserSessionsHasBeenSet = true;
    m_drainModeActiveUserSessions = value;
  }
  inline ComputeCapacityStatus& WithDrainModeActiveUserSessions(int64_t value) {
    SetDrainModeActiveUserSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of unused session slots on instances in drain mode that cannot be
   * used for user session provisioning. This only applies to multi-session
   * fleets.</p>
   */
  inline int64_t GetDrainModeUnusedUserSessions() const { return m_drainModeUnusedUserSessions; }
  inline bool DrainModeUnusedUserSessionsHasBeenSet() const { return m_drainModeUnusedUserSessionsHasBeenSet; }
  inline void SetDrainModeUnusedUserSessions(int64_t value) {
    m_drainModeUnusedUserSessionsHasBeenSet = true;
    m_drainModeUnusedUserSessions = value;
  }
  inline ComputeCapacityStatus& WithDrainModeUnusedUserSessions(int64_t value) {
    SetDrainModeUnusedUserSessions(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_desired{0};

  int64_t m_running{0};

  int64_t m_inUse{0};

  int64_t m_available{0};

  int64_t m_desiredUserSessions{0};

  int64_t m_availableUserSessions{0};

  int64_t m_activeUserSessions{0};

  int64_t m_actualUserSessions{0};

  int64_t m_draining{0};

  int64_t m_drainModeActiveUserSessions{0};

  int64_t m_drainModeUnusedUserSessions{0};
  bool m_desiredHasBeenSet = false;
  bool m_runningHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
  bool m_availableHasBeenSet = false;
  bool m_desiredUserSessionsHasBeenSet = false;
  bool m_availableUserSessionsHasBeenSet = false;
  bool m_activeUserSessionsHasBeenSet = false;
  bool m_actualUserSessionsHasBeenSet = false;
  bool m_drainingHasBeenSet = false;
  bool m_drainModeActiveUserSessionsHasBeenSet = false;
  bool m_drainModeUnusedUserSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
