/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>

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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the capacity status for a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ComputeCapacityStatus">AWS
   * API Reference</a></p>
   */
  class ComputeCapacityStatus
  {
  public:
    AWS_APPSTREAM_API ComputeCapacityStatus() = default;
    AWS_APPSTREAM_API ComputeCapacityStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ComputeCapacityStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline int GetDesired() const { return m_desired; }
    inline bool DesiredHasBeenSet() const { return m_desiredHasBeenSet; }
    inline void SetDesired(int value) { m_desiredHasBeenSet = true; m_desired = value; }
    inline ComputeCapacityStatus& WithDesired(int value) { SetDesired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of simultaneous streaming instances that are running.</p>
     */
    inline int GetRunning() const { return m_running; }
    inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }
    inline void SetRunning(int value) { m_runningHasBeenSet = true; m_running = value; }
    inline ComputeCapacityStatus& WithRunning(int value) { SetRunning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in use for streaming.</p>
     */
    inline int GetInUse() const { return m_inUse; }
    inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
    inline void SetInUse(int value) { m_inUseHasBeenSet = true; m_inUse = value; }
    inline ComputeCapacityStatus& WithInUse(int value) { SetInUse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of currently available instances that can be used to stream
     * sessions.</p>
     */
    inline int GetAvailable() const { return m_available; }
    inline bool AvailableHasBeenSet() const { return m_availableHasBeenSet; }
    inline void SetAvailable(int value) { m_availableHasBeenSet = true; m_available = value; }
    inline ComputeCapacityStatus& WithAvailable(int value) { SetAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your fleet can
     * support in a steady state.</p> <p>DesiredUserSessionCapacity =
     * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
     * to multi-session fleets.</p>
     */
    inline int GetDesiredUserSessions() const { return m_desiredUserSessions; }
    inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }
    inline void SetDesiredUserSessions(int value) { m_desiredUserSessionsHasBeenSet = true; m_desiredUserSessions = value; }
    inline ComputeCapacityStatus& WithDesiredUserSessions(int value) { SetDesiredUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of idle session slots currently available for user sessions.</p>
     * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
     * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
     */
    inline int GetAvailableUserSessions() const { return m_availableUserSessions; }
    inline bool AvailableUserSessionsHasBeenSet() const { return m_availableUserSessionsHasBeenSet; }
    inline void SetAvailableUserSessions(int value) { m_availableUserSessionsHasBeenSet = true; m_availableUserSessions = value; }
    inline ComputeCapacityStatus& WithAvailableUserSessions(int value) { SetAvailableUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of user sessions currently being used for streaming sessions. This
     * only applies to multi-session fleets.</p>
     */
    inline int GetActiveUserSessions() const { return m_activeUserSessions; }
    inline bool ActiveUserSessionsHasBeenSet() const { return m_activeUserSessionsHasBeenSet; }
    inline void SetActiveUserSessions(int value) { m_activeUserSessionsHasBeenSet = true; m_activeUserSessions = value; }
    inline ComputeCapacityStatus& WithActiveUserSessions(int value) { SetActiveUserSessions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of session slots that are available for streaming or are
     * currently streaming.</p> <p>ActualUserSessionCapacity =
     * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
     * multi-session fleets.</p>
     */
    inline int GetActualUserSessions() const { return m_actualUserSessions; }
    inline bool ActualUserSessionsHasBeenSet() const { return m_actualUserSessionsHasBeenSet; }
    inline void SetActualUserSessions(int value) { m_actualUserSessionsHasBeenSet = true; m_actualUserSessions = value; }
    inline ComputeCapacityStatus& WithActualUserSessions(int value) { SetActualUserSessions(value); return *this;}
    ///@}
  private:

    int m_desired{0};
    bool m_desiredHasBeenSet = false;

    int m_running{0};
    bool m_runningHasBeenSet = false;

    int m_inUse{0};
    bool m_inUseHasBeenSet = false;

    int m_available{0};
    bool m_availableHasBeenSet = false;

    int m_desiredUserSessions{0};
    bool m_desiredUserSessionsHasBeenSet = false;

    int m_availableUserSessions{0};
    bool m_availableUserSessionsHasBeenSet = false;

    int m_activeUserSessions{0};
    bool m_activeUserSessionsHasBeenSet = false;

    int m_actualUserSessions{0};
    bool m_actualUserSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
