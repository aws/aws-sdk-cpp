/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/FailbackLaunchType.h>
#include <aws/drs/model/FailbackState.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing failback related information of the Recovery
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceFailback">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceFailback
  {
  public:
    AWS_DRS_API RecoveryInstanceFailback();
    AWS_DRS_API RecoveryInstanceFailback(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceFailback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline const Aws::String& GetAgentLastSeenByServiceDateTime() const{ return m_agentLastSeenByServiceDateTime; }

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline bool AgentLastSeenByServiceDateTimeHasBeenSet() const { return m_agentLastSeenByServiceDateTimeHasBeenSet; }

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline void SetAgentLastSeenByServiceDateTime(const Aws::String& value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime = value; }

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline void SetAgentLastSeenByServiceDateTime(Aws::String&& value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime = std::move(value); }

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline void SetAgentLastSeenByServiceDateTime(const char* value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime.assign(value); }

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(const Aws::String& value) { SetAgentLastSeenByServiceDateTime(value); return *this;}

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(Aws::String&& value) { SetAgentLastSeenByServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(const char* value) { SetAgentLastSeenByServiceDateTime(value); return *this;}


    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const{ return m_elapsedReplicationDuration; }

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(const Aws::String& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = value; }

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(Aws::String&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::move(value); }

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline void SetElapsedReplicationDuration(const char* value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration.assign(value); }

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(const Aws::String& value) { SetElapsedReplicationDuration(value); return *this;}

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(Aws::String&& value) { SetElapsedReplicationDuration(std::move(value)); return *this;}

    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(const char* value) { SetElapsedReplicationDuration(value); return *this;}


    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline const Aws::String& GetFailbackClientID() const{ return m_failbackClientID; }

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline bool FailbackClientIDHasBeenSet() const { return m_failbackClientIDHasBeenSet; }

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline void SetFailbackClientID(const Aws::String& value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID = value; }

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline void SetFailbackClientID(Aws::String&& value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID = std::move(value); }

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline void SetFailbackClientID(const char* value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID.assign(value); }

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientID(const Aws::String& value) { SetFailbackClientID(value); return *this;}

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientID(Aws::String&& value) { SetFailbackClientID(std::move(value)); return *this;}

    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientID(const char* value) { SetFailbackClientID(value); return *this;}


    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline const Aws::String& GetFailbackClientLastSeenByServiceDateTime() const{ return m_failbackClientLastSeenByServiceDateTime; }

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline bool FailbackClientLastSeenByServiceDateTimeHasBeenSet() const { return m_failbackClientLastSeenByServiceDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline void SetFailbackClientLastSeenByServiceDateTime(const Aws::String& value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime = value; }

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline void SetFailbackClientLastSeenByServiceDateTime(Aws::String&& value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime = std::move(value); }

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline void SetFailbackClientLastSeenByServiceDateTime(const char* value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime.assign(value); }

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(const Aws::String& value) { SetFailbackClientLastSeenByServiceDateTime(value); return *this;}

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(Aws::String&& value) { SetFailbackClientLastSeenByServiceDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(const char* value) { SetFailbackClientLastSeenByServiceDateTime(value); return *this;}


    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline const Aws::String& GetFailbackInitiationTime() const{ return m_failbackInitiationTime; }

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline bool FailbackInitiationTimeHasBeenSet() const { return m_failbackInitiationTimeHasBeenSet; }

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline void SetFailbackInitiationTime(const Aws::String& value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime = value; }

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline void SetFailbackInitiationTime(Aws::String&& value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime = std::move(value); }

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline void SetFailbackInitiationTime(const char* value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime.assign(value); }

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(const Aws::String& value) { SetFailbackInitiationTime(value); return *this;}

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(Aws::String&& value) { SetFailbackInitiationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(const char* value) { SetFailbackInitiationTime(value); return *this;}


    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline const Aws::String& GetFailbackJobID() const{ return m_failbackJobID; }

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline bool FailbackJobIDHasBeenSet() const { return m_failbackJobIDHasBeenSet; }

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline void SetFailbackJobID(const Aws::String& value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID = value; }

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline void SetFailbackJobID(Aws::String&& value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID = std::move(value); }

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline void SetFailbackJobID(const char* value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID.assign(value); }

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackJobID(const Aws::String& value) { SetFailbackJobID(value); return *this;}

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackJobID(Aws::String&& value) { SetFailbackJobID(std::move(value)); return *this;}

    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackJobID(const char* value) { SetFailbackJobID(value); return *this;}


    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline const FailbackLaunchType& GetFailbackLaunchType() const{ return m_failbackLaunchType; }

    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline bool FailbackLaunchTypeHasBeenSet() const { return m_failbackLaunchTypeHasBeenSet; }

    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline void SetFailbackLaunchType(const FailbackLaunchType& value) { m_failbackLaunchTypeHasBeenSet = true; m_failbackLaunchType = value; }

    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline void SetFailbackLaunchType(FailbackLaunchType&& value) { m_failbackLaunchTypeHasBeenSet = true; m_failbackLaunchType = std::move(value); }

    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackLaunchType(const FailbackLaunchType& value) { SetFailbackLaunchType(value); return *this;}

    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackLaunchType(FailbackLaunchType&& value) { SetFailbackLaunchType(std::move(value)); return *this;}


    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline bool GetFailbackToOriginalServer() const{ return m_failbackToOriginalServer; }

    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline bool FailbackToOriginalServerHasBeenSet() const { return m_failbackToOriginalServerHasBeenSet; }

    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline void SetFailbackToOriginalServer(bool value) { m_failbackToOriginalServerHasBeenSet = true; m_failbackToOriginalServer = value; }

    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFailbackToOriginalServer(bool value) { SetFailbackToOriginalServer(value); return *this;}


    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const{ return m_firstByteDateTime; }

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline void SetFirstByteDateTime(const Aws::String& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = value; }

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline void SetFirstByteDateTime(Aws::String&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::move(value); }

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline void SetFirstByteDateTime(const char* value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime.assign(value); }

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFirstByteDateTime(const Aws::String& value) { SetFirstByteDateTime(value); return *this;}

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFirstByteDateTime(Aws::String&& value) { SetFirstByteDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline RecoveryInstanceFailback& WithFirstByteDateTime(const char* value) { SetFirstByteDateTime(value); return *this;}


    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline const FailbackState& GetState() const{ return m_state; }

    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline void SetState(const FailbackState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline void SetState(FailbackState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline RecoveryInstanceFailback& WithState(const FailbackState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline RecoveryInstanceFailback& WithState(FailbackState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_agentLastSeenByServiceDateTime;
    bool m_agentLastSeenByServiceDateTimeHasBeenSet = false;

    Aws::String m_elapsedReplicationDuration;
    bool m_elapsedReplicationDurationHasBeenSet = false;

    Aws::String m_failbackClientID;
    bool m_failbackClientIDHasBeenSet = false;

    Aws::String m_failbackClientLastSeenByServiceDateTime;
    bool m_failbackClientLastSeenByServiceDateTimeHasBeenSet = false;

    Aws::String m_failbackInitiationTime;
    bool m_failbackInitiationTimeHasBeenSet = false;

    Aws::String m_failbackJobID;
    bool m_failbackJobIDHasBeenSet = false;

    FailbackLaunchType m_failbackLaunchType;
    bool m_failbackLaunchTypeHasBeenSet = false;

    bool m_failbackToOriginalServer;
    bool m_failbackToOriginalServerHasBeenSet = false;

    Aws::String m_firstByteDateTime;
    bool m_firstByteDateTimeHasBeenSet = false;

    FailbackState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
