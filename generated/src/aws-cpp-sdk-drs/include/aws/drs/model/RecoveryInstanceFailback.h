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
    AWS_DRS_API RecoveryInstanceFailback() = default;
    AWS_DRS_API RecoveryInstanceFailback(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceFailback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the agent on the Recovery Instance was last seen by the
     * service.</p>
     */
    inline const Aws::String& GetAgentLastSeenByServiceDateTime() const { return m_agentLastSeenByServiceDateTime; }
    inline bool AgentLastSeenByServiceDateTimeHasBeenSet() const { return m_agentLastSeenByServiceDateTimeHasBeenSet; }
    template<typename AgentLastSeenByServiceDateTimeT = Aws::String>
    void SetAgentLastSeenByServiceDateTime(AgentLastSeenByServiceDateTimeT&& value) { m_agentLastSeenByServiceDateTimeHasBeenSet = true; m_agentLastSeenByServiceDateTime = std::forward<AgentLastSeenByServiceDateTimeT>(value); }
    template<typename AgentLastSeenByServiceDateTimeT = Aws::String>
    RecoveryInstanceFailback& WithAgentLastSeenByServiceDateTime(AgentLastSeenByServiceDateTimeT&& value) { SetAgentLastSeenByServiceDateTime(std::forward<AgentLastSeenByServiceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that the Recovery Instance has been replicating for.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const { return m_elapsedReplicationDuration; }
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }
    template<typename ElapsedReplicationDurationT = Aws::String>
    void SetElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::forward<ElapsedReplicationDurationT>(value); }
    template<typename ElapsedReplicationDurationT = Aws::String>
    RecoveryInstanceFailback& WithElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { SetElapsedReplicationDuration(std::forward<ElapsedReplicationDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the failback client that this Recovery Instance is associated
     * with.</p>
     */
    inline const Aws::String& GetFailbackClientID() const { return m_failbackClientID; }
    inline bool FailbackClientIDHasBeenSet() const { return m_failbackClientIDHasBeenSet; }
    template<typename FailbackClientIDT = Aws::String>
    void SetFailbackClientID(FailbackClientIDT&& value) { m_failbackClientIDHasBeenSet = true; m_failbackClientID = std::forward<FailbackClientIDT>(value); }
    template<typename FailbackClientIDT = Aws::String>
    RecoveryInstanceFailback& WithFailbackClientID(FailbackClientIDT&& value) { SetFailbackClientID(std::forward<FailbackClientIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the failback client was last seen by the service.</p>
     */
    inline const Aws::String& GetFailbackClientLastSeenByServiceDateTime() const { return m_failbackClientLastSeenByServiceDateTime; }
    inline bool FailbackClientLastSeenByServiceDateTimeHasBeenSet() const { return m_failbackClientLastSeenByServiceDateTimeHasBeenSet; }
    template<typename FailbackClientLastSeenByServiceDateTimeT = Aws::String>
    void SetFailbackClientLastSeenByServiceDateTime(FailbackClientLastSeenByServiceDateTimeT&& value) { m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true; m_failbackClientLastSeenByServiceDateTime = std::forward<FailbackClientLastSeenByServiceDateTimeT>(value); }
    template<typename FailbackClientLastSeenByServiceDateTimeT = Aws::String>
    RecoveryInstanceFailback& WithFailbackClientLastSeenByServiceDateTime(FailbackClientLastSeenByServiceDateTimeT&& value) { SetFailbackClientLastSeenByServiceDateTime(std::forward<FailbackClientLastSeenByServiceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the failback initiation started.</p>
     */
    inline const Aws::String& GetFailbackInitiationTime() const { return m_failbackInitiationTime; }
    inline bool FailbackInitiationTimeHasBeenSet() const { return m_failbackInitiationTimeHasBeenSet; }
    template<typename FailbackInitiationTimeT = Aws::String>
    void SetFailbackInitiationTime(FailbackInitiationTimeT&& value) { m_failbackInitiationTimeHasBeenSet = true; m_failbackInitiationTime = std::forward<FailbackInitiationTimeT>(value); }
    template<typename FailbackInitiationTimeT = Aws::String>
    RecoveryInstanceFailback& WithFailbackInitiationTime(FailbackInitiationTimeT&& value) { SetFailbackInitiationTime(std::forward<FailbackInitiationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Job ID of the last failback log for this Recovery Instance.</p>
     */
    inline const Aws::String& GetFailbackJobID() const { return m_failbackJobID; }
    inline bool FailbackJobIDHasBeenSet() const { return m_failbackJobIDHasBeenSet; }
    template<typename FailbackJobIDT = Aws::String>
    void SetFailbackJobID(FailbackJobIDT&& value) { m_failbackJobIDHasBeenSet = true; m_failbackJobID = std::forward<FailbackJobIDT>(value); }
    template<typename FailbackJobIDT = Aws::String>
    RecoveryInstanceFailback& WithFailbackJobID(FailbackJobIDT&& value) { SetFailbackJobID(std::forward<FailbackJobIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type (Recovery / Drill) of the last launch for the failback
     * replication of this recovery instance.</p>
     */
    inline FailbackLaunchType GetFailbackLaunchType() const { return m_failbackLaunchType; }
    inline bool FailbackLaunchTypeHasBeenSet() const { return m_failbackLaunchTypeHasBeenSet; }
    inline void SetFailbackLaunchType(FailbackLaunchType value) { m_failbackLaunchTypeHasBeenSet = true; m_failbackLaunchType = value; }
    inline RecoveryInstanceFailback& WithFailbackLaunchType(FailbackLaunchType value) { SetFailbackLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether we are failing back to the original Source Server for this Recovery
     * Instance.</p>
     */
    inline bool GetFailbackToOriginalServer() const { return m_failbackToOriginalServer; }
    inline bool FailbackToOriginalServerHasBeenSet() const { return m_failbackToOriginalServerHasBeenSet; }
    inline void SetFailbackToOriginalServer(bool value) { m_failbackToOriginalServerHasBeenSet = true; m_failbackToOriginalServer = value; }
    inline RecoveryInstanceFailback& WithFailbackToOriginalServer(bool value) { SetFailbackToOriginalServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the first byte that was replicated from the Recovery
     * Instance.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const { return m_firstByteDateTime; }
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }
    template<typename FirstByteDateTimeT = Aws::String>
    void SetFirstByteDateTime(FirstByteDateTimeT&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::forward<FirstByteDateTimeT>(value); }
    template<typename FirstByteDateTimeT = Aws::String>
    RecoveryInstanceFailback& WithFirstByteDateTime(FirstByteDateTimeT&& value) { SetFirstByteDateTime(std::forward<FirstByteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the failback process that this Recovery Instance is in.</p>
     */
    inline FailbackState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(FailbackState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RecoveryInstanceFailback& WithState(FailbackState value) { SetState(value); return *this;}
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

    FailbackLaunchType m_failbackLaunchType{FailbackLaunchType::NOT_SET};
    bool m_failbackLaunchTypeHasBeenSet = false;

    bool m_failbackToOriginalServer{false};
    bool m_failbackToOriginalServerHasBeenSet = false;

    Aws::String m_firstByteDateTime;
    bool m_firstByteDateTimeHasBeenSet = false;

    FailbackState m_state{FailbackState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
