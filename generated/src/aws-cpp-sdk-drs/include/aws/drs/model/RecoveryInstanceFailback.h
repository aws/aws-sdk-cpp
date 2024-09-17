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


    ///@{
    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline const Aws::String& GetAgentLastSeenByServiceDateTime() const{ return m_agentLastSeenByServiceDateTime; }
    inline bool AgentLastSeenByServiceDateTimeHasBeenSet() const { return m_agentLastSeenByServiceDateTimeHasBeenSet; }
    inline void SetAgentLastSeenByServiceDateTime(const Aws::String& value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime = value; }
    inline void SetAgentLastSeenByServiceDateTime(Aws::String&& value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime = std::move(value); }
    inline void SetAgentLastSeenByServiceDateTime(const char* value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime.assign(value); }
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(const Aws::String& value) { SetAgentLastSeenByServiceDateTime(value); return *this;}
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(Aws::String&& value) { SetAgentLastSeenByServiceDateTime(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(const char* value) { SetAgentLastSeenByServiceDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const{ return m_elapsedReplicationDuration; }
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }
    inline void SetElapsedReplicationDuration(const Aws::String& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = value; }
    inline void SetElapsedReplicationDuration(Aws::String&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::move(value); }
    inline void SetElapsedReplicationDuration(const char* value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration.assign(value); }
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(const Aws::String& value) { SetElapsedReplicationDuration(value); return *this;}
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(Aws::String&& value) { SetElapsedReplicationDuration(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithElapsedReplicationDuration(const char* value) { SetElapsedReplicationDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline const Aws::String& GetFailbackClientID() const{ return m_failbackClientID; }
    inline bool FailbackClientIDHasBeenSet() const { return m_failbackClientIDHasBeenSet; }
    inline void SetFailbackClientID(const Aws::String& value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID = value; }
    inline void SetFailbackClientID(Aws::String&& value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID = std::move(value); }
    inline void SetFailbackClientID(const char* value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID.assign(value); }
    inline RecoveryInstanceFailback& WithFailbackClientID(const Aws::String& value) { SetFailbackClientID(value); return *this;}
    inline RecoveryInstanceFailback& WithFailbackClientID(Aws::String&& value) { SetFailbackClientID(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithFailbackClientID(const char* value) { SetFailbackClientID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline const Aws::String& GetFailbackClientLastSeenByServiceDateTime() const{ return m_failbackClientLastSeenByServiceDateTime; }
    inline bool FailbackClientLastSeenByServiceDateTimeHasBeenSet() const { return m_failbackClientLastSeenByServiceDateTimeHasBeenSet; }
    inline void SetFailbackClientLastSeenByServiceDateTime(const Aws::String& value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime = value; }
    inline void SetFailbackClientLastSeenByServiceDateTime(Aws::String&& value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime = std::move(value); }
    inline void SetFailbackClientLastSeenByServiceDateTime(const char* value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime.assign(value); }
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(const Aws::String& value) { SetFailbackClientLastSeenByServiceDateTime(value); return *this;}
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(Aws::String&& value) { SetFailbackClientLastSeenByServiceDateTime(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(const char* value) { SetFailbackClientLastSeenByServiceDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline const Aws::String& GetFailbackInitiationTime() const{ return m_failbackInitiationTime; }
    inline bool FailbackInitiationTimeHasBeenSet() const { return m_failbackInitiationTimeHasBeenSet; }
    inline void SetFailbackInitiationTime(const Aws::String& value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime = value; }
    inline void SetFailbackInitiationTime(Aws::String&& value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime = std::move(value); }
    inline void SetFailbackInitiationTime(const char* value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime.assign(value); }
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(const Aws::String& value) { SetFailbackInitiationTime(value); return *this;}
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(Aws::String&& value) { SetFailbackInitiationTime(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithFailbackInitiationTime(const char* value) { SetFailbackInitiationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline const Aws::String& GetFailbackJobID() const{ return m_failbackJobID; }
    inline bool FailbackJobIDHasBeenSet() const { return m_failbackJobIDHasBeenSet; }
    inline void SetFailbackJobID(const Aws::String& value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID = value; }
    inline void SetFailbackJobID(Aws::String&& value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID = std::move(value); }
    inline void SetFailbackJobID(const char* value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID.assign(value); }
    inline RecoveryInstanceFailback& WithFailbackJobID(const Aws::String& value) { SetFailbackJobID(value); return *this;}
    inline RecoveryInstanceFailback& WithFailbackJobID(Aws::String&& value) { SetFailbackJobID(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithFailbackJobID(const char* value) { SetFailbackJobID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline const FailbackLaunchType& GetFailbackLaunchType() const{ return m_failbackLaunchType; }
    inline bool FailbackLaunchTypeHasBeenSet() const { return m_failbackLaunchTypeHasBeenSet; }
    inline void SetFailbackLaunchType(const FailbackLaunchType& value) { m_failbackLaunchTypeHasBeenSet = true; m_failbackLaunchType = value; }
    inline void SetFailbackLaunchType(FailbackLaunchType&& value) { m_failbackLaunchTypeHasBeenSet = true; m_failbackLaunchType = std::move(value); }
    inline RecoveryInstanceFailback& WithFailbackLaunchType(const FailbackLaunchType& value) { SetFailbackLaunchType(value); return *this;}
    inline RecoveryInstanceFailback& WithFailbackLaunchType(FailbackLaunchType&& value) { SetFailbackLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline bool GetFailbackToOriginalServer() const{ return m_failbackToOriginalServer; }
    inline bool FailbackToOriginalServerHasBeenSet() const { return m_failbackToOriginalServerHasBeenSet; }
    inline void SetFailbackToOriginalServer(bool value) { m_failbackToOriginalServerHasBeenSet = true; m_failbackToOriginalServer = value; }
    inline RecoveryInstanceFailback& WithFailbackToOriginalServer(bool value) { SetFailbackToOriginalServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const{ return m_firstByteDateTime; }
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }
    inline void SetFirstByteDateTime(const Aws::String& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = value; }
    inline void SetFirstByteDateTime(Aws::String&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::move(value); }
    inline void SetFirstByteDateTime(const char* value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime.assign(value); }
    inline RecoveryInstanceFailback& WithFirstByteDateTime(const Aws::String& value) { SetFirstByteDateTime(value); return *this;}
    inline RecoveryInstanceFailback& WithFirstByteDateTime(Aws::String&& value) { SetFirstByteDateTime(std::move(value)); return *this;}
    inline RecoveryInstanceFailback& WithFirstByteDateTime(const char* value) { SetFirstByteDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline const FailbackState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const FailbackState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(FailbackState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RecoveryInstanceFailback& WithState(const FailbackState& value) { SetState(value); return *this;}
    inline RecoveryInstanceFailback& WithState(FailbackState&& value) { SetState(std::move(value)); return *this;}
    ///@}
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
