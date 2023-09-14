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
    AWS_APPSTREAM_API ComputeCapacityStatus();
    AWS_APPSTREAM_API ComputeCapacityStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ComputeCapacityStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline int GetDesired() const{ return m_desired; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline bool DesiredHasBeenSet() const { return m_desiredHasBeenSet; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline void SetDesired(int value) { m_desiredHasBeenSet = true; m_desired = value; }

    /**
     * <p>The desired number of streaming instances.</p>
     */
    inline ComputeCapacityStatus& WithDesired(int value) { SetDesired(value); return *this;}


    /**
     * <p>The total number of simultaneous streaming instances that are running.</p>
     */
    inline int GetRunning() const{ return m_running; }

    /**
     * <p>The total number of simultaneous streaming instances that are running.</p>
     */
    inline bool RunningHasBeenSet() const { return m_runningHasBeenSet; }

    /**
     * <p>The total number of simultaneous streaming instances that are running.</p>
     */
    inline void SetRunning(int value) { m_runningHasBeenSet = true; m_running = value; }

    /**
     * <p>The total number of simultaneous streaming instances that are running.</p>
     */
    inline ComputeCapacityStatus& WithRunning(int value) { SetRunning(value); return *this;}


    /**
     * <p>The number of instances in use for streaming.</p>
     */
    inline int GetInUse() const{ return m_inUse; }

    /**
     * <p>The number of instances in use for streaming.</p>
     */
    inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }

    /**
     * <p>The number of instances in use for streaming.</p>
     */
    inline void SetInUse(int value) { m_inUseHasBeenSet = true; m_inUse = value; }

    /**
     * <p>The number of instances in use for streaming.</p>
     */
    inline ComputeCapacityStatus& WithInUse(int value) { SetInUse(value); return *this;}


    /**
     * <p>The number of currently available instances that can be used to stream
     * sessions.</p>
     */
    inline int GetAvailable() const{ return m_available; }

    /**
     * <p>The number of currently available instances that can be used to stream
     * sessions.</p>
     */
    inline bool AvailableHasBeenSet() const { return m_availableHasBeenSet; }

    /**
     * <p>The number of currently available instances that can be used to stream
     * sessions.</p>
     */
    inline void SetAvailable(int value) { m_availableHasBeenSet = true; m_available = value; }

    /**
     * <p>The number of currently available instances that can be used to stream
     * sessions.</p>
     */
    inline ComputeCapacityStatus& WithAvailable(int value) { SetAvailable(value); return *this;}


    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your fleet can
     * support in a steady state.</p> <p>DesiredUserSessionCapacity =
     * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
     * to multi-session fleets.</p>
     */
    inline int GetDesiredUserSessions() const{ return m_desiredUserSessions; }

    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your fleet can
     * support in a steady state.</p> <p>DesiredUserSessionCapacity =
     * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
     * to multi-session fleets.</p>
     */
    inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }

    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your fleet can
     * support in a steady state.</p> <p>DesiredUserSessionCapacity =
     * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
     * to multi-session fleets.</p>
     */
    inline void SetDesiredUserSessions(int value) { m_desiredUserSessionsHasBeenSet = true; m_desiredUserSessions = value; }

    /**
     * <p>The total number of sessions slots that are either running or pending. This
     * represents the total number of concurrent streaming sessions your fleet can
     * support in a steady state.</p> <p>DesiredUserSessionCapacity =
     * ActualUserSessionCapacity + PendingUserSessionCapacity</p> <p>This only applies
     * to multi-session fleets.</p>
     */
    inline ComputeCapacityStatus& WithDesiredUserSessions(int value) { SetDesiredUserSessions(value); return *this;}


    /**
     * <p>The number of idle session slots currently available for user sessions.</p>
     * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
     * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
     */
    inline int GetAvailableUserSessions() const{ return m_availableUserSessions; }

    /**
     * <p>The number of idle session slots currently available for user sessions.</p>
     * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
     * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
     */
    inline bool AvailableUserSessionsHasBeenSet() const { return m_availableUserSessionsHasBeenSet; }

    /**
     * <p>The number of idle session slots currently available for user sessions.</p>
     * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
     * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
     */
    inline void SetAvailableUserSessions(int value) { m_availableUserSessionsHasBeenSet = true; m_availableUserSessions = value; }

    /**
     * <p>The number of idle session slots currently available for user sessions.</p>
     * <p>AvailableUserSessionCapacity = ActualUserSessionCapacity -
     * ActiveUserSessions</p> <p>This only applies to multi-session fleets.</p>
     */
    inline ComputeCapacityStatus& WithAvailableUserSessions(int value) { SetAvailableUserSessions(value); return *this;}


    /**
     * <p>The number of user sessions currently being used for streaming sessions. This
     * only applies to multi-session fleets.</p>
     */
    inline int GetActiveUserSessions() const{ return m_activeUserSessions; }

    /**
     * <p>The number of user sessions currently being used for streaming sessions. This
     * only applies to multi-session fleets.</p>
     */
    inline bool ActiveUserSessionsHasBeenSet() const { return m_activeUserSessionsHasBeenSet; }

    /**
     * <p>The number of user sessions currently being used for streaming sessions. This
     * only applies to multi-session fleets.</p>
     */
    inline void SetActiveUserSessions(int value) { m_activeUserSessionsHasBeenSet = true; m_activeUserSessions = value; }

    /**
     * <p>The number of user sessions currently being used for streaming sessions. This
     * only applies to multi-session fleets.</p>
     */
    inline ComputeCapacityStatus& WithActiveUserSessions(int value) { SetActiveUserSessions(value); return *this;}


    /**
     * <p>The total number of session slots that are available for streaming or are
     * currently streaming.</p> <p>ActualUserSessionCapacity =
     * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
     * multi-session fleets.</p>
     */
    inline int GetActualUserSessions() const{ return m_actualUserSessions; }

    /**
     * <p>The total number of session slots that are available for streaming or are
     * currently streaming.</p> <p>ActualUserSessionCapacity =
     * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
     * multi-session fleets.</p>
     */
    inline bool ActualUserSessionsHasBeenSet() const { return m_actualUserSessionsHasBeenSet; }

    /**
     * <p>The total number of session slots that are available for streaming or are
     * currently streaming.</p> <p>ActualUserSessionCapacity =
     * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
     * multi-session fleets.</p>
     */
    inline void SetActualUserSessions(int value) { m_actualUserSessionsHasBeenSet = true; m_actualUserSessions = value; }

    /**
     * <p>The total number of session slots that are available for streaming or are
     * currently streaming.</p> <p>ActualUserSessionCapacity =
     * AvailableUserSessionCapacity + ActiveUserSessions</p> <p>This only applies to
     * multi-session fleets.</p>
     */
    inline ComputeCapacityStatus& WithActualUserSessions(int value) { SetActualUserSessions(value); return *this;}

  private:

    int m_desired;
    bool m_desiredHasBeenSet = false;

    int m_running;
    bool m_runningHasBeenSet = false;

    int m_inUse;
    bool m_inUseHasBeenSet = false;

    int m_available;
    bool m_availableHasBeenSet = false;

    int m_desiredUserSessions;
    bool m_desiredUserSessionsHasBeenSet = false;

    int m_availableUserSessions;
    bool m_availableUserSessionsHasBeenSet = false;

    int m_activeUserSessions;
    bool m_activeUserSessionsHasBeenSet = false;

    int m_actualUserSessions;
    bool m_actualUserSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
